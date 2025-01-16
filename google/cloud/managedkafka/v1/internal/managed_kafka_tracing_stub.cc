// Copyright 2024 Google LLC
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
// source: google/cloud/managedkafka/v1/managed_kafka.proto

#include "google/cloud/managedkafka/v1/internal/managed_kafka_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace managedkafka_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ManagedKafkaTracingStub::ManagedKafkaTracingStub(
    std::shared_ptr<ManagedKafkaStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::managedkafka::v1::ListClustersResponse>
ManagedKafkaTracingStub::ListClusters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::ListClustersRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "ListClusters");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListClusters(context, options, request));
}

StatusOr<google::cloud::managedkafka::v1::Cluster>
ManagedKafkaTracingStub::GetCluster(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::GetClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "GetCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetCluster(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ManagedKafkaTracingStub::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedkafka::v1::CreateClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "CreateCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateCluster(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> ManagedKafkaTracingStub::CreateCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::managedkafka::v1::CreateClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "CreateCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateCluster(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ManagedKafkaTracingStub::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedkafka::v1::UpdateClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "UpdateCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateCluster(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> ManagedKafkaTracingStub::UpdateCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::managedkafka::v1::UpdateClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "UpdateCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateCluster(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ManagedKafkaTracingStub::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedkafka::v1::DeleteClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "DeleteCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteCluster(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> ManagedKafkaTracingStub::DeleteCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::managedkafka::v1::DeleteClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "DeleteCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteCluster(context, options, request));
}

StatusOr<google::cloud::managedkafka::v1::ListTopicsResponse>
ManagedKafkaTracingStub::ListTopics(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::ListTopicsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "ListTopics");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTopics(context, options, request));
}

StatusOr<google::cloud::managedkafka::v1::Topic>
ManagedKafkaTracingStub::GetTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::GetTopicRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "GetTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetTopic(context, options, request));
}

StatusOr<google::cloud::managedkafka::v1::Topic>
ManagedKafkaTracingStub::CreateTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::CreateTopicRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "CreateTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateTopic(context, options, request));
}

StatusOr<google::cloud::managedkafka::v1::Topic>
ManagedKafkaTracingStub::UpdateTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::UpdateTopicRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "UpdateTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateTopic(context, options, request));
}

Status ManagedKafkaTracingStub::DeleteTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::DeleteTopicRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "DeleteTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteTopic(context, options, request));
}

StatusOr<google::cloud::managedkafka::v1::ListConsumerGroupsResponse>
ManagedKafkaTracingStub::ListConsumerGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::ListConsumerGroupsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "ListConsumerGroups");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListConsumerGroups(context, options, request));
}

StatusOr<google::cloud::managedkafka::v1::ConsumerGroup>
ManagedKafkaTracingStub::GetConsumerGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::GetConsumerGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "GetConsumerGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetConsumerGroup(context, options, request));
}

StatusOr<google::cloud::managedkafka::v1::ConsumerGroup>
ManagedKafkaTracingStub::UpdateConsumerGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::UpdateConsumerGroupRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "UpdateConsumerGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateConsumerGroup(context, options, request));
}

Status ManagedKafkaTracingStub::DeleteConsumerGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::DeleteConsumerGroupRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "DeleteConsumerGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteConsumerGroup(context, options, request));
}

StatusOr<google::cloud::location::ListLocationsResponse>
ManagedKafkaTracingStub::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "ListLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLocations(context, options, request));
}

StatusOr<google::cloud::location::Location>
ManagedKafkaTracingStub::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

StatusOr<google::longrunning::ListOperationsResponse>
ManagedKafkaTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation> ManagedKafkaTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status ManagedKafkaTracingStub::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteOperation(context, options, request));
}

Status ManagedKafkaTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedkafka.v1.ManagedKafka", "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ManagedKafkaTracingStub::AsyncGetOperation(
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

future<Status> ManagedKafkaTracingStub::AsyncCancelOperation(
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

std::shared_ptr<ManagedKafkaStub> MakeManagedKafkaTracingStub(
    std::shared_ptr<ManagedKafkaStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ManagedKafkaTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedkafka_v1_internal
}  // namespace cloud
}  // namespace google
