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
// source: google/cloud/networksecurity/v1/network_security.proto

#include "google/cloud/networksecurity/v1/network_security_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace networksecurity_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

NetworkSecurityConnectionIdempotencyPolicy::
    ~NetworkSecurityConnectionIdempotencyPolicy() = default;

std::unique_ptr<NetworkSecurityConnectionIdempotencyPolicy>
NetworkSecurityConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<NetworkSecurityConnectionIdempotencyPolicy>(*this);
}

Idempotency
NetworkSecurityConnectionIdempotencyPolicy::ListAuthorizationPolicies(
    google::cloud::networksecurity::v1::
        ListAuthorizationPoliciesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::GetAuthorizationPolicy(
    google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
NetworkSecurityConnectionIdempotencyPolicy::CreateAuthorizationPolicy(
    google::cloud::networksecurity::v1::
        CreateAuthorizationPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
NetworkSecurityConnectionIdempotencyPolicy::UpdateAuthorizationPolicy(
    google::cloud::networksecurity::v1::
        UpdateAuthorizationPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
NetworkSecurityConnectionIdempotencyPolicy::DeleteAuthorizationPolicy(
    google::cloud::networksecurity::v1::
        DeleteAuthorizationPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::ListServerTlsPolicies(
    google::cloud::networksecurity::v1::
        ListServerTlsPoliciesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::GetServerTlsPolicy(
    google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::CreateServerTlsPolicy(
    google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::UpdateServerTlsPolicy(
    google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::DeleteServerTlsPolicy(
    google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::ListClientTlsPolicies(
    google::cloud::networksecurity::v1::
        ListClientTlsPoliciesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::GetClientTlsPolicy(
    google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::CreateClientTlsPolicy(
    google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::UpdateClientTlsPolicy(
    google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::DeleteClientTlsPolicy(
    google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkSecurityConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<NetworkSecurityConnectionIdempotencyPolicy>
MakeDefaultNetworkSecurityConnectionIdempotencyPolicy() {
  return std::make_unique<NetworkSecurityConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networksecurity_v1
}  // namespace cloud
}  // namespace google
