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
// source: google/cloud/compute/autoscalers/v1/autoscalers.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_AUTOSCALERS_V1_MOCKS_MOCK_AUTOSCALERS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_AUTOSCALERS_V1_MOCKS_MOCK_AUTOSCALERS_CONNECTION_H

#include "google/cloud/compute/autoscalers/v1/autoscalers_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_autoscalers_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `AutoscalersConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `AutoscalersClient`. To do so,
 * construct an object of type `AutoscalersClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockAutoscalersConnection
    : public compute_autoscalers_v1::AutoscalersConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      (StreamRange<
          std::pair<std::string,
                    google::cloud::cpp::compute::v1::AutoscalersScopedList>>),
      AggregatedListAutoscalers,
      (google::cloud::cpp::compute::autoscalers::v1::
           AggregatedListAutoscalersRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteAutoscaler)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteAutoscaler(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteAutoscaler,
              (google::cloud::cpp::compute::autoscalers::v1::
                   DeleteAutoscalerRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteAutoscaler,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::autoscalers::v1::
                   DeleteAutoscalerRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteAutoscaler,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Autoscaler>, GetAutoscaler,
      (google::cloud::cpp::compute::autoscalers::v1::GetAutoscalerRequest const&
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, InsertAutoscaler)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, InsertAutoscaler(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertAutoscaler,
              (google::cloud::cpp::compute::autoscalers::v1::
                   InsertAutoscalerRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              InsertAutoscaler,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::autoscalers::v1::
                   InsertAutoscalerRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertAutoscaler,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::cpp::compute::v1::Autoscaler>),
      ListAutoscalers,
      (google::cloud::cpp::compute::autoscalers::v1::ListAutoscalersRequest
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, PatchAutoscaler)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, PatchAutoscaler(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchAutoscaler,
              (google::cloud::cpp::compute::autoscalers::v1::
                   PatchAutoscalerRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              PatchAutoscaler,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::autoscalers::v1::
                   PatchAutoscalerRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchAutoscaler,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateAutoscaler)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateAutoscaler(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateAutoscaler,
              (google::cloud::cpp::compute::autoscalers::v1::
                   UpdateAutoscalerRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              UpdateAutoscaler,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::autoscalers::v1::
                   UpdateAutoscalerRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateAutoscaler,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_autoscalers_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_AUTOSCALERS_V1_MOCKS_MOCK_AUTOSCALERS_CONNECTION_H
