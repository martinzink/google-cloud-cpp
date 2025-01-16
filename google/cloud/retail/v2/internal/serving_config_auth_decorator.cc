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
// source: google/cloud/retail/v2/serving_config_service.proto

#include "google/cloud/retail/v2/internal/serving_config_auth_decorator.h"
#include <google/cloud/retail/v2/serving_config_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServingConfigServiceAuth::ServingConfigServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ServingConfigServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceAuth::CreateServingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::CreateServingConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateServingConfig(context, options, request);
}

Status ServingConfigServiceAuth::DeleteServingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::DeleteServingConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteServingConfig(context, options, request);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceAuth::UpdateServingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::UpdateServingConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateServingConfig(context, options, request);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceAuth::GetServingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::GetServingConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetServingConfig(context, options, request);
}

StatusOr<google::cloud::retail::v2::ListServingConfigsResponse>
ServingConfigServiceAuth::ListServingConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::ListServingConfigsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListServingConfigs(context, options, request);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceAuth::AddControl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::AddControlRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AddControl(context, options, request);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceAuth::RemoveControl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::RemoveControlRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RemoveControl(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
ServingConfigServiceAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> ServingConfigServiceAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
