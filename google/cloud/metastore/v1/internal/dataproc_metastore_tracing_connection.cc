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
// source: google/cloud/metastore/v1/metastore.proto

#include "google/cloud/metastore/v1/internal/dataproc_metastore_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace metastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataprocMetastoreTracingConnection::DataprocMetastoreTracingConnection(
    std::shared_ptr<metastore_v1::DataprocMetastoreConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::metastore::v1::Service>
DataprocMetastoreTracingConnection::ListServices(
    google::cloud::metastore::v1::ListServicesRequest request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::ListServices");
  internal::OTelScope scope(span);
  auto sr = child_->ListServices(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::metastore::v1::Service>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::metastore::v1::Service>
DataprocMetastoreTracingConnection::GetService(
    google::cloud::metastore::v1::GetServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::GetService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetService(request));
}

future<StatusOr<google::cloud::metastore::v1::Service>>
DataprocMetastoreTracingConnection::CreateService(
    google::cloud::metastore::v1::CreateServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::CreateService");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateService(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreTracingConnection::CreateService(
    NoAwaitTag,
    google::cloud::metastore::v1::CreateServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::CreateService");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->CreateService(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::metastore::v1::Service>>
DataprocMetastoreTracingConnection::CreateService(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::CreateService");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateService(operation));
}

future<StatusOr<google::cloud::metastore::v1::Service>>
DataprocMetastoreTracingConnection::UpdateService(
    google::cloud::metastore::v1::UpdateServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::UpdateService");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateService(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreTracingConnection::UpdateService(
    NoAwaitTag,
    google::cloud::metastore::v1::UpdateServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::UpdateService");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->UpdateService(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::metastore::v1::Service>>
DataprocMetastoreTracingConnection::UpdateService(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::UpdateService");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateService(operation));
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreTracingConnection::DeleteService(
    google::cloud::metastore::v1::DeleteServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::DeleteService");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteService(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreTracingConnection::DeleteService(
    NoAwaitTag,
    google::cloud::metastore::v1::DeleteServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::DeleteService");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DeleteService(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreTracingConnection::DeleteService(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::DeleteService");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteService(operation));
}

StreamRange<google::cloud::metastore::v1::MetadataImport>
DataprocMetastoreTracingConnection::ListMetadataImports(
    google::cloud::metastore::v1::ListMetadataImportsRequest request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::ListMetadataImports");
  internal::OTelScope scope(span);
  auto sr = child_->ListMetadataImports(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::metastore::v1::MetadataImport>(std::move(span),
                                                    std::move(sr));
}

StatusOr<google::cloud::metastore::v1::MetadataImport>
DataprocMetastoreTracingConnection::GetMetadataImport(
    google::cloud::metastore::v1::GetMetadataImportRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::GetMetadataImport");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetMetadataImport(request));
}

future<StatusOr<google::cloud::metastore::v1::MetadataImport>>
DataprocMetastoreTracingConnection::CreateMetadataImport(
    google::cloud::metastore::v1::CreateMetadataImportRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::CreateMetadataImport");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateMetadataImport(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreTracingConnection::CreateMetadataImport(
    NoAwaitTag,
    google::cloud::metastore::v1::CreateMetadataImportRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::CreateMetadataImport");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->CreateMetadataImport(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::metastore::v1::MetadataImport>>
DataprocMetastoreTracingConnection::CreateMetadataImport(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::CreateMetadataImport");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateMetadataImport(operation));
}

future<StatusOr<google::cloud::metastore::v1::MetadataImport>>
DataprocMetastoreTracingConnection::UpdateMetadataImport(
    google::cloud::metastore::v1::UpdateMetadataImportRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::UpdateMetadataImport");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateMetadataImport(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreTracingConnection::UpdateMetadataImport(
    NoAwaitTag,
    google::cloud::metastore::v1::UpdateMetadataImportRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::UpdateMetadataImport");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateMetadataImport(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::metastore::v1::MetadataImport>>
DataprocMetastoreTracingConnection::UpdateMetadataImport(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::UpdateMetadataImport");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateMetadataImport(operation));
}

future<StatusOr<google::cloud::metastore::v1::MetadataExport>>
DataprocMetastoreTracingConnection::ExportMetadata(
    google::cloud::metastore::v1::ExportMetadataRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::ExportMetadata");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ExportMetadata(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreTracingConnection::ExportMetadata(
    NoAwaitTag,
    google::cloud::metastore::v1::ExportMetadataRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::ExportMetadata");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->ExportMetadata(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::metastore::v1::MetadataExport>>
DataprocMetastoreTracingConnection::ExportMetadata(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::ExportMetadata");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ExportMetadata(operation));
}

future<StatusOr<google::cloud::metastore::v1::Restore>>
DataprocMetastoreTracingConnection::RestoreService(
    google::cloud::metastore::v1::RestoreServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::RestoreService");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RestoreService(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreTracingConnection::RestoreService(
    NoAwaitTag,
    google::cloud::metastore::v1::RestoreServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::RestoreService");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->RestoreService(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::metastore::v1::Restore>>
DataprocMetastoreTracingConnection::RestoreService(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::RestoreService");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RestoreService(operation));
}

StreamRange<google::cloud::metastore::v1::Backup>
DataprocMetastoreTracingConnection::ListBackups(
    google::cloud::metastore::v1::ListBackupsRequest request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::ListBackups");
  internal::OTelScope scope(span);
  auto sr = child_->ListBackups(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::metastore::v1::Backup>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::metastore::v1::Backup>
DataprocMetastoreTracingConnection::GetBackup(
    google::cloud::metastore::v1::GetBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::GetBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetBackup(request));
}

future<StatusOr<google::cloud::metastore::v1::Backup>>
DataprocMetastoreTracingConnection::CreateBackup(
    google::cloud::metastore::v1::CreateBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::CreateBackup");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateBackup(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreTracingConnection::CreateBackup(
    NoAwaitTag,
    google::cloud::metastore::v1::CreateBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::CreateBackup");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->CreateBackup(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::metastore::v1::Backup>>
DataprocMetastoreTracingConnection::CreateBackup(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::CreateBackup");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateBackup(operation));
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreTracingConnection::DeleteBackup(
    google::cloud::metastore::v1::DeleteBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::DeleteBackup");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteBackup(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreTracingConnection::DeleteBackup(
    NoAwaitTag,
    google::cloud::metastore::v1::DeleteBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::DeleteBackup");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DeleteBackup(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreTracingConnection::DeleteBackup(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::DeleteBackup");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteBackup(operation));
}

future<StatusOr<google::cloud::metastore::v1::QueryMetadataResponse>>
DataprocMetastoreTracingConnection::QueryMetadata(
    google::cloud::metastore::v1::QueryMetadataRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::QueryMetadata");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->QueryMetadata(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreTracingConnection::QueryMetadata(
    NoAwaitTag,
    google::cloud::metastore::v1::QueryMetadataRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::QueryMetadata");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->QueryMetadata(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::metastore::v1::QueryMetadataResponse>>
DataprocMetastoreTracingConnection::QueryMetadata(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::QueryMetadata");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->QueryMetadata(operation));
}

future<StatusOr<google::cloud::metastore::v1::MoveTableToDatabaseResponse>>
DataprocMetastoreTracingConnection::MoveTableToDatabase(
    google::cloud::metastore::v1::MoveTableToDatabaseRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::MoveTableToDatabase");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->MoveTableToDatabase(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreTracingConnection::MoveTableToDatabase(
    NoAwaitTag,
    google::cloud::metastore::v1::MoveTableToDatabaseRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::MoveTableToDatabase");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->MoveTableToDatabase(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::metastore::v1::MoveTableToDatabaseResponse>>
DataprocMetastoreTracingConnection::MoveTableToDatabase(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::MoveTableToDatabase");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->MoveTableToDatabase(operation));
}

future<StatusOr<
    google::cloud::metastore::v1::AlterMetadataResourceLocationResponse>>
DataprocMetastoreTracingConnection::AlterMetadataResourceLocation(
    google::cloud::metastore::v1::AlterMetadataResourceLocationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::"
      "AlterMetadataResourceLocation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->AlterMetadataResourceLocation(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreTracingConnection::AlterMetadataResourceLocation(
    NoAwaitTag,
    google::cloud::metastore::v1::AlterMetadataResourceLocationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::"
      "AlterMetadataResourceLocation");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->AlterMetadataResourceLocation(NoAwaitTag{}, request));
}

future<StatusOr<
    google::cloud::metastore::v1::AlterMetadataResourceLocationResponse>>
DataprocMetastoreTracingConnection::AlterMetadataResourceLocation(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::"
      "AlterMetadataResourceLocation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->AlterMetadataResourceLocation(operation));
}

StreamRange<google::cloud::location::Location>
DataprocMetastoreTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::location::Location>
DataprocMetastoreTracingConnection::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

StatusOr<google::iam::v1::Policy>
DataprocMetastoreTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy>
DataprocMetastoreTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataprocMetastoreTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

StreamRange<google::longrunning::Operation>
DataprocMetastoreTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status DataprocMetastoreTracingConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteOperation(request));
}

Status DataprocMetastoreTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<metastore_v1::DataprocMetastoreConnection>
MakeDataprocMetastoreTracingConnection(
    std::shared_ptr<metastore_v1::DataprocMetastoreConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<DataprocMetastoreTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1_internal
}  // namespace cloud
}  // namespace google
