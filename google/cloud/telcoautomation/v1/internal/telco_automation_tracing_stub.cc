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

#include "google/cloud/telcoautomation/v1/internal/telco_automation_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace telcoautomation_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TelcoAutomationTracingStub::TelcoAutomationTracingStub(
    std::shared_ptr<TelcoAutomationStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::telcoautomation::v1::ListOrchestrationClustersResponse>
TelcoAutomationTracingStub::ListOrchestrationClusters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListOrchestrationClustersRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "ListOrchestrationClusters");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListOrchestrationClusters(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>
TelcoAutomationTracingStub::GetOrchestrationCluster(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::GetOrchestrationClusterRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "GetOrchestrationCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetOrchestrationCluster(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
TelcoAutomationTracingStub::AsyncCreateOrchestrationCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::telcoautomation::v1::CreateOrchestrationClusterRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "CreateOrchestrationCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateOrchestrationCluster(cq, context,
                                                   std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
TelcoAutomationTracingStub::CreateOrchestrationCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::telcoautomation::v1::CreateOrchestrationClusterRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "CreateOrchestrationCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CreateOrchestrationCluster(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
TelcoAutomationTracingStub::AsyncDeleteOrchestrationCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::telcoautomation::v1::DeleteOrchestrationClusterRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "DeleteOrchestrationCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteOrchestrationCluster(cq, context,
                                                   std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
TelcoAutomationTracingStub::DeleteOrchestrationCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::telcoautomation::v1::DeleteOrchestrationClusterRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "DeleteOrchestrationCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DeleteOrchestrationCluster(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::ListEdgeSlmsResponse>
TelcoAutomationTracingStub::ListEdgeSlms(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListEdgeSlmsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "ListEdgeSlms");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListEdgeSlms(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>
TelcoAutomationTracingStub::GetEdgeSlm(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::GetEdgeSlmRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "GetEdgeSlm");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetEdgeSlm(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
TelcoAutomationTracingStub::AsyncCreateEdgeSlm(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::telcoautomation::v1::CreateEdgeSlmRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "CreateEdgeSlm");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateEdgeSlm(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
TelcoAutomationTracingStub::CreateEdgeSlm(
    grpc::ClientContext& context, Options options,
    google::cloud::telcoautomation::v1::CreateEdgeSlmRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "CreateEdgeSlm");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateEdgeSlm(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
TelcoAutomationTracingStub::AsyncDeleteEdgeSlm(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "DeleteEdgeSlm");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteEdgeSlm(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
TelcoAutomationTracingStub::DeleteEdgeSlm(
    grpc::ClientContext& context, Options options,
    google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "DeleteEdgeSlm");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteEdgeSlm(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationTracingStub::CreateBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::CreateBlueprintRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "CreateBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateBlueprint(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationTracingStub::UpdateBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::UpdateBlueprintRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "UpdateBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateBlueprint(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationTracingStub::GetBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::GetBlueprintRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "GetBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetBlueprint(context, options, request));
}

Status TelcoAutomationTracingStub::DeleteBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::DeleteBlueprintRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "DeleteBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteBlueprint(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::ListBlueprintsResponse>
TelcoAutomationTracingStub::ListBlueprints(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListBlueprintsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "ListBlueprints");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListBlueprints(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationTracingStub::ApproveBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ApproveBlueprintRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "ApproveBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ApproveBlueprint(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationTracingStub::ProposeBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ProposeBlueprintRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "ProposeBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ProposeBlueprint(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationTracingStub::RejectBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::RejectBlueprintRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "RejectBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RejectBlueprint(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::ListBlueprintRevisionsResponse>
TelcoAutomationTracingStub::ListBlueprintRevisions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListBlueprintRevisionsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "ListBlueprintRevisions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListBlueprintRevisions(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::SearchBlueprintRevisionsResponse>
TelcoAutomationTracingStub::SearchBlueprintRevisions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::SearchBlueprintRevisionsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "SearchBlueprintRevisions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->SearchBlueprintRevisions(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::SearchDeploymentRevisionsResponse>
TelcoAutomationTracingStub::SearchDeploymentRevisions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::SearchDeploymentRevisionsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "SearchDeploymentRevisions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->SearchDeploymentRevisions(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::DiscardBlueprintChangesResponse>
TelcoAutomationTracingStub::DiscardBlueprintChanges(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::DiscardBlueprintChangesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "DiscardBlueprintChanges");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DiscardBlueprintChanges(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::ListPublicBlueprintsResponse>
TelcoAutomationTracingStub::ListPublicBlueprints(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListPublicBlueprintsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "ListPublicBlueprints");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListPublicBlueprints(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::PublicBlueprint>
TelcoAutomationTracingStub::GetPublicBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::GetPublicBlueprintRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "GetPublicBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetPublicBlueprint(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationTracingStub::CreateDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::CreateDeploymentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "CreateDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateDeployment(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationTracingStub::UpdateDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::UpdateDeploymentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "UpdateDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateDeployment(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationTracingStub::GetDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::GetDeploymentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "GetDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDeployment(context, options, request));
}

Status TelcoAutomationTracingStub::RemoveDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::RemoveDeploymentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "RemoveDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RemoveDeployment(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::ListDeploymentsResponse>
TelcoAutomationTracingStub::ListDeployments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListDeploymentsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "ListDeployments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDeployments(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::ListDeploymentRevisionsResponse>
TelcoAutomationTracingStub::ListDeploymentRevisions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListDeploymentRevisionsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "ListDeploymentRevisions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListDeploymentRevisions(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::DiscardDeploymentChangesResponse>
TelcoAutomationTracingStub::DiscardDeploymentChanges(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::DiscardDeploymentChangesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "DiscardDeploymentChanges");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DiscardDeploymentChanges(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationTracingStub::ApplyDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ApplyDeploymentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "ApplyDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ApplyDeployment(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::ComputeDeploymentStatusResponse>
TelcoAutomationTracingStub::ComputeDeploymentStatus(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ComputeDeploymentStatusRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "ComputeDeploymentStatus");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ComputeDeploymentStatus(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationTracingStub::RollbackDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::RollbackDeploymentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "RollbackDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->RollbackDeployment(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationTracingStub::GetHydratedDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::GetHydratedDeploymentRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "GetHydratedDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetHydratedDeployment(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::ListHydratedDeploymentsResponse>
TelcoAutomationTracingStub::ListHydratedDeployments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListHydratedDeploymentsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "ListHydratedDeployments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListHydratedDeployments(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationTracingStub::UpdateHydratedDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::UpdateHydratedDeploymentRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "UpdateHydratedDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->UpdateHydratedDeployment(context, options, request));
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationTracingStub::ApplyHydratedDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ApplyHydratedDeploymentRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.telcoautomation.v1.TelcoAutomation",
                             "ApplyHydratedDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ApplyHydratedDeployment(context, options, request));
}

StatusOr<google::cloud::location::ListLocationsResponse>
TelcoAutomationTracingStub::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "ListLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLocations(context, options, request));
}

StatusOr<google::cloud::location::Location>
TelcoAutomationTracingStub::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

StatusOr<google::longrunning::ListOperationsResponse>
TelcoAutomationTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation>
TelcoAutomationTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status TelcoAutomationTracingStub::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteOperation(context, options, request));
}

Status TelcoAutomationTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.telcoautomation.v1.TelcoAutomation", "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
TelcoAutomationTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> TelcoAutomationTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<TelcoAutomationStub> MakeTelcoAutomationTracingStub(
    std::shared_ptr<TelcoAutomationStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<TelcoAutomationTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace telcoautomation_v1_internal
}  // namespace cloud
}  // namespace google
