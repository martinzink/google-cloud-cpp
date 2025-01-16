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
// source: google/cloud/discoveryengine/v1/grounded_generation_service.proto

#include "google/cloud/discoveryengine/v1/grounded_generation_connection.h"
#include "google/cloud/discoveryengine/v1/grounded_generation_options.h"
#include "google/cloud/discoveryengine/v1/internal/grounded_generation_connection_impl.h"
#include "google/cloud/discoveryengine/v1/internal/grounded_generation_option_defaults.h"
#include "google/cloud/discoveryengine/v1/internal/grounded_generation_stub_factory.h"
#include "google/cloud/discoveryengine/v1/internal/grounded_generation_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GroundedGenerationServiceConnection::~GroundedGenerationServiceConnection() =
    default;

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::discoveryengine::v1::GenerateGroundedContentRequest,
    google::cloud::discoveryengine::v1::GenerateGroundedContentResponse>>
GroundedGenerationServiceConnection::AsyncStreamGenerateGroundedContent() {
  return std::make_unique<
      ::google::cloud::internal::AsyncStreamingReadWriteRpcError<
          google::cloud::discoveryengine::v1::GenerateGroundedContentRequest,
          google::cloud::discoveryengine::v1::GenerateGroundedContentResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::discoveryengine::v1::GenerateGroundedContentResponse>
GroundedGenerationServiceConnection::GenerateGroundedContent(
    google::cloud::discoveryengine::v1::GenerateGroundedContentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::discoveryengine::v1::CheckGroundingResponse>
GroundedGenerationServiceConnection::CheckGrounding(
    google::cloud::discoveryengine::v1::CheckGroundingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::longrunning::Operation>
GroundedGenerationServiceConnection::ListOperations(
    google::longrunning::
        ListOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StatusOr<google::longrunning::Operation>
GroundedGenerationServiceConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status GroundedGenerationServiceConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<GroundedGenerationServiceConnection>
MakeGroundedGenerationServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 GroundedGenerationServicePolicyOptionList>(
      options, __func__);
  options =
      discoveryengine_v1_internal::GroundedGenerationServiceDefaultOptions(
          std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      discoveryengine_v1_internal::CreateDefaultGroundedGenerationServiceStub(
          std::move(auth), options);
  return discoveryengine_v1_internal::
      MakeGroundedGenerationServiceTracingConnection(
          std::make_shared<discoveryengine_v1_internal::
                               GroundedGenerationServiceConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google
