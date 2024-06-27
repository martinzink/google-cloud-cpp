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
// source: google/cloud/backupdr/v1/backupdr.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BACKUPDR_V1_BACKUP_DR_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BACKUPDR_V1_BACKUP_DR_CLIENT_H

#include "google/cloud/backupdr/v1/backup_dr_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace backupdr_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The BackupDR Service
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
class BackupDRClient {
 public:
  explicit BackupDRClient(std::shared_ptr<BackupDRConnection> connection,
                          Options opts = {});
  ~BackupDRClient();

  ///@{
  /// @name Copy and move support
  BackupDRClient(BackupDRClient const&) = default;
  BackupDRClient& operator=(BackupDRClient const&) = default;
  BackupDRClient(BackupDRClient&&) = default;
  BackupDRClient& operator=(BackupDRClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(BackupDRClient const& a, BackupDRClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(BackupDRClient const& a, BackupDRClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists ManagementServers in a given project and location.
  ///
  /// @param parent  Required. The project and location for which to retrieve management servers
  ///  information, in the format `projects/{project_id}/locations/{location}`. In
  ///  Cloud BackupDR, locations map to GCP regions, for example **us-central1**.
  ///  To retrieve management servers for all locations, use "-" for the
  ///  `{location}` value.
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
  ///     [google.cloud.backupdr.v1.ManagementServer], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.backupdr.v1.ListManagementServersRequest]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L262}
  /// [google.cloud.backupdr.v1.ManagementServer]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L143}
  ///
  // clang-format on
  StreamRange<google::cloud::backupdr::v1::ManagementServer>
  ListManagementServers(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists ManagementServers in a given project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.backupdr.v1.ListManagementServersRequest].
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
  ///     [google.cloud.backupdr.v1.ManagementServer], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.backupdr.v1.ListManagementServersRequest]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L262}
  /// [google.cloud.backupdr.v1.ManagementServer]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L143}
  ///
  // clang-format on
  StreamRange<google::cloud::backupdr::v1::ManagementServer>
  ListManagementServers(
      google::cloud::backupdr::v1::ListManagementServersRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single ManagementServer.
  ///
  /// @param name  Required. Name of the management server resource name, in the format
  ///  `projects/{project_id}/locations/{location}/managementServers/{resource_name}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.backupdr.v1.ManagementServer])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.backupdr.v1.GetManagementServerRequest]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L309}
  /// [google.cloud.backupdr.v1.ManagementServer]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L143}
  ///
  // clang-format on
  StatusOr<google::cloud::backupdr::v1::ManagementServer> GetManagementServer(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single ManagementServer.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.backupdr.v1.GetManagementServerRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.backupdr.v1.ManagementServer])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.backupdr.v1.GetManagementServerRequest]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L309}
  /// [google.cloud.backupdr.v1.ManagementServer]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L143}
  ///
  // clang-format on
  StatusOr<google::cloud::backupdr::v1::ManagementServer> GetManagementServer(
      google::cloud::backupdr::v1::GetManagementServerRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new ManagementServer in a given project and location.
  ///
  /// @param parent  Required. The management server project and location in the format
  ///  `projects/{project_id}/locations/{location}`. In Cloud Backup and DR
  ///  locations map to GCP regions, for example **us-central1**.
  /// @param management_server  Required. A [management server
  ///  resource][google.cloud.backupdr.v1.ManagementServer]
  /// @param management_server_id  Required. The name of the management server to create. The name must be
  ///  unique for the specified project and location.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.backupdr.v1.ManagementServer] proto message.
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
  /// [google.cloud.backupdr.v1.CreateManagementServerRequest]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L321}
  /// [google.cloud.backupdr.v1.ManagementServer]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L143}
  ///
  // clang-format on
  future<StatusOr<google::cloud::backupdr::v1::ManagementServer>>
  CreateManagementServer(
      std::string const& parent,
      google::cloud::backupdr::v1::ManagementServer const& management_server,
      std::string const& management_server_id, Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateManagementServer
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> CreateManagementServer(
      ExperimentalTag, NoAwaitTag, std::string const& parent,
      google::cloud::backupdr::v1::ManagementServer const& management_server,
      std::string const& management_server_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a new ManagementServer in a given project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.backupdr.v1.CreateManagementServerRequest].
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
  ///     [google.cloud.backupdr.v1.ManagementServer] proto message.
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
  /// [google.cloud.backupdr.v1.CreateManagementServerRequest]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L321}
  /// [google.cloud.backupdr.v1.ManagementServer]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L143}
  ///
  // clang-format on
  future<StatusOr<google::cloud::backupdr::v1::ManagementServer>>
  CreateManagementServer(
      google::cloud::backupdr::v1::CreateManagementServerRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateManagementServer
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> CreateManagementServer(
      ExperimentalTag, NoAwaitTag,
      google::cloud::backupdr::v1::CreateManagementServerRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateManagementServer
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::backupdr::v1::ManagementServer>>
  CreateManagementServer(ExperimentalTag,
                         google::longrunning::Operation const& operation,
                         Options opts = {});

  // clang-format off
  ///
  /// Deletes a single ManagementServer.
  ///
  /// @param name  Required. Name of the resource
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.backupdr.v1.OperationMetadata] proto message.
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
  /// [google.cloud.backupdr.v1.DeleteManagementServerRequest]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L358}
  /// [google.cloud.backupdr.v1.OperationMetadata]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L384}
  ///
  // clang-format on
  future<StatusOr<google::cloud::backupdr::v1::OperationMetadata>>
  DeleteManagementServer(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteManagementServer
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> DeleteManagementServer(
      ExperimentalTag, NoAwaitTag, std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a single ManagementServer.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.backupdr.v1.DeleteManagementServerRequest].
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
  ///     [google.cloud.backupdr.v1.OperationMetadata] proto message.
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
  /// [google.cloud.backupdr.v1.DeleteManagementServerRequest]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L358}
  /// [google.cloud.backupdr.v1.OperationMetadata]: @googleapis_reference_link{google/cloud/backupdr/v1/backupdr.proto#L384}
  ///
  // clang-format on
  future<StatusOr<google::cloud::backupdr::v1::OperationMetadata>>
  DeleteManagementServer(
      google::cloud::backupdr::v1::DeleteManagementServerRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteManagementServer
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> DeleteManagementServer(
      ExperimentalTag, NoAwaitTag,
      google::cloud::backupdr::v1::DeleteManagementServerRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteManagementServer
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::backupdr::v1::OperationMetadata>>
  DeleteManagementServer(ExperimentalTag,
                         google::longrunning::Operation const& operation,
                         Options opts = {});

 private:
  std::shared_ptr<BackupDRConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace backupdr_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BACKUPDR_V1_BACKUP_DR_CLIENT_H
