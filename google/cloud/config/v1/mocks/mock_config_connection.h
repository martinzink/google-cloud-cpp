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
// source: google/cloud/config/v1/config.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONFIG_V1_MOCKS_MOCK_CONFIG_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONFIG_V1_MOCKS_MOCK_CONFIG_CONNECTION_H

#include "google/cloud/config/v1/config_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace config_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ConfigConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ConfigClient`. To do so,
 * construct an object of type `ConfigClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockConfigConnection : public config_v1::ConfigConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::config::v1::Deployment>),
              ListDeployments,
              (google::cloud::config::v1::ListDeploymentsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::config::v1::Deployment>, GetDeployment,
              (google::cloud::config::v1::GetDeploymentRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateDeployment)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateDeployment(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::config::v1::Deployment>>, CreateDeployment,
      (google::cloud::config::v1::CreateDeploymentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateDeployment,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::config::v1::CreateDeploymentRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::config::v1::Deployment>>,
              CreateDeployment,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateDeployment)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateDeployment(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::config::v1::Deployment>>, UpdateDeployment,
      (google::cloud::config::v1::UpdateDeploymentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateDeployment,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::config::v1::UpdateDeploymentRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::config::v1::Deployment>>,
              UpdateDeployment,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteDeployment)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteDeployment(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::config::v1::Deployment>>, DeleteDeployment,
      (google::cloud::config::v1::DeleteDeploymentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteDeployment,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::config::v1::DeleteDeploymentRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::config::v1::Deployment>>,
              DeleteDeployment,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::config::v1::Revision>), ListRevisions,
              (google::cloud::config::v1::ListRevisionsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::config::v1::Revision>, GetRevision,
              (google::cloud::config::v1::GetRevisionRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::config::v1::Resource>, GetResource,
              (google::cloud::config::v1::GetResourceRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::config::v1::Resource>), ListResources,
              (google::cloud::config::v1::ListResourcesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::config::v1::Statefile>, ExportDeploymentStatefile,
      (google::cloud::config::v1::ExportDeploymentStatefileRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::config::v1::Statefile>,
              ExportRevisionStatefile,
              (google::cloud::config::v1::ExportRevisionStatefileRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::config::v1::Statefile>, ImportStatefile,
      (google::cloud::config::v1::ImportStatefileRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteStatefile,
      (google::cloud::config::v1::DeleteStatefileRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, LockDeployment)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, LockDeployment(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::config::v1::Deployment>>,
              LockDeployment,
              (google::cloud::config::v1::LockDeploymentRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, LockDeployment,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::config::v1::LockDeploymentRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::config::v1::Deployment>>,
              LockDeployment,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UnlockDeployment)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UnlockDeployment(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::config::v1::Deployment>>, UnlockDeployment,
      (google::cloud::config::v1::UnlockDeploymentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UnlockDeployment,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::config::v1::UnlockDeploymentRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::config::v1::Deployment>>,
              UnlockDeployment,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::config::v1::LockInfo>, ExportLockInfo,
              (google::cloud::config::v1::ExportLockInfoRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreatePreview)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreatePreview(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::config::v1::Preview>>,
              CreatePreview,
              (google::cloud::config::v1::CreatePreviewRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreatePreview,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::config::v1::CreatePreviewRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::config::v1::Preview>>,
              CreatePreview,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::config::v1::Preview>, GetPreview,
              (google::cloud::config::v1::GetPreviewRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::config::v1::Preview>), ListPreviews,
              (google::cloud::config::v1::ListPreviewsRequest request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeletePreview)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeletePreview(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::config::v1::Preview>>,
              DeletePreview,
              (google::cloud::config::v1::DeletePreviewRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeletePreview,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::config::v1::DeletePreviewRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::config::v1::Preview>>,
              DeletePreview,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::config::v1::ExportPreviewResultResponse>,
      ExportPreviewResult,
      (google::cloud::config::v1::ExportPreviewResultRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::config::v1::TerraformVersion>),
              ListTerraformVersions,
              (google::cloud::config::v1::ListTerraformVersionsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::config::v1::TerraformVersion>,
      GetTerraformVersion,
      (google::cloud::config::v1::GetTerraformVersionRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace config_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONFIG_V1_MOCKS_MOCK_CONFIG_CONNECTION_H
