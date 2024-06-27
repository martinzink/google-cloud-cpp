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
// source: google/cloud/aiplatform/v1/pipeline_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_PIPELINE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_PIPELINE_CONNECTION_H

#include "google/cloud/aiplatform/v1/pipeline_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace aiplatform_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `PipelineServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `PipelineServiceClient`. To do so,
 * construct an object of type `PipelineServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockPipelineServiceConnection
    : public aiplatform_v1::PipelineServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>,
      CreateTrainingPipeline,
      (google::cloud::aiplatform::v1::CreateTrainingPipelineRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>,
              GetTrainingPipeline,
              (google::cloud::aiplatform::v1::GetTrainingPipelineRequest const&
                   request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::aiplatform::v1::TrainingPipeline>),
      ListTrainingPipelines,
      (google::cloud::aiplatform::v1::ListTrainingPipelinesRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteTrainingPipeline)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteTrainingPipeline(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteTrainingPipeline,
      (google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteTrainingPipeline,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteTrainingPipeline,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      Status, CancelTrainingPipeline,
      (google::cloud::aiplatform::v1::CancelTrainingPipelineRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::PipelineJob>, CreatePipelineJob,
      (google::cloud::aiplatform::v1::CreatePipelineJobRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::PipelineJob>, GetPipelineJob,
      (google::cloud::aiplatform::v1::GetPipelineJobRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::aiplatform::v1::PipelineJob>),
              ListPipelineJobs,
              (google::cloud::aiplatform::v1::ListPipelineJobsRequest request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeletePipelineJob)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeletePipelineJob(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeletePipelineJob,
      (google::cloud::aiplatform::v1::DeletePipelineJobRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeletePipelineJob,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::DeletePipelineJobRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeletePipelineJob,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, BatchDeletePipelineJobs)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, BatchDeletePipelineJobs(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<
          google::cloud::aiplatform::v1::BatchDeletePipelineJobsResponse>>,
      BatchDeletePipelineJobs,
      (google::cloud::aiplatform::v1::BatchDeletePipelineJobsRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, BatchDeletePipelineJobs,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::BatchDeletePipelineJobsRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::aiplatform::v1::BatchDeletePipelineJobsResponse>>,
      BatchDeletePipelineJobs,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      Status, CancelPipelineJob,
      (google::cloud::aiplatform::v1::CancelPipelineJobRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, BatchCancelPipelineJobs)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, BatchCancelPipelineJobs(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<
          google::cloud::aiplatform::v1::BatchCancelPipelineJobsResponse>>,
      BatchCancelPipelineJobs,
      (google::cloud::aiplatform::v1::BatchCancelPipelineJobsRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, BatchCancelPipelineJobs,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::BatchCancelPipelineJobsRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::aiplatform::v1::BatchCancelPipelineJobsResponse>>,
      BatchCancelPipelineJobs,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_PIPELINE_CONNECTION_H
