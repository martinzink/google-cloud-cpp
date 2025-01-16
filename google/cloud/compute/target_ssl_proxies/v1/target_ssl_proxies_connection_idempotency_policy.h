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
// source: google/cloud/compute/target_ssl_proxies/v1/target_ssl_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_SSL_PROXIES_V1_TARGET_SSL_PROXIES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_SSL_PROXIES_V1_TARGET_SSL_PROXIES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/target_ssl_proxies/v1/target_ssl_proxies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_ssl_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TargetSslProxiesConnectionIdempotencyPolicy {
 public:
  virtual ~TargetSslProxiesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<TargetSslProxiesConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency DeleteTargetSslProxy(
      google::cloud::cpp::compute::target_ssl_proxies::v1::
          DeleteTargetSslProxyRequest const& request);

  virtual google::cloud::Idempotency GetTargetSslProxy(
      google::cloud::cpp::compute::target_ssl_proxies::v1::
          GetTargetSslProxyRequest const& request);

  virtual google::cloud::Idempotency InsertTargetSslProxy(
      google::cloud::cpp::compute::target_ssl_proxies::v1::
          InsertTargetSslProxyRequest const& request);

  virtual google::cloud::Idempotency ListTargetSslProxies(
      google::cloud::cpp::compute::target_ssl_proxies::v1::
          ListTargetSslProxiesRequest request);

  virtual google::cloud::Idempotency SetBackendService(
      google::cloud::cpp::compute::target_ssl_proxies::v1::
          SetBackendServiceRequest const& request);

  virtual google::cloud::Idempotency SetCertificateMap(
      google::cloud::cpp::compute::target_ssl_proxies::v1::
          SetCertificateMapRequest const& request);

  virtual google::cloud::Idempotency SetProxyHeader(
      google::cloud::cpp::compute::target_ssl_proxies::v1::
          SetProxyHeaderRequest const& request);

  virtual google::cloud::Idempotency SetSslCertificates(
      google::cloud::cpp::compute::target_ssl_proxies::v1::
          SetSslCertificatesRequest const& request);

  virtual google::cloud::Idempotency SetSslPolicy(
      google::cloud::cpp::compute::target_ssl_proxies::v1::
          SetSslPolicyRequest const& request);
};

std::unique_ptr<TargetSslProxiesConnectionIdempotencyPolicy>
MakeDefaultTargetSslProxiesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_ssl_proxies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_SSL_PROXIES_V1_TARGET_SSL_PROXIES_CONNECTION_IDEMPOTENCY_POLICY_H
