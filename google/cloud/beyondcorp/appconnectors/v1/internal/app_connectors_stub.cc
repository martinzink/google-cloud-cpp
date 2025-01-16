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
// source: google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto

#include "google/cloud/beyondcorp/appconnectors/v1/internal/app_connectors_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace beyondcorp_appconnectors_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppConnectorsServiceStub::~AppConnectorsServiceStub() = default;

StatusOr<
    google::cloud::beyondcorp::appconnectors::v1::ListAppConnectorsResponse>
DefaultAppConnectorsServiceStub::ListAppConnectors(
    grpc::ClientContext& context, Options const&,
    google::cloud::beyondcorp::appconnectors::v1::
        ListAppConnectorsRequest const& request) {
  google::cloud::beyondcorp::appconnectors::v1::ListAppConnectorsResponse
      response;
  auto status = grpc_stub_->ListAppConnectors(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
DefaultAppConnectorsServiceStub::GetAppConnector(
    grpc::ClientContext& context, Options const&,
    google::cloud::beyondcorp::appconnectors::v1::GetAppConnectorRequest const&
        request) {
  google::cloud::beyondcorp::appconnectors::v1::AppConnector response;
  auto status = grpc_stub_->GetAppConnector(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppConnectorsServiceStub::AsyncCreateAppConnector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::beyondcorp::appconnectors::v1::
        CreateAppConnectorRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::beyondcorp::appconnectors::v1::CreateAppConnectorRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::beyondcorp::appconnectors::v1::
                 CreateAppConnectorRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAppConnector(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAppConnectorsServiceStub::CreateAppConnector(
    grpc::ClientContext& context, Options,
    google::cloud::beyondcorp::appconnectors::v1::
        CreateAppConnectorRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateAppConnector(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppConnectorsServiceStub::AsyncUpdateAppConnector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::beyondcorp::appconnectors::v1::
        UpdateAppConnectorRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::beyondcorp::appconnectors::v1::UpdateAppConnectorRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::beyondcorp::appconnectors::v1::
                 UpdateAppConnectorRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateAppConnector(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAppConnectorsServiceStub::UpdateAppConnector(
    grpc::ClientContext& context, Options,
    google::cloud::beyondcorp::appconnectors::v1::
        UpdateAppConnectorRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateAppConnector(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppConnectorsServiceStub::AsyncDeleteAppConnector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::beyondcorp::appconnectors::v1::
        DeleteAppConnectorRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::beyondcorp::appconnectors::v1::DeleteAppConnectorRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::beyondcorp::appconnectors::v1::
                 DeleteAppConnectorRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteAppConnector(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAppConnectorsServiceStub::DeleteAppConnector(
    grpc::ClientContext& context, Options,
    google::cloud::beyondcorp::appconnectors::v1::
        DeleteAppConnectorRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteAppConnector(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppConnectorsServiceStub::AsyncReportStatus(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::beyondcorp::appconnectors::v1::ReportStatusRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::beyondcorp::appconnectors::v1::ReportStatusRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::beyondcorp::appconnectors::v1::
                 ReportStatusRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncReportStatus(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAppConnectorsServiceStub::ReportStatus(
    grpc::ClientContext& context, Options,
    google::cloud::beyondcorp::appconnectors::v1::ReportStatusRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->ReportStatus(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultAppConnectorsServiceStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location>
DefaultAppConnectorsServiceStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultAppConnectorsServiceStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultAppConnectorsServiceStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultAppConnectorsServiceStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      iampolicy_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultAppConnectorsServiceStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultAppConnectorsServiceStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAppConnectorsServiceStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultAppConnectorsServiceStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultAppConnectorsServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_stub_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultAppConnectorsServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_stub_->AsyncCancelOperation(context, request,
                                                             cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appconnectors_v1_internal
}  // namespace cloud
}  // namespace google
