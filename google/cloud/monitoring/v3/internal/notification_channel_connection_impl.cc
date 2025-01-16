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
// source: google/monitoring/v3/notification_service.proto

#include "google/cloud/monitoring/v3/internal/notification_channel_connection_impl.h"
#include "google/cloud/monitoring/v3/internal/notification_channel_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<monitoring_v3::NotificationChannelServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<monitoring_v3::NotificationChannelServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<monitoring_v3::NotificationChannelServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    monitoring_v3::NotificationChannelServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<monitoring_v3::
               NotificationChannelServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

NotificationChannelServiceConnectionImpl::
    NotificationChannelServiceConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<monitoring_v3_internal::NotificationChannelServiceStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          NotificationChannelServiceConnection::options())) {}

StreamRange<google::monitoring::v3::NotificationChannelDescriptor>
NotificationChannelServiceConnectionImpl::ListNotificationChannelDescriptors(
    google::monitoring::v3::ListNotificationChannelDescriptorsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListNotificationChannelDescriptors(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::monitoring::v3::NotificationChannelDescriptor>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           monitoring_v3::NotificationChannelServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::monitoring::v3::
              ListNotificationChannelDescriptorsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::monitoring::v3::
                    ListNotificationChannelDescriptorsRequest const& request) {
              return stub->ListNotificationChannelDescriptors(context, options,
                                                              request);
            },
            options, r, function_name);
      },
      [](google::monitoring::v3::ListNotificationChannelDescriptorsResponse r) {
        std::vector<google::monitoring::v3::NotificationChannelDescriptor>
            result(r.channel_descriptors().size());
        auto& messages = *r.mutable_channel_descriptors();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::monitoring::v3::NotificationChannelDescriptor>
NotificationChannelServiceConnectionImpl::GetNotificationChannelDescriptor(
    google::monitoring::v3::GetNotificationChannelDescriptorRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetNotificationChannelDescriptor(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::monitoring::v3::GetNotificationChannelDescriptorRequest const&
              request) {
        return stub_->GetNotificationChannelDescriptor(context, options,
                                                       request);
      },
      *current, request, __func__);
}

StreamRange<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceConnectionImpl::ListNotificationChannels(
    google::monitoring::v3::ListNotificationChannelsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListNotificationChannels(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::monitoring::v3::NotificationChannel>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           monitoring_v3::NotificationChannelServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::monitoring::v3::ListNotificationChannelsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::monitoring::v3::ListNotificationChannelsRequest const&
                    request) {
              return stub->ListNotificationChannels(context, options, request);
            },
            options, r, function_name);
      },
      [](google::monitoring::v3::ListNotificationChannelsResponse r) {
        std::vector<google::monitoring::v3::NotificationChannel> result(
            r.notification_channels().size());
        auto& messages = *r.mutable_notification_channels();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceConnectionImpl::GetNotificationChannel(
    google::monitoring::v3::GetNotificationChannelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetNotificationChannel(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::GetNotificationChannelRequest const&
                 request) {
        return stub_->GetNotificationChannel(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceConnectionImpl::CreateNotificationChannel(
    google::monitoring::v3::CreateNotificationChannelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateNotificationChannel(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::CreateNotificationChannelRequest const&
                 request) {
        return stub_->CreateNotificationChannel(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceConnectionImpl::UpdateNotificationChannel(
    google::monitoring::v3::UpdateNotificationChannelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateNotificationChannel(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::UpdateNotificationChannelRequest const&
                 request) {
        return stub_->UpdateNotificationChannel(context, options, request);
      },
      *current, request, __func__);
}

Status NotificationChannelServiceConnectionImpl::DeleteNotificationChannel(
    google::monitoring::v3::DeleteNotificationChannelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteNotificationChannel(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::DeleteNotificationChannelRequest const&
                 request) {
        return stub_->DeleteNotificationChannel(context, options, request);
      },
      *current, request, __func__);
}

Status NotificationChannelServiceConnectionImpl::
    SendNotificationChannelVerificationCode(
        google::monitoring::v3::
            SendNotificationChannelVerificationCodeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SendNotificationChannelVerificationCode(
          request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::monitoring::v3::
              SendNotificationChannelVerificationCodeRequest const& request) {
        return stub_->SendNotificationChannelVerificationCode(context, options,
                                                              request);
      },
      *current, request, __func__);
}

StatusOr<google::monitoring::v3::GetNotificationChannelVerificationCodeResponse>
NotificationChannelServiceConnectionImpl::
    GetNotificationChannelVerificationCode(
        google::monitoring::v3::
            GetNotificationChannelVerificationCodeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetNotificationChannelVerificationCode(
          request),
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::
                 GetNotificationChannelVerificationCodeRequest const& request) {
        return stub_->GetNotificationChannelVerificationCode(context, options,
                                                             request);
      },
      *current, request, __func__);
}

StatusOr<google::monitoring::v3::NotificationChannel>
NotificationChannelServiceConnectionImpl::VerifyNotificationChannel(
    google::monitoring::v3::VerifyNotificationChannelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->VerifyNotificationChannel(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::v3::VerifyNotificationChannelRequest const&
                 request) {
        return stub_->VerifyNotificationChannel(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google
