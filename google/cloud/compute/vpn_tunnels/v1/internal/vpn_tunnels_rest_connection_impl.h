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
// source: google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_TUNNELS_V1_INTERNAL_VPN_TUNNELS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_TUNNELS_V1_INTERNAL_VPN_TUNNELS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/vpn_tunnels/v1/internal/vpn_tunnels_rest_stub.h"
#include "google/cloud/compute/vpn_tunnels/v1/internal/vpn_tunnels_retry_traits.h"
#include "google/cloud/compute/vpn_tunnels/v1/vpn_tunnels_connection.h"
#include "google/cloud/compute/vpn_tunnels/v1/vpn_tunnels_connection_idempotency_policy.h"
#include "google/cloud/compute/vpn_tunnels/v1/vpn_tunnels_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_vpn_tunnels_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VpnTunnelsRestConnectionImpl
    : public compute_vpn_tunnels_v1::VpnTunnelsConnection {
 public:
  ~VpnTunnelsRestConnectionImpl() override = default;

  VpnTunnelsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_vpn_tunnels_v1_internal::VpnTunnelsRestStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<std::pair<std::string,
                        google::cloud::cpp::compute::v1::VpnTunnelsScopedList>>
  AggregatedListVpnTunnels(
      google::cloud::cpp::compute::vpn_tunnels::v1::
          AggregatedListVpnTunnelsRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteVpnTunnel(
      google::cloud::cpp::compute::vpn_tunnels::v1::
          DeleteVpnTunnelRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteVpnTunnel(
      NoAwaitTag, google::cloud::cpp::compute::vpn_tunnels::v1::
                      DeleteVpnTunnelRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteVpnTunnel(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::VpnTunnel> GetVpnTunnel(
      google::cloud::cpp::compute::vpn_tunnels::v1::GetVpnTunnelRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertVpnTunnel(
      google::cloud::cpp::compute::vpn_tunnels::v1::
          InsertVpnTunnelRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertVpnTunnel(
      NoAwaitTag, google::cloud::cpp::compute::vpn_tunnels::v1::
                      InsertVpnTunnelRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertVpnTunnel(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::VpnTunnel> ListVpnTunnels(
      google::cloud::cpp::compute::vpn_tunnels::v1::ListVpnTunnelsRequest
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::vpn_tunnels::v1::SetLabelsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      NoAwaitTag,
      google::cloud::cpp::compute::vpn_tunnels::v1::SetLabelsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<compute_vpn_tunnels_v1::VpnTunnelsRetryPolicy>
  retry_policy(Options const& options) {
    return options.get<compute_vpn_tunnels_v1::VpnTunnelsRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options.get<compute_vpn_tunnels_v1::VpnTunnelsBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_vpn_tunnels_v1::VpnTunnelsConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_vpn_tunnels_v1::
                 VpnTunnelsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options.get<compute_vpn_tunnels_v1::VpnTunnelsPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_vpn_tunnels_v1_internal::VpnTunnelsRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_vpn_tunnels_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_TUNNELS_V1_INTERNAL_VPN_TUNNELS_REST_CONNECTION_IMPL_H
