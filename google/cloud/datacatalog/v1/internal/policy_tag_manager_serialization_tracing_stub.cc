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
// source: google/cloud/datacatalog/v1/policytagmanagerserialization.proto

#include "google/cloud/datacatalog/v1/internal/policy_tag_manager_serialization_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PolicyTagManagerSerializationTracingStub::
    PolicyTagManagerSerializationTracingStub(
        std::shared_ptr<PolicyTagManagerSerializationStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::datacatalog::v1::Taxonomy>
PolicyTagManagerSerializationTracingStub::ReplaceTaxonomy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.v1.PolicyTagManagerSerialization",
      "ReplaceTaxonomy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ReplaceTaxonomy(context, options, request));
}

StatusOr<google::cloud::datacatalog::v1::ImportTaxonomiesResponse>
PolicyTagManagerSerializationTracingStub::ImportTaxonomies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::v1::ImportTaxonomiesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.v1.PolicyTagManagerSerialization",
      "ImportTaxonomies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ImportTaxonomies(context, options, request));
}

StatusOr<google::cloud::datacatalog::v1::ExportTaxonomiesResponse>
PolicyTagManagerSerializationTracingStub::ExportTaxonomies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::v1::ExportTaxonomiesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.v1.PolicyTagManagerSerialization",
      "ExportTaxonomies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ExportTaxonomies(context, options, request));
}

StatusOr<google::longrunning::ListOperationsResponse>
PolicyTagManagerSerializationTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.v1.PolicyTagManagerSerialization",
      "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation>
PolicyTagManagerSerializationTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.v1.PolicyTagManagerSerialization",
      "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status PolicyTagManagerSerializationTracingStub::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.v1.PolicyTagManagerSerialization",
      "DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteOperation(context, options, request));
}

Status PolicyTagManagerSerializationTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.v1.PolicyTagManagerSerialization",
      "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<PolicyTagManagerSerializationStub>
MakePolicyTagManagerSerializationTracingStub(
    std::shared_ptr<PolicyTagManagerSerializationStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<PolicyTagManagerSerializationTracingStub>(
      std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google
