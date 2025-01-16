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
// source: google/cloud/ids/v1/ids.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_V1_INTERNAL_IDS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_V1_INTERNAL_IDS_TRACING_CONNECTION_H

#include "google/cloud/ids/v1/ids_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace ids_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class IDSTracingConnection : public ids_v1::IDSConnection {
 public:
  ~IDSTracingConnection() override = default;

  explicit IDSTracingConnection(std::shared_ptr<ids_v1::IDSConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::ids::v1::Endpoint> ListEndpoints(
      google::cloud::ids::v1::ListEndpointsRequest request) override;

  StatusOr<google::cloud::ids::v1::Endpoint> GetEndpoint(
      google::cloud::ids::v1::GetEndpointRequest const& request) override;

  future<StatusOr<google::cloud::ids::v1::Endpoint>> CreateEndpoint(
      google::cloud::ids::v1::CreateEndpointRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateEndpoint(
      NoAwaitTag,
      google::cloud::ids::v1::CreateEndpointRequest const& request) override;

  future<StatusOr<google::cloud::ids::v1::Endpoint>> CreateEndpoint(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::ids::v1::OperationMetadata>> DeleteEndpoint(
      google::cloud::ids::v1::DeleteEndpointRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteEndpoint(
      NoAwaitTag,
      google::cloud::ids::v1::DeleteEndpointRequest const& request) override;

  future<StatusOr<google::cloud::ids::v1::OperationMetadata>> DeleteEndpoint(
      google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<ids_v1::IDSConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<ids_v1::IDSConnection> MakeIDSTracingConnection(
    std::shared_ptr<ids_v1::IDSConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace ids_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_V1_INTERNAL_IDS_TRACING_CONNECTION_H
