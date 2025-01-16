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
// source: google/cloud/apigeeconnect/v1/connection.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEECONNECT_V1_INTERNAL_CONNECTION_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEECONNECT_V1_INTERNAL_CONNECTION_TRACING_STUB_H

#include "google/cloud/apigeeconnect/v1/internal/connection_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace apigeeconnect_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ConnectionServiceTracingStub : public ConnectionServiceStub {
 public:
  ~ConnectionServiceTracingStub() override = default;

  explicit ConnectionServiceTracingStub(
      std::shared_ptr<ConnectionServiceStub> child);

  StatusOr<google::cloud::apigeeconnect::v1::ListConnectionsResponse>
  ListConnections(
      grpc::ClientContext& context, Options const& options,
      google::cloud::apigeeconnect::v1::ListConnectionsRequest const& request)
      override;

 private:
  std::shared_ptr<ConnectionServiceStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<ConnectionServiceStub> MakeConnectionServiceTracingStub(
    std::shared_ptr<ConnectionServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigeeconnect_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEECONNECT_V1_INTERNAL_CONNECTION_TRACING_STUB_H
