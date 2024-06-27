// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/compute/backend_buckets/v1/backend_buckets.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_BUCKETS_V1_MOCKS_MOCK_BACKEND_BUCKETS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_BUCKETS_V1_MOCKS_MOCK_BACKEND_BUCKETS_CONNECTION_H

#include "google/cloud/compute/backend_buckets/v1/backend_buckets_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_backend_buckets_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `BackendBucketsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `BackendBucketsClient`. To do so,
 * construct an object of type `BackendBucketsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockBackendBucketsConnection
    : public compute_backend_buckets_v1::BackendBucketsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, AddSignedUrlKey)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, AddSignedUrlKey(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddSignedUrlKey,
              (google::cloud::cpp::compute::backend_buckets::v1::
                   AddSignedUrlKeyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              AddSignedUrlKey,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::backend_buckets::v1::
                   AddSignedUrlKeyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddSignedUrlKey,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteBackendBucket)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteBackendBucket(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteBackendBucket,
              (google::cloud::cpp::compute::backend_buckets::v1::
                   DeleteBackendBucketRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteBackendBucket,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::backend_buckets::v1::
                   DeleteBackendBucketRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteBackendBucket,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteSignedUrlKey)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteSignedUrlKey(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteSignedUrlKey,
              (google::cloud::cpp::compute::backend_buckets::v1::
                   DeleteSignedUrlKeyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteSignedUrlKey,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::backend_buckets::v1::
                   DeleteSignedUrlKeyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteSignedUrlKey,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::BackendBucket>,
              GetBackendBucket,
              (google::cloud::cpp::compute::backend_buckets::v1::
                   GetBackendBucketRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Policy>, GetIamPolicy,
              (google::cloud::cpp::compute::backend_buckets::v1::
                   GetIamPolicyRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, InsertBackendBucket)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, InsertBackendBucket(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertBackendBucket,
              (google::cloud::cpp::compute::backend_buckets::v1::
                   InsertBackendBucketRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              InsertBackendBucket,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::backend_buckets::v1::
                   InsertBackendBucketRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertBackendBucket,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::BackendBucket>),
              ListBackendBuckets,
              (google::cloud::cpp::compute::backend_buckets::v1::
                   ListBackendBucketsRequest request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, PatchBackendBucket)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, PatchBackendBucket(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchBackendBucket,
              (google::cloud::cpp::compute::backend_buckets::v1::
                   PatchBackendBucketRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              PatchBackendBucket,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::backend_buckets::v1::
                   PatchBackendBucketRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchBackendBucket,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetEdgeSecurityPolicy)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetEdgeSecurityPolicy(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetEdgeSecurityPolicy,
              (google::cloud::cpp::compute::backend_buckets::v1::
                   SetEdgeSecurityPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetEdgeSecurityPolicy,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::backend_buckets::v1::
                   SetEdgeSecurityPolicyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetEdgeSecurityPolicy,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Policy>, SetIamPolicy,
              (google::cloud::cpp::compute::backend_buckets::v1::
                   SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>,
      TestIamPermissions,
      (google::cloud::cpp::compute::backend_buckets::v1::
           TestIamPermissionsRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateBackendBucket)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateBackendBucket(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateBackendBucket,
              (google::cloud::cpp::compute::backend_buckets::v1::
                   UpdateBackendBucketRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              UpdateBackendBucket,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::backend_buckets::v1::
                   UpdateBackendBucketRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateBackendBucket,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_backend_buckets_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_BUCKETS_V1_MOCKS_MOCK_BACKEND_BUCKETS_CONNECTION_H
