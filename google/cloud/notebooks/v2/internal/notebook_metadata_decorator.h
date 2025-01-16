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
// source: google/cloud/notebooks/v2/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V2_INTERNAL_NOTEBOOK_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V2_INTERNAL_NOTEBOOK_METADATA_DECORATOR_H

#include "google/cloud/notebooks/v2/internal/notebook_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace notebooks_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NotebookServiceMetadata : public NotebookServiceStub {
 public:
  ~NotebookServiceMetadata() override = default;
  NotebookServiceMetadata(
      std::shared_ptr<NotebookServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::notebooks::v2::ListInstancesResponse> ListInstances(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v2::ListInstancesRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v2::Instance> GetInstance(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v2::GetInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::CreateInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v2::CreateInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::UpdateInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v2::UpdateInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::DeleteInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v2::DeleteInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::StartInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> StartInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v2::StartInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::StopInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> StopInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v2::StopInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncResetInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::ResetInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ResetInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v2::ResetInstanceRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v2::CheckInstanceUpgradabilityResponse>
  CheckInstanceUpgradability(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v2::CheckInstanceUpgradabilityRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpgradeInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::UpgradeInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpgradeInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v2::UpgradeInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRollbackInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::RollbackInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RollbackInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v2::RollbackInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDiagnoseInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::DiagnoseInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DiagnoseInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v2::DiagnoseInstanceRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

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

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<NotebookServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V2_INTERNAL_NOTEBOOK_METADATA_DECORATOR_H
