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
// source: google/cloud/resourcemanager/v3/tag_holds.proto

#include "google/cloud/resourcemanager/v3/internal/tag_holds_auth_decorator.h"
#include <google/cloud/resourcemanager/v3/tag_holds.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TagHoldsAuth::TagHoldsAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<TagHoldsStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
TagHoldsAuth::AsyncCreateTagHold(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::resourcemanager::v3::CreateTagHoldRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateTagHold(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> TagHoldsAuth::CreateTagHold(
    grpc::ClientContext& context, Options options,
    google::cloud::resourcemanager::v3::CreateTagHoldRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateTagHold(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TagHoldsAuth::AsyncDeleteTagHold(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::resourcemanager::v3::DeleteTagHoldRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteTagHold(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> TagHoldsAuth::DeleteTagHold(
    grpc::ClientContext& context, Options options,
    google::cloud::resourcemanager::v3::DeleteTagHoldRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteTagHold(context, options, request);
}

StatusOr<google::cloud::resourcemanager::v3::ListTagHoldsResponse>
TagHoldsAuth::ListTagHolds(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcemanager::v3::ListTagHoldsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTagHolds(context, options, request);
}

StatusOr<google::longrunning::Operation> TagHoldsAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TagHoldsAuth::AsyncGetOperation(
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

future<Status> TagHoldsAuth::AsyncCancelOperation(
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
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google
