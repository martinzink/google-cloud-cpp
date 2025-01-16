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
// source: google/cloud/dialogflow/v2/generator.proto

#include "google/cloud/dialogflow_es/internal/generators_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/generator.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GeneratorsLogging::GeneratorsLogging(std::shared_ptr<GeneratorsStub> child,
                                     TracingOptions tracing_options,
                                     std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::dialogflow::v2::Generator>
GeneratorsLogging::CreateGenerator(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::CreateGeneratorRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::CreateGeneratorRequest const&
                 request) {
        return child_->CreateGenerator(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::Generator>
GeneratorsLogging::GetGenerator(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetGeneratorRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::v2::GetGeneratorRequest const& request) {
        return child_->GetGenerator(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::ListGeneratorsResponse>
GeneratorsLogging::ListGenerators(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::ListGeneratorsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::v2::ListGeneratorsRequest const& request) {
        return child_->ListGenerators(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status GeneratorsLogging::DeleteGenerator(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::DeleteGeneratorRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::DeleteGeneratorRequest const&
                 request) {
        return child_->DeleteGenerator(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::Generator>
GeneratorsLogging::UpdateGenerator(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::UpdateGeneratorRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::UpdateGeneratorRequest const&
                 request) {
        return child_->UpdateGenerator(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::ListLocationsResponse>
GeneratorsLogging::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::ListLocationsRequest const& request) {
        return child_->ListLocations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::Location> GeneratorsLogging::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return child_->GetLocation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::ListOperationsResponse>
GeneratorsLogging::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::ListOperationsRequest const& request) {
        return child_->ListOperations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation> GeneratorsLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status GeneratorsLogging::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->CancelOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
