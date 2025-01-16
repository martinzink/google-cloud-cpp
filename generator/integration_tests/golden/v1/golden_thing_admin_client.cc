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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/v1/golden_thing_admin_client.h"
#include <memory>
#include "generator/integration_tests/golden/v1/golden_thing_admin_options.h"
#include <thread>
#include <utility>

namespace google {
namespace cloud {
namespace golden_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GoldenThingAdminClient::GoldenThingAdminClient(
    std::shared_ptr<GoldenThingAdminConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(std::move(opts),
      connection_->options())) {}
GoldenThingAdminClient::~GoldenThingAdminClient() = default;

StreamRange<google::test::admin::database::v1::Database>
GoldenThingAdminClient::ListDatabases(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::ListDatabasesRequest request;
  request.set_parent(parent);
  return connection_->ListDatabases(request);
}

StreamRange<google::test::admin::database::v1::Database>
GoldenThingAdminClient::ListDatabases(google::test::admin::database::v1::ListDatabasesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDatabases(std::move(request));
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminClient::CreateDatabase(std::string const& parent, std::string const& create_statement, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::CreateDatabaseRequest request;
  request.set_parent(parent);
  request.set_create_statement(create_statement);
  return connection_->CreateDatabase(request);
}

StatusOr<google::longrunning::Operation>
GoldenThingAdminClient::CreateDatabase(NoAwaitTag, std::string const& parent, std::string const& create_statement, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::CreateDatabaseRequest request;
  request.set_parent(parent);
  request.set_create_statement(create_statement);
  return connection_->CreateDatabase(NoAwaitTag{}, request);
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminClient::CreateDatabase(google::test::admin::database::v1::CreateDatabaseRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDatabase(request);
}

StatusOr<google::longrunning::Operation>
GoldenThingAdminClient::CreateDatabase(NoAwaitTag, google::test::admin::database::v1::CreateDatabaseRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDatabase(NoAwaitTag{}, request);
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminClient::CreateDatabase(google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDatabase(operation);
}

StatusOr<google::test::admin::database::v1::Database>
GoldenThingAdminClient::GetDatabase(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::GetDatabaseRequest request;
  request.set_name(name);
  return connection_->GetDatabase(request);
}

StatusOr<google::test::admin::database::v1::Database>
GoldenThingAdminClient::GetDatabase(google::test::admin::database::v1::GetDatabaseRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDatabase(request);
}

future<StatusOr<google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>
GoldenThingAdminClient::UpdateDatabaseDdl(std::string const& database, std::vector<std::string> const& statements, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::UpdateDatabaseDdlRequest request;
  request.set_database(database);
  *request.mutable_statements() = {statements.begin(), statements.end()};
  return connection_->UpdateDatabaseDdl(request);
}

StatusOr<google::longrunning::Operation>
GoldenThingAdminClient::UpdateDatabaseDdl(NoAwaitTag, std::string const& database, std::vector<std::string> const& statements, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::UpdateDatabaseDdlRequest request;
  request.set_database(database);
  *request.mutable_statements() = {statements.begin(), statements.end()};
  return connection_->UpdateDatabaseDdl(NoAwaitTag{}, request);
}

future<StatusOr<google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>
GoldenThingAdminClient::UpdateDatabaseDdl(google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDatabaseDdl(request);
}

StatusOr<google::longrunning::Operation>
GoldenThingAdminClient::UpdateDatabaseDdl(NoAwaitTag, google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDatabaseDdl(NoAwaitTag{}, request);
}

future<StatusOr<google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>
GoldenThingAdminClient::UpdateDatabaseDdl(google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDatabaseDdl(operation);
}

Status
GoldenThingAdminClient::DropDatabase(std::string const& database, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::DropDatabaseRequest request;
  request.set_database(database);
  return connection_->DropDatabase(request);
}

Status
GoldenThingAdminClient::DropDatabase(google::test::admin::database::v1::DropDatabaseRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DropDatabase(request);
}

StatusOr<google::test::admin::database::v1::GetDatabaseDdlResponse>
GoldenThingAdminClient::GetDatabaseDdl(std::string const& database, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::GetDatabaseDdlRequest request;
  request.set_database(database);
  return connection_->GetDatabaseDdl(request);
}

StatusOr<google::test::admin::database::v1::GetDatabaseDdlResponse>
GoldenThingAdminClient::GetDatabaseDdl(google::test::admin::database::v1::GetDatabaseDdlRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDatabaseDdl(request);
}

StatusOr<google::iam::v1::Policy>
GoldenThingAdminClient::SetIamPolicy(std::string const& resource, google::iam::v1::Policy const& policy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::SetIamPolicyRequest request;
  request.set_resource(resource);
  *request.mutable_policy() = policy;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy>
GoldenThingAdminClient::SetIamPolicy(std::string const& resource, IamUpdater const& updater, Options opts) {
  internal::CheckExpectedOptions<GoldenThingAdminBackoffPolicyOption>(opts, __func__);
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest get_request;
  get_request.set_resource(resource);
  google::iam::v1::SetIamPolicyRequest set_request;
  set_request.set_resource(resource);
  auto backoff_policy = internal::CurrentOptions().get<GoldenThingAdminBackoffPolicyOption>();
  if (backoff_policy != nullptr) {
    backoff_policy = backoff_policy->clone();
  }
  for (;;) {
    auto recent = connection_->GetIamPolicy(get_request);
    if (!recent) {
      return recent.status();
    }
    auto policy = updater(*std::move(recent));
    if (!policy) {
      return internal::CancelledError(
          "updater did not yield a policy",
          GCP_ERROR_INFO().WithMetadata("gl-cpp.error.origin", "client"));
    }
    *set_request.mutable_policy() = *std::move(policy);
    auto result = connection_->SetIamPolicy(set_request);
    if (result ||
        result.status().code() != StatusCode::kAborted ||
        backoff_policy == nullptr) {
      return result;
    }
    std::this_thread::sleep_for(backoff_policy->OnCompletion());
  }
}

StatusOr<google::iam::v1::Policy>
GoldenThingAdminClient::SetIamPolicy(google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy>
GoldenThingAdminClient::GetIamPolicy(std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest request;
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy>
GoldenThingAdminClient::GetIamPolicy(google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
GoldenThingAdminClient::TestIamPermissions(std::string const& resource, std::vector<std::string> const& permissions, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::TestIamPermissionsRequest request;
  request.set_resource(resource);
  *request.mutable_permissions() = {permissions.begin(), permissions.end()};
  return connection_->TestIamPermissions(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
GoldenThingAdminClient::TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

future<StatusOr<google::test::admin::database::v1::Backup>>
GoldenThingAdminClient::CreateBackup(std::string const& parent, google::test::admin::database::v1::Backup const& backup, std::string const& backup_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::CreateBackupRequest request;
  request.set_parent(parent);
  *request.mutable_backup() = backup;
  request.set_backup_id(backup_id);
  return connection_->CreateBackup(request);
}

StatusOr<google::longrunning::Operation>
GoldenThingAdminClient::CreateBackup(NoAwaitTag, std::string const& parent, google::test::admin::database::v1::Backup const& backup, std::string const& backup_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::CreateBackupRequest request;
  request.set_parent(parent);
  *request.mutable_backup() = backup;
  request.set_backup_id(backup_id);
  return connection_->CreateBackup(NoAwaitTag{}, request);
}

future<StatusOr<google::test::admin::database::v1::Backup>>
GoldenThingAdminClient::CreateBackup(google::test::admin::database::v1::CreateBackupRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateBackup(request);
}

StatusOr<google::longrunning::Operation>
GoldenThingAdminClient::CreateBackup(NoAwaitTag, google::test::admin::database::v1::CreateBackupRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateBackup(NoAwaitTag{}, request);
}

future<StatusOr<google::test::admin::database::v1::Backup>>
GoldenThingAdminClient::CreateBackup(google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateBackup(operation);
}

StatusOr<google::test::admin::database::v1::Backup>
GoldenThingAdminClient::GetBackup(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::GetBackupRequest request;
  request.set_name(name);
  return connection_->GetBackup(request);
}

StatusOr<google::test::admin::database::v1::Backup>
GoldenThingAdminClient::GetBackup(google::test::admin::database::v1::GetBackupRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetBackup(request);
}

StatusOr<google::test::admin::database::v1::Backup>
GoldenThingAdminClient::UpdateBackup(google::test::admin::database::v1::Backup const& backup, google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::UpdateBackupRequest request;
  *request.mutable_backup() = backup;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateBackup(request);
}

StatusOr<google::test::admin::database::v1::Backup>
GoldenThingAdminClient::UpdateBackup(google::test::admin::database::v1::UpdateBackupRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateBackup(request);
}

Status
GoldenThingAdminClient::DeleteBackup(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::DeleteBackupRequest request;
  request.set_name(name);
  return connection_->DeleteBackup(request);
}

Status
GoldenThingAdminClient::DeleteBackup(google::test::admin::database::v1::DeleteBackupRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteBackup(request);
}

StreamRange<google::test::admin::database::v1::Backup>
GoldenThingAdminClient::ListBackups(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::ListBackupsRequest request;
  request.set_parent(parent);
  return connection_->ListBackups(request);
}

StreamRange<google::test::admin::database::v1::Backup>
GoldenThingAdminClient::ListBackups(google::test::admin::database::v1::ListBackupsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListBackups(std::move(request));
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminClient::RestoreDatabase(std::string const& parent, std::string const& database_id, std::string const& backup, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::RestoreDatabaseRequest request;
  request.set_parent(parent);
  request.set_database_id(database_id);
  request.set_backup(backup);
  return connection_->RestoreDatabase(request);
}

StatusOr<google::longrunning::Operation>
GoldenThingAdminClient::RestoreDatabase(NoAwaitTag, std::string const& parent, std::string const& database_id, std::string const& backup, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::RestoreDatabaseRequest request;
  request.set_parent(parent);
  request.set_database_id(database_id);
  request.set_backup(backup);
  return connection_->RestoreDatabase(NoAwaitTag{}, request);
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminClient::RestoreDatabase(google::test::admin::database::v1::RestoreDatabaseRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RestoreDatabase(request);
}

StatusOr<google::longrunning::Operation>
GoldenThingAdminClient::RestoreDatabase(NoAwaitTag, google::test::admin::database::v1::RestoreDatabaseRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RestoreDatabase(NoAwaitTag{}, request);
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminClient::RestoreDatabase(google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RestoreDatabase(operation);
}

StreamRange<google::longrunning::Operation>
GoldenThingAdminClient::ListDatabaseOperations(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::ListDatabaseOperationsRequest request;
  request.set_parent(parent);
  return connection_->ListDatabaseOperations(request);
}

StreamRange<google::longrunning::Operation>
GoldenThingAdminClient::ListDatabaseOperations(google::test::admin::database::v1::ListDatabaseOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDatabaseOperations(std::move(request));
}

StreamRange<google::longrunning::Operation>
GoldenThingAdminClient::ListBackupOperations(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::ListBackupOperationsRequest request;
  request.set_parent(parent);
  return connection_->ListBackupOperations(request);
}

StreamRange<google::longrunning::Operation>
GoldenThingAdminClient::ListBackupOperations(google::test::admin::database::v1::ListBackupOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListBackupOperations(std::move(request));
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminClient::LongRunningWithoutRouting(google::test::admin::database::v1::RestoreDatabaseRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->LongRunningWithoutRouting(request);
}

StatusOr<google::longrunning::Operation>
GoldenThingAdminClient::LongRunningWithoutRouting(NoAwaitTag, google::test::admin::database::v1::RestoreDatabaseRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->LongRunningWithoutRouting(NoAwaitTag{}, request);
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminClient::LongRunningWithoutRouting(google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->LongRunningWithoutRouting(operation);
}

StatusOr<google::cloud::location::Location>
GoldenThingAdminClient::GetLocation(google::cloud::location::GetLocationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLocation(request);
}

StreamRange<google::longrunning::Operation>
GoldenThingAdminClient::ListOperations(std::string const& name, std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation>
GoldenThingAdminClient::ListOperations(google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminClient::AsyncGetDatabase(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::GetDatabaseRequest request;
  request.set_name(name);
  return connection_->AsyncGetDatabase(request);
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminClient::AsyncGetDatabase(google::test::admin::database::v1::GetDatabaseRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AsyncGetDatabase(request);
}

future<Status>
GoldenThingAdminClient::AsyncDropDatabase(std::string const& database, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::admin::database::v1::DropDatabaseRequest request;
  request.set_database(database);
  return connection_->AsyncDropDatabase(request);
}

future<Status>
GoldenThingAdminClient::AsyncDropDatabase(google::test::admin::database::v1::DropDatabaseRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AsyncDropDatabase(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1
}  // namespace cloud
}  // namespace google
