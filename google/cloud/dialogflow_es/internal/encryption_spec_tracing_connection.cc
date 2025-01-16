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
// source: google/cloud/dialogflow/v2/encryption_spec.proto

#include "google/cloud/dialogflow_es/internal/encryption_spec_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EncryptionSpecServiceTracingConnection::EncryptionSpecServiceTracingConnection(
    std::shared_ptr<dialogflow_es::EncryptionSpecServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::v2::EncryptionSpec>
EncryptionSpecServiceTracingConnection::GetEncryptionSpec(
    google::cloud::dialogflow::v2::GetEncryptionSpecRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EncryptionSpecServiceConnection::GetEncryptionSpec");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEncryptionSpec(request));
}

future<
    StatusOr<google::cloud::dialogflow::v2::InitializeEncryptionSpecResponse>>
EncryptionSpecServiceTracingConnection::InitializeEncryptionSpec(
    google::cloud::dialogflow::v2::InitializeEncryptionSpecRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EncryptionSpecServiceConnection::"
      "InitializeEncryptionSpec");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InitializeEncryptionSpec(request));
}

StatusOr<google::longrunning::Operation>
EncryptionSpecServiceTracingConnection::InitializeEncryptionSpec(
    NoAwaitTag,
    google::cloud::dialogflow::v2::InitializeEncryptionSpecRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EncryptionSpecServiceConnection::"
      "InitializeEncryptionSpec");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->InitializeEncryptionSpec(NoAwaitTag{}, request));
}

future<
    StatusOr<google::cloud::dialogflow::v2::InitializeEncryptionSpecResponse>>
EncryptionSpecServiceTracingConnection::InitializeEncryptionSpec(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EncryptionSpecServiceConnection::"
      "InitializeEncryptionSpec");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InitializeEncryptionSpec(operation));
}

StreamRange<google::cloud::location::Location>
EncryptionSpecServiceTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EncryptionSpecServiceConnection::ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::location::Location>
EncryptionSpecServiceTracingConnection::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EncryptionSpecServiceConnection::GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

StreamRange<google::longrunning::Operation>
EncryptionSpecServiceTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EncryptionSpecServiceConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
EncryptionSpecServiceTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EncryptionSpecServiceConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status EncryptionSpecServiceTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::EncryptionSpecServiceConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dialogflow_es::EncryptionSpecServiceConnection>
MakeEncryptionSpecServiceTracingConnection(
    std::shared_ptr<dialogflow_es::EncryptionSpecServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<EncryptionSpecServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
