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
// source: google/cloud/accessapproval/v1/accessapproval.proto

#include "google/cloud/accessapproval/v1/internal/access_approval_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace accessapproval_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AccessApprovalTracingConnection::AccessApprovalTracingConnection(
    std::shared_ptr<accessapproval_v1::AccessApprovalConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalTracingConnection::ListApprovalRequests(
    google::cloud::accessapproval::v1::ListApprovalRequestsMessage request) {
  auto span = internal::MakeSpan(
      "accessapproval_v1::AccessApprovalConnection::ListApprovalRequests");
  internal::OTelScope scope(span);
  auto sr = child_->ListApprovalRequests(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::accessapproval::v1::ApprovalRequest>(std::move(span),
                                                          std::move(sr));
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalTracingConnection::GetApprovalRequest(
    google::cloud::accessapproval::v1::GetApprovalRequestMessage const&
        request) {
  auto span = internal::MakeSpan(
      "accessapproval_v1::AccessApprovalConnection::GetApprovalRequest");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetApprovalRequest(request));
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalTracingConnection::ApproveApprovalRequest(
    google::cloud::accessapproval::v1::ApproveApprovalRequestMessage const&
        request) {
  auto span = internal::MakeSpan(
      "accessapproval_v1::AccessApprovalConnection::ApproveApprovalRequest");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ApproveApprovalRequest(request));
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalTracingConnection::DismissApprovalRequest(
    google::cloud::accessapproval::v1::DismissApprovalRequestMessage const&
        request) {
  auto span = internal::MakeSpan(
      "accessapproval_v1::AccessApprovalConnection::DismissApprovalRequest");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DismissApprovalRequest(request));
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalTracingConnection::InvalidateApprovalRequest(
    google::cloud::accessapproval::v1::InvalidateApprovalRequestMessage const&
        request) {
  auto span = internal::MakeSpan(
      "accessapproval_v1::AccessApprovalConnection::InvalidateApprovalRequest");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->InvalidateApprovalRequest(request));
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
AccessApprovalTracingConnection::GetAccessApprovalSettings(
    google::cloud::accessapproval::v1::GetAccessApprovalSettingsMessage const&
        request) {
  auto span = internal::MakeSpan(
      "accessapproval_v1::AccessApprovalConnection::GetAccessApprovalSettings");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAccessApprovalSettings(request));
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
AccessApprovalTracingConnection::UpdateAccessApprovalSettings(
    google::cloud::accessapproval::v1::
        UpdateAccessApprovalSettingsMessage const& request) {
  auto span = internal::MakeSpan(
      "accessapproval_v1::AccessApprovalConnection::"
      "UpdateAccessApprovalSettings");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateAccessApprovalSettings(request));
}

Status AccessApprovalTracingConnection::DeleteAccessApprovalSettings(
    google::cloud::accessapproval::v1::
        DeleteAccessApprovalSettingsMessage const& request) {
  auto span = internal::MakeSpan(
      "accessapproval_v1::AccessApprovalConnection::"
      "DeleteAccessApprovalSettings");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteAccessApprovalSettings(request));
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalServiceAccount>
AccessApprovalTracingConnection::GetAccessApprovalServiceAccount(
    google::cloud::accessapproval::v1::
        GetAccessApprovalServiceAccountMessage const& request) {
  auto span = internal::MakeSpan(
      "accessapproval_v1::AccessApprovalConnection::"
      "GetAccessApprovalServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->GetAccessApprovalServiceAccount(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<accessapproval_v1::AccessApprovalConnection>
MakeAccessApprovalTracingConnection(
    std::shared_ptr<accessapproval_v1::AccessApprovalConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<AccessApprovalTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accessapproval_v1_internal
}  // namespace cloud
}  // namespace google
