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
// source: google/devtools/cloudbuild/v1/cloudbuild.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V1_INTERNAL_CLOUD_BUILD_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V1_INTERNAL_CLOUD_BUILD_CONNECTION_IMPL_H

#include "google/cloud/cloudbuild/v1/cloud_build_connection.h"
#include "google/cloud/cloudbuild/v1/cloud_build_connection_idempotency_policy.h"
#include "google/cloud/cloudbuild/v1/cloud_build_options.h"
#include "google/cloud/cloudbuild/v1/internal/cloud_build_retry_traits.h"
#include "google/cloud/cloudbuild/v1/internal/cloud_build_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace cloudbuild_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudBuildConnectionImpl : public cloudbuild_v1::CloudBuildConnection {
 public:
  ~CloudBuildConnectionImpl() override = default;

  CloudBuildConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<cloudbuild_v1_internal::CloudBuildStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> CreateBuild(
      google::devtools::cloudbuild::v1::CreateBuildRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateBuild(
      NoAwaitTag,
      google::devtools::cloudbuild::v1::CreateBuildRequest const& request)
      override;

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> CreateBuild(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::devtools::cloudbuild::v1::Build> GetBuild(
      google::devtools::cloudbuild::v1::GetBuildRequest const& request)
      override;

  StreamRange<google::devtools::cloudbuild::v1::Build> ListBuilds(
      google::devtools::cloudbuild::v1::ListBuildsRequest request) override;

  StatusOr<google::devtools::cloudbuild::v1::Build> CancelBuild(
      google::devtools::cloudbuild::v1::CancelBuildRequest const& request)
      override;

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> RetryBuild(
      google::devtools::cloudbuild::v1::RetryBuildRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RetryBuild(
      NoAwaitTag,
      google::devtools::cloudbuild::v1::RetryBuildRequest const& request)
      override;

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> RetryBuild(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> ApproveBuild(
      google::devtools::cloudbuild::v1::ApproveBuildRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ApproveBuild(
      NoAwaitTag,
      google::devtools::cloudbuild::v1::ApproveBuildRequest const& request)
      override;

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> ApproveBuild(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::devtools::cloudbuild::v1::BuildTrigger> CreateBuildTrigger(
      google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v1::BuildTrigger> GetBuildTrigger(
      google::devtools::cloudbuild::v1::GetBuildTriggerRequest const& request)
      override;

  StreamRange<google::devtools::cloudbuild::v1::BuildTrigger> ListBuildTriggers(
      google::devtools::cloudbuild::v1::ListBuildTriggersRequest request)
      override;

  Status DeleteBuildTrigger(
      google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v1::BuildTrigger> UpdateBuildTrigger(
      google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
          request) override;

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> RunBuildTrigger(
      google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RunBuildTrigger(
      NoAwaitTag,
      google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request)
      override;

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> RunBuildTrigger(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>
  ReceiveTriggerWebhook(
      google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
          request) override;

  future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
  CreateWorkerPool(
      google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateWorkerPool(
      NoAwaitTag,
      google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request)
      override;

  future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
  CreateWorkerPool(google::longrunning::Operation const& operation) override;

  StatusOr<google::devtools::cloudbuild::v1::WorkerPool> GetWorkerPool(
      google::devtools::cloudbuild::v1::GetWorkerPoolRequest const& request)
      override;

  future<StatusOr<
      google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>>
  DeleteWorkerPool(
      google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteWorkerPool(
      NoAwaitTag,
      google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request)
      override;

  future<StatusOr<
      google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>>
  DeleteWorkerPool(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
  UpdateWorkerPool(
      google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateWorkerPool(
      NoAwaitTag,
      google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request)
      override;

  future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
  UpdateWorkerPool(google::longrunning::Operation const& operation) override;

  StreamRange<google::devtools::cloudbuild::v1::WorkerPool> ListWorkerPools(
      google::devtools::cloudbuild::v1::ListWorkerPoolsRequest request)
      override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<cloudbuild_v1_internal::CloudBuildStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V1_INTERNAL_CLOUD_BUILD_CONNECTION_IMPL_H
