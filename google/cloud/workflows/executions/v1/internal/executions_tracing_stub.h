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
// source: google/cloud/workflows/executions/v1/executions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_EXECUTIONS_V1_INTERNAL_EXECUTIONS_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_EXECUTIONS_V1_INTERNAL_EXECUTIONS_TRACING_STUB_H

#include "google/cloud/workflows/executions/v1/internal/executions_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace workflows_executions_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ExecutionsTracingStub : public ExecutionsStub {
 public:
  ~ExecutionsTracingStub() override = default;

  explicit ExecutionsTracingStub(std::shared_ptr<ExecutionsStub> child);

  StatusOr<google::cloud::workflows::executions::v1::ListExecutionsResponse>
  ListExecutions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::workflows::executions::v1::ListExecutionsRequest const&
          request) override;

  StatusOr<google::cloud::workflows::executions::v1::Execution> CreateExecution(
      grpc::ClientContext& context, Options const& options,
      google::cloud::workflows::executions::v1::CreateExecutionRequest const&
          request) override;

  StatusOr<google::cloud::workflows::executions::v1::Execution> GetExecution(
      grpc::ClientContext& context, Options const& options,
      google::cloud::workflows::executions::v1::GetExecutionRequest const&
          request) override;

  StatusOr<google::cloud::workflows::executions::v1::Execution> CancelExecution(
      grpc::ClientContext& context, Options const& options,
      google::cloud::workflows::executions::v1::CancelExecutionRequest const&
          request) override;

 private:
  std::shared_ptr<ExecutionsStub> child_;
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
std::shared_ptr<ExecutionsStub> MakeExecutionsTracingStub(
    std::shared_ptr<ExecutionsStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_executions_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_EXECUTIONS_V1_INTERNAL_EXECUTIONS_TRACING_STUB_H
