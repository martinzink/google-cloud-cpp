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
// source: google/cloud/bigquery/datatransfer/v1/datatransfer.proto

#include "google/cloud/bigquery/datatransfer/v1/data_transfer_connection.h"
#include "google/cloud/bigquery/datatransfer/v1/data_transfer_options.h"
#include "google/cloud/bigquery/datatransfer/v1/internal/data_transfer_connection_impl.h"
#include "google/cloud/bigquery/datatransfer/v1/internal/data_transfer_option_defaults.h"
#include "google/cloud/bigquery/datatransfer/v1/internal/data_transfer_stub_factory.h"
#include "google/cloud/bigquery/datatransfer/v1/internal/data_transfer_tracing_connection.h"
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
namespace bigquery_datatransfer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataTransferServiceConnection::~DataTransferServiceConnection() = default;

StatusOr<google::cloud::bigquery::datatransfer::v1::DataSource>
DataTransferServiceConnection::GetDataSource(
    google::cloud::bigquery::datatransfer::v1::GetDataSourceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::bigquery::datatransfer::v1::DataSource>
DataTransferServiceConnection::ListDataSources(
    google::cloud::bigquery::datatransfer::v1::
        ListDataSourcesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::bigquery::datatransfer::v1::DataSource>>();
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceConnection::CreateTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        CreateTransferConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceConnection::UpdateTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        UpdateTransferConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DataTransferServiceConnection::DeleteTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        DeleteTransferConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceConnection::GetTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        GetTransferConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceConnection::ListTransferConfigs(
    google::cloud::bigquery::datatransfer::v1::
        ListTransferConfigsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::bigquery::datatransfer::v1::TransferConfig>>();
}

StatusOr<
    google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsResponse>
DataTransferServiceConnection::ScheduleTransferRuns(
    google::cloud::bigquery::datatransfer::v1::
        ScheduleTransferRunsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<
    google::cloud::bigquery::datatransfer::v1::StartManualTransferRunsResponse>
DataTransferServiceConnection::StartManualTransferRuns(
    google::cloud::bigquery::datatransfer::v1::
        StartManualTransferRunsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferRun>
DataTransferServiceConnection::GetTransferRun(
    google::cloud::bigquery::datatransfer::v1::GetTransferRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DataTransferServiceConnection::DeleteTransferRun(
    google::cloud::bigquery::datatransfer::v1::
        DeleteTransferRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::bigquery::datatransfer::v1::TransferRun>
DataTransferServiceConnection::ListTransferRuns(
    google::cloud::bigquery::datatransfer::v1::
        ListTransferRunsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::bigquery::datatransfer::v1::TransferRun>>();
}

StreamRange<google::cloud::bigquery::datatransfer::v1::TransferMessage>
DataTransferServiceConnection::ListTransferLogs(
    google::cloud::bigquery::datatransfer::v1::
        ListTransferLogsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::bigquery::datatransfer::v1::TransferMessage>>();
}

StatusOr<google::cloud::bigquery::datatransfer::v1::CheckValidCredsResponse>
DataTransferServiceConnection::CheckValidCreds(
    google::cloud::bigquery::datatransfer::v1::CheckValidCredsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DataTransferServiceConnection::EnrollDataSources(
    google::cloud::bigquery::datatransfer::v1::
        EnrollDataSourcesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DataTransferServiceConnection::UnenrollDataSources(
    google::cloud::bigquery::datatransfer::v1::
        UnenrollDataSourcesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::location::Location>
DataTransferServiceConnection::ListLocations(
    google::cloud::location::
        ListLocationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::location::Location>>();
}

StatusOr<google::cloud::location::Location>
DataTransferServiceConnection::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<DataTransferServiceConnection>
MakeDataTransferServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 DataTransferServicePolicyOptionList>(options,
                                                                      __func__);
  options =
      bigquery_datatransfer_v1_internal::DataTransferServiceDefaultOptions(
          std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      bigquery_datatransfer_v1_internal::CreateDefaultDataTransferServiceStub(
          std::move(auth), options);
  return bigquery_datatransfer_v1_internal::
      MakeDataTransferServiceTracingConnection(
          std::make_shared<bigquery_datatransfer_v1_internal::
                               DataTransferServiceConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datatransfer_v1
}  // namespace cloud
}  // namespace google
