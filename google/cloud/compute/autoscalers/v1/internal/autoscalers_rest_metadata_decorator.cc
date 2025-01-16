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
// source: google/cloud/compute/autoscalers/v1/autoscalers.proto

#include "google/cloud/compute/autoscalers/v1/internal/autoscalers_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_autoscalers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AutoscalersRestMetadata::AutoscalersRestMetadata(
    std::shared_ptr<AutoscalersRestStub> child, std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::cpp::compute::v1::AutoscalerAggregatedList>
AutoscalersRestMetadata::AggregatedListAutoscalers(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::autoscalers::v1::
        AggregatedListAutoscalersRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->AggregatedListAutoscalers(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersRestMetadata::AsyncDeleteAutoscaler(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::autoscalers::v1::DeleteAutoscalerRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteAutoscaler(cq, std::move(rest_context),
                                       std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersRestMetadata::DeleteAutoscaler(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::autoscalers::v1::DeleteAutoscalerRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->DeleteAutoscaler(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Autoscaler>
AutoscalersRestMetadata::GetAutoscaler(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::autoscalers::v1::GetAutoscalerRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetAutoscaler(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersRestMetadata::AsyncInsertAutoscaler(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::autoscalers::v1::InsertAutoscalerRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertAutoscaler(cq, std::move(rest_context),
                                       std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersRestMetadata::InsertAutoscaler(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::autoscalers::v1::InsertAutoscalerRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->InsertAutoscaler(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::AutoscalerList>
AutoscalersRestMetadata::ListAutoscalers(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::autoscalers::v1::ListAutoscalersRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->ListAutoscalers(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersRestMetadata::AsyncPatchAutoscaler(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::autoscalers::v1::PatchAutoscalerRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncPatchAutoscaler(cq, std::move(rest_context),
                                      std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersRestMetadata::PatchAutoscaler(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::autoscalers::v1::PatchAutoscalerRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->PatchAutoscaler(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersRestMetadata::AsyncUpdateAutoscaler(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::autoscalers::v1::UpdateAutoscalerRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncUpdateAutoscaler(cq, std::move(rest_context),
                                       std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersRestMetadata::UpdateAutoscaler(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::autoscalers::v1::UpdateAutoscalerRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->UpdateAutoscaler(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> AutoscalersRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void AutoscalersRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_autoscalers_v1_internal
}  // namespace cloud
}  // namespace google
