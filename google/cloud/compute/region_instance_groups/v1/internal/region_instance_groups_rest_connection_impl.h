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
// source:
// google/cloud/compute/region_instance_groups/v1/region_instance_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUPS_V1_INTERNAL_REGION_INSTANCE_GROUPS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUPS_V1_INTERNAL_REGION_INSTANCE_GROUPS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/region_instance_groups/v1/internal/region_instance_groups_rest_stub.h"
#include "google/cloud/compute/region_instance_groups/v1/internal/region_instance_groups_retry_traits.h"
#include "google/cloud/compute/region_instance_groups/v1/region_instance_groups_connection.h"
#include "google/cloud/compute/region_instance_groups/v1/region_instance_groups_connection_idempotency_policy.h"
#include "google/cloud/compute/region_instance_groups/v1/region_instance_groups_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_instance_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionInstanceGroupsRestConnectionImpl
    : public compute_region_instance_groups_v1::RegionInstanceGroupsConnection {
 public:
  ~RegionInstanceGroupsRestConnectionImpl() override = default;

  RegionInstanceGroupsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_region_instance_groups_v1_internal::
                          RegionInstanceGroupsRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::cpp::compute::v1::InstanceGroup> GetInstanceGroup(
      google::cloud::cpp::compute::region_instance_groups::v1::
          GetInstanceGroupRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::InstanceGroup>
  ListRegionInstanceGroups(
      google::cloud::cpp::compute::region_instance_groups::v1::
          ListRegionInstanceGroupsRequest request) override;

  StreamRange<google::cloud::cpp::compute::v1::InstanceWithNamedPorts>
  ListInstances(google::cloud::cpp::compute::region_instance_groups::v1::
                    ListInstancesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetNamedPorts(
      google::cloud::cpp::compute::region_instance_groups::v1::
          SetNamedPortsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetNamedPorts(
      NoAwaitTag, google::cloud::cpp::compute::region_instance_groups::v1::
                      SetNamedPortsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetNamedPorts(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<
      compute_region_instance_groups_v1::RegionInstanceGroupsRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_region_instance_groups_v1::
                 RegionInstanceGroupsRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_region_instance_groups_v1::
                 RegionInstanceGroupsBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<compute_region_instance_groups_v1::
                             RegionInstanceGroupsConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_region_instance_groups_v1::
                 RegionInstanceGroupsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_region_instance_groups_v1::
                 RegionInstanceGroupsPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<
      compute_region_instance_groups_v1_internal::RegionInstanceGroupsRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_groups_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUPS_V1_INTERNAL_REGION_INSTANCE_GROUPS_REST_CONNECTION_IMPL_H
