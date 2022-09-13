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
// source: google/storagetransfer/v1/transfer.proto

#include "google/cloud/storagetransfer/internal/storage_transfer_auth_decorator.h"
#include <google/storagetransfer/v1/transfer.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace storagetransfer_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageTransferServiceAuth::StorageTransferServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<StorageTransferServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::storagetransfer::v1::GoogleServiceAccount>
StorageTransferServiceAuth::GetGoogleServiceAccount(
    grpc::ClientContext& context,
    google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetGoogleServiceAccount(context, request);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceAuth::CreateTransferJob(
    grpc::ClientContext& context,
    google::storagetransfer::v1::CreateTransferJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateTransferJob(context, request);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceAuth::UpdateTransferJob(
    grpc::ClientContext& context,
    google::storagetransfer::v1::UpdateTransferJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateTransferJob(context, request);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceAuth::GetTransferJob(
    grpc::ClientContext& context,
    google::storagetransfer::v1::GetTransferJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTransferJob(context, request);
}

StatusOr<google::storagetransfer::v1::ListTransferJobsResponse>
StorageTransferServiceAuth::ListTransferJobs(
    grpc::ClientContext& context,
    google::storagetransfer::v1::ListTransferJobsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTransferJobs(context, request);
}

Status StorageTransferServiceAuth::PauseTransferOperation(
    grpc::ClientContext& context,
    google::storagetransfer::v1::PauseTransferOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->PauseTransferOperation(context, request);
}

Status StorageTransferServiceAuth::ResumeTransferOperation(
    grpc::ClientContext& context,
    google::storagetransfer::v1::ResumeTransferOperationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ResumeTransferOperation(context, request);
}

future<StatusOr<google::longrunning::Operation>>
StorageTransferServiceAuth::AsyncRunTransferJob(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::storagetransfer::v1::RunTransferJobRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRunTransferJob(cq, *std::move(context), request);
      });
}

Status StorageTransferServiceAuth::DeleteTransferJob(
    grpc::ClientContext& context,
    google::storagetransfer::v1::DeleteTransferJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteTransferJob(context, request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceAuth::CreateAgentPool(
    grpc::ClientContext& context,
    google::storagetransfer::v1::CreateAgentPoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateAgentPool(context, request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceAuth::UpdateAgentPool(
    grpc::ClientContext& context,
    google::storagetransfer::v1::UpdateAgentPoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateAgentPool(context, request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceAuth::GetAgentPool(
    grpc::ClientContext& context,
    google::storagetransfer::v1::GetAgentPoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAgentPool(context, request);
}

StatusOr<google::storagetransfer::v1::ListAgentPoolsResponse>
StorageTransferServiceAuth::ListAgentPools(
    grpc::ClientContext& context,
    google::storagetransfer::v1::ListAgentPoolsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAgentPools(context, request);
}

Status StorageTransferServiceAuth::DeleteAgentPool(
    grpc::ClientContext& context,
    google::storagetransfer::v1::DeleteAgentPoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteAgentPool(context, request);
}

future<StatusOr<google::longrunning::Operation>>
StorageTransferServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> StorageTransferServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer_internal
}  // namespace cloud
}  // namespace google
