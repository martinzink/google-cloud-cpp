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
// source: generator/integration_tests/test.proto

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_GOLDEN_THING_ADMIN_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_GOLDEN_THING_ADMIN_OPTIONS_H

#include "generator/integration_tests/golden/v1/golden_thing_admin_connection.h"
#include "generator/integration_tests/golden/v1/golden_thing_admin_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Use with `google::cloud::Options` to configure the retry policy.
 *
 * @ingroup generator-integration_tests-golden-options
 */
struct GoldenThingAdminRetryPolicyOption {
  using Type = std::shared_ptr<GoldenThingAdminRetryPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the backoff policy.
 *
 * @ingroup generator-integration_tests-golden-options
 */
struct GoldenThingAdminBackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure which operations are retried.
 *
 * @ingroup generator-integration_tests-golden-options
 */
struct GoldenThingAdminConnectionIdempotencyPolicyOption {
  using Type = std::shared_ptr<GoldenThingAdminConnectionIdempotencyPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the long-running operations
 * polling policy.
 *
 * @ingroup generator-integration_tests-golden-options
 */
struct GoldenThingAdminPollingPolicyOption {
  using Type = std::shared_ptr<PollingPolicy>;
};

/**
 * The options applicable to GoldenThingAdmin.
 *
 * @ingroup generator-integration_tests-golden-options
 */
using GoldenThingAdminPolicyOptionList =
    OptionList<GoldenThingAdminRetryPolicyOption,
               GoldenThingAdminBackoffPolicyOption,
               GoldenThingAdminPollingPolicyOption,
               GoldenThingAdminConnectionIdempotencyPolicyOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_GOLDEN_THING_ADMIN_OPTIONS_H
