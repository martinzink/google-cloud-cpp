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
// source: google/cloud/dialogflow/cx/v3/entity_type.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENTITY_TYPES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENTITY_TYPES_CLIENT_H

#include "google/cloud/dialogflow_cx/entity_types_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing
/// [EntityTypes][google.cloud.dialogflow.cx.v3.EntityType].
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
/// [google.cloud.dialogflow.cx.v3.EntityType]:
/// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L156}
///
class EntityTypesClient {
 public:
  explicit EntityTypesClient(std::shared_ptr<EntityTypesConnection> connection,
                             Options opts = {});
  ~EntityTypesClient();

  ///@{
  /// @name Copy and move support
  EntityTypesClient(EntityTypesClient const&) = default;
  EntityTypesClient& operator=(EntityTypesClient const&) = default;
  EntityTypesClient(EntityTypesClient&&) = default;
  EntityTypesClient& operator=(EntityTypesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(EntityTypesClient const& a,
                         EntityTypesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(EntityTypesClient const& a,
                         EntityTypesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Retrieves the specified entity type.
  ///
  /// @param name  Required. The name of the entity type.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent ID>/entityTypes/<Entity Type ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.EntityType])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.EntityType]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L156}
  /// [google.cloud.dialogflow.cx.v3.GetEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L505}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::EntityType> GetEntityType(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified entity type.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.GetEntityTypeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.EntityType])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.EntityType]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L156}
  /// [google.cloud.dialogflow.cx.v3.GetEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L505}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::EntityType> GetEntityType(
      google::cloud::dialogflow::cx::v3::GetEntityTypeRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an entity type in the specified agent.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param parent  Required. The agent to create a entity type for.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent ID>`.
  /// @param entity_type  Required. The entity type to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.EntityType])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.CreateEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L533}
  /// [google.cloud.dialogflow.cx.v3.EntityType]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L156}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::EntityType> CreateEntityType(
      std::string const& parent,
      google::cloud::dialogflow::cx::v3::EntityType const& entity_type,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an entity type in the specified agent.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.CreateEntityTypeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.EntityType])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.CreateEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L533}
  /// [google.cloud.dialogflow.cx.v3.EntityType]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L156}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::EntityType> CreateEntityType(
      google::cloud::dialogflow::cx::v3::CreateEntityTypeRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified entity type.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param entity_type  Required. The entity type to update.
  /// @param update_mask  The mask to control which fields get updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.EntityType])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.EntityType]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L156}
  /// [google.cloud.dialogflow.cx.v3.UpdateEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L562}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::EntityType> UpdateEntityType(
      google::cloud::dialogflow::cx::v3::EntityType const& entity_type,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates the specified entity type.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.UpdateEntityTypeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.EntityType])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.EntityType]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L156}
  /// [google.cloud.dialogflow.cx.v3.UpdateEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L562}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::EntityType> UpdateEntityType(
      google::cloud::dialogflow::cx::v3::UpdateEntityTypeRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified entity type.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param name  Required. The name of the entity type to delete.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent ID>/entityTypes/<Entity Type ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.DeleteEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L585}
  ///
  // clang-format on
  Status DeleteEntityType(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified entity type.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.DeleteEntityTypeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.DeleteEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L585}
  ///
  // clang-format on
  Status DeleteEntityType(
      google::cloud::dialogflow::cx::v3::DeleteEntityTypeRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the list of all entity types in the specified agent.
  ///
  /// @param parent  Required. The agent to list all entity types for.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.dialogflow.cx.v3.EntityType], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.EntityType]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L156}
  /// [google.cloud.dialogflow.cx.v3.ListEntityTypesRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L459}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::cx::v3::EntityType> ListEntityTypes(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Returns the list of all entity types in the specified agent.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.ListEntityTypesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.dialogflow.cx.v3.EntityType], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.EntityType]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L156}
  /// [google.cloud.dialogflow.cx.v3.ListEntityTypesRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L459}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::cx::v3::EntityType> ListEntityTypes(
      google::cloud::dialogflow::cx::v3::ListEntityTypesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Exports the selected entity types.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.ExportEntityTypesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.dialogflow.cx.v3.ExportEntityTypesResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.ExportEntityTypesRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L263}
  /// [google.cloud.dialogflow.cx.v3.ExportEntityTypesResponse]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L331}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dialogflow::cx::v3::ExportEntityTypesResponse>>
  ExportEntityTypes(
      google::cloud::dialogflow::cx::v3::ExportEntityTypesRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief ExportEntityTypes
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> ExportEntityTypes(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dialogflow::cx::v3::ExportEntityTypesRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief ExportEntityTypes
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::dialogflow::cx::v3::ExportEntityTypesResponse>>
  ExportEntityTypes(ExperimentalTag,
                    google::longrunning::Operation const& operation,
                    Options opts = {});

  // clang-format off
  ///
  /// Imports the specified entitytypes into the agent.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.ImportEntityTypesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.dialogflow.cx.v3.ImportEntityTypesResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.ImportEntityTypesRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L353}
  /// [google.cloud.dialogflow.cx.v3.ImportEntityTypesResponse]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/entity_type.proto#L427}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dialogflow::cx::v3::ImportEntityTypesResponse>>
  ImportEntityTypes(
      google::cloud::dialogflow::cx::v3::ImportEntityTypesRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief ImportEntityTypes
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> ImportEntityTypes(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dialogflow::cx::v3::ImportEntityTypesRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief ImportEntityTypes
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::dialogflow::cx::v3::ImportEntityTypesResponse>>
  ImportEntityTypes(ExperimentalTag,
                    google::longrunning::Operation const& operation,
                    Options opts = {});

 private:
  std::shared_ptr<EntityTypesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENTITY_TYPES_CLIENT_H
