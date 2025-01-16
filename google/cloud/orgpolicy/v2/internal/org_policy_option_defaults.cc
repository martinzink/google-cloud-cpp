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
// source: google/cloud/orgpolicy/v2/orgpolicy.proto

#include "google/cloud/orgpolicy/v2/internal/org_policy_option_defaults.h"
#include "google/cloud/orgpolicy/v2/org_policy_connection.h"
#include "google/cloud/orgpolicy/v2/org_policy_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace orgpolicy_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options OrgPolicyDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_ORG_POLICY_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_ORG_POLICY_AUTHORITY", "orgpolicy.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<orgpolicy_v2::OrgPolicyRetryPolicyOption>()) {
    options.set<orgpolicy_v2::OrgPolicyRetryPolicyOption>(
        orgpolicy_v2::OrgPolicyLimitedTimeRetryPolicy(std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<orgpolicy_v2::OrgPolicyBackoffPolicyOption>()) {
    options.set<orgpolicy_v2::OrgPolicyBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options
           .has<orgpolicy_v2::OrgPolicyConnectionIdempotencyPolicyOption>()) {
    options.set<orgpolicy_v2::OrgPolicyConnectionIdempotencyPolicyOption>(
        orgpolicy_v2::MakeDefaultOrgPolicyConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace orgpolicy_v2_internal
}  // namespace cloud
}  // namespace google
