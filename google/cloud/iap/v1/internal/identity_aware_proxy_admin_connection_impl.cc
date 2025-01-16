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
// source: google/cloud/iap/v1/service.proto

#include "google/cloud/iap/v1/internal/identity_aware_proxy_admin_connection_impl.h"
#include "google/cloud/iap/v1/internal/identity_aware_proxy_admin_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace iap_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<iap_v1::IdentityAwareProxyAdminServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<iap_v1::IdentityAwareProxyAdminServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<iap_v1::IdentityAwareProxyAdminServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    iap_v1::IdentityAwareProxyAdminServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<
          iap_v1::
              IdentityAwareProxyAdminServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

IdentityAwareProxyAdminServiceConnectionImpl::
    IdentityAwareProxyAdminServiceConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<iap_v1_internal::IdentityAwareProxyAdminServiceStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          IdentityAwareProxyAdminServiceConnection::options())) {}

StatusOr<google::iam::v1::Policy>
IdentityAwareProxyAdminServiceConnectionImpl::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetIamPolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::iam::v1::Policy>
IdentityAwareProxyAdminServiceConnectionImpl::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetIamPolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IdentityAwareProxyAdminServiceConnectionImpl::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TestIamPermissions(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::iap::v1::IapSettings>
IdentityAwareProxyAdminServiceConnectionImpl::GetIapSettings(
    google::cloud::iap::v1::GetIapSettingsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetIapSettings(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::iap::v1::GetIapSettingsRequest const& request) {
        return stub_->GetIapSettings(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::iap::v1::IapSettings>
IdentityAwareProxyAdminServiceConnectionImpl::UpdateIapSettings(
    google::cloud::iap::v1::UpdateIapSettingsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateIapSettings(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::iap::v1::UpdateIapSettingsRequest const& request) {
        return stub_->UpdateIapSettings(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceConnectionImpl::ListTunnelDestGroups(
    google::cloud::iap::v1::ListTunnelDestGroupsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListTunnelDestGroups(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::iap::v1::TunnelDestGroup>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<iap_v1::IdentityAwareProxyAdminServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::iap::v1::ListTunnelDestGroupsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::iap::v1::ListTunnelDestGroupsRequest const&
                       request) {
              return stub->ListTunnelDestGroups(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::iap::v1::ListTunnelDestGroupsResponse r) {
        std::vector<google::cloud::iap::v1::TunnelDestGroup> result(
            r.tunnel_dest_groups().size());
        auto& messages = *r.mutable_tunnel_dest_groups();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceConnectionImpl::CreateTunnelDestGroup(
    google::cloud::iap::v1::CreateTunnelDestGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateTunnelDestGroup(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::iap::v1::CreateTunnelDestGroupRequest const& request) {
        return stub_->CreateTunnelDestGroup(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceConnectionImpl::GetTunnelDestGroup(
    google::cloud::iap::v1::GetTunnelDestGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTunnelDestGroup(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::iap::v1::GetTunnelDestGroupRequest const& request) {
        return stub_->GetTunnelDestGroup(context, options, request);
      },
      *current, request, __func__);
}

Status IdentityAwareProxyAdminServiceConnectionImpl::DeleteTunnelDestGroup(
    google::cloud::iap::v1::DeleteTunnelDestGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteTunnelDestGroup(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::iap::v1::DeleteTunnelDestGroupRequest const& request) {
        return stub_->DeleteTunnelDestGroup(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceConnectionImpl::UpdateTunnelDestGroup(
    google::cloud::iap::v1::UpdateTunnelDestGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateTunnelDestGroup(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::iap::v1::UpdateTunnelDestGroupRequest const& request) {
        return stub_->UpdateTunnelDestGroup(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_v1_internal
}  // namespace cloud
}  // namespace google
