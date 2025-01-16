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
// source: google/cloud/dataplex/v1/service.proto

#include "google/cloud/dataplex/v1/dataplex_connection.h"
#include "google/cloud/dataplex/v1/dataplex_options.h"
#include "google/cloud/dataplex/v1/internal/dataplex_connection_impl.h"
#include "google/cloud/dataplex/v1/internal/dataplex_option_defaults.h"
#include "google/cloud/dataplex/v1/internal/dataplex_stub_factory.h"
#include "google/cloud/dataplex/v1/internal/dataplex_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataplex_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataplexServiceConnection::~DataplexServiceConnection() = default;

future<StatusOr<google::cloud::dataplex::v1::Lake>>
DataplexServiceConnection::CreateLake(
    google::cloud::dataplex::v1::CreateLakeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Lake>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DataplexServiceConnection::CreateLake(
    NoAwaitTag, google::cloud::dataplex::v1::CreateLakeRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::Lake>>
DataplexServiceConnection::CreateLake(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Lake>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::Lake>>
DataplexServiceConnection::UpdateLake(
    google::cloud::dataplex::v1::UpdateLakeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Lake>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DataplexServiceConnection::UpdateLake(
    NoAwaitTag, google::cloud::dataplex::v1::UpdateLakeRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::Lake>>
DataplexServiceConnection::UpdateLake(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Lake>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataplexServiceConnection::DeleteLake(
    google::cloud::dataplex::v1::DeleteLakeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DataplexServiceConnection::DeleteLake(
    NoAwaitTag, google::cloud::dataplex::v1::DeleteLakeRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataplexServiceConnection::DeleteLake(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::dataplex::v1::Lake>
DataplexServiceConnection::ListLakes(
    google::cloud::dataplex::v1::
        ListLakesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dataplex::v1::Lake>>();
}

StatusOr<google::cloud::dataplex::v1::Lake> DataplexServiceConnection::GetLake(
    google::cloud::dataplex::v1::GetLakeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dataplex::v1::Action>
DataplexServiceConnection::ListLakeActions(
    google::cloud::dataplex::v1::
        ListLakeActionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dataplex::v1::Action>>();
}

future<StatusOr<google::cloud::dataplex::v1::Zone>>
DataplexServiceConnection::CreateZone(
    google::cloud::dataplex::v1::CreateZoneRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Zone>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DataplexServiceConnection::CreateZone(
    NoAwaitTag, google::cloud::dataplex::v1::CreateZoneRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::Zone>>
DataplexServiceConnection::CreateZone(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Zone>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::Zone>>
DataplexServiceConnection::UpdateZone(
    google::cloud::dataplex::v1::UpdateZoneRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Zone>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DataplexServiceConnection::UpdateZone(
    NoAwaitTag, google::cloud::dataplex::v1::UpdateZoneRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::Zone>>
DataplexServiceConnection::UpdateZone(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Zone>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataplexServiceConnection::DeleteZone(
    google::cloud::dataplex::v1::DeleteZoneRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DataplexServiceConnection::DeleteZone(
    NoAwaitTag, google::cloud::dataplex::v1::DeleteZoneRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataplexServiceConnection::DeleteZone(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::dataplex::v1::Zone>
DataplexServiceConnection::ListZones(
    google::cloud::dataplex::v1::
        ListZonesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dataplex::v1::Zone>>();
}

StatusOr<google::cloud::dataplex::v1::Zone> DataplexServiceConnection::GetZone(
    google::cloud::dataplex::v1::GetZoneRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dataplex::v1::Action>
DataplexServiceConnection::ListZoneActions(
    google::cloud::dataplex::v1::
        ListZoneActionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dataplex::v1::Action>>();
}

future<StatusOr<google::cloud::dataplex::v1::Asset>>
DataplexServiceConnection::CreateAsset(
    google::cloud::dataplex::v1::CreateAssetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Asset>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DataplexServiceConnection::CreateAsset(
    NoAwaitTag, google::cloud::dataplex::v1::CreateAssetRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::Asset>>
DataplexServiceConnection::CreateAsset(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Asset>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::Asset>>
DataplexServiceConnection::UpdateAsset(
    google::cloud::dataplex::v1::UpdateAssetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Asset>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DataplexServiceConnection::UpdateAsset(
    NoAwaitTag, google::cloud::dataplex::v1::UpdateAssetRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::Asset>>
DataplexServiceConnection::UpdateAsset(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Asset>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataplexServiceConnection::DeleteAsset(
    google::cloud::dataplex::v1::DeleteAssetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DataplexServiceConnection::DeleteAsset(
    NoAwaitTag, google::cloud::dataplex::v1::DeleteAssetRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataplexServiceConnection::DeleteAsset(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::dataplex::v1::Asset>
DataplexServiceConnection::ListAssets(
    google::cloud::dataplex::v1::
        ListAssetsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dataplex::v1::Asset>>();
}

StatusOr<google::cloud::dataplex::v1::Asset>
DataplexServiceConnection::GetAsset(
    google::cloud::dataplex::v1::GetAssetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dataplex::v1::Action>
DataplexServiceConnection::ListAssetActions(
    google::cloud::dataplex::v1::
        ListAssetActionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dataplex::v1::Action>>();
}

future<StatusOr<google::cloud::dataplex::v1::Task>>
DataplexServiceConnection::CreateTask(
    google::cloud::dataplex::v1::CreateTaskRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Task>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DataplexServiceConnection::CreateTask(
    NoAwaitTag, google::cloud::dataplex::v1::CreateTaskRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::Task>>
DataplexServiceConnection::CreateTask(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Task>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::Task>>
DataplexServiceConnection::UpdateTask(
    google::cloud::dataplex::v1::UpdateTaskRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Task>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DataplexServiceConnection::UpdateTask(
    NoAwaitTag, google::cloud::dataplex::v1::UpdateTaskRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::Task>>
DataplexServiceConnection::UpdateTask(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Task>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataplexServiceConnection::DeleteTask(
    google::cloud::dataplex::v1::DeleteTaskRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DataplexServiceConnection::DeleteTask(
    NoAwaitTag, google::cloud::dataplex::v1::DeleteTaskRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataplexServiceConnection::DeleteTask(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::dataplex::v1::Task>
DataplexServiceConnection::ListTasks(
    google::cloud::dataplex::v1::
        ListTasksRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dataplex::v1::Task>>();
}

StatusOr<google::cloud::dataplex::v1::Task> DataplexServiceConnection::GetTask(
    google::cloud::dataplex::v1::GetTaskRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dataplex::v1::Job>
DataplexServiceConnection::ListJobs(
    google::cloud::dataplex::v1::
        ListJobsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dataplex::v1::Job>>();
}

StatusOr<google::cloud::dataplex::v1::RunTaskResponse>
DataplexServiceConnection::RunTask(
    google::cloud::dataplex::v1::RunTaskRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dataplex::v1::Job> DataplexServiceConnection::GetJob(
    google::cloud::dataplex::v1::GetJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DataplexServiceConnection::CancelJob(
    google::cloud::dataplex::v1::CancelJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::dataplex::v1::Environment>>
DataplexServiceConnection::CreateEnvironment(
    google::cloud::dataplex::v1::CreateEnvironmentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Environment>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
DataplexServiceConnection::CreateEnvironment(
    NoAwaitTag, google::cloud::dataplex::v1::CreateEnvironmentRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::Environment>>
DataplexServiceConnection::CreateEnvironment(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Environment>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::Environment>>
DataplexServiceConnection::UpdateEnvironment(
    google::cloud::dataplex::v1::UpdateEnvironmentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Environment>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
DataplexServiceConnection::UpdateEnvironment(
    NoAwaitTag, google::cloud::dataplex::v1::UpdateEnvironmentRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::Environment>>
DataplexServiceConnection::UpdateEnvironment(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::Environment>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataplexServiceConnection::DeleteEnvironment(
    google::cloud::dataplex::v1::DeleteEnvironmentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
DataplexServiceConnection::DeleteEnvironment(
    NoAwaitTag, google::cloud::dataplex::v1::DeleteEnvironmentRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataplexServiceConnection::DeleteEnvironment(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataplex::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::dataplex::v1::Environment>
DataplexServiceConnection::ListEnvironments(
    google::cloud::dataplex::v1::
        ListEnvironmentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dataplex::v1::Environment>>();
}

StatusOr<google::cloud::dataplex::v1::Environment>
DataplexServiceConnection::GetEnvironment(
    google::cloud::dataplex::v1::GetEnvironmentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dataplex::v1::Session>
DataplexServiceConnection::ListSessions(
    google::cloud::dataplex::v1::
        ListSessionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dataplex::v1::Session>>();
}

StreamRange<google::cloud::location::Location>
DataplexServiceConnection::ListLocations(
    google::cloud::location::
        ListLocationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::location::Location>>();
}

StatusOr<google::cloud::location::Location>
DataplexServiceConnection::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> DataplexServiceConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> DataplexServiceConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataplexServiceConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::longrunning::Operation>
DataplexServiceConnection::ListOperations(
    google::longrunning::
        ListOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StatusOr<google::longrunning::Operation>
DataplexServiceConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DataplexServiceConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DataplexServiceConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<DataplexServiceConnection> MakeDataplexServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 DataplexServicePolicyOptionList>(options,
                                                                  __func__);
  options =
      dataplex_v1_internal::DataplexServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = dataplex_v1_internal::CreateDefaultDataplexServiceStub(
      std::move(auth), options);
  return dataplex_v1_internal::MakeDataplexServiceTracingConnection(
      std::make_shared<dataplex_v1_internal::DataplexServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1
}  // namespace cloud
}  // namespace google
