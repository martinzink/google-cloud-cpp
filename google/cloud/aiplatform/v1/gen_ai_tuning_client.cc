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
// source: google/cloud/aiplatform/v1/genai_tuning_service.proto

#include "google/cloud/aiplatform/v1/gen_ai_tuning_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GenAiTuningServiceClient::GenAiTuningServiceClient(
    std::shared_ptr<GenAiTuningServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
GenAiTuningServiceClient::~GenAiTuningServiceClient() = default;

StatusOr<google::cloud::aiplatform::v1::TuningJob>
GenAiTuningServiceClient::CreateTuningJob(
    std::string const& parent,
    google::cloud::aiplatform::v1::TuningJob const& tuning_job, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateTuningJobRequest request;
  request.set_parent(parent);
  *request.mutable_tuning_job() = tuning_job;
  return connection_->CreateTuningJob(request);
}

StatusOr<google::cloud::aiplatform::v1::TuningJob>
GenAiTuningServiceClient::CreateTuningJob(
    google::cloud::aiplatform::v1::CreateTuningJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateTuningJob(request);
}

StatusOr<google::cloud::aiplatform::v1::TuningJob>
GenAiTuningServiceClient::GetTuningJob(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetTuningJobRequest request;
  request.set_name(name);
  return connection_->GetTuningJob(request);
}

StatusOr<google::cloud::aiplatform::v1::TuningJob>
GenAiTuningServiceClient::GetTuningJob(
    google::cloud::aiplatform::v1::GetTuningJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTuningJob(request);
}

StreamRange<google::cloud::aiplatform::v1::TuningJob>
GenAiTuningServiceClient::ListTuningJobs(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListTuningJobsRequest request;
  request.set_parent(parent);
  return connection_->ListTuningJobs(request);
}

StreamRange<google::cloud::aiplatform::v1::TuningJob>
GenAiTuningServiceClient::ListTuningJobs(
    google::cloud::aiplatform::v1::ListTuningJobsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTuningJobs(std::move(request));
}

Status GenAiTuningServiceClient::CancelTuningJob(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CancelTuningJobRequest request;
  request.set_name(name);
  return connection_->CancelTuningJob(request);
}

Status GenAiTuningServiceClient::CancelTuningJob(
    google::cloud::aiplatform::v1::CancelTuningJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelTuningJob(request);
}

future<StatusOr<google::cloud::aiplatform::v1::TuningJob>>
GenAiTuningServiceClient::RebaseTunedModel(
    std::string const& parent,
    google::cloud::aiplatform::v1::TunedModelRef const& tuned_model_ref,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::RebaseTunedModelRequest request;
  request.set_parent(parent);
  *request.mutable_tuned_model_ref() = tuned_model_ref;
  return connection_->RebaseTunedModel(request);
}

StatusOr<google::longrunning::Operation>
GenAiTuningServiceClient::RebaseTunedModel(
    NoAwaitTag, std::string const& parent,
    google::cloud::aiplatform::v1::TunedModelRef const& tuned_model_ref,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::RebaseTunedModelRequest request;
  request.set_parent(parent);
  *request.mutable_tuned_model_ref() = tuned_model_ref;
  return connection_->RebaseTunedModel(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::TuningJob>>
GenAiTuningServiceClient::RebaseTunedModel(
    google::cloud::aiplatform::v1::RebaseTunedModelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RebaseTunedModel(request);
}

StatusOr<google::longrunning::Operation>
GenAiTuningServiceClient::RebaseTunedModel(
    NoAwaitTag,
    google::cloud::aiplatform::v1::RebaseTunedModelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RebaseTunedModel(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::TuningJob>>
GenAiTuningServiceClient::RebaseTunedModel(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RebaseTunedModel(operation);
}

StreamRange<google::cloud::location::Location>
GenAiTuningServiceClient::ListLocations(
    google::cloud::location::ListLocationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLocations(std::move(request));
}

StatusOr<google::cloud::location::Location>
GenAiTuningServiceClient::GetLocation(
    google::cloud::location::GetLocationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLocation(request);
}

StatusOr<google::iam::v1::Policy> GenAiTuningServiceClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> GenAiTuningServiceClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
GenAiTuningServiceClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

StreamRange<google::longrunning::Operation>
GenAiTuningServiceClient::ListOperations(std::string const& name,
                                         std::string const& filter,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation>
GenAiTuningServiceClient::ListOperations(
    google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

StatusOr<google::longrunning::Operation> GenAiTuningServiceClient::GetOperation(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::GetOperationRequest request;
  request.set_name(name);
  return connection_->GetOperation(request);
}

StatusOr<google::longrunning::Operation> GenAiTuningServiceClient::GetOperation(
    google::longrunning::GetOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOperation(request);
}

Status GenAiTuningServiceClient::DeleteOperation(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::DeleteOperationRequest request;
  request.set_name(name);
  return connection_->DeleteOperation(request);
}

Status GenAiTuningServiceClient::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOperation(request);
}

Status GenAiTuningServiceClient::CancelOperation(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::CancelOperationRequest request;
  request.set_name(name);
  return connection_->CancelOperation(request);
}

Status GenAiTuningServiceClient::CancelOperation(
    google::longrunning::CancelOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelOperation(request);
}

StatusOr<google::longrunning::Operation>
GenAiTuningServiceClient::WaitOperation(
    google::longrunning::WaitOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->WaitOperation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
