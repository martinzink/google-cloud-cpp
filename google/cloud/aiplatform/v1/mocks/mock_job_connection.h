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
// source: google/cloud/aiplatform/v1/job_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_JOB_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_JOB_CONNECTION_H

#include "google/cloud/aiplatform/v1/job_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace aiplatform_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `JobServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `JobServiceClient`. To do so,
 * construct an object of type `JobServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockJobServiceConnection : public aiplatform_v1::JobServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::CustomJob>, CreateCustomJob,
      (google::cloud::aiplatform::v1::CreateCustomJobRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::CustomJob>, GetCustomJob,
      (google::cloud::aiplatform::v1::GetCustomJobRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::aiplatform::v1::CustomJob>),
              ListCustomJobs,
              (google::cloud::aiplatform::v1::ListCustomJobsRequest request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteCustomJob)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteCustomJob(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteCustomJob,
      (google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteCustomJob,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteCustomJob,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      Status, CancelCustomJob,
      (google::cloud::aiplatform::v1::CancelCustomJobRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>,
      CreateDataLabelingJob,
      (google::cloud::aiplatform::v1::CreateDataLabelingJobRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>,
      GetDataLabelingJob,
      (google::cloud::aiplatform::v1::GetDataLabelingJobRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::aiplatform::v1::DataLabelingJob>),
      ListDataLabelingJobs,
      (google::cloud::aiplatform::v1::ListDataLabelingJobsRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteDataLabelingJob)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteDataLabelingJob(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteDataLabelingJob,
      (google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteDataLabelingJob,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteDataLabelingJob,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      Status, CancelDataLabelingJob,
      (google::cloud::aiplatform::v1::CancelDataLabelingJobRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>,
              CreateHyperparameterTuningJob,
              (google::cloud::aiplatform::v1::
                   CreateHyperparameterTuningJobRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>,
      GetHyperparameterTuningJob,
      (google::cloud::aiplatform::v1::GetHyperparameterTuningJobRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::aiplatform::v1::HyperparameterTuningJob>),
      ListHyperparameterTuningJobs,
      (google::cloud::aiplatform::v1::ListHyperparameterTuningJobsRequest
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteHyperparameterTuningJob)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteHyperparameterTuningJob(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteHyperparameterTuningJob,
      (google::cloud::aiplatform::v1::
           DeleteHyperparameterTuningJobRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              DeleteHyperparameterTuningJob,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::aiplatform::v1::
                   DeleteHyperparameterTuningJobRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteHyperparameterTuningJob,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(Status, CancelHyperparameterTuningJob,
              (google::cloud::aiplatform::v1::
                   CancelHyperparameterTuningJobRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::NasJob>, CreateNasJob,
      (google::cloud::aiplatform::v1::CreateNasJobRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::NasJob>, GetNasJob,
              (google::cloud::aiplatform::v1::GetNasJobRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::aiplatform::v1::NasJob>), ListNasJobs,
              (google::cloud::aiplatform::v1::ListNasJobsRequest request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteNasJob)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteNasJob(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteNasJob,
      (google::cloud::aiplatform::v1::DeleteNasJobRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteNasJob,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::DeleteNasJobRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteNasJob,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      Status, CancelNasJob,
      (google::cloud::aiplatform::v1::CancelNasJobRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::NasTrialDetail>,
      GetNasTrialDetail,
      (google::cloud::aiplatform::v1::GetNasTrialDetailRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::aiplatform::v1::NasTrialDetail>),
      ListNasTrialDetails,
      (google::cloud::aiplatform::v1::ListNasTrialDetailsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>,
      CreateBatchPredictionJob,
      (google::cloud::aiplatform::v1::CreateBatchPredictionJobRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>,
      GetBatchPredictionJob,
      (google::cloud::aiplatform::v1::GetBatchPredictionJobRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::aiplatform::v1::BatchPredictionJob>),
      ListBatchPredictionJobs,
      (google::cloud::aiplatform::v1::ListBatchPredictionJobsRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteBatchPredictionJob)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteBatchPredictionJob(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteBatchPredictionJob,
      (google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteBatchPredictionJob,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteBatchPredictionJob,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      Status, CancelBatchPredictionJob,
      (google::cloud::aiplatform::v1::CancelBatchPredictionJobRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>,
      CreateModelDeploymentMonitoringJob,
      (google::cloud::aiplatform::v1::
           CreateModelDeploymentMonitoringJobRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<
          google::cloud::aiplatform::v1::ModelMonitoringStatsAnomalies>),
      SearchModelDeploymentMonitoringStatsAnomalies,
      (google::cloud::aiplatform::v1::
           SearchModelDeploymentMonitoringStatsAnomaliesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>,
      GetModelDeploymentMonitoringJob,
      (google::cloud::aiplatform::v1::
           GetModelDeploymentMonitoringJobRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<
          google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>),
      ListModelDeploymentMonitoringJobs,
      (google::cloud::aiplatform::v1::ListModelDeploymentMonitoringJobsRequest
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateModelDeploymentMonitoringJob)` is now ambiguous.
  /// Use `EXPECT_CALL(*mock, UpdateModelDeploymentMonitoringJob(::testing::_))`
  /// instead.
  MOCK_METHOD(future<StatusOr<
                  google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>>,
              UpdateModelDeploymentMonitoringJob,
              (google::cloud::aiplatform::v1::
                   UpdateModelDeploymentMonitoringJobRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              UpdateModelDeploymentMonitoringJob,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::aiplatform::v1::
                   UpdateModelDeploymentMonitoringJobRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<
                  google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>>,
              UpdateModelDeploymentMonitoringJob,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteModelDeploymentMonitoringJob)` is now ambiguous.
  /// Use `EXPECT_CALL(*mock, DeleteModelDeploymentMonitoringJob(::testing::_))`
  /// instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteModelDeploymentMonitoringJob,
      (google::cloud::aiplatform::v1::
           DeleteModelDeploymentMonitoringJobRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              DeleteModelDeploymentMonitoringJob,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::aiplatform::v1::
                   DeleteModelDeploymentMonitoringJobRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteModelDeploymentMonitoringJob,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(Status, PauseModelDeploymentMonitoringJob,
              (google::cloud::aiplatform::v1::
                   PauseModelDeploymentMonitoringJobRequest const& request),
              (override));

  MOCK_METHOD(Status, ResumeModelDeploymentMonitoringJob,
              (google::cloud::aiplatform::v1::
                   ResumeModelDeploymentMonitoringJobRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_JOB_CONNECTION_H
