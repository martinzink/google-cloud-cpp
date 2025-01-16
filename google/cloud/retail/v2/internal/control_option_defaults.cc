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
// source: google/cloud/retail/v2/control_service.proto

#include "google/cloud/retail/v2/internal/control_option_defaults.h"
#include "google/cloud/retail/v2/control_connection.h"
#include "google/cloud/retail/v2/control_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ControlServiceDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_CONTROL_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_CONTROL_SERVICE_AUTHORITY", "retail.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<retail_v2::ControlServiceRetryPolicyOption>()) {
    options.set<retail_v2::ControlServiceRetryPolicyOption>(
        retail_v2::ControlServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<retail_v2::ControlServiceBackoffPolicyOption>()) {
    options.set<retail_v2::ControlServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options
           .has<retail_v2::ControlServiceConnectionIdempotencyPolicyOption>()) {
    options.set<retail_v2::ControlServiceConnectionIdempotencyPolicyOption>(
        retail_v2::MakeDefaultControlServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
