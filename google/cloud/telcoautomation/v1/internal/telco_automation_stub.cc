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
// source: google/cloud/telcoautomation/v1/telcoautomation.proto

#include "google/cloud/telcoautomation/v1/internal/telco_automation_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/telcoautomation/v1/telcoautomation.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace telcoautomation_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TelcoAutomationStub::~TelcoAutomationStub() = default;

StatusOr<google::cloud::telcoautomation::v1::ListOrchestrationClustersResponse>
DefaultTelcoAutomationStub::ListOrchestrationClusters(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::ListOrchestrationClustersRequest const&
        request) {
  google::cloud::telcoautomation::v1::ListOrchestrationClustersResponse
      response;
  auto status =
      grpc_stub_->ListOrchestrationClusters(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>
DefaultTelcoAutomationStub::GetOrchestrationCluster(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::GetOrchestrationClusterRequest const&
        request) {
  google::cloud::telcoautomation::v1::OrchestrationCluster response;
  auto status =
      grpc_stub_->GetOrchestrationCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTelcoAutomationStub::AsyncCreateOrchestrationCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::telcoautomation::v1::CreateOrchestrationClusterRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::telcoautomation::v1::CreateOrchestrationClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::telcoautomation::v1::
                 CreateOrchestrationClusterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateOrchestrationCluster(context, request,
                                                           cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTelcoAutomationStub::CreateOrchestrationCluster(
    grpc::ClientContext& context, Options,
    google::cloud::telcoautomation::v1::CreateOrchestrationClusterRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateOrchestrationCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTelcoAutomationStub::AsyncDeleteOrchestrationCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::telcoautomation::v1::DeleteOrchestrationClusterRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::telcoautomation::v1::DeleteOrchestrationClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::telcoautomation::v1::
                 DeleteOrchestrationClusterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteOrchestrationCluster(context, request,
                                                           cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTelcoAutomationStub::DeleteOrchestrationCluster(
    grpc::ClientContext& context, Options,
    google::cloud::telcoautomation::v1::DeleteOrchestrationClusterRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteOrchestrationCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::ListEdgeSlmsResponse>
DefaultTelcoAutomationStub::ListEdgeSlms(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::ListEdgeSlmsRequest const& request) {
  google::cloud::telcoautomation::v1::ListEdgeSlmsResponse response;
  auto status = grpc_stub_->ListEdgeSlms(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>
DefaultTelcoAutomationStub::GetEdgeSlm(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::GetEdgeSlmRequest const& request) {
  google::cloud::telcoautomation::v1::EdgeSlm response;
  auto status = grpc_stub_->GetEdgeSlm(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTelcoAutomationStub::AsyncCreateEdgeSlm(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::telcoautomation::v1::CreateEdgeSlmRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::telcoautomation::v1::CreateEdgeSlmRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::telcoautomation::v1::CreateEdgeSlmRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateEdgeSlm(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTelcoAutomationStub::CreateEdgeSlm(
    grpc::ClientContext& context, Options,
    google::cloud::telcoautomation::v1::CreateEdgeSlmRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateEdgeSlm(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTelcoAutomationStub::AsyncDeleteEdgeSlm(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteEdgeSlm(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultTelcoAutomationStub::DeleteEdgeSlm(
    grpc::ClientContext& context, Options,
    google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteEdgeSlm(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
DefaultTelcoAutomationStub::CreateBlueprint(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::CreateBlueprintRequest const& request) {
  google::cloud::telcoautomation::v1::Blueprint response;
  auto status = grpc_stub_->CreateBlueprint(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
DefaultTelcoAutomationStub::UpdateBlueprint(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::UpdateBlueprintRequest const& request) {
  google::cloud::telcoautomation::v1::Blueprint response;
  auto status = grpc_stub_->UpdateBlueprint(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
DefaultTelcoAutomationStub::GetBlueprint(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::GetBlueprintRequest const& request) {
  google::cloud::telcoautomation::v1::Blueprint response;
  auto status = grpc_stub_->GetBlueprint(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultTelcoAutomationStub::DeleteBlueprint(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::DeleteBlueprintRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteBlueprint(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::telcoautomation::v1::ListBlueprintsResponse>
DefaultTelcoAutomationStub::ListBlueprints(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::ListBlueprintsRequest const& request) {
  google::cloud::telcoautomation::v1::ListBlueprintsResponse response;
  auto status = grpc_stub_->ListBlueprints(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
DefaultTelcoAutomationStub::ApproveBlueprint(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::ApproveBlueprintRequest const&
        request) {
  google::cloud::telcoautomation::v1::Blueprint response;
  auto status = grpc_stub_->ApproveBlueprint(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
DefaultTelcoAutomationStub::ProposeBlueprint(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::ProposeBlueprintRequest const&
        request) {
  google::cloud::telcoautomation::v1::Blueprint response;
  auto status = grpc_stub_->ProposeBlueprint(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
DefaultTelcoAutomationStub::RejectBlueprint(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::RejectBlueprintRequest const& request) {
  google::cloud::telcoautomation::v1::Blueprint response;
  auto status = grpc_stub_->RejectBlueprint(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::ListBlueprintRevisionsResponse>
DefaultTelcoAutomationStub::ListBlueprintRevisions(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::ListBlueprintRevisionsRequest const&
        request) {
  google::cloud::telcoautomation::v1::ListBlueprintRevisionsResponse response;
  auto status =
      grpc_stub_->ListBlueprintRevisions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::SearchBlueprintRevisionsResponse>
DefaultTelcoAutomationStub::SearchBlueprintRevisions(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::SearchBlueprintRevisionsRequest const&
        request) {
  google::cloud::telcoautomation::v1::SearchBlueprintRevisionsResponse response;
  auto status =
      grpc_stub_->SearchBlueprintRevisions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::SearchDeploymentRevisionsResponse>
DefaultTelcoAutomationStub::SearchDeploymentRevisions(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::SearchDeploymentRevisionsRequest const&
        request) {
  google::cloud::telcoautomation::v1::SearchDeploymentRevisionsResponse
      response;
  auto status =
      grpc_stub_->SearchDeploymentRevisions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::DiscardBlueprintChangesResponse>
DefaultTelcoAutomationStub::DiscardBlueprintChanges(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::DiscardBlueprintChangesRequest const&
        request) {
  google::cloud::telcoautomation::v1::DiscardBlueprintChangesResponse response;
  auto status =
      grpc_stub_->DiscardBlueprintChanges(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::ListPublicBlueprintsResponse>
DefaultTelcoAutomationStub::ListPublicBlueprints(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::ListPublicBlueprintsRequest const&
        request) {
  google::cloud::telcoautomation::v1::ListPublicBlueprintsResponse response;
  auto status = grpc_stub_->ListPublicBlueprints(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::PublicBlueprint>
DefaultTelcoAutomationStub::GetPublicBlueprint(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::GetPublicBlueprintRequest const&
        request) {
  google::cloud::telcoautomation::v1::PublicBlueprint response;
  auto status = grpc_stub_->GetPublicBlueprint(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
DefaultTelcoAutomationStub::CreateDeployment(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::CreateDeploymentRequest const&
        request) {
  google::cloud::telcoautomation::v1::Deployment response;
  auto status = grpc_stub_->CreateDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
DefaultTelcoAutomationStub::UpdateDeployment(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::UpdateDeploymentRequest const&
        request) {
  google::cloud::telcoautomation::v1::Deployment response;
  auto status = grpc_stub_->UpdateDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
DefaultTelcoAutomationStub::GetDeployment(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::GetDeploymentRequest const& request) {
  google::cloud::telcoautomation::v1::Deployment response;
  auto status = grpc_stub_->GetDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultTelcoAutomationStub::RemoveDeployment(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::RemoveDeploymentRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->RemoveDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::telcoautomation::v1::ListDeploymentsResponse>
DefaultTelcoAutomationStub::ListDeployments(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::ListDeploymentsRequest const& request) {
  google::cloud::telcoautomation::v1::ListDeploymentsResponse response;
  auto status = grpc_stub_->ListDeployments(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::ListDeploymentRevisionsResponse>
DefaultTelcoAutomationStub::ListDeploymentRevisions(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::ListDeploymentRevisionsRequest const&
        request) {
  google::cloud::telcoautomation::v1::ListDeploymentRevisionsResponse response;
  auto status =
      grpc_stub_->ListDeploymentRevisions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::DiscardDeploymentChangesResponse>
DefaultTelcoAutomationStub::DiscardDeploymentChanges(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::DiscardDeploymentChangesRequest const&
        request) {
  google::cloud::telcoautomation::v1::DiscardDeploymentChangesResponse response;
  auto status =
      grpc_stub_->DiscardDeploymentChanges(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
DefaultTelcoAutomationStub::ApplyDeployment(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::ApplyDeploymentRequest const& request) {
  google::cloud::telcoautomation::v1::Deployment response;
  auto status = grpc_stub_->ApplyDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::ComputeDeploymentStatusResponse>
DefaultTelcoAutomationStub::ComputeDeploymentStatus(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::ComputeDeploymentStatusRequest const&
        request) {
  google::cloud::telcoautomation::v1::ComputeDeploymentStatusResponse response;
  auto status =
      grpc_stub_->ComputeDeploymentStatus(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
DefaultTelcoAutomationStub::RollbackDeployment(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::RollbackDeploymentRequest const&
        request) {
  google::cloud::telcoautomation::v1::Deployment response;
  auto status = grpc_stub_->RollbackDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
DefaultTelcoAutomationStub::GetHydratedDeployment(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::GetHydratedDeploymentRequest const&
        request) {
  google::cloud::telcoautomation::v1::HydratedDeployment response;
  auto status = grpc_stub_->GetHydratedDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::ListHydratedDeploymentsResponse>
DefaultTelcoAutomationStub::ListHydratedDeployments(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::ListHydratedDeploymentsRequest const&
        request) {
  google::cloud::telcoautomation::v1::ListHydratedDeploymentsResponse response;
  auto status =
      grpc_stub_->ListHydratedDeployments(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
DefaultTelcoAutomationStub::UpdateHydratedDeployment(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::UpdateHydratedDeploymentRequest const&
        request) {
  google::cloud::telcoautomation::v1::HydratedDeployment response;
  auto status =
      grpc_stub_->UpdateHydratedDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
DefaultTelcoAutomationStub::ApplyHydratedDeployment(
    grpc::ClientContext& context, Options const&,
    google::cloud::telcoautomation::v1::ApplyHydratedDeploymentRequest const&
        request) {
  google::cloud::telcoautomation::v1::HydratedDeployment response;
  auto status =
      grpc_stub_->ApplyHydratedDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultTelcoAutomationStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location>
DefaultTelcoAutomationStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultTelcoAutomationStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultTelcoAutomationStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultTelcoAutomationStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultTelcoAutomationStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultTelcoAutomationStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_stub_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultTelcoAutomationStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_stub_->AsyncCancelOperation(context, request,
                                                             cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace telcoautomation_v1_internal
}  // namespace cloud
}  // namespace google
