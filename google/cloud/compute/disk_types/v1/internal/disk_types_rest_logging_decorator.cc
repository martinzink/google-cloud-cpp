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
// source: google/cloud/compute/disk_types/v1/disk_types.proto

#include "google/cloud/compute/disk_types/v1/internal/disk_types_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_disk_types_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DiskTypesRestLogging::DiskTypesRestLogging(
    std::shared_ptr<DiskTypesRestStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::cpp::compute::v1::DiskTypeAggregatedList>
DiskTypesRestLogging::AggregatedListDiskTypes(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::disk_types::v1::
        AggregatedListDiskTypesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::disk_types::v1::
                 AggregatedListDiskTypesRequest const& request) {
        return child_->AggregatedListDiskTypes(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::DiskType>
DiskTypesRestLogging::GetDiskType(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::disk_types::v1::GetDiskTypeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context, Options const& options,
          google::cloud::cpp::compute::disk_types::v1::GetDiskTypeRequest const&
              request) {
        return child_->GetDiskType(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::DiskTypeList>
DiskTypesRestLogging::ListDiskTypes(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::disk_types::v1::ListDiskTypesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::disk_types::v1::
                 ListDiskTypesRequest const& request) {
        return child_->ListDiskTypes(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_disk_types_v1_internal
}  // namespace cloud
}  // namespace google
