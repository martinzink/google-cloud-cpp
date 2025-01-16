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
// source: google/cloud/discoveryengine/v1/site_search_engine_service.proto

#include "google/cloud/discoveryengine/v1/internal/site_search_engine_option_defaults.h"
#include "google/cloud/discoveryengine/v1/site_search_engine_connection.h"
#include "google/cloud/discoveryengine/v1/site_search_engine_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options SiteSearchEngineServiceDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options),
      "GOOGLE_CLOUD_CPP_SITE_SEARCH_ENGINE_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_SITE_SEARCH_ENGINE_SERVICE_AUTHORITY",
      "discoveryengine.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<
          discoveryengine_v1::SiteSearchEngineServiceRetryPolicyOption>()) {
    options.set<discoveryengine_v1::SiteSearchEngineServiceRetryPolicyOption>(
        discoveryengine_v1::SiteSearchEngineServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<
          discoveryengine_v1::SiteSearchEngineServiceBackoffPolicyOption>()) {
    options.set<discoveryengine_v1::SiteSearchEngineServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<
          discoveryengine_v1::SiteSearchEngineServicePollingPolicyOption>()) {
    options.set<discoveryengine_v1::SiteSearchEngineServicePollingPolicyOption>(
        GenericPollingPolicy<
            discoveryengine_v1::SiteSearchEngineServiceRetryPolicyOption::Type,
            discoveryengine_v1::SiteSearchEngineServiceBackoffPolicyOption::
                Type>(
            options
                .get<discoveryengine_v1::
                         SiteSearchEngineServiceRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          discoveryengine_v1::
              SiteSearchEngineServiceConnectionIdempotencyPolicyOption>()) {
    options.set<discoveryengine_v1::
                    SiteSearchEngineServiceConnectionIdempotencyPolicyOption>(
        discoveryengine_v1::
            MakeDefaultSiteSearchEngineServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
