// Copyright 2024 Google LLC
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
// source: google/cloud/discoveryengine/v1/data_store_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_DATA_STORE_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_DATA_STORE_AUTH_DECORATOR_H

#include "google/cloud/discoveryengine/v1/internal/data_store_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataStoreServiceAuth : public DataStoreServiceStub {
 public:
  ~DataStoreServiceAuth() override = default;
  DataStoreServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<DataStoreServiceStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateDataStore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::CreateDataStoreRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateDataStore(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::CreateDataStoreRequest const& request)
      override;

  StatusOr<google::cloud::discoveryengine::v1::DataStore> GetDataStore(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::GetDataStoreRequest const& request)
      override;

  StatusOr<google::cloud::discoveryengine::v1::ListDataStoresResponse>
  ListDataStores(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::ListDataStoresRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDataStore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::discoveryengine::v1::DeleteDataStoreRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteDataStore(
      grpc::ClientContext& context, Options options,
      google::cloud::discoveryengine::v1::DeleteDataStoreRequest const& request)
      override;

  StatusOr<google::cloud::discoveryengine::v1::DataStore> UpdateDataStore(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::UpdateDataStoreRequest const& request)
      override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

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
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<DataStoreServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_DATA_STORE_AUTH_DECORATOR_H
