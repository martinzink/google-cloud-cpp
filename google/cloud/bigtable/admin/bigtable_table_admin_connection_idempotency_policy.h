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
// source: google/bigtable/admin/v2/bigtable_table_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_BIGTABLE_TABLE_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_BIGTABLE_TABLE_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/bigtable/admin/v2/bigtable_table_admin.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigtable_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BigtableTableAdminConnectionIdempotencyPolicy {
 public:
  virtual ~BigtableTableAdminConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<BigtableTableAdminConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateTable(
      google::bigtable::admin::v2::CreateTableRequest const& request);

  virtual google::cloud::Idempotency ListTables(
      google::bigtable::admin::v2::ListTablesRequest request);

  virtual google::cloud::Idempotency GetTable(
      google::bigtable::admin::v2::GetTableRequest const& request);

  virtual google::cloud::Idempotency UpdateTable(
      google::bigtable::admin::v2::UpdateTableRequest const& request);

  virtual google::cloud::Idempotency DeleteTable(
      google::bigtable::admin::v2::DeleteTableRequest const& request);

  virtual google::cloud::Idempotency UndeleteTable(
      google::bigtable::admin::v2::UndeleteTableRequest const& request);

  virtual google::cloud::Idempotency CreateAuthorizedView(
      google::bigtable::admin::v2::CreateAuthorizedViewRequest const& request);

  virtual google::cloud::Idempotency ListAuthorizedViews(
      google::bigtable::admin::v2::ListAuthorizedViewsRequest request);

  virtual google::cloud::Idempotency GetAuthorizedView(
      google::bigtable::admin::v2::GetAuthorizedViewRequest const& request);

  virtual google::cloud::Idempotency UpdateAuthorizedView(
      google::bigtable::admin::v2::UpdateAuthorizedViewRequest const& request);

  virtual google::cloud::Idempotency DeleteAuthorizedView(
      google::bigtable::admin::v2::DeleteAuthorizedViewRequest const& request);

  virtual google::cloud::Idempotency ModifyColumnFamilies(
      google::bigtable::admin::v2::ModifyColumnFamiliesRequest const& request);

  virtual google::cloud::Idempotency DropRowRange(
      google::bigtable::admin::v2::DropRowRangeRequest const& request);

  virtual google::cloud::Idempotency GenerateConsistencyToken(
      google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&
          request);

  virtual google::cloud::Idempotency CheckConsistency(
      google::bigtable::admin::v2::CheckConsistencyRequest const& request);

  virtual google::cloud::Idempotency CreateBackup(
      google::bigtable::admin::v2::CreateBackupRequest const& request);

  virtual google::cloud::Idempotency GetBackup(
      google::bigtable::admin::v2::GetBackupRequest const& request);

  virtual google::cloud::Idempotency UpdateBackup(
      google::bigtable::admin::v2::UpdateBackupRequest const& request);

  virtual google::cloud::Idempotency DeleteBackup(
      google::bigtable::admin::v2::DeleteBackupRequest const& request);

  virtual google::cloud::Idempotency ListBackups(
      google::bigtable::admin::v2::ListBackupsRequest request);

  virtual google::cloud::Idempotency RestoreTable(
      google::bigtable::admin::v2::RestoreTableRequest const& request);

  virtual google::cloud::Idempotency CopyBackup(
      google::bigtable::admin::v2::CopyBackupRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);
};

std::unique_ptr<BigtableTableAdminConnectionIdempotencyPolicy>
MakeDefaultBigtableTableAdminConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_BIGTABLE_TABLE_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H
