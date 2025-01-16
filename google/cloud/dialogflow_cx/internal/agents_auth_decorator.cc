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
// source: google/cloud/dialogflow/cx/v3/agent.proto

#include "google/cloud/dialogflow_cx/internal/agents_auth_decorator.h"
#include <google/cloud/dialogflow/cx/v3/agent.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AgentsAuth::AgentsAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<AgentsStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListAgentsResponse>
AgentsAuth::ListAgents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::ListAgentsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAgents(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent> AgentsAuth::GetAgent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::GetAgentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAgent(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent> AgentsAuth::CreateAgent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::CreateAgentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateAgent(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent> AgentsAuth::UpdateAgent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::UpdateAgentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateAgent(context, options, request);
}

Status AgentsAuth::DeleteAgent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::DeleteAgentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteAgent(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> AgentsAuth::AsyncExportAgent(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::cx::v3::ExportAgentRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncExportAgent(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> AgentsAuth::ExportAgent(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::cx::v3::ExportAgentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ExportAgent(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> AgentsAuth::AsyncRestoreAgent(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::cx::v3::RestoreAgentRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRestoreAgent(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> AgentsAuth::RestoreAgent(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::cx::v3::RestoreAgentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RestoreAgent(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
AgentsAuth::ValidateAgent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::ValidateAgentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ValidateAgent(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
AgentsAuth::GetAgentValidationResult(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::GetAgentValidationResultRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAgentValidationResult(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::GenerativeSettings>
AgentsAuth::GetGenerativeSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::GetGenerativeSettingsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetGenerativeSettings(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::GenerativeSettings>
AgentsAuth::UpdateGenerativeSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::UpdateGenerativeSettingsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateGenerativeSettings(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
AgentsAuth::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> AgentsAuth::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLocation(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
AgentsAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> AgentsAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

Status AgentsAuth::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> AgentsAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> AgentsAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
