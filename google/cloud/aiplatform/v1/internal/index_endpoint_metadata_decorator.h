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
// source: google/cloud/aiplatform/v1/index_endpoint_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_INDEX_ENDPOINT_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_INDEX_ENDPOINT_METADATA_DECORATOR_H

#include "google/cloud/aiplatform/v1/internal/index_endpoint_stub.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IndexEndpointServiceMetadata : public IndexEndpointServiceStub {
 public:
  ~IndexEndpointServiceMetadata() override = default;
  IndexEndpointServiceMetadata(
      std::shared_ptr<IndexEndpointServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateIndexEndpoint(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::CreateIndexEndpointRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::IndexEndpoint> GetIndexEndpoint(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetIndexEndpointRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListIndexEndpointsResponse>
  ListIndexEndpoints(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListIndexEndpointsRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::IndexEndpoint> UpdateIndexEndpoint(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::UpdateIndexEndpointRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteIndexEndpoint(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::DeleteIndexEndpointRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeployIndex(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::DeployIndexRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUndeployIndex(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::UndeployIndexRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncMutateDeployedIndex(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::MutateDeployedIndexRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<IndexEndpointServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_INDEX_ENDPOINT_METADATA_DECORATOR_H
