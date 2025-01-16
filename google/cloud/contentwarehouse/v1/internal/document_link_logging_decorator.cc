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
// source: google/cloud/contentwarehouse/v1/document_link_service.proto

#include "google/cloud/contentwarehouse/v1/internal/document_link_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/contentwarehouse/v1/document_link_service.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentLinkServiceLogging::DocumentLinkServiceLogging(
    std::shared_ptr<DocumentLinkServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::contentwarehouse::v1::ListLinkedTargetsResponse>
DocumentLinkServiceLogging::ListLinkedTargets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::ListLinkedTargetsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::contentwarehouse::v1::ListLinkedTargetsRequest const&
              request) {
        return child_->ListLinkedTargets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contentwarehouse::v1::ListLinkedSourcesResponse>
DocumentLinkServiceLogging::ListLinkedSources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::ListLinkedSourcesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::contentwarehouse::v1::ListLinkedSourcesRequest const&
              request) {
        return child_->ListLinkedSources(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contentwarehouse::v1::DocumentLink>
DocumentLinkServiceLogging::CreateDocumentLink(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::CreateDocumentLinkRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::contentwarehouse::v1::CreateDocumentLinkRequest const&
              request) {
        return child_->CreateDocumentLink(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status DocumentLinkServiceLogging::DeleteDocumentLink(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::DeleteDocumentLinkRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::contentwarehouse::v1::DeleteDocumentLinkRequest const&
              request) {
        return child_->DeleteDocumentLink(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation>
DocumentLinkServiceLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google
