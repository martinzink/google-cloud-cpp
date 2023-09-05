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
// source:
// google/cloud/rapidmigrationassessment/v1/rapidmigrationassessment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RAPIDMIGRATIONASSESSMENT_V1_INTERNAL_RAPID_MIGRATION_ASSESSMENT_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RAPIDMIGRATIONASSESSMENT_V1_INTERNAL_RAPID_MIGRATION_ASSESSMENT_METADATA_DECORATOR_H

#include "google/cloud/rapidmigrationassessment/v1/internal/rapid_migration_assessment_stub.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace rapidmigrationassessment_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RapidMigrationAssessmentMetadata : public RapidMigrationAssessmentStub {
 public:
  ~RapidMigrationAssessmentMetadata() override = default;
  RapidMigrationAssessmentMetadata(
      std::shared_ptr<RapidMigrationAssessmentStub> child,
      std::multimap<std::string, std::string> fixed_metadata);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCollector(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::rapidmigrationassessment::v1::CreateCollectorRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAnnotation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::rapidmigrationassessment::v1::
          CreateAnnotationRequest const& request) override;

  StatusOr<google::cloud::rapidmigrationassessment::v1::Annotation>
  GetAnnotation(
      grpc::ClientContext& context,
      google::cloud::rapidmigrationassessment::v1::GetAnnotationRequest const&
          request) override;

  StatusOr<google::cloud::rapidmigrationassessment::v1::ListCollectorsResponse>
  ListCollectors(
      grpc::ClientContext& context,
      google::cloud::rapidmigrationassessment::v1::ListCollectorsRequest const&
          request) override;

  StatusOr<google::cloud::rapidmigrationassessment::v1::Collector> GetCollector(
      grpc::ClientContext& context,
      google::cloud::rapidmigrationassessment::v1::GetCollectorRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCollector(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::rapidmigrationassessment::v1::UpdateCollectorRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCollector(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::rapidmigrationassessment::v1::DeleteCollectorRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncResumeCollector(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::rapidmigrationassessment::v1::ResumeCollectorRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRegisterCollector(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::rapidmigrationassessment::v1::
          RegisterCollectorRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncPauseCollector(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::rapidmigrationassessment::v1::PauseCollectorRequest const&
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

  std::shared_ptr<RapidMigrationAssessmentStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rapidmigrationassessment_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RAPIDMIGRATIONASSESSMENT_V1_INTERNAL_RAPID_MIGRATION_ASSESSMENT_METADATA_DECORATOR_H
