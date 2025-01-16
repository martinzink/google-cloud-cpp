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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_INSTANCE_ADMIN_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_INSTANCE_ADMIN_TRACING_CONNECTION_H

#include "google/cloud/spanner/admin/instance_admin_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class InstanceAdminTracingConnection
    : public spanner_admin::InstanceAdminConnection {
 public:
  ~InstanceAdminTracingConnection() override = default;

  explicit InstanceAdminTracingConnection(
      std::shared_ptr<spanner_admin::InstanceAdminConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::spanner::admin::instance::v1::InstanceConfig>
  ListInstanceConfigs(
      google::spanner::admin::instance::v1::ListInstanceConfigsRequest request)
      override;

  StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
  GetInstanceConfig(
      google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
          request) override;

  future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
  CreateInstanceConfig(
      google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateInstanceConfig(
      NoAwaitTag,
      google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
          request) override;

  future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
  CreateInstanceConfig(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
  UpdateInstanceConfig(
      google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateInstanceConfig(
      NoAwaitTag,
      google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
          request) override;

  future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
  UpdateInstanceConfig(
      google::longrunning::Operation const& operation) override;

  Status DeleteInstanceConfig(
      google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
          request) override;

  StreamRange<google::longrunning::Operation> ListInstanceConfigOperations(
      google::spanner::admin::instance::v1::ListInstanceConfigOperationsRequest
          request) override;

  StreamRange<google::spanner::admin::instance::v1::Instance> ListInstances(
      google::spanner::admin::instance::v1::ListInstancesRequest request)
      override;

  StreamRange<google::spanner::admin::instance::v1::InstancePartition>
  ListInstancePartitions(
      google::spanner::admin::instance::v1::ListInstancePartitionsRequest
          request) override;

  StatusOr<google::spanner::admin::instance::v1::Instance> GetInstance(
      google::spanner::admin::instance::v1::GetInstanceRequest const& request)
      override;

  future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  CreateInstance(
      google::spanner::admin::instance::v1::CreateInstanceRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateInstance(
      NoAwaitTag,
      google::spanner::admin::instance::v1::CreateInstanceRequest const&
          request) override;

  future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  CreateInstance(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  UpdateInstance(
      google::spanner::admin::instance::v1::UpdateInstanceRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateInstance(
      NoAwaitTag,
      google::spanner::admin::instance::v1::UpdateInstanceRequest const&
          request) override;

  future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  UpdateInstance(google::longrunning::Operation const& operation) override;

  Status DeleteInstance(
      google::spanner::admin::instance::v1::DeleteInstanceRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::spanner::admin::instance::v1::InstancePartition>
  GetInstancePartition(
      google::spanner::admin::instance::v1::GetInstancePartitionRequest const&
          request) override;

  future<StatusOr<google::spanner::admin::instance::v1::InstancePartition>>
  CreateInstancePartition(
      google::spanner::admin::instance::v1::
          CreateInstancePartitionRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateInstancePartition(
      NoAwaitTag, google::spanner::admin::instance::v1::
                      CreateInstancePartitionRequest const& request) override;

  future<StatusOr<google::spanner::admin::instance::v1::InstancePartition>>
  CreateInstancePartition(
      google::longrunning::Operation const& operation) override;

  Status DeleteInstancePartition(
      google::spanner::admin::instance::v1::
          DeleteInstancePartitionRequest const& request) override;

  future<StatusOr<google::spanner::admin::instance::v1::InstancePartition>>
  UpdateInstancePartition(
      google::spanner::admin::instance::v1::
          UpdateInstancePartitionRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateInstancePartition(
      NoAwaitTag, google::spanner::admin::instance::v1::
                      UpdateInstancePartitionRequest const& request) override;

  future<StatusOr<google::spanner::admin::instance::v1::InstancePartition>>
  UpdateInstancePartition(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::longrunning::Operation> ListInstancePartitionOperations(
      google::spanner::admin::instance::v1::
          ListInstancePartitionOperationsRequest request) override;

  future<StatusOr<google::spanner::admin::instance::v1::MoveInstanceResponse>>
  MoveInstance(google::spanner::admin::instance::v1::MoveInstanceRequest const&
                   request) override;

  StatusOr<google::longrunning::Operation> MoveInstance(
      NoAwaitTag,
      google::spanner::admin::instance::v1::MoveInstanceRequest const& request)
      override;

  future<StatusOr<google::spanner::admin::instance::v1::MoveInstanceResponse>>
  MoveInstance(google::longrunning::Operation const& operation) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<spanner_admin::InstanceAdminConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<spanner_admin::InstanceAdminConnection>
MakeInstanceAdminTracingConnection(
    std::shared_ptr<spanner_admin::InstanceAdminConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_INSTANCE_ADMIN_TRACING_CONNECTION_H
