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
// source: google/cloud/policytroubleshooter/iam/v3/troubleshooter.proto

#include "google/cloud/policytroubleshooter/iam/v3/internal/policy_troubleshooter_connection_impl.h"
#include "google/cloud/policytroubleshooter/iam/v3/internal/policy_troubleshooter_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace policytroubleshooter_iam_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<policytroubleshooter_iam_v3::PolicyTroubleshooterRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<policytroubleshooter_iam_v3::PolicyTroubleshooterRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<policytroubleshooter_iam_v3::
               PolicyTroubleshooterBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<policytroubleshooter_iam_v3::
                    PolicyTroubleshooterConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<policytroubleshooter_iam_v3::
               PolicyTroubleshooterConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

PolicyTroubleshooterConnectionImpl::PolicyTroubleshooterConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<
        policytroubleshooter_iam_v3_internal::PolicyTroubleshooterStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), PolicyTroubleshooterConnection::options())) {}

StatusOr<
    google::cloud::policytroubleshooter::iam::v3::TroubleshootIamPolicyResponse>
PolicyTroubleshooterConnectionImpl::TroubleshootIamPolicy(
    google::cloud::policytroubleshooter::iam::v3::
        TroubleshootIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TroubleshootIamPolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::policytroubleshooter::iam::v3::
                 TroubleshootIamPolicyRequest const& request) {
        return stub_->TroubleshootIamPolicy(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace policytroubleshooter_iam_v3_internal
}  // namespace cloud
}  // namespace google
