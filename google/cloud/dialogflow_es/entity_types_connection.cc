// Copyright 2022 Google LLC
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
// source: google/cloud/dialogflow/v2/entity_type.proto

#include "google/cloud/dialogflow_es/entity_types_connection.h"
#include "google/cloud/dialogflow_es/entity_types_options.h"
#include "google/cloud/dialogflow_es/internal/entity_types_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/entity_types_option_defaults.h"
#include "google/cloud/dialogflow_es/internal/entity_types_stub_factory.h"
#include "google/cloud/dialogflow_es/internal/entity_types_tracing_connection.h"
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
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EntityTypesConnection::~EntityTypesConnection() = default;

StreamRange<google::cloud::dialogflow::v2::EntityType>
EntityTypesConnection::ListEntityTypes(
    google::cloud::dialogflow::v2::
        ListEntityTypesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::v2::EntityType>>();
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesConnection::GetEntityType(
    google::cloud::dialogflow::v2::GetEntityTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesConnection::CreateEntityType(
    google::cloud::dialogflow::v2::CreateEntityTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesConnection::UpdateEntityType(
    google::cloud::dialogflow::v2::UpdateEntityTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status EntityTypesConnection::DeleteEntityType(
    google::cloud::dialogflow::v2::DeleteEntityTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::dialogflow::v2::BatchUpdateEntityTypesResponse>>
EntityTypesConnection::BatchUpdateEntityTypes(
    google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::BatchUpdateEntityTypesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
EntityTypesConnection::BatchUpdateEntityTypes(
    NoAwaitTag,
    google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dialogflow::v2::BatchUpdateEntityTypesResponse>>
EntityTypesConnection::BatchUpdateEntityTypes(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::BatchUpdateEntityTypesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesConnection::BatchDeleteEntityTypes(
    google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Struct>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
EntityTypesConnection::BatchDeleteEntityTypes(
    NoAwaitTag,
    google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesConnection::BatchDeleteEntityTypes(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Struct>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesConnection::BatchCreateEntities(
    google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Struct>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
EntityTypesConnection::BatchCreateEntities(
    NoAwaitTag,
    google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesConnection::BatchCreateEntities(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Struct>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesConnection::BatchUpdateEntities(
    google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Struct>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
EntityTypesConnection::BatchUpdateEntities(
    NoAwaitTag,
    google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesConnection::BatchUpdateEntities(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Struct>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesConnection::BatchDeleteEntities(
    google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Struct>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
EntityTypesConnection::BatchDeleteEntities(
    NoAwaitTag,
    google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesConnection::BatchDeleteEntities(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Struct>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::location::Location>
EntityTypesConnection::ListLocations(
    google::cloud::location::
        ListLocationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::location::Location>>();
}

StatusOr<google::cloud::location::Location> EntityTypesConnection::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::longrunning::Operation>
EntityTypesConnection::ListOperations(
    google::longrunning::
        ListOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StatusOr<google::longrunning::Operation> EntityTypesConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status EntityTypesConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<EntityTypesConnection> MakeEntityTypesConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 EntityTypesPolicyOptionList>(options,
                                                              __func__);
  options = dialogflow_es_internal::EntityTypesDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = dialogflow_es_internal::CreateDefaultEntityTypesStub(
      std::move(auth), options);
  return dialogflow_es_internal::MakeEntityTypesTracingConnection(
      std::make_shared<dialogflow_es_internal::EntityTypesConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

std::shared_ptr<EntityTypesConnection> MakeEntityTypesConnection(
    Options options) {
  return MakeEntityTypesConnection(std::string{}, std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google
