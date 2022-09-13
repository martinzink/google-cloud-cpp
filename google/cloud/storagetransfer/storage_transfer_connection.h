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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_STORAGE_TRANSFER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_STORAGE_TRANSFER_CONNECTION_H

#include "google/cloud/storagetransfer/internal/storage_transfer_retry_traits.h"
#include "google/cloud/storagetransfer/internal/storage_transfer_stub.h"
#include "google/cloud/storagetransfer/storage_transfer_connection_idempotency_policy.h"
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
namespace storagetransfer {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using StorageTransferServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        storagetransfer_internal::StorageTransferServiceRetryTraits>;

using StorageTransferServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        storagetransfer_internal::StorageTransferServiceRetryTraits>;

using StorageTransferServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        storagetransfer_internal::StorageTransferServiceRetryTraits>;

/**
 * The `StorageTransferServiceConnection` object for
 * `StorageTransferServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `StorageTransferServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `StorageTransferServiceClient`.
 *
 * To create a concrete instance, see `MakeStorageTransferServiceConnection()`.
 *
 * For mocking, see
 * `storagetransfer_mocks::MockStorageTransferServiceConnection`.
 */
class StorageTransferServiceConnection {
 public:
  virtual ~StorageTransferServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::storagetransfer::v1::GoogleServiceAccount>
  GetGoogleServiceAccount(
      google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
          request);

  virtual StatusOr<google::storagetransfer::v1::TransferJob> CreateTransferJob(
      google::storagetransfer::v1::CreateTransferJobRequest const& request);

  virtual StatusOr<google::storagetransfer::v1::TransferJob> UpdateTransferJob(
      google::storagetransfer::v1::UpdateTransferJobRequest const& request);

  virtual StatusOr<google::storagetransfer::v1::TransferJob> GetTransferJob(
      google::storagetransfer::v1::GetTransferJobRequest const& request);

  virtual StreamRange<google::storagetransfer::v1::TransferJob>
  ListTransferJobs(
      google::storagetransfer::v1::ListTransferJobsRequest request);

  virtual Status PauseTransferOperation(
      google::storagetransfer::v1::PauseTransferOperationRequest const&
          request);

  virtual Status ResumeTransferOperation(
      google::storagetransfer::v1::ResumeTransferOperationRequest const&
          request);

  virtual future<StatusOr<google::storagetransfer::v1::TransferOperation>>
  RunTransferJob(
      google::storagetransfer::v1::RunTransferJobRequest const& request);

  virtual Status DeleteTransferJob(
      google::storagetransfer::v1::DeleteTransferJobRequest const& request);

  virtual StatusOr<google::storagetransfer::v1::AgentPool> CreateAgentPool(
      google::storagetransfer::v1::CreateAgentPoolRequest const& request);

  virtual StatusOr<google::storagetransfer::v1::AgentPool> UpdateAgentPool(
      google::storagetransfer::v1::UpdateAgentPoolRequest const& request);

  virtual StatusOr<google::storagetransfer::v1::AgentPool> GetAgentPool(
      google::storagetransfer::v1::GetAgentPoolRequest const& request);

  virtual StreamRange<google::storagetransfer::v1::AgentPool> ListAgentPools(
      google::storagetransfer::v1::ListAgentPoolsRequest request);

  virtual Status DeleteAgentPool(
      google::storagetransfer::v1::DeleteAgentPoolRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `StorageTransferServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * StorageTransferServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `StorageTransferServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::storagetransfer::StorageTransferServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `StorageTransferServiceConnection`
 * created by this function.
 */
std::shared_ptr<StorageTransferServiceConnection>
MakeStorageTransferServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_STORAGE_TRANSFER_CONNECTION_H
