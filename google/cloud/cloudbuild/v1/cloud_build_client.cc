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

#include "google/cloud/cloudbuild/v1/cloud_build_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace cloudbuild_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudBuildClient::CloudBuildClient(
    std::shared_ptr<CloudBuildConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
CloudBuildClient::~CloudBuildClient() = default;

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildClient::CreateBuild(
    std::string const& project_id,
    google::devtools::cloudbuild::v1::Build const& build, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::CreateBuildRequest request;
  request.set_project_id(project_id);
  *request.mutable_build() = build;
  return connection_->CreateBuild(request);
}

StatusOr<google::longrunning::Operation> CloudBuildClient::CreateBuild(
    NoAwaitTag, std::string const& project_id,
    google::devtools::cloudbuild::v1::Build const& build, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::CreateBuildRequest request;
  request.set_project_id(project_id);
  *request.mutable_build() = build;
  return connection_->CreateBuild(NoAwaitTag{}, request);
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildClient::CreateBuild(
    google::devtools::cloudbuild::v1::CreateBuildRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateBuild(request);
}

StatusOr<google::longrunning::Operation> CloudBuildClient::CreateBuild(
    NoAwaitTag,
    google::devtools::cloudbuild::v1::CreateBuildRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateBuild(NoAwaitTag{}, request);
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildClient::CreateBuild(google::longrunning::Operation const& operation,
                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateBuild(operation);
}

StatusOr<google::devtools::cloudbuild::v1::Build> CloudBuildClient::GetBuild(
    std::string const& project_id, std::string const& id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::GetBuildRequest request;
  request.set_project_id(project_id);
  request.set_id(id);
  return connection_->GetBuild(request);
}

StatusOr<google::devtools::cloudbuild::v1::Build> CloudBuildClient::GetBuild(
    google::devtools::cloudbuild::v1::GetBuildRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetBuild(request);
}

StreamRange<google::devtools::cloudbuild::v1::Build>
CloudBuildClient::ListBuilds(std::string const& project_id,
                             std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::ListBuildsRequest request;
  request.set_project_id(project_id);
  request.set_filter(filter);
  return connection_->ListBuilds(request);
}

StreamRange<google::devtools::cloudbuild::v1::Build>
CloudBuildClient::ListBuilds(
    google::devtools::cloudbuild::v1::ListBuildsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListBuilds(std::move(request));
}

StatusOr<google::devtools::cloudbuild::v1::Build> CloudBuildClient::CancelBuild(
    std::string const& project_id, std::string const& id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::CancelBuildRequest request;
  request.set_project_id(project_id);
  request.set_id(id);
  return connection_->CancelBuild(request);
}

StatusOr<google::devtools::cloudbuild::v1::Build> CloudBuildClient::CancelBuild(
    google::devtools::cloudbuild::v1::CancelBuildRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelBuild(request);
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildClient::RetryBuild(std::string const& project_id,
                             std::string const& id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::RetryBuildRequest request;
  request.set_project_id(project_id);
  request.set_id(id);
  return connection_->RetryBuild(request);
}

StatusOr<google::longrunning::Operation> CloudBuildClient::RetryBuild(
    NoAwaitTag, std::string const& project_id, std::string const& id,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::RetryBuildRequest request;
  request.set_project_id(project_id);
  request.set_id(id);
  return connection_->RetryBuild(NoAwaitTag{}, request);
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildClient::RetryBuild(
    google::devtools::cloudbuild::v1::RetryBuildRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RetryBuild(request);
}

StatusOr<google::longrunning::Operation> CloudBuildClient::RetryBuild(
    NoAwaitTag,
    google::devtools::cloudbuild::v1::RetryBuildRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RetryBuild(NoAwaitTag{}, request);
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildClient::RetryBuild(google::longrunning::Operation const& operation,
                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RetryBuild(operation);
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildClient::ApproveBuild(
    std::string const& name,
    google::devtools::cloudbuild::v1::ApprovalResult const& approval_result,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::ApproveBuildRequest request;
  request.set_name(name);
  *request.mutable_approval_result() = approval_result;
  return connection_->ApproveBuild(request);
}

StatusOr<google::longrunning::Operation> CloudBuildClient::ApproveBuild(
    NoAwaitTag, std::string const& name,
    google::devtools::cloudbuild::v1::ApprovalResult const& approval_result,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::ApproveBuildRequest request;
  request.set_name(name);
  *request.mutable_approval_result() = approval_result;
  return connection_->ApproveBuild(NoAwaitTag{}, request);
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildClient::ApproveBuild(
    google::devtools::cloudbuild::v1::ApproveBuildRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ApproveBuild(request);
}

StatusOr<google::longrunning::Operation> CloudBuildClient::ApproveBuild(
    NoAwaitTag,
    google::devtools::cloudbuild::v1::ApproveBuildRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ApproveBuild(NoAwaitTag{}, request);
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildClient::ApproveBuild(google::longrunning::Operation const& operation,
                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ApproveBuild(operation);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildClient::CreateBuildTrigger(
    std::string const& project_id,
    google::devtools::cloudbuild::v1::BuildTrigger const& trigger,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::CreateBuildTriggerRequest request;
  request.set_project_id(project_id);
  *request.mutable_trigger() = trigger;
  return connection_->CreateBuildTrigger(request);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildClient::CreateBuildTrigger(
    google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateBuildTrigger(request);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildClient::GetBuildTrigger(std::string const& project_id,
                                  std::string const& trigger_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::GetBuildTriggerRequest request;
  request.set_project_id(project_id);
  request.set_trigger_id(trigger_id);
  return connection_->GetBuildTrigger(request);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildClient::GetBuildTrigger(
    google::devtools::cloudbuild::v1::GetBuildTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetBuildTrigger(request);
}

StreamRange<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildClient::ListBuildTriggers(std::string const& project_id,
                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::ListBuildTriggersRequest request;
  request.set_project_id(project_id);
  return connection_->ListBuildTriggers(request);
}

StreamRange<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildClient::ListBuildTriggers(
    google::devtools::cloudbuild::v1::ListBuildTriggersRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListBuildTriggers(std::move(request));
}

Status CloudBuildClient::DeleteBuildTrigger(std::string const& project_id,
                                            std::string const& trigger_id,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest request;
  request.set_project_id(project_id);
  request.set_trigger_id(trigger_id);
  return connection_->DeleteBuildTrigger(request);
}

Status CloudBuildClient::DeleteBuildTrigger(
    google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteBuildTrigger(request);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildClient::UpdateBuildTrigger(
    std::string const& project_id, std::string const& trigger_id,
    google::devtools::cloudbuild::v1::BuildTrigger const& trigger,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest request;
  request.set_project_id(project_id);
  request.set_trigger_id(trigger_id);
  *request.mutable_trigger() = trigger;
  return connection_->UpdateBuildTrigger(request);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildClient::UpdateBuildTrigger(
    google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateBuildTrigger(request);
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildClient::RunBuildTrigger(
    std::string const& project_id, std::string const& trigger_id,
    google::devtools::cloudbuild::v1::RepoSource const& source, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::RunBuildTriggerRequest request;
  request.set_project_id(project_id);
  request.set_trigger_id(trigger_id);
  *request.mutable_source() = source;
  return connection_->RunBuildTrigger(request);
}

StatusOr<google::longrunning::Operation> CloudBuildClient::RunBuildTrigger(
    NoAwaitTag, std::string const& project_id, std::string const& trigger_id,
    google::devtools::cloudbuild::v1::RepoSource const& source, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::RunBuildTriggerRequest request;
  request.set_project_id(project_id);
  request.set_trigger_id(trigger_id);
  *request.mutable_source() = source;
  return connection_->RunBuildTrigger(NoAwaitTag{}, request);
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildClient::RunBuildTrigger(
    google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunBuildTrigger(request);
}

StatusOr<google::longrunning::Operation> CloudBuildClient::RunBuildTrigger(
    NoAwaitTag,
    google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunBuildTrigger(NoAwaitTag{}, request);
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildClient::RunBuildTrigger(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunBuildTrigger(operation);
}

StatusOr<google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>
CloudBuildClient::ReceiveTriggerWebhook(
    google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ReceiveTriggerWebhook(request);
}

future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
CloudBuildClient::CreateWorkerPool(
    std::string const& parent,
    google::devtools::cloudbuild::v1::WorkerPool const& worker_pool,
    std::string const& worker_pool_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::CreateWorkerPoolRequest request;
  request.set_parent(parent);
  *request.mutable_worker_pool() = worker_pool;
  request.set_worker_pool_id(worker_pool_id);
  return connection_->CreateWorkerPool(request);
}

StatusOr<google::longrunning::Operation> CloudBuildClient::CreateWorkerPool(
    NoAwaitTag, std::string const& parent,
    google::devtools::cloudbuild::v1::WorkerPool const& worker_pool,
    std::string const& worker_pool_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::CreateWorkerPoolRequest request;
  request.set_parent(parent);
  *request.mutable_worker_pool() = worker_pool;
  request.set_worker_pool_id(worker_pool_id);
  return connection_->CreateWorkerPool(NoAwaitTag{}, request);
}

future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
CloudBuildClient::CreateWorkerPool(
    google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkerPool(request);
}

StatusOr<google::longrunning::Operation> CloudBuildClient::CreateWorkerPool(
    NoAwaitTag,
    google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkerPool(NoAwaitTag{}, request);
}

future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
CloudBuildClient::CreateWorkerPool(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkerPool(operation);
}

StatusOr<google::devtools::cloudbuild::v1::WorkerPool>
CloudBuildClient::GetWorkerPool(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::GetWorkerPoolRequest request;
  request.set_name(name);
  return connection_->GetWorkerPool(request);
}

StatusOr<google::devtools::cloudbuild::v1::WorkerPool>
CloudBuildClient::GetWorkerPool(
    google::devtools::cloudbuild::v1::GetWorkerPoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetWorkerPool(request);
}

future<StatusOr<
    google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>>
CloudBuildClient::DeleteWorkerPool(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest request;
  request.set_name(name);
  return connection_->DeleteWorkerPool(request);
}

StatusOr<google::longrunning::Operation> CloudBuildClient::DeleteWorkerPool(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest request;
  request.set_name(name);
  return connection_->DeleteWorkerPool(NoAwaitTag{}, request);
}

future<StatusOr<
    google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>>
CloudBuildClient::DeleteWorkerPool(
    google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkerPool(request);
}

StatusOr<google::longrunning::Operation> CloudBuildClient::DeleteWorkerPool(
    NoAwaitTag,
    google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkerPool(NoAwaitTag{}, request);
}

future<StatusOr<
    google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>>
CloudBuildClient::DeleteWorkerPool(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkerPool(operation);
}

future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
CloudBuildClient::UpdateWorkerPool(
    google::devtools::cloudbuild::v1::WorkerPool const& worker_pool,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest request;
  *request.mutable_worker_pool() = worker_pool;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateWorkerPool(request);
}

StatusOr<google::longrunning::Operation> CloudBuildClient::UpdateWorkerPool(
    NoAwaitTag, google::devtools::cloudbuild::v1::WorkerPool const& worker_pool,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest request;
  *request.mutable_worker_pool() = worker_pool;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateWorkerPool(NoAwaitTag{}, request);
}

future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
CloudBuildClient::UpdateWorkerPool(
    google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkerPool(request);
}

StatusOr<google::longrunning::Operation> CloudBuildClient::UpdateWorkerPool(
    NoAwaitTag,
    google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkerPool(NoAwaitTag{}, request);
}

future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
CloudBuildClient::UpdateWorkerPool(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkerPool(operation);
}

StreamRange<google::devtools::cloudbuild::v1::WorkerPool>
CloudBuildClient::ListWorkerPools(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v1::ListWorkerPoolsRequest request;
  request.set_parent(parent);
  return connection_->ListWorkerPools(request);
}

StreamRange<google::devtools::cloudbuild::v1::WorkerPool>
CloudBuildClient::ListWorkerPools(
    google::devtools::cloudbuild::v1::ListWorkerPoolsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListWorkerPools(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v1
}  // namespace cloud
}  // namespace google
