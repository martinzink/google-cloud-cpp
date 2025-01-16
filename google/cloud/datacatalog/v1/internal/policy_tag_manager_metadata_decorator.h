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
// source: google/cloud/datacatalog/v1/policytagmanager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_POLICY_TAG_MANAGER_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_POLICY_TAG_MANAGER_METADATA_DECORATOR_H

#include "google/cloud/datacatalog/v1/internal/policy_tag_manager_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PolicyTagManagerMetadata : public PolicyTagManagerStub {
 public:
  ~PolicyTagManagerMetadata() override = default;
  PolicyTagManagerMetadata(
      std::shared_ptr<PolicyTagManagerStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::datacatalog::v1::Taxonomy> CreateTaxonomy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::CreateTaxonomyRequest const& request)
      override;

  Status DeleteTaxonomy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::DeleteTaxonomyRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::Taxonomy> UpdateTaxonomy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::UpdateTaxonomyRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::ListTaxonomiesResponse>
  ListTaxonomies(grpc::ClientContext& context, Options const& options,
                 google::cloud::datacatalog::v1::ListTaxonomiesRequest const&
                     request) override;

  StatusOr<google::cloud::datacatalog::v1::Taxonomy> GetTaxonomy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::GetTaxonomyRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::PolicyTag> CreatePolicyTag(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::CreatePolicyTagRequest const& request)
      override;

  Status DeletePolicyTag(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::DeletePolicyTagRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::PolicyTag> UpdatePolicyTag(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::UpdatePolicyTagRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::ListPolicyTagsResponse>
  ListPolicyTags(grpc::ClientContext& context, Options const& options,
                 google::cloud::datacatalog::v1::ListPolicyTagsRequest const&
                     request) override;

  StatusOr<google::cloud::datacatalog::v1::PolicyTag> GetPolicyTag(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::GetPolicyTagRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<PolicyTagManagerStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_POLICY_TAG_MANAGER_METADATA_DECORATOR_H
