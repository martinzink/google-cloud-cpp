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
// source: google/cloud/aiplatform/v1/tensorboard_service.proto

#include "google/cloud/aiplatform/v1/internal/tensorboard_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/tensorboard_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TensorboardServiceMetadata::TensorboardServiceMetadata(
    std::shared_ptr<TensorboardServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
TensorboardServiceMetadata::AsyncCreateTensorboard(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::CreateTensorboardRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateTensorboard(cq, std::move(context), request);
}

StatusOr<google::cloud::aiplatform::v1::Tensorboard>
TensorboardServiceMetadata::GetTensorboard(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetTensorboardRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTensorboard(context, request);
}

future<StatusOr<google::longrunning::Operation>>
TensorboardServiceMetadata::AsyncUpdateTensorboard(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::UpdateTensorboardRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("tensorboard.name=",
                           internal::UrlEncode(request.tensorboard().name())));
  return child_->AsyncUpdateTensorboard(cq, std::move(context), request);
}

StatusOr<google::cloud::aiplatform::v1::ListTensorboardsResponse>
TensorboardServiceMetadata::ListTensorboards(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListTensorboardsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTensorboards(context, request);
}

future<StatusOr<google::longrunning::Operation>>
TensorboardServiceMetadata::AsyncDeleteTensorboard(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteTensorboardRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteTensorboard(cq, std::move(context), request);
}

StatusOr<google::cloud::aiplatform::v1::ReadTensorboardUsageResponse>
TensorboardServiceMetadata::ReadTensorboardUsage(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ReadTensorboardUsageRequest const& request) {
  SetMetadata(
      context,
      absl::StrCat("tensorboard=", internal::UrlEncode(request.tensorboard())));
  return child_->ReadTensorboardUsage(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ReadTensorboardSizeResponse>
TensorboardServiceMetadata::ReadTensorboardSize(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ReadTensorboardSizeRequest const& request) {
  SetMetadata(
      context,
      absl::StrCat("tensorboard=", internal::UrlEncode(request.tensorboard())));
  return child_->ReadTensorboardSize(context, request);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
TensorboardServiceMetadata::CreateTensorboardExperiment(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateTensorboardExperimentRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateTensorboardExperiment(context, request);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
TensorboardServiceMetadata::GetTensorboardExperiment(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetTensorboardExperimentRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTensorboardExperiment(context, request);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
TensorboardServiceMetadata::UpdateTensorboardExperiment(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::UpdateTensorboardExperimentRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("tensorboard_experiment.name=",
                           internal::UrlEncode(
                               request.tensorboard_experiment().name())));
  return child_->UpdateTensorboardExperiment(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListTensorboardExperimentsResponse>
TensorboardServiceMetadata::ListTensorboardExperiments(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListTensorboardExperimentsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTensorboardExperiments(context, request);
}

future<StatusOr<google::longrunning::Operation>>
TensorboardServiceMetadata::AsyncDeleteTensorboardExperiment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteTensorboardExperimentRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteTensorboardExperiment(cq, std::move(context),
                                                  request);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
TensorboardServiceMetadata::CreateTensorboardRun(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateTensorboardRunRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateTensorboardRun(context, request);
}

StatusOr<google::cloud::aiplatform::v1::BatchCreateTensorboardRunsResponse>
TensorboardServiceMetadata::BatchCreateTensorboardRuns(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::BatchCreateTensorboardRunsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->BatchCreateTensorboardRuns(context, request);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
TensorboardServiceMetadata::GetTensorboardRun(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetTensorboardRunRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTensorboardRun(context, request);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
TensorboardServiceMetadata::UpdateTensorboardRun(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::UpdateTensorboardRunRequest const& request) {
  SetMetadata(
      context,
      absl::StrCat("tensorboard_run.name=",
                   internal::UrlEncode(request.tensorboard_run().name())));
  return child_->UpdateTensorboardRun(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListTensorboardRunsResponse>
TensorboardServiceMetadata::ListTensorboardRuns(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListTensorboardRunsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTensorboardRuns(context, request);
}

future<StatusOr<google::longrunning::Operation>>
TensorboardServiceMetadata::AsyncDeleteTensorboardRun(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteTensorboardRun(cq, std::move(context), request);
}

StatusOr<
    google::cloud::aiplatform::v1::BatchCreateTensorboardTimeSeriesResponse>
TensorboardServiceMetadata::BatchCreateTensorboardTimeSeries(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::
        BatchCreateTensorboardTimeSeriesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->BatchCreateTensorboardTimeSeries(context, request);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
TensorboardServiceMetadata::CreateTensorboardTimeSeries(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateTensorboardTimeSeriesRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateTensorboardTimeSeries(context, request);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
TensorboardServiceMetadata::GetTensorboardTimeSeries(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetTensorboardTimeSeriesRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTensorboardTimeSeries(context, request);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
TensorboardServiceMetadata::UpdateTensorboardTimeSeries(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::UpdateTensorboardTimeSeriesRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("tensorboard_time_series.name=",
                           internal::UrlEncode(
                               request.tensorboard_time_series().name())));
  return child_->UpdateTensorboardTimeSeries(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListTensorboardTimeSeriesResponse>
TensorboardServiceMetadata::ListTensorboardTimeSeries(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListTensorboardTimeSeriesRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTensorboardTimeSeries(context, request);
}

future<StatusOr<google::longrunning::Operation>>
TensorboardServiceMetadata::AsyncDeleteTensorboardTimeSeries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteTensorboardTimeSeriesRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteTensorboardTimeSeries(cq, std::move(context),
                                                  request);
}

StatusOr<
    google::cloud::aiplatform::v1::BatchReadTensorboardTimeSeriesDataResponse>
TensorboardServiceMetadata::BatchReadTensorboardTimeSeriesData(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::
        BatchReadTensorboardTimeSeriesDataRequest const& request) {
  SetMetadata(
      context,
      absl::StrCat("tensorboard=", internal::UrlEncode(request.tensorboard())));
  return child_->BatchReadTensorboardTimeSeriesData(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataResponse>
TensorboardServiceMetadata::ReadTensorboardTimeSeriesData(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataRequest const&
        request) {
  SetMetadata(
      context,
      absl::StrCat("tensorboard_time_series=",
                   internal::UrlEncode(request.tensorboard_time_series())));
  return child_->ReadTensorboardTimeSeriesData(context, request);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse>>
TensorboardServiceMetadata::ReadTensorboardBlobData(
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::ReadTensorboardBlobDataRequest const&
        request) {
  SetMetadata(
      *context,
      absl::StrCat("time_series=", internal::UrlEncode(request.time_series())));
  return child_->ReadTensorboardBlobData(std::move(context), request);
}

StatusOr<google::cloud::aiplatform::v1::WriteTensorboardExperimentDataResponse>
TensorboardServiceMetadata::WriteTensorboardExperimentData(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::WriteTensorboardExperimentDataRequest const&
        request) {
  SetMetadata(
      context,
      absl::StrCat("tensorboard_experiment=",
                   internal::UrlEncode(request.tensorboard_experiment())));
  return child_->WriteTensorboardExperimentData(context, request);
}

StatusOr<google::cloud::aiplatform::v1::WriteTensorboardRunDataResponse>
TensorboardServiceMetadata::WriteTensorboardRunData(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::WriteTensorboardRunDataRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("tensorboard_run=",
                           internal::UrlEncode(request.tensorboard_run())));
  return child_->WriteTensorboardRunData(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ExportTensorboardTimeSeriesDataResponse>
TensorboardServiceMetadata::ExportTensorboardTimeSeriesData(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ExportTensorboardTimeSeriesDataRequest const&
        request) {
  SetMetadata(
      context,
      absl::StrCat("tensorboard_time_series=",
                   internal::UrlEncode(request.tensorboard_time_series())));
  return child_->ExportTensorboardTimeSeriesData(context, request);
}

future<StatusOr<google::longrunning::Operation>>
TensorboardServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> TensorboardServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void TensorboardServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void TensorboardServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
