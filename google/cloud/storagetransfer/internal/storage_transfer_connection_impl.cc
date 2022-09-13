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

#include "google/cloud/storagetransfer/internal/storage_transfer_connection_impl.h"
#include "google/cloud/storagetransfer/internal/storage_transfer_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace storagetransfer_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageTransferServiceConnectionImpl::StorageTransferServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<storagetransfer_internal::StorageTransferServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), StorageTransferServiceConnection::options())) {}

StatusOr<google::storagetransfer::v1::GoogleServiceAccount>
StorageTransferServiceConnectionImpl::GetGoogleServiceAccount(
    google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetGoogleServiceAccount(request),
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
                 request) {
        return stub_->GetGoogleServiceAccount(context, request);
      },
      request, __func__);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceConnectionImpl::CreateTransferJob(
    google::storagetransfer::v1::CreateTransferJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateTransferJob(request),
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::CreateTransferJobRequest const&
                 request) {
        return stub_->CreateTransferJob(context, request);
      },
      request, __func__);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceConnectionImpl::UpdateTransferJob(
    google::storagetransfer::v1::UpdateTransferJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateTransferJob(request),
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::UpdateTransferJobRequest const&
                 request) {
        return stub_->UpdateTransferJob(context, request);
      },
      request, __func__);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceConnectionImpl::GetTransferJob(
    google::storagetransfer::v1::GetTransferJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetTransferJob(request),
      [this](
          grpc::ClientContext& context,
          google::storagetransfer::v1::GetTransferJobRequest const& request) {
        return stub_->GetTransferJob(context, request);
      },
      request, __func__);
}

StreamRange<google::storagetransfer::v1::TransferJob>
StorageTransferServiceConnectionImpl::ListTransferJobs(
    google::storagetransfer::v1::ListTransferJobsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<storagetransfer::StorageTransferServiceRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListTransferJobs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::storagetransfer::v1::TransferJob>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::storagetransfer::v1::ListTransferJobsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::storagetransfer::v1::ListTransferJobsRequest const&
                       request) {
              return stub->ListTransferJobs(context, request);
            },
            r, function_name);
      },
      [](google::storagetransfer::v1::ListTransferJobsResponse r) {
        std::vector<google::storagetransfer::v1::TransferJob> result(
            r.transfer_jobs().size());
        auto& messages = *r.mutable_transfer_jobs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

Status StorageTransferServiceConnectionImpl::PauseTransferOperation(
    google::storagetransfer::v1::PauseTransferOperationRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->PauseTransferOperation(request),
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::PauseTransferOperationRequest const&
                 request) {
        return stub_->PauseTransferOperation(context, request);
      },
      request, __func__);
}

Status StorageTransferServiceConnectionImpl::ResumeTransferOperation(
    google::storagetransfer::v1::ResumeTransferOperationRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->ResumeTransferOperation(request),
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::ResumeTransferOperationRequest const&
                 request) {
        return stub_->ResumeTransferOperation(context, request);
      },
      request, __func__);
}

future<StatusOr<google::storagetransfer::v1::TransferOperation>>
StorageTransferServiceConnectionImpl::RunTransferJob(
    google::storagetransfer::v1::RunTransferJobRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::storagetransfer::v1::TransferOperation>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::storagetransfer::v1::RunTransferJobRequest const& request) {
        return stub->AsyncRunTransferJob(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::storagetransfer::v1::TransferOperation>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->RunTransferJob(request), polling_policy(),
      __func__);
}

Status StorageTransferServiceConnectionImpl::DeleteTransferJob(
    google::storagetransfer::v1::DeleteTransferJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteTransferJob(request),
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::DeleteTransferJobRequest const&
                 request) {
        return stub_->DeleteTransferJob(context, request);
      },
      request, __func__);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceConnectionImpl::CreateAgentPool(
    google::storagetransfer::v1::CreateAgentPoolRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateAgentPool(request),
      [this](
          grpc::ClientContext& context,
          google::storagetransfer::v1::CreateAgentPoolRequest const& request) {
        return stub_->CreateAgentPool(context, request);
      },
      request, __func__);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceConnectionImpl::UpdateAgentPool(
    google::storagetransfer::v1::UpdateAgentPoolRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateAgentPool(request),
      [this](
          grpc::ClientContext& context,
          google::storagetransfer::v1::UpdateAgentPoolRequest const& request) {
        return stub_->UpdateAgentPool(context, request);
      },
      request, __func__);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceConnectionImpl::GetAgentPool(
    google::storagetransfer::v1::GetAgentPoolRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetAgentPool(request),
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::GetAgentPoolRequest const& request) {
        return stub_->GetAgentPool(context, request);
      },
      request, __func__);
}

StreamRange<google::storagetransfer::v1::AgentPool>
StorageTransferServiceConnectionImpl::ListAgentPools(
    google::storagetransfer::v1::ListAgentPoolsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<storagetransfer::StorageTransferServiceRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListAgentPools(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::storagetransfer::v1::AgentPool>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::storagetransfer::v1::ListAgentPoolsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::storagetransfer::v1::ListAgentPoolsRequest const&
                       request) {
              return stub->ListAgentPools(context, request);
            },
            r, function_name);
      },
      [](google::storagetransfer::v1::ListAgentPoolsResponse r) {
        std::vector<google::storagetransfer::v1::AgentPool> result(
            r.agent_pools().size());
        auto& messages = *r.mutable_agent_pools();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

Status StorageTransferServiceConnectionImpl::DeleteAgentPool(
    google::storagetransfer::v1::DeleteAgentPoolRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteAgentPool(request),
      [this](
          grpc::ClientContext& context,
          google::storagetransfer::v1::DeleteAgentPoolRequest const& request) {
        return stub_->DeleteAgentPool(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer_internal
}  // namespace cloud
}  // namespace google
