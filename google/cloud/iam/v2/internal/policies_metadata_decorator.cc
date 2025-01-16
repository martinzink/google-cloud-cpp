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
// source: google/iam/v2/policy.proto

#include "google/cloud/iam/v2/internal/policies_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/iam/v2/policy.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace iam_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PoliciesMetadata::PoliciesMetadata(
    std::shared_ptr<PoliciesStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::iam::v2::ListPoliciesResponse> PoliciesMetadata::ListPolicies(
    grpc::ClientContext& context, Options const& options,
    google::iam::v2::ListPoliciesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListPolicies(context, options, request);
}

StatusOr<google::iam::v2::Policy> PoliciesMetadata::GetPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v2::GetPolicyRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetPolicy(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
PoliciesMetadata::AsyncCreatePolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::iam::v2::CreatePolicyRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreatePolicy(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation> PoliciesMetadata::CreatePolicy(
    grpc::ClientContext& context, Options options,
    google::iam::v2::CreatePolicyRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreatePolicy(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
PoliciesMetadata::AsyncUpdatePolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::iam::v2::UpdatePolicyRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("policy.name=",
                           internal::UrlEncode(request.policy().name())));
  return child_->AsyncUpdatePolicy(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation> PoliciesMetadata::UpdatePolicy(
    grpc::ClientContext& context, Options options,
    google::iam::v2::UpdatePolicyRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("policy.name=",
                           internal::UrlEncode(request.policy().name())));
  return child_->UpdatePolicy(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
PoliciesMetadata::AsyncDeletePolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::iam::v2::DeletePolicyRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeletePolicy(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation> PoliciesMetadata::DeletePolicy(
    grpc::ClientContext& context, Options options,
    google::iam::v2::DeletePolicyRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeletePolicy(context, options, request);
}

StatusOr<google::longrunning::Operation> PoliciesMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
PoliciesMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> PoliciesMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void PoliciesMetadata::SetMetadata(grpc::ClientContext& context,
                                   Options const& options,
                                   std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void PoliciesMetadata::SetMetadata(grpc::ClientContext& context,
                                   Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_v2_internal
}  // namespace cloud
}  // namespace google
