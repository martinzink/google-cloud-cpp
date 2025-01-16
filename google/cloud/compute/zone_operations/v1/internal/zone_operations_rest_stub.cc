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
// source: google/cloud/compute/zone_operations/v1/zone_operations.proto

#include "google/cloud/compute/zone_operations/v1/internal/zone_operations_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_zone_operations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultZoneOperationsRestStub::DefaultZoneOperationsRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultZoneOperationsRestStub::DefaultZoneOperationsRestStub(
    std::shared_ptr<rest_internal::RestClient> service, Options options)
    : service_(std::move(service)), options_(std::move(options)) {}

Status DefaultZoneOperationsRestStub::DeleteOperation(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteOperationRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Delete<google::cloud::rest_internal::EmptyResponseType>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "zones", "/",
                   request.zone(), "/", "operations", "/", request.operation()),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultZoneOperationsRestStub::GetOperation(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "zones", "/",
                   request.zone(), "/", "operations", "/", request.operation()),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::OperationList>
DefaultZoneOperationsRestStub::ListZoneOperations(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::zone_operations::v1::
        ListZoneOperationsRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"filter", request.filter()});
  query_params.push_back(
      {"max_results", std::to_string(request.max_results())});
  query_params.push_back({"order_by", request.order_by()});
  query_params.push_back({"page_token", request.page_token()});
  query_params.push_back({"return_partial_success",
                          (request.return_partial_success() ? "1" : "0")});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<google::cloud::cpp::compute::v1::OperationList>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "zones", "/",
                   request.zone(), "/", "operations"),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultZoneOperationsRestStub::Wait(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::zone_operations::v1::WaitRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "zones", "/",
                   request.zone(), "/", "operations", "/", request.operation(),
                   "/", "wait"),
      std::move(query_params));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_zone_operations_v1_internal
}  // namespace cloud
}  // namespace google
