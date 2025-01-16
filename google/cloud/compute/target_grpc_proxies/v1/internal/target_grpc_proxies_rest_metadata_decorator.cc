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
// source: google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto

#include "google/cloud/compute/target_grpc_proxies/v1/internal/target_grpc_proxies_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_target_grpc_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetGrpcProxiesRestMetadata::TargetGrpcProxiesRestMetadata(
    std::shared_ptr<TargetGrpcProxiesRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetGrpcProxiesRestMetadata::AsyncDeleteTargetGrpcProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        DeleteTargetGrpcProxyRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteTargetGrpcProxy(cq, std::move(rest_context),
                                            std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetGrpcProxiesRestMetadata::DeleteTargetGrpcProxy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        DeleteTargetGrpcProxyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->DeleteTargetGrpcProxy(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetGrpcProxy>
TargetGrpcProxiesRestMetadata::GetTargetGrpcProxy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        GetTargetGrpcProxyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetTargetGrpcProxy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetGrpcProxiesRestMetadata::AsyncInsertTargetGrpcProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        InsertTargetGrpcProxyRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertTargetGrpcProxy(cq, std::move(rest_context),
                                            std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetGrpcProxiesRestMetadata::InsertTargetGrpcProxy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        InsertTargetGrpcProxyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->InsertTargetGrpcProxy(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetGrpcProxyList>
TargetGrpcProxiesRestMetadata::ListTargetGrpcProxies(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        ListTargetGrpcProxiesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListTargetGrpcProxies(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetGrpcProxiesRestMetadata::AsyncPatchTargetGrpcProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        PatchTargetGrpcProxyRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncPatchTargetGrpcProxy(cq, std::move(rest_context),
                                           std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetGrpcProxiesRestMetadata::PatchTargetGrpcProxy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        PatchTargetGrpcProxyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->PatchTargetGrpcProxy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetGrpcProxiesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> TargetGrpcProxiesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void TargetGrpcProxiesRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_grpc_proxies_v1_internal
}  // namespace cloud
}  // namespace google
