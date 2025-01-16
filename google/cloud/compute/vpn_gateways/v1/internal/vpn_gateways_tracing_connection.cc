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
// source: google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto

#include "google/cloud/compute/vpn_gateways/v1/internal/vpn_gateways_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_vpn_gateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

VpnGatewaysTracingConnection::VpnGatewaysTracingConnection(
    std::shared_ptr<compute_vpn_gateways_v1::VpnGatewaysConnection> child)
    : child_(std::move(child)) {}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::VpnGatewaysScopedList>>
VpnGatewaysTracingConnection::AggregatedListVpnGateways(
    google::cloud::cpp::compute::vpn_gateways::v1::
        AggregatedListVpnGatewaysRequest request) {
  auto span = internal::MakeSpan(
      "compute_vpn_gateways_v1::VpnGatewaysConnection::"
      "AggregatedListVpnGateways");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListVpnGateways(std::move(request));
  return internal::MakeTracedStreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::VpnGatewaysScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnGatewaysTracingConnection::DeleteVpnGateway(
    google::cloud::cpp::compute::vpn_gateways::v1::
        DeleteVpnGatewayRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_vpn_gateways_v1::VpnGatewaysConnection::DeleteVpnGateway");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteVpnGateway(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
VpnGatewaysTracingConnection::DeleteVpnGateway(
    NoAwaitTag, google::cloud::cpp::compute::vpn_gateways::v1::
                    DeleteVpnGatewayRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_vpn_gateways_v1::VpnGatewaysConnection::DeleteVpnGateway");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteVpnGateway(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnGatewaysTracingConnection::DeleteVpnGateway(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_vpn_gateways_v1::VpnGatewaysConnection::DeleteVpnGateway");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteVpnGateway(operation));
}

StatusOr<google::cloud::cpp::compute::v1::VpnGateway>
VpnGatewaysTracingConnection::GetVpnGateway(
    google::cloud::cpp::compute::vpn_gateways::v1::GetVpnGatewayRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_vpn_gateways_v1::VpnGatewaysConnection::GetVpnGateway");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetVpnGateway(request));
}

StatusOr<google::cloud::cpp::compute::v1::VpnGatewaysGetStatusResponse>
VpnGatewaysTracingConnection::GetStatus(
    google::cloud::cpp::compute::vpn_gateways::v1::GetStatusRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_vpn_gateways_v1::VpnGatewaysConnection::GetStatus");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetStatus(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnGatewaysTracingConnection::InsertVpnGateway(
    google::cloud::cpp::compute::vpn_gateways::v1::
        InsertVpnGatewayRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_vpn_gateways_v1::VpnGatewaysConnection::InsertVpnGateway");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertVpnGateway(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
VpnGatewaysTracingConnection::InsertVpnGateway(
    NoAwaitTag, google::cloud::cpp::compute::vpn_gateways::v1::
                    InsertVpnGatewayRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_vpn_gateways_v1::VpnGatewaysConnection::InsertVpnGateway");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->InsertVpnGateway(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnGatewaysTracingConnection::InsertVpnGateway(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_vpn_gateways_v1::VpnGatewaysConnection::InsertVpnGateway");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertVpnGateway(operation));
}

StreamRange<google::cloud::cpp::compute::v1::VpnGateway>
VpnGatewaysTracingConnection::ListVpnGateways(
    google::cloud::cpp::compute::vpn_gateways::v1::ListVpnGatewaysRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_vpn_gateways_v1::VpnGatewaysConnection::ListVpnGateways");
  internal::OTelScope scope(span);
  auto sr = child_->ListVpnGateways(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::VpnGateway>(std::move(span),
                                                   std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnGatewaysTracingConnection::SetLabels(
    google::cloud::cpp::compute::vpn_gateways::v1::SetLabelsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_vpn_gateways_v1::VpnGatewaysConnection::SetLabels");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetLabels(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
VpnGatewaysTracingConnection::SetLabels(
    NoAwaitTag,
    google::cloud::cpp::compute::vpn_gateways::v1::SetLabelsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_vpn_gateways_v1::VpnGatewaysConnection::SetLabels");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->SetLabels(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnGatewaysTracingConnection::SetLabels(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_vpn_gateways_v1::VpnGatewaysConnection::SetLabels");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetLabels(operation));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
VpnGatewaysTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::vpn_gateways::v1::
        TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_vpn_gateways_v1::VpnGatewaysConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_vpn_gateways_v1::VpnGatewaysConnection>
MakeVpnGatewaysTracingConnection(
    std::shared_ptr<compute_vpn_gateways_v1::VpnGatewaysConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<VpnGatewaysTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_vpn_gateways_v1_internal
}  // namespace cloud
}  // namespace google
