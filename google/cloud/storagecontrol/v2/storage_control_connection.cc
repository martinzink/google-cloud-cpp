// Copyright 2024 Google LLC
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
// source: google/storage/control/v2/storage_control.proto

#include "google/cloud/storagecontrol/v2/storage_control_connection.h"
#include "google/cloud/storagecontrol/v2/internal/storage_control_connection_impl.h"
#include "google/cloud/storagecontrol/v2/internal/storage_control_option_defaults.h"
#include "google/cloud/storagecontrol/v2/internal/storage_control_stub_factory.h"
#include "google/cloud/storagecontrol/v2/internal/storage_control_tracing_connection.h"
#include "google/cloud/storagecontrol/v2/storage_control_options.h"
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
namespace storagecontrol_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageControlConnection::~StorageControlConnection() = default;

StatusOr<google::storage::control::v2::Folder>
StorageControlConnection::CreateFolder(
    google::storage::control::v2::CreateFolderRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status StorageControlConnection::DeleteFolder(
    google::storage::control::v2::DeleteFolderRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::storage::control::v2::Folder>
StorageControlConnection::GetFolder(
    google::storage::control::v2::GetFolderRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::storage::control::v2::Folder>
StorageControlConnection::ListFolders(
    google::storage::control::v2::
        ListFoldersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::storage::control::v2::Folder>>();
}

future<StatusOr<google::storage::control::v2::Folder>>
StorageControlConnection::RenameFolder(
    google::storage::control::v2::RenameFolderRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::storage::control::v2::Folder>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> StorageControlConnection::RenameFolder(
    NoAwaitTag, google::storage::control::v2::RenameFolderRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::storage::control::v2::Folder>>
StorageControlConnection::RenameFolder(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::storage::control::v2::Folder>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::storage::control::v2::StorageLayout>
StorageControlConnection::GetStorageLayout(
    google::storage::control::v2::GetStorageLayoutRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::storage::control::v2::ManagedFolder>
StorageControlConnection::CreateManagedFolder(
    google::storage::control::v2::CreateManagedFolderRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status StorageControlConnection::DeleteManagedFolder(
    google::storage::control::v2::DeleteManagedFolderRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::storage::control::v2::ManagedFolder>
StorageControlConnection::GetManagedFolder(
    google::storage::control::v2::GetManagedFolderRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::storage::control::v2::ManagedFolder>
StorageControlConnection::ListManagedFolders(
    google::storage::control::v2::
        ListManagedFoldersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::storage::control::v2::ManagedFolder>>();
}

std::shared_ptr<StorageControlConnection> MakeStorageControlConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 StorageControlPolicyOptionList>(options,
                                                                 __func__);
  options = storagecontrol_v2_internal::StorageControlDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = storagecontrol_v2_internal::CreateDefaultStorageControlStub(
      std::move(auth), options);
  return storagecontrol_v2_internal::MakeStorageControlTracingConnection(
      std::make_shared<
          storagecontrol_v2_internal::StorageControlConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagecontrol_v2
}  // namespace cloud
}  // namespace google
