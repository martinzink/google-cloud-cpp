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
// source: google/logging/v2/logging_config.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_CONFIG_SERVICE_V2_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_CONFIG_SERVICE_V2_TRACING_CONNECTION_H

#include "google/cloud/logging/v2/config_service_v2_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ConfigServiceV2TracingConnection
    : public logging_v2::ConfigServiceV2Connection {
 public:
  ~ConfigServiceV2TracingConnection() override = default;

  explicit ConfigServiceV2TracingConnection(
      std::shared_ptr<logging_v2::ConfigServiceV2Connection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::logging::v2::LogBucket> ListBuckets(
      google::logging::v2::ListBucketsRequest request) override;

  StatusOr<google::logging::v2::LogBucket> GetBucket(
      google::logging::v2::GetBucketRequest const& request) override;

  future<StatusOr<google::logging::v2::LogBucket>> CreateBucketAsync(
      google::logging::v2::CreateBucketRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateBucketAsync(
      NoAwaitTag,
      google::logging::v2::CreateBucketRequest const& request) override;

  future<StatusOr<google::logging::v2::LogBucket>> CreateBucketAsync(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::logging::v2::LogBucket>> UpdateBucketAsync(
      google::logging::v2::UpdateBucketRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateBucketAsync(
      NoAwaitTag,
      google::logging::v2::UpdateBucketRequest const& request) override;

  future<StatusOr<google::logging::v2::LogBucket>> UpdateBucketAsync(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::logging::v2::LogBucket> CreateBucket(
      google::logging::v2::CreateBucketRequest const& request) override;

  StatusOr<google::logging::v2::LogBucket> UpdateBucket(
      google::logging::v2::UpdateBucketRequest const& request) override;

  Status DeleteBucket(
      google::logging::v2::DeleteBucketRequest const& request) override;

  Status UndeleteBucket(
      google::logging::v2::UndeleteBucketRequest const& request) override;

  StreamRange<google::logging::v2::LogView> ListViews(
      google::logging::v2::ListViewsRequest request) override;

  StatusOr<google::logging::v2::LogView> GetView(
      google::logging::v2::GetViewRequest const& request) override;

  StatusOr<google::logging::v2::LogView> CreateView(
      google::logging::v2::CreateViewRequest const& request) override;

  StatusOr<google::logging::v2::LogView> UpdateView(
      google::logging::v2::UpdateViewRequest const& request) override;

  Status DeleteView(
      google::logging::v2::DeleteViewRequest const& request) override;

  StreamRange<google::logging::v2::LogSink> ListSinks(
      google::logging::v2::ListSinksRequest request) override;

  StatusOr<google::logging::v2::LogSink> GetSink(
      google::logging::v2::GetSinkRequest const& request) override;

  StatusOr<google::logging::v2::LogSink> CreateSink(
      google::logging::v2::CreateSinkRequest const& request) override;

  StatusOr<google::logging::v2::LogSink> UpdateSink(
      google::logging::v2::UpdateSinkRequest const& request) override;

  Status DeleteSink(
      google::logging::v2::DeleteSinkRequest const& request) override;

  future<StatusOr<google::logging::v2::Link>> CreateLink(
      google::logging::v2::CreateLinkRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateLink(
      NoAwaitTag,
      google::logging::v2::CreateLinkRequest const& request) override;

  future<StatusOr<google::logging::v2::Link>> CreateLink(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::logging::v2::LinkMetadata>> DeleteLink(
      google::logging::v2::DeleteLinkRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteLink(
      NoAwaitTag,
      google::logging::v2::DeleteLinkRequest const& request) override;

  future<StatusOr<google::logging::v2::LinkMetadata>> DeleteLink(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::logging::v2::Link> ListLinks(
      google::logging::v2::ListLinksRequest request) override;

  StatusOr<google::logging::v2::Link> GetLink(
      google::logging::v2::GetLinkRequest const& request) override;

  StreamRange<google::logging::v2::LogExclusion> ListExclusions(
      google::logging::v2::ListExclusionsRequest request) override;

  StatusOr<google::logging::v2::LogExclusion> GetExclusion(
      google::logging::v2::GetExclusionRequest const& request) override;

  StatusOr<google::logging::v2::LogExclusion> CreateExclusion(
      google::logging::v2::CreateExclusionRequest const& request) override;

  StatusOr<google::logging::v2::LogExclusion> UpdateExclusion(
      google::logging::v2::UpdateExclusionRequest const& request) override;

  Status DeleteExclusion(
      google::logging::v2::DeleteExclusionRequest const& request) override;

  StatusOr<google::logging::v2::CmekSettings> GetCmekSettings(
      google::logging::v2::GetCmekSettingsRequest const& request) override;

  StatusOr<google::logging::v2::CmekSettings> UpdateCmekSettings(
      google::logging::v2::UpdateCmekSettingsRequest const& request) override;

  StatusOr<google::logging::v2::Settings> GetSettings(
      google::logging::v2::GetSettingsRequest const& request) override;

  StatusOr<google::logging::v2::Settings> UpdateSettings(
      google::logging::v2::UpdateSettingsRequest const& request) override;

  future<StatusOr<google::logging::v2::CopyLogEntriesResponse>> CopyLogEntries(
      google::logging::v2::CopyLogEntriesRequest const& request) override;

  StatusOr<google::longrunning::Operation> CopyLogEntries(
      NoAwaitTag,
      google::logging::v2::CopyLogEntriesRequest const& request) override;

  future<StatusOr<google::logging::v2::CopyLogEntriesResponse>> CopyLogEntries(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<logging_v2::ConfigServiceV2Connection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<logging_v2::ConfigServiceV2Connection>
MakeConfigServiceV2TracingConnection(
    std::shared_ptr<logging_v2::ConfigServiceV2Connection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_CONFIG_SERVICE_V2_TRACING_CONNECTION_H
