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
// source: google/cloud/migrationcenter/v1/migrationcenter.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MIGRATIONCENTER_V1_INTERNAL_MIGRATION_CENTER_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MIGRATIONCENTER_V1_INTERNAL_MIGRATION_CENTER_METADATA_DECORATOR_H

#include "google/cloud/migrationcenter/v1/internal/migration_center_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace migrationcenter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MigrationCenterMetadata : public MigrationCenterStub {
 public:
  ~MigrationCenterMetadata() override = default;
  MigrationCenterMetadata(
      std::shared_ptr<MigrationCenterStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::migrationcenter::v1::ListAssetsResponse> ListAssets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::ListAssetsRequest const& request)
      override;

  StatusOr<google::cloud::migrationcenter::v1::Asset> GetAsset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::GetAssetRequest const& request)
      override;

  StatusOr<google::cloud::migrationcenter::v1::Asset> UpdateAsset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::UpdateAssetRequest const& request)
      override;

  StatusOr<google::cloud::migrationcenter::v1::BatchUpdateAssetsResponse>
  BatchUpdateAssets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::BatchUpdateAssetsRequest const&
          request) override;

  Status DeleteAsset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::DeleteAssetRequest const& request)
      override;

  Status BatchDeleteAssets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::BatchDeleteAssetsRequest const&
          request) override;

  StatusOr<google::cloud::migrationcenter::v1::ReportAssetFramesResponse>
  ReportAssetFrames(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::ReportAssetFramesRequest const&
          request) override;

  StatusOr<google::cloud::migrationcenter::v1::AggregateAssetsValuesResponse>
  AggregateAssetsValues(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::AggregateAssetsValuesRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateImportJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::CreateImportJobRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateImportJob(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::CreateImportJobRequest const& request)
      override;

  StatusOr<google::cloud::migrationcenter::v1::ListImportJobsResponse>
  ListImportJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::ListImportJobsRequest const& request)
      override;

  StatusOr<google::cloud::migrationcenter::v1::ImportJob> GetImportJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::GetImportJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteImportJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::DeleteImportJobRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteImportJob(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::DeleteImportJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateImportJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::UpdateImportJobRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateImportJob(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::UpdateImportJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncValidateImportJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::ValidateImportJobRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ValidateImportJob(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::ValidateImportJobRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRunImportJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::RunImportJobRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RunImportJob(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::RunImportJobRequest const& request)
      override;

  StatusOr<google::cloud::migrationcenter::v1::ImportDataFile>
  GetImportDataFile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::GetImportDataFileRequest const&
          request) override;

  StatusOr<google::cloud::migrationcenter::v1::ListImportDataFilesResponse>
  ListImportDataFiles(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::ListImportDataFilesRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateImportDataFile(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::CreateImportDataFileRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateImportDataFile(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::CreateImportDataFileRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteImportDataFile(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::DeleteImportDataFileRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteImportDataFile(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::DeleteImportDataFileRequest const&
          request) override;

  StatusOr<google::cloud::migrationcenter::v1::ListGroupsResponse> ListGroups(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::ListGroupsRequest const& request)
      override;

  StatusOr<google::cloud::migrationcenter::v1::Group> GetGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::GetGroupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::CreateGroupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateGroup(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::CreateGroupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::UpdateGroupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateGroup(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::UpdateGroupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::DeleteGroupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteGroup(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::DeleteGroupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncAddAssetsToGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::AddAssetsToGroupRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> AddAssetsToGroup(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::AddAssetsToGroupRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRemoveAssetsFromGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::RemoveAssetsFromGroupRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> RemoveAssetsFromGroup(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::RemoveAssetsFromGroupRequest const&
          request) override;

  StatusOr<google::cloud::migrationcenter::v1::ListErrorFramesResponse>
  ListErrorFrames(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::ListErrorFramesRequest const& request)
      override;

  StatusOr<google::cloud::migrationcenter::v1::ErrorFrame> GetErrorFrame(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::GetErrorFrameRequest const& request)
      override;

  StatusOr<google::cloud::migrationcenter::v1::ListSourcesResponse> ListSources(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::ListSourcesRequest const& request)
      override;

  StatusOr<google::cloud::migrationcenter::v1::Source> GetSource(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::GetSourceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::CreateSourceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateSource(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::CreateSourceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateSource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::UpdateSourceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateSource(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::UpdateSourceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::DeleteSourceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteSource(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::DeleteSourceRequest const& request)
      override;

  StatusOr<google::cloud::migrationcenter::v1::ListPreferenceSetsResponse>
  ListPreferenceSets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::ListPreferenceSetsRequest const&
          request) override;

  StatusOr<google::cloud::migrationcenter::v1::PreferenceSet> GetPreferenceSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::GetPreferenceSetRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreatePreferenceSet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::CreatePreferenceSetRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreatePreferenceSet(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::CreatePreferenceSetRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdatePreferenceSet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::UpdatePreferenceSetRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdatePreferenceSet(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::UpdatePreferenceSetRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeletePreferenceSet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::DeletePreferenceSetRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeletePreferenceSet(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::DeletePreferenceSetRequest const&
          request) override;

  StatusOr<google::cloud::migrationcenter::v1::Settings> GetSettings(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::GetSettingsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateSettings(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::UpdateSettingsRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateSettings(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::UpdateSettingsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateReportConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::CreateReportConfigRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateReportConfig(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::CreateReportConfigRequest const&
          request) override;

  StatusOr<google::cloud::migrationcenter::v1::ReportConfig> GetReportConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::GetReportConfigRequest const& request)
      override;

  StatusOr<google::cloud::migrationcenter::v1::ListReportConfigsResponse>
  ListReportConfigs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::ListReportConfigsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteReportConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::DeleteReportConfigRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteReportConfig(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::DeleteReportConfigRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateReport(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::CreateReportRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateReport(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::CreateReportRequest const& request)
      override;

  StatusOr<google::cloud::migrationcenter::v1::Report> GetReport(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::GetReportRequest const& request)
      override;

  StatusOr<google::cloud::migrationcenter::v1::ListReportsResponse> ListReports(
      grpc::ClientContext& context, Options const& options,
      google::cloud::migrationcenter::v1::ListReportsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteReport(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::migrationcenter::v1::DeleteReportRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteReport(
      grpc::ClientContext& context, Options options,
      google::cloud::migrationcenter::v1::DeleteReportRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<MigrationCenterStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace migrationcenter_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MIGRATIONCENTER_V1_INTERNAL_MIGRATION_CENTER_METADATA_DECORATOR_H
