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
// source: google/cloud/workstations/v1/workstations.proto

#include "google/cloud/workstations/v1/internal/workstations_auth_decorator.h"
#include <google/cloud/workstations/v1/workstations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace workstations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WorkstationsAuth::WorkstationsAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<WorkstationsStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::workstations::v1::WorkstationCluster>
WorkstationsAuth::GetWorkstationCluster(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::GetWorkstationClusterRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetWorkstationCluster(context, options, request);
}

StatusOr<google::cloud::workstations::v1::ListWorkstationClustersResponse>
WorkstationsAuth::ListWorkstationClusters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::ListWorkstationClustersRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListWorkstationClusters(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsAuth::AsyncCreateWorkstationCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::CreateWorkstationClusterRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateWorkstationCluster(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
WorkstationsAuth::CreateWorkstationCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::CreateWorkstationClusterRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateWorkstationCluster(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsAuth::AsyncUpdateWorkstationCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::UpdateWorkstationClusterRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateWorkstationCluster(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
WorkstationsAuth::UpdateWorkstationCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::UpdateWorkstationClusterRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateWorkstationCluster(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsAuth::AsyncDeleteWorkstationCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::DeleteWorkstationClusterRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteWorkstationCluster(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
WorkstationsAuth::DeleteWorkstationCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::DeleteWorkstationClusterRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteWorkstationCluster(context, options, request);
}

StatusOr<google::cloud::workstations::v1::WorkstationConfig>
WorkstationsAuth::GetWorkstationConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::GetWorkstationConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetWorkstationConfig(context, options, request);
}

StatusOr<google::cloud::workstations::v1::ListWorkstationConfigsResponse>
WorkstationsAuth::ListWorkstationConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::ListWorkstationConfigsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListWorkstationConfigs(context, options, request);
}

StatusOr<google::cloud::workstations::v1::ListUsableWorkstationConfigsResponse>
WorkstationsAuth::ListUsableWorkstationConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::ListUsableWorkstationConfigsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListUsableWorkstationConfigs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsAuth::AsyncCreateWorkstationConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::CreateWorkstationConfigRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateWorkstationConfig(cq, *std::move(context),
                                                   std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
WorkstationsAuth::CreateWorkstationConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::CreateWorkstationConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateWorkstationConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsAuth::AsyncUpdateWorkstationConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::UpdateWorkstationConfigRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateWorkstationConfig(cq, *std::move(context),
                                                   std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
WorkstationsAuth::UpdateWorkstationConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::UpdateWorkstationConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateWorkstationConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsAuth::AsyncDeleteWorkstationConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::DeleteWorkstationConfigRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteWorkstationConfig(cq, *std::move(context),
                                                   std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
WorkstationsAuth::DeleteWorkstationConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::DeleteWorkstationConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteWorkstationConfig(context, options, request);
}

StatusOr<google::cloud::workstations::v1::Workstation>
WorkstationsAuth::GetWorkstation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::GetWorkstationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetWorkstation(context, options, request);
}

StatusOr<google::cloud::workstations::v1::ListWorkstationsResponse>
WorkstationsAuth::ListWorkstations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::ListWorkstationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListWorkstations(context, options, request);
}

StatusOr<google::cloud::workstations::v1::ListUsableWorkstationsResponse>
WorkstationsAuth::ListUsableWorkstations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::ListUsableWorkstationsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListUsableWorkstations(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsAuth::AsyncCreateWorkstation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::CreateWorkstationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateWorkstation(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> WorkstationsAuth::CreateWorkstation(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::CreateWorkstationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateWorkstation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsAuth::AsyncUpdateWorkstation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::UpdateWorkstationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateWorkstation(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> WorkstationsAuth::UpdateWorkstation(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::UpdateWorkstationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateWorkstation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsAuth::AsyncDeleteWorkstation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::DeleteWorkstationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteWorkstation(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> WorkstationsAuth::DeleteWorkstation(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::DeleteWorkstationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteWorkstation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsAuth::AsyncStartWorkstation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::StartWorkstationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncStartWorkstation(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> WorkstationsAuth::StartWorkstation(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::StartWorkstationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->StartWorkstation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsAuth::AsyncStopWorkstation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workstations::v1::StopWorkstationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncStopWorkstation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> WorkstationsAuth::StopWorkstation(
    grpc::ClientContext& context, Options options,
    google::cloud::workstations::v1::StopWorkstationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->StopWorkstation(context, options, request);
}

StatusOr<google::cloud::workstations::v1::GenerateAccessTokenResponse>
WorkstationsAuth::GenerateAccessToken(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workstations::v1::GenerateAccessTokenRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GenerateAccessToken(context, options, request);
}

StatusOr<google::iam::v1::Policy> WorkstationsAuth::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> WorkstationsAuth::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
WorkstationsAuth::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
WorkstationsAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> WorkstationsAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

Status WorkstationsAuth::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteOperation(context, options, request);
}

Status WorkstationsAuth::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkstationsAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> WorkstationsAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workstations_v1_internal
}  // namespace cloud
}  // namespace google
