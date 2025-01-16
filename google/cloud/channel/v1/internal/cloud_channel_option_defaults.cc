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
// source: google/cloud/channel/v1/service.proto

#include "google/cloud/channel/v1/internal/cloud_channel_option_defaults.h"
#include "google/cloud/channel/v1/cloud_channel_connection.h"
#include "google/cloud/channel/v1/cloud_channel_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace channel_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options CloudChannelServiceDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_CLOUD_CHANNEL_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_CLOUD_CHANNEL_SERVICE_AUTHORITY",
      "cloudchannel.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<channel_v1::CloudChannelServiceRetryPolicyOption>()) {
    options.set<channel_v1::CloudChannelServiceRetryPolicyOption>(
        channel_v1::CloudChannelServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<channel_v1::CloudChannelServiceBackoffPolicyOption>()) {
    options.set<channel_v1::CloudChannelServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<channel_v1::CloudChannelServicePollingPolicyOption>()) {
    options.set<channel_v1::CloudChannelServicePollingPolicyOption>(
        GenericPollingPolicy<
            channel_v1::CloudChannelServiceRetryPolicyOption::Type,
            channel_v1::CloudChannelServiceBackoffPolicyOption::Type>(
            options.get<channel_v1::CloudChannelServiceRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          channel_v1::CloudChannelServiceConnectionIdempotencyPolicyOption>()) {
    options
        .set<channel_v1::CloudChannelServiceConnectionIdempotencyPolicyOption>(
            channel_v1::
                MakeDefaultCloudChannelServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1_internal
}  // namespace cloud
}  // namespace google
