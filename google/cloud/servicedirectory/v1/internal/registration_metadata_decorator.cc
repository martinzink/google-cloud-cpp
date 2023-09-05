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
// source: google/cloud/servicedirectory/v1/registration_service.proto

#include "google/cloud/servicedirectory/v1/internal/registration_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/servicedirectory/v1/registration_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace servicedirectory_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegistrationServiceMetadata::RegistrationServiceMetadata(
    std::shared_ptr<RegistrationServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceMetadata::CreateNamespace(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::CreateNamespaceRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateNamespace(context, request);
}

StatusOr<google::cloud::servicedirectory::v1::ListNamespacesResponse>
RegistrationServiceMetadata::ListNamespaces(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::ListNamespacesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListNamespaces(context, request);
}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceMetadata::GetNamespace(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::GetNamespaceRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetNamespace(context, request);
}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceMetadata::UpdateNamespace(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::UpdateNamespaceRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("namespace.name=",
                           internal::UrlEncode(request.namespace_().name())));
  return child_->UpdateNamespace(context, request);
}

Status RegistrationServiceMetadata::DeleteNamespace(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::DeleteNamespaceRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteNamespace(context, request);
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceMetadata::CreateService(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::CreateServiceRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateService(context, request);
}

StatusOr<google::cloud::servicedirectory::v1::ListServicesResponse>
RegistrationServiceMetadata::ListServices(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::ListServicesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListServices(context, request);
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceMetadata::GetService(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::GetServiceRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetService(context, request);
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceMetadata::UpdateService(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::UpdateServiceRequest const& request) {
  SetMetadata(context,
              absl::StrCat("service.name=",
                           internal::UrlEncode(request.service().name())));
  return child_->UpdateService(context, request);
}

Status RegistrationServiceMetadata::DeleteService(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::DeleteServiceRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteService(context, request);
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceMetadata::CreateEndpoint(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::CreateEndpointRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateEndpoint(context, request);
}

StatusOr<google::cloud::servicedirectory::v1::ListEndpointsResponse>
RegistrationServiceMetadata::ListEndpoints(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::ListEndpointsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEndpoints(context, request);
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceMetadata::GetEndpoint(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::GetEndpointRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEndpoint(context, request);
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceMetadata::UpdateEndpoint(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::UpdateEndpointRequest const& request) {
  SetMetadata(context,
              absl::StrCat("endpoint.name=",
                           internal::UrlEncode(request.endpoint().name())));
  return child_->UpdateEndpoint(context, request);
}

Status RegistrationServiceMetadata::DeleteEndpoint(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::DeleteEndpointRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteEndpoint(context, request);
}

StatusOr<google::iam::v1::Policy> RegistrationServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=",
                                    internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> RegistrationServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=",
                                    internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
RegistrationServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=",
                                    internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, request);
}

void RegistrationServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void RegistrationServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicedirectory_v1_internal
}  // namespace cloud
}  // namespace google
