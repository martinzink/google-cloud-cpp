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
// source: google/cloud/aiplatform/v1/dataset_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_DATASET_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_DATASET_METADATA_DECORATOR_H

#include "google/cloud/aiplatform/v1/internal/dataset_stub.h"
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

class DatasetServiceMetadata : public DatasetServiceStub {
 public:
  ~DatasetServiceMetadata() override = default;
  DatasetServiceMetadata(
      std::shared_ptr<DatasetServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateDataset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::CreateDatasetRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Dataset> GetDataset(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetDatasetRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::Dataset> UpdateDataset(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::UpdateDatasetRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListDatasetsResponse> ListDatasets(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListDatasetsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDataset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::DeleteDatasetRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportData(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::ImportDataRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportData(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::ExportDataRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ListDataItemsResponse> ListDataItems(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListDataItemsRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::SearchDataItemsResponse>
  SearchDataItems(grpc::ClientContext& context,
                  google::cloud::aiplatform::v1::SearchDataItemsRequest const&
                      request) override;

  StatusOr<google::cloud::aiplatform::v1::ListSavedQueriesResponse>
  ListSavedQueries(grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::ListSavedQueriesRequest const&
                       request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSavedQuery(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::DeleteSavedQueryRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::AnnotationSpec> GetAnnotationSpec(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetAnnotationSpecRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListAnnotationsResponse>
  ListAnnotations(grpc::ClientContext& context,
                  google::cloud::aiplatform::v1::ListAnnotationsRequest const&
                      request) override;

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

  std::shared_ptr<DatasetServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_DATASET_METADATA_DECORATOR_H
