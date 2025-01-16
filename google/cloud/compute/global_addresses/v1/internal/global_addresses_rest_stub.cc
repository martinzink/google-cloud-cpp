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
// source: google/cloud/compute/global_addresses/v1/global_addresses.proto

#include "google/cloud/compute/global_addresses/v1/internal/global_addresses_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/global_addresses/v1/global_addresses.pb.h>
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_global_addresses_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultGlobalAddressesRestStub::DefaultGlobalAddressesRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultGlobalAddressesRestStub::DefaultGlobalAddressesRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultGlobalAddressesRestStub::AsyncDeleteAddress(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_addresses::v1::
        DeleteAddressRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        query_params.push_back({"request_id", request.request_id()});
        query_params =
            rest_internal::TrimEmptyQueryParameters(std::move(query_params));
        p.set_value(
            rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request, false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "global", "/", "addresses", "/",
                             request.address()),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultGlobalAddressesRestStub::DeleteAddress(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::global_addresses::v1::
        DeleteAddressRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"request_id", request.request_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "addresses", "/", request.address()),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::Address>
DefaultGlobalAddressesRestStub::GetAddress(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::global_addresses::v1::GetAddressRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Get<google::cloud::cpp::compute::v1::Address>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "addresses", "/", request.address()),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultGlobalAddressesRestStub::AsyncInsertAddress(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_addresses::v1::
        InsertAddressRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        query_params.push_back({"request_id", request.request_id()});
        query_params =
            rest_internal::TrimEmptyQueryParameters(std::move(query_params));
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.address_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "global", "/", "addresses"),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultGlobalAddressesRestStub::InsertAddress(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::global_addresses::v1::
        InsertAddressRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"request_id", request.request_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request.address_resource(), false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "addresses"),
      std::move(query_params));
}

StatusOr<google::cloud::cpp::compute::v1::AddressList>
DefaultGlobalAddressesRestStub::ListGlobalAddresses(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::global_addresses::v1::
        ListGlobalAddressesRequest const& request) {
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
  return rest_internal::Get<google::cloud::cpp::compute::v1::AddressList>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "addresses"),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultGlobalAddressesRestStub::AsyncMove(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_addresses::v1::MoveRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        query_params.push_back({"request_id", request.request_id()});
        query_params =
            rest_internal::TrimEmptyQueryParameters(std::move(query_params));
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.global_addresses_move_request_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "global", "/", "addresses", "/", request.address(),
                             "/", "move"),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultGlobalAddressesRestStub::Move(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::global_addresses::v1::MoveRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"request_id", request.request_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request.global_addresses_move_request_resource(),
      false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "addresses", "/", request.address(), "/", "move"),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultGlobalAddressesRestStub::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_addresses::v1::SetLabelsRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.global_set_labels_request_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "global", "/", "addresses", "/",
                             request.resource(), "/", "setLabels"),
                std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
DefaultGlobalAddressesRestStub::SetLabels(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::global_addresses::v1::SetLabelsRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
      *service_, rest_context, request.global_set_labels_request_resource(),
      false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "addresses", "/", request.resource(), "/", "setLabels"),
      std::move(query_params));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultGlobalAddressesRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(
            rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
                *operations, *rest_context, request, false,
                absl::StrCat("/compute/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/projects/", request.project(),
                             "/global/operations/", request.operation())));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status> DefaultGlobalAddressesRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(rest_internal::Post<google::protobuf::Empty>(
            *operations, *rest_context, request, false,
            absl::StrCat("/compute/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/projects/", request.project(), "/global/operations/",
                         request.operation())));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_addresses_v1_internal
}  // namespace cloud
}  // namespace google
