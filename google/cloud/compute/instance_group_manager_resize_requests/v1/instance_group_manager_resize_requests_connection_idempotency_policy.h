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
// source:
// google/cloud/compute/instance_group_manager_resize_requests/v1/instance_group_manager_resize_requests.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_V1_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_V1_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/instance_group_manager_resize_requests/v1/instance_group_manager_resize_requests.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_group_manager_resize_requests_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstanceGroupManagerResizeRequestsConnectionIdempotencyPolicy {
 public:
  virtual ~InstanceGroupManagerResizeRequestsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<
      InstanceGroupManagerResizeRequestsConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency Cancel(
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          CancelRequest const& request);

  virtual google::cloud::Idempotency DeleteInstanceGroupManagerResizeRequest(
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          DeleteInstanceGroupManagerResizeRequestRequest const& request);

  virtual google::cloud::Idempotency GetInstanceGroupManagerResizeRequest(
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          GetInstanceGroupManagerResizeRequestRequest const& request);

  virtual google::cloud::Idempotency InsertInstanceGroupManagerResizeRequest(
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          InsertInstanceGroupManagerResizeRequestRequest const& request);

  virtual google::cloud::Idempotency ListInstanceGroupManagerResizeRequests(
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          ListInstanceGroupManagerResizeRequestsRequest request);
};

std::unique_ptr<InstanceGroupManagerResizeRequestsConnectionIdempotencyPolicy>
MakeDefaultInstanceGroupManagerResizeRequestsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_group_manager_resize_requests_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_V1_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_CONNECTION_IDEMPOTENCY_POLICY_H
