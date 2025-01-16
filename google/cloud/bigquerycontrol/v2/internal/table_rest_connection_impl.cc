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
// source: google/cloud/bigquery/v2/table.proto

#include "google/cloud/bigquerycontrol/v2/internal/table_rest_connection_impl.h"
#include "google/cloud/bigquerycontrol/v2/internal/table_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquerycontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TableServiceRestConnectionImpl::TableServiceRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<bigquerycontrol_v2_internal::TableServiceRestStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      TableServiceConnection::options())) {}

StatusOr<google::cloud::bigquery::v2::Table>
TableServiceRestConnectionImpl::GetTable(
    google::cloud::bigquery::v2::GetTableRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTable(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::bigquery::v2::GetTableRequest const& request) {
        return stub_->GetTable(rest_context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::bigquery::v2::Table>
TableServiceRestConnectionImpl::InsertTable(
    google::cloud::bigquery::v2::InsertTableRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InsertTable(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::bigquery::v2::InsertTableRequest const& request) {
        return stub_->InsertTable(rest_context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::bigquery::v2::Table>
TableServiceRestConnectionImpl::PatchTable(
    google::cloud::bigquery::v2::UpdateOrPatchTableRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PatchTable(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::bigquery::v2::UpdateOrPatchTableRequest const&
                 request) {
        return stub_->PatchTable(rest_context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::bigquery::v2::Table>
TableServiceRestConnectionImpl::UpdateTable(
    google::cloud::bigquery::v2::UpdateOrPatchTableRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateTable(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::bigquery::v2::UpdateOrPatchTableRequest const&
                 request) {
        return stub_->UpdateTable(rest_context, options, request);
      },
      *current, request, __func__);
}

Status TableServiceRestConnectionImpl::DeleteTable(
    google::cloud::bigquery::v2::DeleteTableRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteTable(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::bigquery::v2::DeleteTableRequest const& request) {
        return stub_->DeleteTable(rest_context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::bigquery::v2::ListFormatTable>
TableServiceRestConnectionImpl::ListTables(
    google::cloud::bigquery::v2::ListTablesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListTables(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::bigquery::v2::ListFormatTable>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<bigquerycontrol_v2::TableServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::bigquery::v2::ListTablesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                rest_internal::RestContext& rest_context,
                Options const& options,
                google::cloud::bigquery::v2::ListTablesRequest const& request) {
              return stub->ListTables(rest_context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::bigquery::v2::TableList r) {
        std::vector<google::cloud::bigquery::v2::ListFormatTable> result(
            r.tables().size());
        auto& messages = *r.mutable_tables();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquerycontrol_v2_internal
}  // namespace cloud
}  // namespace google
