// Copyright 2021 Google LLC
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
// source: google/iam/admin/v1/iam.proto

#include "google/cloud/iam/admin/v1/internal/iam_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace iam_admin_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IAMTracingConnection::IAMTracingConnection(
    std::shared_ptr<iam_admin_v1::IAMConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::iam::admin::v1::ServiceAccount>
IAMTracingConnection::ListServiceAccounts(
    google::iam::admin::v1::ListServiceAccountsRequest request) {
  auto span =
      internal::MakeSpan("iam_admin_v1::IAMConnection::ListServiceAccounts");
  internal::OTelScope scope(span);
  auto sr = child_->ListServiceAccounts(std::move(request));
  return internal::MakeTracedStreamRange<
      google::iam::admin::v1::ServiceAccount>(std::move(span), std::move(sr));
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMTracingConnection::GetServiceAccount(
    google::iam::admin::v1::GetServiceAccountRequest const& request) {
  auto span =
      internal::MakeSpan("iam_admin_v1::IAMConnection::GetServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetServiceAccount(request));
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMTracingConnection::CreateServiceAccount(
    google::iam::admin::v1::CreateServiceAccountRequest const& request) {
  auto span =
      internal::MakeSpan("iam_admin_v1::IAMConnection::CreateServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateServiceAccount(request));
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMTracingConnection::PatchServiceAccount(
    google::iam::admin::v1::PatchServiceAccountRequest const& request) {
  auto span =
      internal::MakeSpan("iam_admin_v1::IAMConnection::PatchServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->PatchServiceAccount(request));
}

Status IAMTracingConnection::DeleteServiceAccount(
    google::iam::admin::v1::DeleteServiceAccountRequest const& request) {
  auto span =
      internal::MakeSpan("iam_admin_v1::IAMConnection::DeleteServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteServiceAccount(request));
}

StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
IAMTracingConnection::UndeleteServiceAccount(
    google::iam::admin::v1::UndeleteServiceAccountRequest const& request) {
  auto span =
      internal::MakeSpan("iam_admin_v1::IAMConnection::UndeleteServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UndeleteServiceAccount(request));
}

Status IAMTracingConnection::EnableServiceAccount(
    google::iam::admin::v1::EnableServiceAccountRequest const& request) {
  auto span =
      internal::MakeSpan("iam_admin_v1::IAMConnection::EnableServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->EnableServiceAccount(request));
}

Status IAMTracingConnection::DisableServiceAccount(
    google::iam::admin::v1::DisableServiceAccountRequest const& request) {
  auto span =
      internal::MakeSpan("iam_admin_v1::IAMConnection::DisableServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DisableServiceAccount(request));
}

StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
IAMTracingConnection::ListServiceAccountKeys(
    google::iam::admin::v1::ListServiceAccountKeysRequest const& request) {
  auto span =
      internal::MakeSpan("iam_admin_v1::IAMConnection::ListServiceAccountKeys");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ListServiceAccountKeys(request));
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMTracingConnection::GetServiceAccountKey(
    google::iam::admin::v1::GetServiceAccountKeyRequest const& request) {
  auto span =
      internal::MakeSpan("iam_admin_v1::IAMConnection::GetServiceAccountKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetServiceAccountKey(request));
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMTracingConnection::CreateServiceAccountKey(
    google::iam::admin::v1::CreateServiceAccountKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "iam_admin_v1::IAMConnection::CreateServiceAccountKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateServiceAccountKey(request));
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMTracingConnection::UploadServiceAccountKey(
    google::iam::admin::v1::UploadServiceAccountKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "iam_admin_v1::IAMConnection::UploadServiceAccountKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UploadServiceAccountKey(request));
}

Status IAMTracingConnection::DeleteServiceAccountKey(
    google::iam::admin::v1::DeleteServiceAccountKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "iam_admin_v1::IAMConnection::DeleteServiceAccountKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteServiceAccountKey(request));
}

Status IAMTracingConnection::DisableServiceAccountKey(
    google::iam::admin::v1::DisableServiceAccountKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "iam_admin_v1::IAMConnection::DisableServiceAccountKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DisableServiceAccountKey(request));
}

Status IAMTracingConnection::EnableServiceAccountKey(
    google::iam::admin::v1::EnableServiceAccountKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "iam_admin_v1::IAMConnection::EnableServiceAccountKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->EnableServiceAccountKey(request));
}

StatusOr<google::iam::v1::Policy> IAMTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan("iam_admin_v1::IAMConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy> IAMTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan("iam_admin_v1::IAMConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IAMTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span =
      internal::MakeSpan("iam_admin_v1::IAMConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

StreamRange<google::iam::admin::v1::Role>
IAMTracingConnection::QueryGrantableRoles(
    google::iam::admin::v1::QueryGrantableRolesRequest request) {
  auto span =
      internal::MakeSpan("iam_admin_v1::IAMConnection::QueryGrantableRoles");
  internal::OTelScope scope(span);
  auto sr = child_->QueryGrantableRoles(std::move(request));
  return internal::MakeTracedStreamRange<google::iam::admin::v1::Role>(
      std::move(span), std::move(sr));
}

StreamRange<google::iam::admin::v1::Role> IAMTracingConnection::ListRoles(
    google::iam::admin::v1::ListRolesRequest request) {
  auto span = internal::MakeSpan("iam_admin_v1::IAMConnection::ListRoles");
  internal::OTelScope scope(span);
  auto sr = child_->ListRoles(std::move(request));
  return internal::MakeTracedStreamRange<google::iam::admin::v1::Role>(
      std::move(span), std::move(sr));
}

StatusOr<google::iam::admin::v1::Role> IAMTracingConnection::GetRole(
    google::iam::admin::v1::GetRoleRequest const& request) {
  auto span = internal::MakeSpan("iam_admin_v1::IAMConnection::GetRole");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRole(request));
}

StatusOr<google::iam::admin::v1::Role> IAMTracingConnection::CreateRole(
    google::iam::admin::v1::CreateRoleRequest const& request) {
  auto span = internal::MakeSpan("iam_admin_v1::IAMConnection::CreateRole");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateRole(request));
}

StatusOr<google::iam::admin::v1::Role> IAMTracingConnection::UpdateRole(
    google::iam::admin::v1::UpdateRoleRequest const& request) {
  auto span = internal::MakeSpan("iam_admin_v1::IAMConnection::UpdateRole");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateRole(request));
}

StatusOr<google::iam::admin::v1::Role> IAMTracingConnection::DeleteRole(
    google::iam::admin::v1::DeleteRoleRequest const& request) {
  auto span = internal::MakeSpan("iam_admin_v1::IAMConnection::DeleteRole");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteRole(request));
}

StatusOr<google::iam::admin::v1::Role> IAMTracingConnection::UndeleteRole(
    google::iam::admin::v1::UndeleteRoleRequest const& request) {
  auto span = internal::MakeSpan("iam_admin_v1::IAMConnection::UndeleteRole");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UndeleteRole(request));
}

StreamRange<google::iam::admin::v1::Permission>
IAMTracingConnection::QueryTestablePermissions(
    google::iam::admin::v1::QueryTestablePermissionsRequest request) {
  auto span = internal::MakeSpan(
      "iam_admin_v1::IAMConnection::QueryTestablePermissions");
  internal::OTelScope scope(span);
  auto sr = child_->QueryTestablePermissions(std::move(request));
  return internal::MakeTracedStreamRange<google::iam::admin::v1::Permission>(
      std::move(span), std::move(sr));
}

StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
IAMTracingConnection::QueryAuditableServices(
    google::iam::admin::v1::QueryAuditableServicesRequest const& request) {
  auto span =
      internal::MakeSpan("iam_admin_v1::IAMConnection::QueryAuditableServices");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->QueryAuditableServices(request));
}

StatusOr<google::iam::admin::v1::LintPolicyResponse>
IAMTracingConnection::LintPolicy(
    google::iam::admin::v1::LintPolicyRequest const& request) {
  auto span = internal::MakeSpan("iam_admin_v1::IAMConnection::LintPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->LintPolicy(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<iam_admin_v1::IAMConnection> MakeIAMTracingConnection(
    std::shared_ptr<iam_admin_v1::IAMConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<IAMTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_admin_v1_internal
}  // namespace cloud
}  // namespace google
