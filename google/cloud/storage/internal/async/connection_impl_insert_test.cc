// Copyright 2024 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/storage/internal/async/connection_impl.h"
#include "google/cloud/storage/internal/async/default_options.h"
#include "google/cloud/storage/testing/canonical_errors.h"
#include "google/cloud/storage/testing/mock_storage_stub.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/background_threads_impl.h"
#include "google/cloud/testing_util/async_sequencer.h"
#include "google/cloud/testing_util/mock_completion_queue_impl.h"
#include "google/cloud/testing_util/status_matchers.h"
#include "google/cloud/testing_util/validate_metadata.h"
#include <google/protobuf/text_format.h>
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

using ::google::cloud::storage::testing::MockAsyncInsertStream;
using ::google::cloud::storage::testing::MockStorageStub;
using ::google::cloud::storage::testing::canonical_errors::PermanentError;
using ::google::cloud::storage::testing::canonical_errors::TransientError;
using ::google::cloud::testing_util::AsyncSequencer;
using ::google::cloud::testing_util::MockCompletionQueueImpl;
using ::google::cloud::testing_util::StatusIs;
using ::google::cloud::testing_util::ValidateMetadataFixture;
using ::testing::_;
using ::testing::HasSubstr;
using ::testing::Pair;
using ::testing::UnorderedElementsAre;

using AsyncWriteObjectStream =
    ::google::cloud::internal::AsyncStreamingWriteRpc<
        google::storage::v2::WriteObjectRequest,
        google::storage::v2::WriteObjectResponse>;

class AsyncConnectionImplTest : public ::testing::Test {
 protected:
  std::multimap<std::string, std::string> GetMetadata(
      grpc::ClientContext& context) {
    return validate_metadata_fixture_.GetMetadata(context);
  }

 private:
  ValidateMetadataFixture validate_metadata_fixture_;
};

auto constexpr kAuthority = "storage.googleapis.com";

auto TestOptions(Options options = {}) {
  using ms = std::chrono::milliseconds;
  options = internal::MergeOptions(
      std::move(options),
      Options{}
          .set<GrpcNumChannelsOption>(1)
          .set<storage::RetryPolicyOption>(
              storage::LimitedErrorCountRetryPolicy(2).clone())
          .set<storage::BackoffPolicyOption>(
              storage::ExponentialBackoffPolicy(ms(1), ms(2), 2.0).clone()));
  return DefaultOptionsAsync(std::move(options));
}

std::shared_ptr<storage_experimental::AsyncConnection> MakeTestConnection(
    CompletionQueue cq, std::shared_ptr<storage::testing::MockStorageStub> mock,
    Options options = {}) {
  return MakeAsyncConnection(std::move(cq), std::move(mock),
                             TestOptions(std::move(options)));
}

std::unique_ptr<AsyncWriteObjectStream> MakeErrorInsertStream(
    AsyncSequencer<bool>& sequencer, Status const& status) {
  auto stream = std::make_unique<MockAsyncInsertStream>();
  EXPECT_CALL(*stream, Start).WillOnce([&] {
    return sequencer.PushBack("Start");
  });
  EXPECT_CALL(*stream, Finish).WillOnce([&, status] {
    return sequencer.PushBack("Finish").then([status](auto) {
      return StatusOr<google::storage::v2::WriteObjectResponse>(status);
    });
  });
  return std::unique_ptr<AsyncWriteObjectStream>(std::move(stream));
}

TEST_F(AsyncConnectionImplTest, AsyncInsertObject) {
  AsyncSequencer<bool> sequencer;
  auto mock = std::make_shared<MockStorageStub>();
  EXPECT_CALL(*mock, AsyncWriteObject)
      .WillOnce([&] {
        // Force at least one retry before verifying it works with successful
        // requests.
        return MakeErrorInsertStream(sequencer, TransientError());
      })
      .WillOnce([&](CompletionQueue const&,
                    // NOLINTNEXTLINE(performance-unnecessary-value-param)
                    std::shared_ptr<grpc::ClientContext> context,
                    // NOLINTNEXTLINE(performance-unnecessary-value-param)
                    internal::ImmutableOptions options) {
        EXPECT_EQ(options->get<AuthorityOption>(), kAuthority);
        auto metadata = GetMetadata(*context);
        EXPECT_THAT(metadata,
                    UnorderedElementsAre(
                        Pair("x-goog-quota-user", "test-quota-user"),
                        Pair("x-goog-fieldmask", "field1,field2"),
                        Pair("x-goog-request-params",
                             "bucket=projects%2F_%2Fbuckets%2Ftest-bucket"),
                        Pair("x-goog-gcs-idempotency-token", _)));
        auto stream = std::make_unique<MockAsyncInsertStream>();
        EXPECT_CALL(*stream, Start).WillOnce([&] {
          return sequencer.PushBack("Start");
        });
        EXPECT_CALL(*stream, Write).WillOnce([&](auto const& request, auto) {
          EXPECT_TRUE(request.has_write_object_spec());
          auto const& resource = request.write_object_spec().resource();
          EXPECT_THAT(resource.bucket(), "projects/_/buckets/test-bucket");
          EXPECT_THAT(resource.name(), "test-object");
          return sequencer.PushBack("Write");
        });
        EXPECT_CALL(*stream, Finish).WillOnce([&] {
          return sequencer.PushBack("Finish").then([](auto) {
            google::storage::v2::WriteObjectResponse response;
            response.mutable_resource()->set_bucket(
                "projects/_/buckets/test-bucket");
            response.mutable_resource()->set_name("test-object");
            response.mutable_resource()->set_size(123456);
            return make_status_or(response);
          });
        });
        EXPECT_CALL(*stream, GetRequestMetadata);
        return std::unique_ptr<AsyncWriteObjectStream>(std::move(stream));
      });

  auto mock_cq = std::make_shared<MockCompletionQueueImpl>();
  EXPECT_CALL(*mock_cq, MakeRelativeTimer).WillRepeatedly([&sequencer](auto d) {
    auto deadline =
        std::chrono::system_clock::now() +
        std::chrono::duration_cast<std::chrono::system_clock::duration>(d);
    return sequencer.PushBack("MakeRelativeTimer").then([deadline](auto f) {
      if (f.get()) return make_status_or(deadline);
      return StatusOr<std::chrono::system_clock::time_point>(
          Status(StatusCode::kCancelled, "cancelled"));
    });
  });

  auto connection =
      MakeTestConnection(CompletionQueue(mock_cq), mock,
                         // Disable transfer timeouts in this test.
                         Options{}.set<storage::TransferStallTimeoutOption>(
                             std::chrono::seconds(0)));
  auto pending = connection->InsertObject(
      {storage_experimental::InsertObjectRequest("test-bucket", "test-object")
           .set_multiple_options(storage::Fields("field1,field2"),
                                 storage::QuotaUser("test-quota-user")),
       storage_experimental::WritePayload(),
       /*.options=*/connection->options()});

  // Simulate a transient failure.
  auto next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "Start");
  next.first.set_value(false);

  next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "Finish");
  next.first.set_value(false);

  // The retry loop should create a timer.
  next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "MakeRelativeTimer");
  next.first.set_value(true);

  // Simulate a successful request.
  next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "Start");
  next.first.set_value(true);

  next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "Write");
  next.first.set_value(true);

  next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "Finish");
  next.first.set_value(true);

  auto response = pending.get();
  ASSERT_STATUS_OK(response);
  EXPECT_EQ(response->bucket(), "test-bucket");
  EXPECT_EQ(response->name(), "test-object");
  EXPECT_EQ(response->size(), 123456);
  EXPECT_THAT(response->self_link(), HasSubstr("test-object"));
}

TEST_F(AsyncConnectionImplTest, AsyncInsertObjectWithTimeout) {
  AsyncSequencer<bool> sequencer;
  auto mock = std::make_shared<MockStorageStub>();
  EXPECT_CALL(*mock, AsyncWriteObject).WillOnce([&] {
    auto stream = std::make_unique<MockAsyncInsertStream>();
    EXPECT_CALL(*stream, Start).WillOnce([&] {
      return sequencer.PushBack("Start");
    });
    EXPECT_CALL(*stream, Write).WillOnce([&](auto const& request, auto) {
      EXPECT_TRUE(request.has_write_object_spec());
      auto const& resource = request.write_object_spec().resource();
      EXPECT_THAT(resource.bucket(), "projects/_/buckets/test-bucket");
      EXPECT_THAT(resource.name(), "test-object");
      return sequencer.PushBack("Write");
    });
    EXPECT_CALL(*stream, Finish).WillOnce([&] {
      return sequencer.PushBack("Finish").then([](auto) {
        google::storage::v2::WriteObjectResponse response;
        response.mutable_resource()->set_bucket(
            "projects/_/buckets/test-bucket");
        response.mutable_resource()->set_name("test-object");
        response.mutable_resource()->set_size(123456);
        return make_status_or(response);
      });
    });
    EXPECT_CALL(*stream, GetRequestMetadata);
    return std::unique_ptr<AsyncWriteObjectStream>(std::move(stream));
  });

  auto mock_cq = std::make_shared<MockCompletionQueueImpl>();
  // We will configure the connection to use 1 second timeouts.
  EXPECT_CALL(*mock_cq, MakeRelativeTimer(
                            std::chrono::nanoseconds(std::chrono::seconds(1))))
      .WillRepeatedly([&sequencer](auto d) {
        auto deadline =
            std::chrono::system_clock::now() +
            std::chrono::duration_cast<std::chrono::system_clock::duration>(d);
        return sequencer.PushBack("MakeRelativeTimer").then([deadline](auto f) {
          if (f.get()) return make_status_or(deadline);
          return StatusOr<std::chrono::system_clock::time_point>(
              Status(StatusCode::kCancelled, "cancelled"));
        });
      });

  auto connection = MakeTestConnection(
      CompletionQueue(mock_cq), mock,
      // Disable transfer timeouts in this test.
      Options{}
          .set<storage::TransferStallTimeoutOption>(std::chrono::seconds(1))
          .set<storage::TransferStallMinimumRateOption>(2 * 1024 * 1024L));
  auto pending = connection->InsertObject(
      {storage_experimental::InsertObjectRequest("test-bucket", "test-object")
           .set_multiple_options(storage::Fields("field1,field2"),
                                 storage::QuotaUser("test-quota-user")),
       storage_experimental::WritePayload(),
       /*.options=*/connection->options()});

  // Because the timeout parameters are configured, the first thing to happen is
  // that a timer is set.
  auto timer = sequencer.PopFrontWithName();
  EXPECT_EQ(timer.second, "MakeRelativeTimer");
  // Then the `Start()` operation is scheduled.  Either that complete first (and
  // then cancels the timer) or the timer completes first (and cancels the
  // streaming RPC).
  auto next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "Start");
  timer.first.set_value(false);  // simulate a cancelled timer.
  next.first.set_value(true);

  timer = sequencer.PopFrontWithName();
  EXPECT_EQ(timer.second, "MakeRelativeTimer");
  next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "Write");
  timer.first.set_value(false);  // simulate a cancelled timer.
  next.first.set_value(true);

  next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "Finish");
  next.first.set_value(true);

  auto response = pending.get();
  ASSERT_STATUS_OK(response);
  EXPECT_EQ(response->bucket(), "test-bucket");
  EXPECT_EQ(response->name(), "test-object");
  EXPECT_EQ(response->size(), 123456);
  EXPECT_THAT(response->self_link(), HasSubstr("test-object"));
}

TEST_F(AsyncConnectionImplTest, AsyncInsertObjectPermanentError) {
  AsyncSequencer<bool> sequencer;
  auto mock = std::make_shared<MockStorageStub>();
  EXPECT_CALL(*mock, AsyncWriteObject).WillOnce([&] {
    return MakeErrorInsertStream(sequencer, PermanentError());
  });

  internal::AutomaticallyCreatedBackgroundThreads pool(1);
  auto connection = MakeTestConnection(pool.cq(), mock);
  auto pending = connection->InsertObject(
      {storage_experimental::InsertObjectRequest("test-bucket", "test-object")
           .set_multiple_options(storage::Fields("field1,field2"),
                                 storage::QuotaUser("test-quota-user")),
       storage_experimental::WritePayload(),
       /*.options=*/connection->options()});

  auto next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "Start");
  next.first.set_value(false);

  next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "Finish");
  next.first.set_value(false);

  auto response = pending.get();
  ASSERT_THAT(response, StatusIs(PermanentError().code()));
}

TEST_F(AsyncConnectionImplTest, AsyncInsertObjectTooManyTransients) {
  AsyncSequencer<bool> sequencer;
  auto mock = std::make_shared<MockStorageStub>();
  EXPECT_CALL(*mock, AsyncWriteObject).Times(3).WillRepeatedly([&] {
    return MakeErrorInsertStream(sequencer, TransientError());
  });

  internal::AutomaticallyCreatedBackgroundThreads pool(1);
  auto connection = MakeTestConnection(pool.cq(), mock);
  auto pending = connection->InsertObject(
      {storage_experimental::InsertObjectRequest("test-bucket", "test-object")
           .set_multiple_options(storage::Fields("field1,field2"),
                                 storage::QuotaUser("test-quota-user")),
       storage_experimental::WritePayload(),
       /*.options=*/connection->options()});

  for (int i = 0; i != 3; ++i) {
    auto next = sequencer.PopFrontWithName();
    EXPECT_EQ(next.second, "Start");
    next.first.set_value(false);

    next = sequencer.PopFrontWithName();
    EXPECT_EQ(next.second, "Finish");
    next.first.set_value(false);
  }

  auto response = pending.get();
  ASSERT_THAT(response, StatusIs(TransientError().code()));
}

}  // namespace
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google
