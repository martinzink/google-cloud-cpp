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
// source: google/cloud/networkconnectivity/v1/policy_based_routing.proto

#include "google/cloud/networkconnectivity/v1/policy_based_routing_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace networkconnectivity_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

PolicyBasedRoutingServiceConnectionIdempotencyPolicy::
    ~PolicyBasedRoutingServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<PolicyBasedRoutingServiceConnectionIdempotencyPolicy>
PolicyBasedRoutingServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<PolicyBasedRoutingServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency
PolicyBasedRoutingServiceConnectionIdempotencyPolicy::ListPolicyBasedRoutes(
    google::cloud::networkconnectivity::v1::
        ListPolicyBasedRoutesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
PolicyBasedRoutingServiceConnectionIdempotencyPolicy::GetPolicyBasedRoute(
    google::cloud::networkconnectivity::v1::GetPolicyBasedRouteRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
PolicyBasedRoutingServiceConnectionIdempotencyPolicy::CreatePolicyBasedRoute(
    google::cloud::networkconnectivity::v1::
        CreatePolicyBasedRouteRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
PolicyBasedRoutingServiceConnectionIdempotencyPolicy::DeletePolicyBasedRoute(
    google::cloud::networkconnectivity::v1::
        DeletePolicyBasedRouteRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PolicyBasedRoutingServiceConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency PolicyBasedRoutingServiceConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency PolicyBasedRoutingServiceConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency PolicyBasedRoutingServiceConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
PolicyBasedRoutingServiceConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
PolicyBasedRoutingServiceConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency PolicyBasedRoutingServiceConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
PolicyBasedRoutingServiceConnectionIdempotencyPolicy::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
PolicyBasedRoutingServiceConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<PolicyBasedRoutingServiceConnectionIdempotencyPolicy>
MakeDefaultPolicyBasedRoutingServiceConnectionIdempotencyPolicy() {
  return std::make_unique<
      PolicyBasedRoutingServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkconnectivity_v1
}  // namespace cloud
}  // namespace google
