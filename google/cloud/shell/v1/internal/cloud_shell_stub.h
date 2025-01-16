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
// source: google/cloud/shell/v1/cloudshell.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_V1_INTERNAL_CLOUD_SHELL_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_V1_INTERNAL_CLOUD_SHELL_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/shell/v1/cloudshell.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace shell_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudShellServiceStub {
 public:
  virtual ~CloudShellServiceStub() = 0;

  virtual StatusOr<google::cloud::shell::v1::Environment> GetEnvironment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::shell::v1::GetEnvironmentRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncStartEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::shell::v1::StartEnvironmentRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> StartEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::shell::v1::StartEnvironmentRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncAuthorizeEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> AuthorizeEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncAddPublicKey(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::shell::v1::AddPublicKeyRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> AddPublicKey(
      grpc::ClientContext& context, Options options,
      google::cloud::shell::v1::AddPublicKeyRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncRemovePublicKey(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::shell::v1::RemovePublicKeyRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> RemovePublicKey(
      grpc::ClientContext& context, Options options,
      google::cloud::shell::v1::RemovePublicKeyRequest const& request) = 0;

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

class DefaultCloudShellServiceStub : public CloudShellServiceStub {
 public:
  DefaultCloudShellServiceStub(
      std::unique_ptr<
          google::cloud::shell::v1::CloudShellService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)) {}

  StatusOr<google::cloud::shell::v1::Environment> GetEnvironment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::shell::v1::GetEnvironmentRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::shell::v1::StartEnvironmentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> StartEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::shell::v1::StartEnvironmentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncAuthorizeEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> AuthorizeEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncAddPublicKey(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::shell::v1::AddPublicKeyRequest const& request) override;

  StatusOr<google::longrunning::Operation> AddPublicKey(
      grpc::ClientContext& context, Options options,
      google::cloud::shell::v1::AddPublicKeyRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRemovePublicKey(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::shell::v1::RemovePublicKeyRequest const& request) override;

  StatusOr<google::longrunning::Operation> RemovePublicKey(
      grpc::ClientContext& context, Options options,
      google::cloud::shell::v1::RemovePublicKeyRequest const& request) override;

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
  std::unique_ptr<google::cloud::shell::v1::CloudShellService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace shell_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_V1_INTERNAL_CLOUD_SHELL_STUB_H
