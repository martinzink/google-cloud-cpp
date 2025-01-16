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
// source: google/cloud/iap/v1/service.proto

#include "google/cloud/iap/v1/identity_aware_proxy_o_auth_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace iap_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

IdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy::
    ~IdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<IdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy>
IdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<
      IdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency
IdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy::ListBrands(
    google::cloud::iap::v1::ListBrandsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
IdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy::CreateBrand(
    google::cloud::iap::v1::CreateBrandRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy::GetBrand(
    google::cloud::iap::v1::GetBrandRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency IdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy::
    CreateIdentityAwareProxyClient(
        google::cloud::iap::v1::CreateIdentityAwareProxyClientRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy::
    ListIdentityAwareProxyClients(
        google::cloud::iap::v1::
            ListIdentityAwareProxyClientsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency IdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy::
    GetIdentityAwareProxyClient(
        google::cloud::iap::v1::GetIdentityAwareProxyClientRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency IdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy::
    ResetIdentityAwareProxyClientSecret(
        google::cloud::iap::v1::
            ResetIdentityAwareProxyClientSecretRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy::
    DeleteIdentityAwareProxyClient(
        google::cloud::iap::v1::DeleteIdentityAwareProxyClientRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<IdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy>
MakeDefaultIdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy() {
  return std::make_unique<
      IdentityAwareProxyOAuthServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_v1
}  // namespace cloud
}  // namespace google
