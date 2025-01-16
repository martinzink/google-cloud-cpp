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
// source: google/cloud/batch/v1/batch.proto

#include "google/cloud/batch/v1/internal/batch_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace batch_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BatchServiceTracingConnection::BatchServiceTracingConnection(
    std::shared_ptr<batch_v1::BatchServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::batch::v1::Job>
BatchServiceTracingConnection::CreateJob(
    google::cloud::batch::v1::CreateJobRequest const& request) {
  auto span = internal::MakeSpan("batch_v1::BatchServiceConnection::CreateJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateJob(request));
}

StatusOr<google::cloud::batch::v1::Job> BatchServiceTracingConnection::GetJob(
    google::cloud::batch::v1::GetJobRequest const& request) {
  auto span = internal::MakeSpan("batch_v1::BatchServiceConnection::GetJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetJob(request));
}

future<StatusOr<google::cloud::batch::v1::OperationMetadata>>
BatchServiceTracingConnection::DeleteJob(
    google::cloud::batch::v1::DeleteJobRequest const& request) {
  auto span = internal::MakeSpan("batch_v1::BatchServiceConnection::DeleteJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteJob(request));
}

StatusOr<google::longrunning::Operation>
BatchServiceTracingConnection::DeleteJob(
    NoAwaitTag, google::cloud::batch::v1::DeleteJobRequest const& request) {
  auto span = internal::MakeSpan("batch_v1::BatchServiceConnection::DeleteJob");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DeleteJob(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::batch::v1::OperationMetadata>>
BatchServiceTracingConnection::DeleteJob(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("batch_v1::BatchServiceConnection::DeleteJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteJob(operation));
}

StreamRange<google::cloud::batch::v1::Job>
BatchServiceTracingConnection::ListJobs(
    google::cloud::batch::v1::ListJobsRequest request) {
  auto span = internal::MakeSpan("batch_v1::BatchServiceConnection::ListJobs");
  internal::OTelScope scope(span);
  auto sr = child_->ListJobs(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::batch::v1::Job>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::batch::v1::Task> BatchServiceTracingConnection::GetTask(
    google::cloud::batch::v1::GetTaskRequest const& request) {
  auto span = internal::MakeSpan("batch_v1::BatchServiceConnection::GetTask");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTask(request));
}

StreamRange<google::cloud::batch::v1::Task>
BatchServiceTracingConnection::ListTasks(
    google::cloud::batch::v1::ListTasksRequest request) {
  auto span = internal::MakeSpan("batch_v1::BatchServiceConnection::ListTasks");
  internal::OTelScope scope(span);
  auto sr = child_->ListTasks(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::batch::v1::Task>(
      std::move(span), std::move(sr));
}

StreamRange<google::cloud::location::Location>
BatchServiceTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span =
      internal::MakeSpan("batch_v1::BatchServiceConnection::ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::location::Location>
BatchServiceTracingConnection::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto span =
      internal::MakeSpan("batch_v1::BatchServiceConnection::GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

StreamRange<google::longrunning::Operation>
BatchServiceTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span =
      internal::MakeSpan("batch_v1::BatchServiceConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
BatchServiceTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpan("batch_v1::BatchServiceConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status BatchServiceTracingConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto span =
      internal::MakeSpan("batch_v1::BatchServiceConnection::DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteOperation(request));
}

Status BatchServiceTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span =
      internal::MakeSpan("batch_v1::BatchServiceConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<batch_v1::BatchServiceConnection>
MakeBatchServiceTracingConnection(
    std::shared_ptr<batch_v1::BatchServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<BatchServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace batch_v1_internal
}  // namespace cloud
}  // namespace google
