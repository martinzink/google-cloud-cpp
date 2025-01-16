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
// source: google/cloud/compute/instant_snapshots/v1/instant_snapshots.proto

#include "google/cloud/compute/instant_snapshots/v1/internal/instant_snapshots_option_defaults.h"
#include "google/cloud/compute/instant_snapshots/v1/instant_snapshots_connection.h"
#include "google/cloud/compute/instant_snapshots/v1/instant_snapshots_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_instant_snapshots_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options InstantSnapshotsDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_INSTANT_SNAPSHOTS_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_INSTANT_SNAPSHOTS_AUTHORITY", "compute.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<
          compute_instant_snapshots_v1::InstantSnapshotsRetryPolicyOption>()) {
    options.set<
        compute_instant_snapshots_v1::InstantSnapshotsRetryPolicyOption>(
        compute_instant_snapshots_v1::InstantSnapshotsLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<compute_instant_snapshots_v1::
                       InstantSnapshotsBackoffPolicyOption>()) {
    options
        .set<compute_instant_snapshots_v1::InstantSnapshotsBackoffPolicyOption>(
            ExponentialBackoffPolicy(
                std::chrono::seconds(0), std::chrono::seconds(1),
                std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
                .clone());
  }
  if (!options.has<compute_instant_snapshots_v1::
                       InstantSnapshotsPollingPolicyOption>()) {
    options
        .set<compute_instant_snapshots_v1::InstantSnapshotsPollingPolicyOption>(
            GenericPollingPolicy<compute_instant_snapshots_v1::
                                     InstantSnapshotsRetryPolicyOption::Type,
                                 compute_instant_snapshots_v1::
                                     InstantSnapshotsBackoffPolicyOption::Type>(
                options
                    .get<compute_instant_snapshots_v1::
                             InstantSnapshotsRetryPolicyOption>()
                    ->clone(),
                ExponentialBackoffPolicy(std::chrono::seconds(1),
                                         std::chrono::minutes(5),
                                         kBackoffScaling)
                    .clone())
                .clone());
  }
  if (!options.has<compute_instant_snapshots_v1::
                       InstantSnapshotsConnectionIdempotencyPolicyOption>()) {
    options.set<compute_instant_snapshots_v1::
                    InstantSnapshotsConnectionIdempotencyPolicyOption>(
        compute_instant_snapshots_v1::
            MakeDefaultInstantSnapshotsConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instant_snapshots_v1_internal
}  // namespace cloud
}  // namespace google
