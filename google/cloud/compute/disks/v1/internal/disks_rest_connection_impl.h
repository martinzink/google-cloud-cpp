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
// source: google/cloud/compute/disks/v1/disks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISKS_V1_INTERNAL_DISKS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISKS_V1_INTERNAL_DISKS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/disks/v1/disks_connection.h"
#include "google/cloud/compute/disks/v1/disks_connection_idempotency_policy.h"
#include "google/cloud/compute/disks/v1/disks_options.h"
#include "google/cloud/compute/disks/v1/internal/disks_rest_stub.h"
#include "google/cloud/compute/disks/v1/internal/disks_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_disks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DisksRestConnectionImpl : public compute_disks_v1::DisksConnection {
 public:
  ~DisksRestConnectionImpl() override = default;

  DisksRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_disks_v1_internal::DisksRestStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddResourcePolicies(
      google::cloud::cpp::compute::disks::v1::AddResourcePoliciesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AddResourcePolicies(
      NoAwaitTag,
      google::cloud::cpp::compute::disks::v1::AddResourcePoliciesRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddResourcePolicies(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<
      std::pair<std::string, google::cloud::cpp::compute::v1::DisksScopedList>>
  AggregatedListDisks(
      google::cloud::cpp::compute::disks::v1::AggregatedListDisksRequest
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> BulkInsert(
      google::cloud::cpp::compute::disks::v1::BulkInsertRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> BulkInsert(
      NoAwaitTag,
      google::cloud::cpp::compute::disks::v1::BulkInsertRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> BulkInsert(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> CreateSnapshot(
      google::cloud::cpp::compute::disks::v1::CreateSnapshotRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> CreateSnapshot(
      NoAwaitTag,
      google::cloud::cpp::compute::disks::v1::CreateSnapshotRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> CreateSnapshot(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteDisk(
      google::cloud::cpp::compute::disks::v1::DeleteDiskRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteDisk(
      NoAwaitTag,
      google::cloud::cpp::compute::disks::v1::DeleteDiskRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteDisk(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::Disk> GetDisk(
      google::cloud::cpp::compute::disks::v1::GetDiskRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::disks::v1::GetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertDisk(
      google::cloud::cpp::compute::disks::v1::InsertDiskRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertDisk(
      NoAwaitTag,
      google::cloud::cpp::compute::disks::v1::InsertDiskRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertDisk(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::Disk> ListDisks(
      google::cloud::cpp::compute::disks::v1::ListDisksRequest request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveResourcePolicies(
      google::cloud::cpp::compute::disks::v1::
          RemoveResourcePoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> RemoveResourcePolicies(
      NoAwaitTag, google::cloud::cpp::compute::disks::v1::
                      RemoveResourcePoliciesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveResourcePolicies(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Resize(
      google::cloud::cpp::compute::disks::v1::ResizeRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Resize(
      NoAwaitTag,
      google::cloud::cpp::compute::disks::v1::ResizeRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Resize(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::disks::v1::SetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::disks::v1::SetLabelsRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      NoAwaitTag,
      google::cloud::cpp::compute::disks::v1::SetLabelsRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StartAsyncReplication(
      google::cloud::cpp::compute::disks::v1::
          StartAsyncReplicationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> StartAsyncReplication(
      NoAwaitTag, google::cloud::cpp::compute::disks::v1::
                      StartAsyncReplicationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StartAsyncReplication(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StopAsyncReplication(
      google::cloud::cpp::compute::disks::v1::StopAsyncReplicationRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> StopAsyncReplication(
      NoAwaitTag,
      google::cloud::cpp::compute::disks::v1::StopAsyncReplicationRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StopAsyncReplication(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StopGroupAsyncReplication(
      google::cloud::cpp::compute::disks::v1::
          StopGroupAsyncReplicationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  StopGroupAsyncReplication(
      NoAwaitTag, google::cloud::cpp::compute::disks::v1::
                      StopGroupAsyncReplicationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StopGroupAsyncReplication(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(
      google::cloud::cpp::compute::disks::v1::TestIamPermissionsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateDisk(
      google::cloud::cpp::compute::disks::v1::UpdateDiskRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateDisk(
      NoAwaitTag,
      google::cloud::cpp::compute::disks::v1::UpdateDiskRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateDisk(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<compute_disks_v1::DisksRetryPolicy> retry_policy(
      Options const& options) {
    return options.get<compute_disks_v1::DisksRetryPolicyOption>()->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options.get<compute_disks_v1::DisksBackoffPolicyOption>()->clone();
  }

  static std::unique_ptr<compute_disks_v1::DisksConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_disks_v1::DisksConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options.get<compute_disks_v1::DisksPollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_disks_v1_internal::DisksRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_disks_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISKS_V1_INTERNAL_DISKS_REST_CONNECTION_IMPL_H
