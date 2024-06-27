// Copyright 2022 Google LLC
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
// source: google/cloud/automl/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_MOCKS_MOCK_AUTO_ML_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_MOCKS_MOCK_AUTO_ML_CONNECTION_H

#include "google/cloud/automl/v1/auto_ml_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace automl_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `AutoMlConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `AutoMlClient`. To do so,
 * construct an object of type `AutoMlClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockAutoMlConnection : public automl_v1::AutoMlConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateDataset)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateDataset(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::Dataset>>,
              CreateDataset,
              (google::cloud::automl::v1::CreateDatasetRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateDataset,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::automl::v1::CreateDatasetRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::Dataset>>,
              CreateDataset,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::automl::v1::Dataset>, GetDataset,
              (google::cloud::automl::v1::GetDatasetRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::automl::v1::Dataset>), ListDatasets,
              (google::cloud::automl::v1::ListDatasetsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::automl::v1::Dataset>, UpdateDataset,
              (google::cloud::automl::v1::UpdateDatasetRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteDataset)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteDataset(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::OperationMetadata>>,
              DeleteDataset,
              (google::cloud::automl::v1::DeleteDatasetRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteDataset,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::automl::v1::DeleteDatasetRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::OperationMetadata>>,
              DeleteDataset,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ImportData)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ImportData(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::OperationMetadata>>,
              ImportData,
              (google::cloud::automl::v1::ImportDataRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, ImportData,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::automl::v1::ImportDataRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::OperationMetadata>>,
              ImportData,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ExportData)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ExportData(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::OperationMetadata>>,
              ExportData,
              (google::cloud::automl::v1::ExportDataRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, ExportData,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::automl::v1::ExportDataRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::OperationMetadata>>,
              ExportData,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::automl::v1::AnnotationSpec>, GetAnnotationSpec,
      (google::cloud::automl::v1::GetAnnotationSpecRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateModel)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateModel(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::Model>>, CreateModel,
              (google::cloud::automl::v1::CreateModelRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateModel,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::automl::v1::CreateModelRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::Model>>, CreateModel,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::automl::v1::Model>, GetModel,
              (google::cloud::automl::v1::GetModelRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::automl::v1::Model>), ListModels,
              (google::cloud::automl::v1::ListModelsRequest request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteModel)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteModel(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::OperationMetadata>>,
              DeleteModel,
              (google::cloud::automl::v1::DeleteModelRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteModel,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::automl::v1::DeleteModelRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::OperationMetadata>>,
              DeleteModel,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::automl::v1::Model>, UpdateModel,
              (google::cloud::automl::v1::UpdateModelRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeployModel)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeployModel(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::OperationMetadata>>,
              DeployModel,
              (google::cloud::automl::v1::DeployModelRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeployModel,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::automl::v1::DeployModelRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::OperationMetadata>>,
              DeployModel,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UndeployModel)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UndeployModel(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::OperationMetadata>>,
              UndeployModel,
              (google::cloud::automl::v1::UndeployModelRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UndeployModel,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::automl::v1::UndeployModelRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::OperationMetadata>>,
              UndeployModel,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ExportModel)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ExportModel(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::OperationMetadata>>,
              ExportModel,
              (google::cloud::automl::v1::ExportModelRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, ExportModel,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::automl::v1::ExportModelRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::automl::v1::OperationMetadata>>,
              ExportModel,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::automl::v1::ModelEvaluation>, GetModelEvaluation,
      (google::cloud::automl::v1::GetModelEvaluationRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::automl::v1::ModelEvaluation>),
              ListModelEvaluations,
              (google::cloud::automl::v1::ListModelEvaluationsRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_MOCKS_MOCK_AUTO_ML_CONNECTION_H
