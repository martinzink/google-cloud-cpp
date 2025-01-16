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
// source: google/cloud/recaptchaenterprise/v1/recaptchaenterprise.proto

#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_connection_impl.h"
#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace recaptchaenterprise_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<recaptchaenterprise_v1::RecaptchaEnterpriseServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<
          recaptchaenterprise_v1::RecaptchaEnterpriseServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<recaptchaenterprise_v1::
               RecaptchaEnterpriseServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<recaptchaenterprise_v1::
                    RecaptchaEnterpriseServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<recaptchaenterprise_v1::
               RecaptchaEnterpriseServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

RecaptchaEnterpriseServiceConnectionImpl::
    RecaptchaEnterpriseServiceConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<
            recaptchaenterprise_v1_internal::RecaptchaEnterpriseServiceStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          RecaptchaEnterpriseServiceConnection::options())) {}

StatusOr<google::cloud::recaptchaenterprise::v1::Assessment>
RecaptchaEnterpriseServiceConnectionImpl::CreateAssessment(
    google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateAssessment(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&
              request) {
        return stub_->CreateAssessment(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::recaptchaenterprise::v1::AnnotateAssessmentResponse>
RecaptchaEnterpriseServiceConnectionImpl::AnnotateAssessment(
    google::cloud::recaptchaenterprise::v1::AnnotateAssessmentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AnnotateAssessment(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recaptchaenterprise::v1::
                 AnnotateAssessmentRequest const& request) {
        return stub_->AnnotateAssessment(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceConnectionImpl::CreateKey(
    google::cloud::recaptchaenterprise::v1::CreateKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateKey(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recaptchaenterprise::v1::CreateKeyRequest const&
                 request) {
        return stub_->CreateKey(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceConnectionImpl::ListKeys(
    google::cloud::recaptchaenterprise::v1::ListKeysRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListKeys(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::recaptchaenterprise::v1::Key>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           recaptchaenterprise_v1::RecaptchaEnterpriseServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::recaptchaenterprise::v1::ListKeysRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::recaptchaenterprise::v1::ListKeysRequest const&
                    request) {
              return stub->ListKeys(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::recaptchaenterprise::v1::ListKeysResponse r) {
        std::vector<google::cloud::recaptchaenterprise::v1::Key> result(
            r.keys().size());
        auto& messages = *r.mutable_keys();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::RetrieveLegacySecretKeyResponse>
RecaptchaEnterpriseServiceConnectionImpl::RetrieveLegacySecretKey(
    google::cloud::recaptchaenterprise::v1::
        RetrieveLegacySecretKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RetrieveLegacySecretKey(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recaptchaenterprise::v1::
                 RetrieveLegacySecretKeyRequest const& request) {
        return stub_->RetrieveLegacySecretKey(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceConnectionImpl::GetKey(
    google::cloud::recaptchaenterprise::v1::GetKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetKey(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recaptchaenterprise::v1::GetKeyRequest const&
                 request) { return stub_->GetKey(context, options, request); },
      *current, request, __func__);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceConnectionImpl::UpdateKey(
    google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateKey(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const&
                 request) {
        return stub_->UpdateKey(context, options, request);
      },
      *current, request, __func__);
}

Status RecaptchaEnterpriseServiceConnectionImpl::DeleteKey(
    google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteKey(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const&
                 request) {
        return stub_->DeleteKey(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceConnectionImpl::MigrateKey(
    google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->MigrateKey(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const&
                 request) {
        return stub_->MigrateKey(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::recaptchaenterprise::v1::AddIpOverrideResponse>
RecaptchaEnterpriseServiceConnectionImpl::AddIpOverride(
    google::cloud::recaptchaenterprise::v1::AddIpOverrideRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AddIpOverride(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recaptchaenterprise::v1::AddIpOverrideRequest const&
                 request) {
        return stub_->AddIpOverride(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::recaptchaenterprise::v1::RemoveIpOverrideResponse>
RecaptchaEnterpriseServiceConnectionImpl::RemoveIpOverride(
    google::cloud::recaptchaenterprise::v1::RemoveIpOverrideRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RemoveIpOverride(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::recaptchaenterprise::v1::RemoveIpOverrideRequest const&
              request) {
        return stub_->RemoveIpOverride(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::recaptchaenterprise::v1::IpOverrideData>
RecaptchaEnterpriseServiceConnectionImpl::ListIpOverrides(
    google::cloud::recaptchaenterprise::v1::ListIpOverridesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListIpOverrides(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::recaptchaenterprise::v1::IpOverrideData>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           recaptchaenterprise_v1::RecaptchaEnterpriseServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::recaptchaenterprise::v1::ListIpOverridesRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::recaptchaenterprise::v1::
                       ListIpOverridesRequest const& request) {
              return stub->ListIpOverrides(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::recaptchaenterprise::v1::ListIpOverridesResponse r) {
        std::vector<google::cloud::recaptchaenterprise::v1::IpOverrideData>
            result(r.ip_overrides().size());
        auto& messages = *r.mutable_ip_overrides();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::recaptchaenterprise::v1::Metrics>
RecaptchaEnterpriseServiceConnectionImpl::GetMetrics(
    google::cloud::recaptchaenterprise::v1::GetMetricsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetMetrics(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recaptchaenterprise::v1::GetMetricsRequest const&
                 request) {
        return stub_->GetMetrics(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceConnectionImpl::CreateFirewallPolicy(
    google::cloud::recaptchaenterprise::v1::CreateFirewallPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateFirewallPolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recaptchaenterprise::v1::
                 CreateFirewallPolicyRequest const& request) {
        return stub_->CreateFirewallPolicy(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceConnectionImpl::ListFirewallPolicies(
    google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListFirewallPolicies(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::recaptchaenterprise::v1::FirewallPolicy>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           recaptchaenterprise_v1::RecaptchaEnterpriseServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options, google::cloud::recaptchaenterprise::v1::
                                      ListFirewallPoliciesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::recaptchaenterprise::v1::
                       ListFirewallPoliciesRequest const& request) {
              return stub->ListFirewallPolicies(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesResponse
             r) {
        std::vector<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
            result(r.firewall_policies().size());
        auto& messages = *r.mutable_firewall_policies();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceConnectionImpl::GetFirewallPolicy(
    google::cloud::recaptchaenterprise::v1::GetFirewallPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetFirewallPolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recaptchaenterprise::v1::
                 GetFirewallPolicyRequest const& request) {
        return stub_->GetFirewallPolicy(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceConnectionImpl::UpdateFirewallPolicy(
    google::cloud::recaptchaenterprise::v1::UpdateFirewallPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateFirewallPolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recaptchaenterprise::v1::
                 UpdateFirewallPolicyRequest const& request) {
        return stub_->UpdateFirewallPolicy(context, options, request);
      },
      *current, request, __func__);
}

Status RecaptchaEnterpriseServiceConnectionImpl::DeleteFirewallPolicy(
    google::cloud::recaptchaenterprise::v1::DeleteFirewallPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteFirewallPolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recaptchaenterprise::v1::
                 DeleteFirewallPolicyRequest const& request) {
        return stub_->DeleteFirewallPolicy(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::ReorderFirewallPoliciesResponse>
RecaptchaEnterpriseServiceConnectionImpl::ReorderFirewallPolicies(
    google::cloud::recaptchaenterprise::v1::
        ReorderFirewallPoliciesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ReorderFirewallPolicies(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recaptchaenterprise::v1::
                 ReorderFirewallPoliciesRequest const& request) {
        return stub_->ReorderFirewallPolicies(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::recaptchaenterprise::v1::RelatedAccountGroup>
RecaptchaEnterpriseServiceConnectionImpl::ListRelatedAccountGroups(
    google::cloud::recaptchaenterprise::v1::ListRelatedAccountGroupsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListRelatedAccountGroups(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::recaptchaenterprise::v1::RelatedAccountGroup>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           recaptchaenterprise_v1::RecaptchaEnterpriseServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::recaptchaenterprise::v1::
              ListRelatedAccountGroupsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::recaptchaenterprise::v1::
                       ListRelatedAccountGroupsRequest const& request) {
              return stub->ListRelatedAccountGroups(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::recaptchaenterprise::v1::
             ListRelatedAccountGroupsResponse r) {
        std::vector<google::cloud::recaptchaenterprise::v1::RelatedAccountGroup>
            result(r.related_account_groups().size());
        auto& messages = *r.mutable_related_account_groups();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<
    google::cloud::recaptchaenterprise::v1::RelatedAccountGroupMembership>
RecaptchaEnterpriseServiceConnectionImpl::ListRelatedAccountGroupMemberships(
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupMembershipsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListRelatedAccountGroupMemberships(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<
      google::cloud::recaptchaenterprise::v1::RelatedAccountGroupMembership>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           recaptchaenterprise_v1::RecaptchaEnterpriseServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::recaptchaenterprise::v1::
              ListRelatedAccountGroupMembershipsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::recaptchaenterprise::v1::
                    ListRelatedAccountGroupMembershipsRequest const& request) {
              return stub->ListRelatedAccountGroupMemberships(context, options,
                                                              request);
            },
            options, r, function_name);
      },
      [](google::cloud::recaptchaenterprise::v1::
             ListRelatedAccountGroupMembershipsResponse r) {
        std::vector<google::cloud::recaptchaenterprise::v1::
                        RelatedAccountGroupMembership>
            result(r.related_account_group_memberships().size());
        auto& messages = *r.mutable_related_account_group_memberships();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<
    google::cloud::recaptchaenterprise::v1::RelatedAccountGroupMembership>
RecaptchaEnterpriseServiceConnectionImpl::SearchRelatedAccountGroupMemberships(
    google::cloud::recaptchaenterprise::v1::
        SearchRelatedAccountGroupMembershipsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->SearchRelatedAccountGroupMemberships(
          request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<
      google::cloud::recaptchaenterprise::v1::RelatedAccountGroupMembership>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           recaptchaenterprise_v1::RecaptchaEnterpriseServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::recaptchaenterprise::v1::
              SearchRelatedAccountGroupMembershipsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::recaptchaenterprise::v1::
                       SearchRelatedAccountGroupMembershipsRequest const&
                           request) {
              return stub->SearchRelatedAccountGroupMemberships(
                  context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::recaptchaenterprise::v1::
             SearchRelatedAccountGroupMembershipsResponse r) {
        std::vector<google::cloud::recaptchaenterprise::v1::
                        RelatedAccountGroupMembership>
            result(r.related_account_group_memberships().size());
        auto& messages = *r.mutable_related_account_group_memberships();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recaptchaenterprise_v1_internal
}  // namespace cloud
}  // namespace google
