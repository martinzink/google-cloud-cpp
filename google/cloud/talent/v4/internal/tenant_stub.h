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
// source: google/cloud/talent/v4/tenant_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_TENANT_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_TENANT_STUB_H

#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/talent/v4/tenant_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TenantServiceStub {
 public:
  virtual ~TenantServiceStub() = 0;

  virtual StatusOr<google::cloud::talent::v4::Tenant> CreateTenant(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::CreateTenantRequest const& request) = 0;

  virtual StatusOr<google::cloud::talent::v4::Tenant> GetTenant(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::GetTenantRequest const& request) = 0;

  virtual StatusOr<google::cloud::talent::v4::Tenant> UpdateTenant(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::UpdateTenantRequest const& request) = 0;

  virtual Status DeleteTenant(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::DeleteTenantRequest const& request) = 0;

  virtual StatusOr<google::cloud::talent::v4::ListTenantsResponse> ListTenants(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::ListTenantsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;
};

class DefaultTenantServiceStub : public TenantServiceStub {
 public:
  explicit DefaultTenantServiceStub(
      std::unique_ptr<google::cloud::talent::v4::TenantService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)) {}

  StatusOr<google::cloud::talent::v4::Tenant> CreateTenant(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::CreateTenantRequest const& request) override;

  StatusOr<google::cloud::talent::v4::Tenant> GetTenant(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::GetTenantRequest const& request) override;

  StatusOr<google::cloud::talent::v4::Tenant> UpdateTenant(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::UpdateTenantRequest const& request) override;

  Status DeleteTenant(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::DeleteTenantRequest const& request) override;

  StatusOr<google::cloud::talent::v4::ListTenantsResponse> ListTenants(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::ListTenantsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::talent::v4::TenantService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_TENANT_STUB_H
