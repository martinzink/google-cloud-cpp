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
// source: google/devtools/cloudbuild/v2/repositories.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V2_INTERNAL_REPOSITORY_MANAGER_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V2_INTERNAL_REPOSITORY_MANAGER_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/devtools/cloudbuild/v2/cloudbuild.pb.h>
#include <google/devtools/cloudbuild/v2/repositories.grpc.pb.h>
#include <google/iam/v1/iam_policy.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace cloudbuild_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RepositoryManagerStub {
 public:
  virtual ~RepositoryManagerStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::CreateConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateConnection(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::CreateConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::devtools::cloudbuild::v2::Connection> GetConnection(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::GetConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::devtools::cloudbuild::v2::ListConnectionsResponse>
  ListConnections(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::ListConnectionsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::UpdateConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateConnection(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::UpdateConnectionRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::DeleteConnectionRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteConnection(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::DeleteConnectionRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateRepository(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::CreateRepositoryRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateRepository(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::CreateRepositoryRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncBatchCreateRepositories(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> BatchCreateRepositories(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
          request) = 0;

  virtual StatusOr<google::devtools::cloudbuild::v2::Repository> GetRepository(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::GetRepositoryRequest const&
          request) = 0;

  virtual StatusOr<google::devtools::cloudbuild::v2::ListRepositoriesResponse>
  ListRepositories(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::ListRepositoriesRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteRepository(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::DeleteRepositoryRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteRepository(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::DeleteRepositoryRequest const&
          request) = 0;

  virtual StatusOr<
      google::devtools::cloudbuild::v2::FetchReadWriteTokenResponse>
  FetchReadWriteToken(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest const&
          request) = 0;

  virtual StatusOr<google::devtools::cloudbuild::v2::FetchReadTokenResponse>
  FetchReadToken(grpc::ClientContext& context, Options const& options,
                 google::devtools::cloudbuild::v2::FetchReadTokenRequest const&
                     request) = 0;

  virtual StatusOr<
      google::devtools::cloudbuild::v2::FetchLinkableRepositoriesResponse>
  FetchLinkableRepositories(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::FetchLinkableRepositoriesRequest const&
          request) = 0;

  virtual StatusOr<google::devtools::cloudbuild::v2::FetchGitRefsResponse>
  FetchGitRefs(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::FetchGitRefsRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultRepositoryManagerStub : public RepositoryManagerStub {
 public:
  DefaultRepositoryManagerStub(
      std::unique_ptr<
          google::devtools::cloudbuild::v2::RepositoryManager::StubInterface>
          grpc_stub,
      std::unique_ptr<google::iam::v1::IAMPolicy::StubInterface> iampolicy_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub)
      : grpc_stub_(std::move(grpc_stub)),
        iampolicy_stub_(std::move(iampolicy_stub)),
        operations_stub_(std::move(operations_stub)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncCreateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::CreateConnectionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateConnection(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::CreateConnectionRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v2::Connection> GetConnection(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::GetConnectionRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v2::ListConnectionsResponse>
  ListConnections(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::ListConnectionsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::UpdateConnectionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateConnection(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::UpdateConnectionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::DeleteConnectionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteConnection(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::DeleteConnectionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRepository(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::CreateRepositoryRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateRepository(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::CreateRepositoryRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchCreateRepositories(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> BatchCreateRepositories(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v2::Repository> GetRepository(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::GetRepositoryRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v2::ListRepositoriesResponse>
  ListRepositories(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::ListRepositoriesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRepository(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::devtools::cloudbuild::v2::DeleteRepositoryRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteRepository(
      grpc::ClientContext& context, Options options,
      google::devtools::cloudbuild::v2::DeleteRepositoryRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v2::FetchReadWriteTokenResponse>
  FetchReadWriteToken(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v2::FetchReadTokenResponse>
  FetchReadToken(grpc::ClientContext& context, Options const& options,
                 google::devtools::cloudbuild::v2::FetchReadTokenRequest const&
                     request) override;

  StatusOr<google::devtools::cloudbuild::v2::FetchLinkableRepositoriesResponse>
  FetchLinkableRepositories(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::FetchLinkableRepositoriesRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v2::FetchGitRefsResponse> FetchGitRefs(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudbuild::v2::FetchGitRefsRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<
      google::devtools::cloudbuild::v2::RepositoryManager::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::iam::v1::IAMPolicy::StubInterface> iampolicy_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V2_INTERNAL_REPOSITORY_MANAGER_STUB_H
