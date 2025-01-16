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
// source: google/cloud/discoveryengine/v1/conversational_search_service.proto

#include "google/cloud/discoveryengine/v1/internal/conversational_search_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConversationalSearchServiceTracingConnection::
    ConversationalSearchServiceTracingConnection(
        std::shared_ptr<
            discoveryengine_v1::ConversationalSearchServiceConnection>
            child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::discoveryengine::v1::ConverseConversationResponse>
ConversationalSearchServiceTracingConnection::ConverseConversation(
    google::cloud::discoveryengine::v1::ConverseConversationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::"
      "ConverseConversation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ConverseConversation(request));
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceTracingConnection::CreateConversation(
    google::cloud::discoveryengine::v1::CreateConversationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::"
      "CreateConversation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateConversation(request));
}

Status ConversationalSearchServiceTracingConnection::DeleteConversation(
    google::cloud::discoveryengine::v1::DeleteConversationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::"
      "DeleteConversation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteConversation(request));
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceTracingConnection::UpdateConversation(
    google::cloud::discoveryengine::v1::UpdateConversationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::"
      "UpdateConversation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateConversation(request));
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceTracingConnection::GetConversation(
    google::cloud::discoveryengine::v1::GetConversationRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::"
      "GetConversation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetConversation(request));
}

StreamRange<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceTracingConnection::ListConversations(
    google::cloud::discoveryengine::v1::ListConversationsRequest request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::"
      "ListConversations");
  internal::OTelScope scope(span);
  auto sr = child_->ListConversations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::discoveryengine::v1::Conversation>(std::move(span),
                                                        std::move(sr));
}

StatusOr<google::cloud::discoveryengine::v1::AnswerQueryResponse>
ConversationalSearchServiceTracingConnection::AnswerQuery(
    google::cloud::discoveryengine::v1::AnswerQueryRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::AnswerQuery");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AnswerQuery(request));
}

StatusOr<google::cloud::discoveryengine::v1::Answer>
ConversationalSearchServiceTracingConnection::GetAnswer(
    google::cloud::discoveryengine::v1::GetAnswerRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::GetAnswer");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAnswer(request));
}

StatusOr<google::cloud::discoveryengine::v1::Session>
ConversationalSearchServiceTracingConnection::CreateSession(
    google::cloud::discoveryengine::v1::CreateSessionRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::"
      "CreateSession");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateSession(request));
}

Status ConversationalSearchServiceTracingConnection::DeleteSession(
    google::cloud::discoveryengine::v1::DeleteSessionRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::"
      "DeleteSession");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteSession(request));
}

StatusOr<google::cloud::discoveryengine::v1::Session>
ConversationalSearchServiceTracingConnection::UpdateSession(
    google::cloud::discoveryengine::v1::UpdateSessionRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::"
      "UpdateSession");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateSession(request));
}

StatusOr<google::cloud::discoveryengine::v1::Session>
ConversationalSearchServiceTracingConnection::GetSession(
    google::cloud::discoveryengine::v1::GetSessionRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::GetSession");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSession(request));
}

StreamRange<google::cloud::discoveryengine::v1::Session>
ConversationalSearchServiceTracingConnection::ListSessions(
    google::cloud::discoveryengine::v1::ListSessionsRequest request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::"
      "ListSessions");
  internal::OTelScope scope(span);
  auto sr = child_->ListSessions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::discoveryengine::v1::Session>(std::move(span),
                                                   std::move(sr));
}

StreamRange<google::longrunning::Operation>
ConversationalSearchServiceTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::"
      "ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
ConversationalSearchServiceTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::"
      "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status ConversationalSearchServiceTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "discoveryengine_v1::ConversationalSearchServiceConnection::"
      "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<discoveryengine_v1::ConversationalSearchServiceConnection>
MakeConversationalSearchServiceTracingConnection(
    std::shared_ptr<discoveryengine_v1::ConversationalSearchServiceConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ConversationalSearchServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
