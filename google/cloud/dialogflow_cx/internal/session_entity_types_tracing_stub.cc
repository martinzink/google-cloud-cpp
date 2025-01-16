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
// source: google/cloud/dialogflow/cx/v3/session_entity_type.proto

#include "google/cloud/dialogflow_cx/internal/session_entity_types_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SessionEntityTypesTracingStub::SessionEntityTypesTracingStub(
    std::shared_ptr<SessionEntityTypesStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListSessionEntityTypesResponse>
SessionEntityTypesTracingStub::ListSessionEntityTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::ListSessionEntityTypesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.SessionEntityTypes",
                             "ListSessionEntityTypes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListSessionEntityTypes(context, options, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::SessionEntityType>
SessionEntityTypesTracingStub::GetSessionEntityType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::GetSessionEntityTypeRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.SessionEntityTypes",
                             "GetSessionEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetSessionEntityType(context, options, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::SessionEntityType>
SessionEntityTypesTracingStub::CreateSessionEntityType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::CreateSessionEntityTypeRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.SessionEntityTypes",
                             "CreateSessionEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CreateSessionEntityType(context, options, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::SessionEntityType>
SessionEntityTypesTracingStub::UpdateSessionEntityType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::UpdateSessionEntityTypeRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.SessionEntityTypes",
                             "UpdateSessionEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->UpdateSessionEntityType(context, options, request));
}

Status SessionEntityTypesTracingStub::DeleteSessionEntityType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::DeleteSessionEntityTypeRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.SessionEntityTypes",
                             "DeleteSessionEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DeleteSessionEntityType(context, options, request));
}

StatusOr<google::cloud::location::ListLocationsResponse>
SessionEntityTypesTracingStub::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.SessionEntityTypes", "ListLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLocations(context, options, request));
}

StatusOr<google::cloud::location::Location>
SessionEntityTypesTracingStub::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.SessionEntityTypes", "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

StatusOr<google::longrunning::ListOperationsResponse>
SessionEntityTypesTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.SessionEntityTypes", "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation>
SessionEntityTypesTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.SessionEntityTypes", "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status SessionEntityTypesTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.SessionEntityTypes", "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<SessionEntityTypesStub> MakeSessionEntityTypesTracingStub(
    std::shared_ptr<SessionEntityTypesStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<SessionEntityTypesTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
