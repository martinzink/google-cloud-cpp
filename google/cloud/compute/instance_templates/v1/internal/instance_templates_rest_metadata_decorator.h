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
// source: google/cloud/compute/instance_templates/v1/instance_templates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_TEMPLATES_V1_INTERNAL_INSTANCE_TEMPLATES_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_TEMPLATES_V1_INTERNAL_INSTANCE_TEMPLATES_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/instance_templates/v1/internal/instance_templates_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <google/cloud/compute/instance_templates/v1/instance_templates.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_instance_templates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstanceTemplatesRestMetadata : public InstanceTemplatesRestStub {
 public:
  ~InstanceTemplatesRestMetadata() override = default;
  explicit InstanceTemplatesRestMetadata(
      std::shared_ptr<InstanceTemplatesRestStub> child,
      std::string api_client_header = "");

  StatusOr<google::cloud::cpp::compute::v1::InstanceTemplateAggregatedList>
  AggregatedListInstanceTemplates(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instance_templates::v1::
          AggregatedListInstanceTemplatesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteInstanceTemplate(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::instance_templates::v1::
          DeleteInstanceTemplateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteInstanceTemplate(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instance_templates::v1::
          DeleteInstanceTemplateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceTemplate>
  GetInstanceTemplate(google::cloud::rest_internal::RestContext& rest_context,
                      Options const& options,
                      google::cloud::cpp::compute::instance_templates::v1::
                          GetInstanceTemplateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instance_templates::v1::
          GetIamPolicyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertInstanceTemplate(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::instance_templates::v1::
          InsertInstanceTemplateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertInstanceTemplate(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instance_templates::v1::
          InsertInstanceTemplateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceTemplateList>
  ListInstanceTemplates(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instance_templates::v1::
          ListInstanceTemplatesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instance_templates::v1::
          SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     Options const& options,
                     google::cloud::cpp::compute::instance_templates::v1::
                         TestIamPermissionsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_operations::v1::
          GetOperationRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   Options const& options,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<InstanceTemplatesRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_templates_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_TEMPLATES_V1_INTERNAL_INSTANCE_TEMPLATES_REST_METADATA_DECORATOR_H
