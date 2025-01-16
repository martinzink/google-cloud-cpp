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

#include "google/cloud/discoveryengine/v1/internal/conversational_search_connection_impl.h"
#include "google/cloud/discoveryengine/v1/internal/conversational_search_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<discoveryengine_v1::ConversationalSearchServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<discoveryengine_v1::ConversationalSearchServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<discoveryengine_v1::ConversationalSearchServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    discoveryengine_v1::ConversationalSearchServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<discoveryengine_v1::
               ConversationalSearchServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

ConversationalSearchServiceConnectionImpl::
    ConversationalSearchServiceConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<
            discoveryengine_v1_internal::ConversationalSearchServiceStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          ConversationalSearchServiceConnection::options())) {}

StatusOr<google::cloud::discoveryengine::v1::ConverseConversationResponse>
ConversationalSearchServiceConnectionImpl::ConverseConversation(
    google::cloud::discoveryengine::v1::ConverseConversationRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ConverseConversation(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::discoveryengine::v1::ConverseConversationRequest const&
              request) {
        return stub_->ConverseConversation(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceConnectionImpl::CreateConversation(
    google::cloud::discoveryengine::v1::CreateConversationRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateConversation(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::discoveryengine::v1::CreateConversationRequest const&
              request) {
        return stub_->CreateConversation(context, options, request);
      },
      *current, request, __func__);
}

Status ConversationalSearchServiceConnectionImpl::DeleteConversation(
    google::cloud::discoveryengine::v1::DeleteConversationRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteConversation(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::discoveryengine::v1::DeleteConversationRequest const&
              request) {
        return stub_->DeleteConversation(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceConnectionImpl::UpdateConversation(
    google::cloud::discoveryengine::v1::UpdateConversationRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateConversation(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::discoveryengine::v1::UpdateConversationRequest const&
              request) {
        return stub_->UpdateConversation(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceConnectionImpl::GetConversation(
    google::cloud::discoveryengine::v1::GetConversationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetConversation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::GetConversationRequest const&
                 request) {
        return stub_->GetConversation(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceConnectionImpl::ListConversations(
    google::cloud::discoveryengine::v1::ListConversationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListConversations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::discoveryengine::v1::Conversation>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           discoveryengine_v1::ConversationalSearchServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::discoveryengine::v1::ListConversationsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::discoveryengine::v1::
                       ListConversationsRequest const& request) {
              return stub->ListConversations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::discoveryengine::v1::ListConversationsResponse r) {
        std::vector<google::cloud::discoveryengine::v1::Conversation> result(
            r.conversations().size());
        auto& messages = *r.mutable_conversations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::discoveryengine::v1::AnswerQueryResponse>
ConversationalSearchServiceConnectionImpl::AnswerQuery(
    google::cloud::discoveryengine::v1::AnswerQueryRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AnswerQuery(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::AnswerQueryRequest const&
                 request) {
        return stub_->AnswerQuery(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::discoveryengine::v1::Answer>
ConversationalSearchServiceConnectionImpl::GetAnswer(
    google::cloud::discoveryengine::v1::GetAnswerRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetAnswer(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::discoveryengine::v1::GetAnswerRequest const& request) {
        return stub_->GetAnswer(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::discoveryengine::v1::Session>
ConversationalSearchServiceConnectionImpl::CreateSession(
    google::cloud::discoveryengine::v1::CreateSessionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateSession(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::CreateSessionRequest const&
                 request) {
        return stub_->CreateSession(context, options, request);
      },
      *current, request, __func__);
}

Status ConversationalSearchServiceConnectionImpl::DeleteSession(
    google::cloud::discoveryengine::v1::DeleteSessionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteSession(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::DeleteSessionRequest const&
                 request) {
        return stub_->DeleteSession(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::discoveryengine::v1::Session>
ConversationalSearchServiceConnectionImpl::UpdateSession(
    google::cloud::discoveryengine::v1::UpdateSessionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateSession(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::UpdateSessionRequest const&
                 request) {
        return stub_->UpdateSession(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::discoveryengine::v1::Session>
ConversationalSearchServiceConnectionImpl::GetSession(
    google::cloud::discoveryengine::v1::GetSessionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetSession(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::GetSessionRequest const&
                 request) {
        return stub_->GetSession(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::discoveryengine::v1::Session>
ConversationalSearchServiceConnectionImpl::ListSessions(
    google::cloud::discoveryengine::v1::ListSessionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListSessions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::discoveryengine::v1::Session>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           discoveryengine_v1::ConversationalSearchServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::discoveryengine::v1::ListSessionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::discoveryengine::v1::ListSessionsRequest const&
                    request) {
              return stub->ListSessions(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::discoveryengine::v1::ListSessionsResponse r) {
        std::vector<google::cloud::discoveryengine::v1::Session> result(
            r.sessions().size());
        auto& messages = *r.mutable_sessions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::longrunning::Operation>
ConversationalSearchServiceConnectionImpl::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::longrunning::Operation>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           discoveryengine_v1::ConversationalSearchServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::longrunning::ListOperationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::longrunning::ListOperationsRequest const& request) {
              return stub->ListOperations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::longrunning::ListOperationsResponse r) {
        std::vector<google::longrunning::Operation> result(
            r.operations().size());
        auto& messages = *r.mutable_operations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::longrunning::Operation>
ConversationalSearchServiceConnectionImpl::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return stub_->GetOperation(context, options, request);
      },
      *current, request, __func__);
}

Status ConversationalSearchServiceConnectionImpl::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CancelOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return stub_->CancelOperation(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
