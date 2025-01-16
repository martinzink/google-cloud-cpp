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
// source: google/monitoring/v3/snooze_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_SNOOZE_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_SNOOZE_CLIENT_H

#include "google/cloud/monitoring/v3/snooze_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace monitoring_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The SnoozeService API is used to temporarily prevent an alert policy from
/// generating alerts. A Snooze is a description of the criteria under which one
/// or more alert policies should not fire alerts for the specified duration.
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
class SnoozeServiceClient {
 public:
  explicit SnoozeServiceClient(
      std::shared_ptr<SnoozeServiceConnection> connection, Options opts = {});
  ~SnoozeServiceClient();

  ///@{
  /// @name Copy and move support
  SnoozeServiceClient(SnoozeServiceClient const&) = default;
  SnoozeServiceClient& operator=(SnoozeServiceClient const&) = default;
  SnoozeServiceClient(SnoozeServiceClient&&) = default;
  SnoozeServiceClient& operator=(SnoozeServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(SnoozeServiceClient const& a,
                         SnoozeServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SnoozeServiceClient const& a,
                         SnoozeServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a `Snooze` that will prevent alerts, which match the provided
  /// criteria, from being opened. The `Snooze` applies for a specific time
  /// interval.
  ///
  /// @param parent  Required. The
  ///  [project](https://cloud.google.com/monitoring/api/v3#project_name) in which
  ///  a `Snooze` should be created. The format is:
  ///  @n
  ///      projects/[PROJECT_ID_OR_NUMBER]
  /// @param snooze  Required. The `Snooze` to create. Omit the `name` field, as it will be
  ///  filled in by the API.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.Snooze])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.CreateSnoozeRequest]: @googleapis_reference_link{google/monitoring/v3/snooze_service.proto#L85}
  /// [google.monitoring.v3.Snooze]: @googleapis_reference_link{google/monitoring/v3/snooze.proto#L35}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::Snooze> CreateSnooze(
      std::string const& parent, google::monitoring::v3::Snooze const& snooze,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a `Snooze` that will prevent alerts, which match the provided
  /// criteria, from being opened. The `Snooze` applies for a specific time
  /// interval.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.v3.CreateSnoozeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.Snooze])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.CreateSnoozeRequest]: @googleapis_reference_link{google/monitoring/v3/snooze_service.proto#L85}
  /// [google.monitoring.v3.Snooze]: @googleapis_reference_link{google/monitoring/v3/snooze.proto#L35}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::Snooze> CreateSnooze(
      google::monitoring::v3::CreateSnoozeRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists the `Snooze`s associated with a project. Can optionally pass in
  /// `filter`, which specifies predicates to match `Snooze`s.
  ///
  /// @param parent  Required. The
  ///  [project](https://cloud.google.com/monitoring/api/v3#project_name) whose
  ///  `Snooze`s should be listed. The format is:
  ///  @n
  ///      projects/[PROJECT_ID_OR_NUMBER]
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
  ///     [google.monitoring.v3.Snooze], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.ListSnoozesRequest]: @googleapis_reference_link{google/monitoring/v3/snooze_service.proto#L105}
  /// [google.monitoring.v3.Snooze]: @googleapis_reference_link{google/monitoring/v3/snooze.proto#L35}
  ///
  // clang-format on
  StreamRange<google::monitoring::v3::Snooze> ListSnoozes(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists the `Snooze`s associated with a project. Can optionally pass in
  /// `filter`, which specifies predicates to match `Snooze`s.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.v3.ListSnoozesRequest].
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
  ///     [google.monitoring.v3.Snooze], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.ListSnoozesRequest]: @googleapis_reference_link{google/monitoring/v3/snooze_service.proto#L105}
  /// [google.monitoring.v3.Snooze]: @googleapis_reference_link{google/monitoring/v3/snooze.proto#L35}
  ///
  // clang-format on
  StreamRange<google::monitoring::v3::Snooze> ListSnoozes(
      google::monitoring::v3::ListSnoozesRequest request, Options opts = {});

  // clang-format off
  ///
  /// Retrieves a `Snooze` by `name`.
  ///
  /// @param name  Required. The ID of the `Snooze` to retrieve. The format is:
  ///  @n
  ///      projects/[PROJECT_ID_OR_NUMBER]/snoozes/[SNOOZE_ID]
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.Snooze])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.GetSnoozeRequest]: @googleapis_reference_link{google/monitoring/v3/snooze_service.proto#L157}
  /// [google.monitoring.v3.Snooze]: @googleapis_reference_link{google/monitoring/v3/snooze.proto#L35}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::Snooze> GetSnooze(std::string const& name,
                                                     Options opts = {});

  // clang-format off
  ///
  /// Retrieves a `Snooze` by `name`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.v3.GetSnoozeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.Snooze])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.GetSnoozeRequest]: @googleapis_reference_link{google/monitoring/v3/snooze_service.proto#L157}
  /// [google.monitoring.v3.Snooze]: @googleapis_reference_link{google/monitoring/v3/snooze.proto#L35}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::Snooze> GetSnooze(
      google::monitoring::v3::GetSnoozeRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a `Snooze`, identified by its `name`, with the parameters in the
  /// given `Snooze` object.
  ///
  /// @param snooze  Required. The `Snooze` to update. Must have the name field present.
  /// @param update_mask  Required. The fields to update.
  ///  @n
  ///  For more information, see [UpdateSnoozeRequest][google.monitoring.v3.UpdateSnoozeRequest].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.Snooze])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.Snooze]: @googleapis_reference_link{google/monitoring/v3/snooze.proto#L35}
  /// [google.monitoring.v3.UpdateSnoozeRequest]: @googleapis_reference_link{google/monitoring/v3/snooze_service.proto#L182}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::Snooze> UpdateSnooze(
      google::monitoring::v3::Snooze const& snooze,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates a `Snooze`, identified by its `name`, with the parameters in the
  /// given `Snooze` object.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.v3.UpdateSnoozeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.Snooze])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.Snooze]: @googleapis_reference_link{google/monitoring/v3/snooze.proto#L35}
  /// [google.monitoring.v3.UpdateSnoozeRequest]: @googleapis_reference_link{google/monitoring/v3/snooze_service.proto#L182}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::Snooze> UpdateSnooze(
      google::monitoring::v3::UpdateSnoozeRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<SnoozeServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_SNOOZE_CLIENT_H
