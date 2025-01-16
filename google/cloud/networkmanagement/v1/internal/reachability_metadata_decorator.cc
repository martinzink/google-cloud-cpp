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
// source: google/cloud/networkmanagement/v1/reachability.proto

#include "google/cloud/networkmanagement/v1/internal/reachability_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/networkmanagement/v1/reachability.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace networkmanagement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ReachabilityServiceMetadata::ReachabilityServiceMetadata(
    std::shared_ptr<ReachabilityServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::networkmanagement::v1::ListConnectivityTestsResponse>
ReachabilityServiceMetadata::ListConnectivityTests(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkmanagement::v1::ListConnectivityTestsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListConnectivityTests(context, options, request);
}

StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>
ReachabilityServiceMetadata::GetConnectivityTest(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkmanagement::v1::GetConnectivityTestRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetConnectivityTest(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ReachabilityServiceMetadata::AsyncCreateConnectivityTest(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkmanagement::v1::CreateConnectivityTestRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateConnectivityTest(cq, std::move(context),
                                             std::move(options), request);
}

StatusOr<google::longrunning::Operation>
ReachabilityServiceMetadata::CreateConnectivityTest(
    grpc::ClientContext& context, Options options,
    google::cloud::networkmanagement::v1::CreateConnectivityTestRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateConnectivityTest(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ReachabilityServiceMetadata::AsyncUpdateConnectivityTest(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkmanagement::v1::UpdateConnectivityTestRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("resource.name=",
                           internal::UrlEncode(request.resource().name())));
  return child_->AsyncUpdateConnectivityTest(cq, std::move(context),
                                             std::move(options), request);
}

StatusOr<google::longrunning::Operation>
ReachabilityServiceMetadata::UpdateConnectivityTest(
    grpc::ClientContext& context, Options options,
    google::cloud::networkmanagement::v1::UpdateConnectivityTestRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("resource.name=",
                           internal::UrlEncode(request.resource().name())));
  return child_->UpdateConnectivityTest(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ReachabilityServiceMetadata::AsyncRerunConnectivityTest(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkmanagement::v1::RerunConnectivityTestRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncRerunConnectivityTest(cq, std::move(context),
                                            std::move(options), request);
}

StatusOr<google::longrunning::Operation>
ReachabilityServiceMetadata::RerunConnectivityTest(
    grpc::ClientContext& context, Options options,
    google::cloud::networkmanagement::v1::RerunConnectivityTestRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RerunConnectivityTest(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ReachabilityServiceMetadata::AsyncDeleteConnectivityTest(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkmanagement::v1::DeleteConnectivityTestRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteConnectivityTest(cq, std::move(context),
                                             std::move(options), request);
}

StatusOr<google::longrunning::Operation>
ReachabilityServiceMetadata::DeleteConnectivityTest(
    grpc::ClientContext& context, Options options,
    google::cloud::networkmanagement::v1::DeleteConnectivityTestRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteConnectivityTest(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
ReachabilityServiceMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location>
ReachabilityServiceMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> ReachabilityServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> ReachabilityServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ReachabilityServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
ReachabilityServiceMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation>
ReachabilityServiceMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status ReachabilityServiceMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status ReachabilityServiceMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ReachabilityServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> ReachabilityServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void ReachabilityServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ReachabilityServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                              Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkmanagement_v1_internal
}  // namespace cloud
}  // namespace google
