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
// source: google/cloud/compute/firewalls/v1/firewalls.proto

#include "google/cloud/compute/firewalls/v1/firewalls_connection.h"
#include "google/cloud/compute/firewalls/v1/firewalls_options.h"
#include "google/cloud/compute/firewalls/v1/internal/firewalls_option_defaults.h"
#include "google/cloud/compute/firewalls/v1/internal/firewalls_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_firewalls_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FirewallsConnection::~FirewallsConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsConnection::DeleteFirewall(
    google::cloud::cpp::compute::firewalls::v1::DeleteFirewallRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallsConnection::DeleteFirewall(
    NoAwaitTag,
    google::cloud::cpp::compute::firewalls::v1::DeleteFirewallRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsConnection::DeleteFirewall(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Firewall>
FirewallsConnection::GetFirewall(
    google::cloud::cpp::compute::firewalls::v1::GetFirewallRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsConnection::InsertFirewall(
    google::cloud::cpp::compute::firewalls::v1::InsertFirewallRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallsConnection::InsertFirewall(
    NoAwaitTag,
    google::cloud::cpp::compute::firewalls::v1::InsertFirewallRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsConnection::InsertFirewall(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::Firewall>
FirewallsConnection::ListFirewalls(
    google::cloud::cpp::compute::firewalls::v1::
        ListFirewallsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::Firewall>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsConnection::PatchFirewall(
    google::cloud::cpp::compute::firewalls::v1::PatchFirewallRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallsConnection::PatchFirewall(
    NoAwaitTag,
    google::cloud::cpp::compute::firewalls::v1::PatchFirewallRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsConnection::PatchFirewall(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsConnection::UpdateFirewall(
    google::cloud::cpp::compute::firewalls::v1::UpdateFirewallRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
FirewallsConnection::UpdateFirewall(
    NoAwaitTag,
    google::cloud::cpp::compute::firewalls::v1::UpdateFirewallRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallsConnection::UpdateFirewall(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_firewalls_v1
}  // namespace cloud
}  // namespace google
