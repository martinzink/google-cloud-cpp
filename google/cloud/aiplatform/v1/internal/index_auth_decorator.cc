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
// source: google/cloud/aiplatform/v1/index_service.proto

#include "google/cloud/aiplatform/v1/internal/index_auth_decorator.h"
#include <google/cloud/aiplatform/v1/index_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IndexServiceAuth::IndexServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<IndexServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
IndexServiceAuth::AsyncCreateIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateIndexRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateIndex(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> IndexServiceAuth::CreateIndex(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreateIndexRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateIndex(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::Index> IndexServiceAuth::GetIndex(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetIndexRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIndex(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListIndexesResponse>
IndexServiceAuth::ListIndexes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListIndexesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListIndexes(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
IndexServiceAuth::AsyncUpdateIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UpdateIndexRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateIndex(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> IndexServiceAuth::UpdateIndex(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::UpdateIndexRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateIndex(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
IndexServiceAuth::AsyncDeleteIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteIndexRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteIndex(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> IndexServiceAuth::DeleteIndex(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteIndexRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteIndex(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::UpsertDatapointsResponse>
IndexServiceAuth::UpsertDatapoints(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpsertDatapointsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpsertDatapoints(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::RemoveDatapointsResponse>
IndexServiceAuth::RemoveDatapoints(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::RemoveDatapointsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RemoveDatapoints(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
IndexServiceAuth::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> IndexServiceAuth::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> IndexServiceAuth::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> IndexServiceAuth::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IndexServiceAuth::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
IndexServiceAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> IndexServiceAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

Status IndexServiceAuth::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteOperation(context, options, request);
}

Status IndexServiceAuth::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOperation(context, options, request);
}

StatusOr<google::longrunning::Operation> IndexServiceAuth::WaitOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::WaitOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->WaitOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
IndexServiceAuth::AsyncGetOperation(
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

future<Status> IndexServiceAuth::AsyncCancelOperation(
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
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
