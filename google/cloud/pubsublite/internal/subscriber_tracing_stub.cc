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
// source: google/cloud/pubsublite/v1/subscriber.proto

#include "google/cloud/pubsublite/internal/subscriber_tracing_stub.h"
#include "google/cloud/internal/async_read_write_stream_tracing.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SubscriberServiceTracingStub::SubscriberServiceTracingStub(
    std::shared_ptr<SubscriberServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

std::unique_ptr<AsyncStreamingReadWriteRpc<
    google::cloud::pubsublite::v1::SubscribeRequest,
    google::cloud::pubsublite::v1::SubscribeResponse>>
SubscriberServiceTracingStub::AsyncSubscribe(
    CompletionQueue const& cq, std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.pubsublite.v1.SubscriberService", "Subscribe");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream = child_->AsyncSubscribe(cq, context, std::move(options));
  return std::make_unique<internal::AsyncStreamingReadWriteRpcTracing<
      google::cloud::pubsublite::v1::SubscribeRequest,
      google::cloud::pubsublite::v1::SubscribeResponse>>(
      std::move(context), std::move(stream), std::move(span));
}

StatusOr<google::longrunning::ListOperationsResponse>
SubscriberServiceTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.pubsublite.v1.SubscriberService", "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation>
SubscriberServiceTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.pubsublite.v1.SubscriberService", "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status SubscriberServiceTracingStub::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.pubsublite.v1.SubscriberService", "DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteOperation(context, options, request));
}

Status SubscriberServiceTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.pubsublite.v1.SubscriberService", "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<SubscriberServiceStub> MakeSubscriberServiceTracingStub(
    std::shared_ptr<SubscriberServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<SubscriberServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google
