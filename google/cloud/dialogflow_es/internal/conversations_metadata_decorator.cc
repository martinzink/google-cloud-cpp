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
// source: google/cloud/dialogflow/v2/conversation.proto

#include "google/cloud/dialogflow_es/internal/conversations_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/conversation.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationsMetadata::ConversationsMetadata(
    std::shared_ptr<ConversationsStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsMetadata::CreateConversation(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateConversationRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateConversation(context, request);
}

StatusOr<google::cloud::dialogflow::v2::ListConversationsResponse>
ConversationsMetadata::ListConversations(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListConversationsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListConversations(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsMetadata::GetConversation(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetConversationRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetConversation(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsMetadata::CompleteConversation(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CompleteConversationRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CompleteConversation(context, request);
}

StatusOr<google::cloud::dialogflow::v2::ListMessagesResponse>
ConversationsMetadata::ListMessages(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListMessagesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListMessages(context, request);
}

StatusOr<google::cloud::dialogflow::v2::SuggestConversationSummaryResponse>
ConversationsMetadata::SuggestConversationSummary(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::SuggestConversationSummaryRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("conversation=",
                           internal::UrlEncode(request.conversation())));
  return child_->SuggestConversationSummary(context, request);
}

StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSummaryResponse>
ConversationsMetadata::GenerateStatelessSummary(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GenerateStatelessSummaryRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("stateless_conversation.parent=",
                           internal::UrlEncode(
                               request.stateless_conversation().parent())));
  return child_->GenerateStatelessSummary(context, request);
}

StatusOr<google::cloud::dialogflow::v2::SearchKnowledgeResponse>
ConversationsMetadata::SearchKnowledge(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::SearchKnowledgeRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SearchKnowledge(context, request);
}

void ConversationsMetadata::SetMetadata(grpc::ClientContext& context,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void ConversationsMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
