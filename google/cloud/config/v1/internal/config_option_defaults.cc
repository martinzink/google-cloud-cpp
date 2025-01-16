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
// source: google/cloud/config/v1/config.proto

#include "google/cloud/config/v1/internal/config_option_defaults.h"
#include "google/cloud/config/v1/config_connection.h"
#include "google/cloud/config/v1/config_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace config_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ConfigDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_CONFIG_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_CONFIG_AUTHORITY", "config.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<config_v1::ConfigRetryPolicyOption>()) {
    options.set<config_v1::ConfigRetryPolicyOption>(
        config_v1::ConfigLimitedTimeRetryPolicy(std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<config_v1::ConfigBackoffPolicyOption>()) {
    options.set<config_v1::ConfigBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<config_v1::ConfigPollingPolicyOption>()) {
    options.set<config_v1::ConfigPollingPolicyOption>(
        GenericPollingPolicy<config_v1::ConfigRetryPolicyOption::Type,
                             config_v1::ConfigBackoffPolicyOption::Type>(
            options.get<config_v1::ConfigRetryPolicyOption>()->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<config_v1::ConfigConnectionIdempotencyPolicyOption>()) {
    options.set<config_v1::ConfigConnectionIdempotencyPolicyOption>(
        config_v1::MakeDefaultConfigConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace config_v1_internal
}  // namespace cloud
}  // namespace google
