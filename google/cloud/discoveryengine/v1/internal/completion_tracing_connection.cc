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
// source: google/cloud/discoveryengine/v1/completion_service.proto

#include "google/cloud/discoveryengine/v1/internal/completion_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CompletionServiceTracingConnection::CompletionServiceTracingConnection(
    std::shared_ptr<discoveryengine_v1::CompletionServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::discoveryengine::v1::CompleteQueryResponse>
CompletionServiceTracingConnection::CompleteQuery(
    google::cloud::discoveryengine::v1::CompleteQueryRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::CompleteQuery");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CompleteQuery(request));
}

future<StatusOr<google::cloud::discoveryengine::v1::
                    ImportSuggestionDenyListEntriesResponse>>
CompletionServiceTracingConnection::ImportSuggestionDenyListEntries(
    google::cloud::discoveryengine::v1::
        ImportSuggestionDenyListEntriesRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::"
      "ImportSuggestionDenyListEntries");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ImportSuggestionDenyListEntries(request));
}

StatusOr<google::longrunning::Operation>
CompletionServiceTracingConnection::ImportSuggestionDenyListEntries(
    NoAwaitTag, google::cloud::discoveryengine::v1::
                    ImportSuggestionDenyListEntriesRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::"
      "ImportSuggestionDenyListEntries");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->ImportSuggestionDenyListEntries(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::discoveryengine::v1::
                    ImportSuggestionDenyListEntriesResponse>>
CompletionServiceTracingConnection::ImportSuggestionDenyListEntries(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::"
      "ImportSuggestionDenyListEntries");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ImportSuggestionDenyListEntries(operation));
}

future<StatusOr<
    google::cloud::discoveryengine::v1::PurgeSuggestionDenyListEntriesResponse>>
CompletionServiceTracingConnection::PurgeSuggestionDenyListEntries(
    google::cloud::discoveryengine::v1::
        PurgeSuggestionDenyListEntriesRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::"
      "PurgeSuggestionDenyListEntries");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PurgeSuggestionDenyListEntries(request));
}

StatusOr<google::longrunning::Operation>
CompletionServiceTracingConnection::PurgeSuggestionDenyListEntries(
    NoAwaitTag, google::cloud::discoveryengine::v1::
                    PurgeSuggestionDenyListEntriesRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::"
      "PurgeSuggestionDenyListEntries");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->PurgeSuggestionDenyListEntries(NoAwaitTag{}, request));
}

future<StatusOr<
    google::cloud::discoveryengine::v1::PurgeSuggestionDenyListEntriesResponse>>
CompletionServiceTracingConnection::PurgeSuggestionDenyListEntries(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::"
      "PurgeSuggestionDenyListEntries");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PurgeSuggestionDenyListEntries(operation));
}

future<StatusOr<
    google::cloud::discoveryengine::v1::ImportCompletionSuggestionsResponse>>
CompletionServiceTracingConnection::ImportCompletionSuggestions(
    google::cloud::discoveryengine::v1::
        ImportCompletionSuggestionsRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::"
      "ImportCompletionSuggestions");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ImportCompletionSuggestions(request));
}

StatusOr<google::longrunning::Operation>
CompletionServiceTracingConnection::ImportCompletionSuggestions(
    NoAwaitTag, google::cloud::discoveryengine::v1::
                    ImportCompletionSuggestionsRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::"
      "ImportCompletionSuggestions");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->ImportCompletionSuggestions(NoAwaitTag{}, request));
}

future<StatusOr<
    google::cloud::discoveryengine::v1::ImportCompletionSuggestionsResponse>>
CompletionServiceTracingConnection::ImportCompletionSuggestions(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::"
      "ImportCompletionSuggestions");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ImportCompletionSuggestions(operation));
}

future<StatusOr<
    google::cloud::discoveryengine::v1::PurgeCompletionSuggestionsResponse>>
CompletionServiceTracingConnection::PurgeCompletionSuggestions(
    google::cloud::discoveryengine::v1::PurgeCompletionSuggestionsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::"
      "PurgeCompletionSuggestions");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PurgeCompletionSuggestions(request));
}

StatusOr<google::longrunning::Operation>
CompletionServiceTracingConnection::PurgeCompletionSuggestions(
    NoAwaitTag,
    google::cloud::discoveryengine::v1::PurgeCompletionSuggestionsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::"
      "PurgeCompletionSuggestions");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->PurgeCompletionSuggestions(NoAwaitTag{}, request));
}

future<StatusOr<
    google::cloud::discoveryengine::v1::PurgeCompletionSuggestionsResponse>>
CompletionServiceTracingConnection::PurgeCompletionSuggestions(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::"
      "PurgeCompletionSuggestions");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PurgeCompletionSuggestions(operation));
}

StreamRange<google::longrunning::Operation>
CompletionServiceTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
CompletionServiceTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status CompletionServiceTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::CompletionServiceConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<discoveryengine_v1::CompletionServiceConnection>
MakeCompletionServiceTracingConnection(
    std::shared_ptr<discoveryengine_v1::CompletionServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<CompletionServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
