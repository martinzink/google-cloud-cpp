// Copyright 2021 Google LLC
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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_DATABASE_ADMIN_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_DATABASE_ADMIN_REST_CONNECTION_IMPL_H

#include "google/cloud/spanner/admin/database_admin_connection.h"
#include "google/cloud/spanner/admin/database_admin_connection_idempotency_policy.h"
#include "google/cloud/spanner/admin/database_admin_options.h"
#include "google/cloud/spanner/admin/internal/database_admin_rest_stub.h"
#include "google/cloud/spanner/admin/internal/database_admin_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DatabaseAdminRestConnectionImpl
    : public spanner_admin::DatabaseAdminConnection {
 public:
  ~DatabaseAdminRestConnectionImpl() override = default;

  DatabaseAdminRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<spanner_admin_internal::DatabaseAdminRestStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::spanner::admin::database::v1::Database> ListDatabases(
      google::spanner::admin::database::v1::ListDatabasesRequest request)
      override;

  future<StatusOr<google::spanner::admin::database::v1::Database>>
  CreateDatabase(
      google::spanner::admin::database::v1::CreateDatabaseRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateDatabase(
      NoAwaitTag,
      google::spanner::admin::database::v1::CreateDatabaseRequest const&
          request) override;

  future<StatusOr<google::spanner::admin::database::v1::Database>>
  CreateDatabase(google::longrunning::Operation const& operation) override;

  StatusOr<google::spanner::admin::database::v1::Database> GetDatabase(
      google::spanner::admin::database::v1::GetDatabaseRequest const& request)
      override;

  future<StatusOr<google::spanner::admin::database::v1::Database>>
  UpdateDatabase(
      google::spanner::admin::database::v1::UpdateDatabaseRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateDatabase(
      NoAwaitTag,
      google::spanner::admin::database::v1::UpdateDatabaseRequest const&
          request) override;

  future<StatusOr<google::spanner::admin::database::v1::Database>>
  UpdateDatabase(google::longrunning::Operation const& operation) override;

  future<
      StatusOr<google::spanner::admin::database::v1::UpdateDatabaseDdlMetadata>>
  UpdateDatabaseDdl(
      google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateDatabaseDdl(
      NoAwaitTag,
      google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
          request) override;

  future<
      StatusOr<google::spanner::admin::database::v1::UpdateDatabaseDdlMetadata>>
  UpdateDatabaseDdl(google::longrunning::Operation const& operation) override;

  Status DropDatabase(
      google::spanner::admin::database::v1::DropDatabaseRequest const& request)
      override;

  StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
  GetDatabaseDdl(
      google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::spanner::admin::database::v1::Backup>> CreateBackup(
      google::spanner::admin::database::v1::CreateBackupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateBackup(
      NoAwaitTag,
      google::spanner::admin::database::v1::CreateBackupRequest const& request)
      override;

  future<StatusOr<google::spanner::admin::database::v1::Backup>> CreateBackup(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::spanner::admin::database::v1::Backup>> CopyBackup(
      google::spanner::admin::database::v1::CopyBackupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CopyBackup(
      NoAwaitTag,
      google::spanner::admin::database::v1::CopyBackupRequest const& request)
      override;

  future<StatusOr<google::spanner::admin::database::v1::Backup>> CopyBackup(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::spanner::admin::database::v1::Backup> GetBackup(
      google::spanner::admin::database::v1::GetBackupRequest const& request)
      override;

  StatusOr<google::spanner::admin::database::v1::Backup> UpdateBackup(
      google::spanner::admin::database::v1::UpdateBackupRequest const& request)
      override;

  Status DeleteBackup(
      google::spanner::admin::database::v1::DeleteBackupRequest const& request)
      override;

  StreamRange<google::spanner::admin::database::v1::Backup> ListBackups(
      google::spanner::admin::database::v1::ListBackupsRequest request)
      override;

  future<StatusOr<google::spanner::admin::database::v1::Database>>
  RestoreDatabase(
      google::spanner::admin::database::v1::RestoreDatabaseRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> RestoreDatabase(
      NoAwaitTag,
      google::spanner::admin::database::v1::RestoreDatabaseRequest const&
          request) override;

  future<StatusOr<google::spanner::admin::database::v1::Database>>
  RestoreDatabase(google::longrunning::Operation const& operation) override;

  StreamRange<google::longrunning::Operation> ListDatabaseOperations(
      google::spanner::admin::database::v1::ListDatabaseOperationsRequest
          request) override;

  StreamRange<google::longrunning::Operation> ListBackupOperations(
      google::spanner::admin::database::v1::ListBackupOperationsRequest request)
      override;

  StreamRange<google::spanner::admin::database::v1::DatabaseRole>
  ListDatabaseRoles(
      google::spanner::admin::database::v1::ListDatabaseRolesRequest request)
      override;

  StatusOr<google::spanner::admin::database::v1::BackupSchedule>
  CreateBackupSchedule(
      google::spanner::admin::database::v1::CreateBackupScheduleRequest const&
          request) override;

  StatusOr<google::spanner::admin::database::v1::BackupSchedule>
  GetBackupSchedule(
      google::spanner::admin::database::v1::GetBackupScheduleRequest const&
          request) override;

  StatusOr<google::spanner::admin::database::v1::BackupSchedule>
  UpdateBackupSchedule(
      google::spanner::admin::database::v1::UpdateBackupScheduleRequest const&
          request) override;

  Status DeleteBackupSchedule(
      google::spanner::admin::database::v1::DeleteBackupScheduleRequest const&
          request) override;

  StreamRange<google::spanner::admin::database::v1::BackupSchedule>
  ListBackupSchedules(
      google::spanner::admin::database::v1::ListBackupSchedulesRequest request)
      override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  static std::unique_ptr<spanner_admin::DatabaseAdminRetryPolicy> retry_policy(
      Options const& options) {
    return options.get<spanner_admin::DatabaseAdminRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options.get<spanner_admin::DatabaseAdminBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      spanner_admin::DatabaseAdminConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<spanner_admin::DatabaseAdminConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options.get<spanner_admin::DatabaseAdminPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<spanner_admin_internal::DatabaseAdminRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_DATABASE_ADMIN_REST_CONNECTION_IMPL_H
