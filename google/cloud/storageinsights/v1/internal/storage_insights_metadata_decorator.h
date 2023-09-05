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
// source: google/cloud/storageinsights/v1/storageinsights.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGEINSIGHTS_V1_INTERNAL_STORAGE_INSIGHTS_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGEINSIGHTS_V1_INTERNAL_STORAGE_INSIGHTS_METADATA_DECORATOR_H

#include "google/cloud/storageinsights/v1/internal/storage_insights_stub.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace storageinsights_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class StorageInsightsMetadata : public StorageInsightsStub {
 public:
  ~StorageInsightsMetadata() override = default;
  StorageInsightsMetadata(
      std::shared_ptr<StorageInsightsStub> child,
      std::multimap<std::string, std::string> fixed_metadata);

  StatusOr<google::cloud::storageinsights::v1::ListReportConfigsResponse>
  ListReportConfigs(
      grpc::ClientContext& context,
      google::cloud::storageinsights::v1::ListReportConfigsRequest const&
          request) override;

  StatusOr<google::cloud::storageinsights::v1::ReportConfig> GetReportConfig(
      grpc::ClientContext& context,
      google::cloud::storageinsights::v1::GetReportConfigRequest const& request)
      override;

  StatusOr<google::cloud::storageinsights::v1::ReportConfig> CreateReportConfig(
      grpc::ClientContext& context,
      google::cloud::storageinsights::v1::CreateReportConfigRequest const&
          request) override;

  StatusOr<google::cloud::storageinsights::v1::ReportConfig> UpdateReportConfig(
      grpc::ClientContext& context,
      google::cloud::storageinsights::v1::UpdateReportConfigRequest const&
          request) override;

  Status DeleteReportConfig(
      grpc::ClientContext& context,
      google::cloud::storageinsights::v1::DeleteReportConfigRequest const&
          request) override;

  StatusOr<google::cloud::storageinsights::v1::ListReportDetailsResponse>
  ListReportDetails(
      grpc::ClientContext& context,
      google::cloud::storageinsights::v1::ListReportDetailsRequest const&
          request) override;

  StatusOr<google::cloud::storageinsights::v1::ReportDetail> GetReportDetail(
      grpc::ClientContext& context,
      google::cloud::storageinsights::v1::GetReportDetailRequest const& request)
      override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<StorageInsightsStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storageinsights_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGEINSIGHTS_V1_INTERNAL_STORAGE_INSIGHTS_METADATA_DECORATOR_H
