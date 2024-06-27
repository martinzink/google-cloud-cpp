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
// source: google/cloud/compute/http_health_checks/v1/http_health_checks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTP_HEALTH_CHECKS_V1_HTTP_HEALTH_CHECKS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTP_HEALTH_CHECKS_V1_HTTP_HEALTH_CHECKS_CLIENT_H

#include "google/cloud/compute/http_health_checks/v1/http_health_checks_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_http_health_checks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the httpHealthChecks resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/httpHealthChecks
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
class HttpHealthChecksClient {
 public:
  explicit HttpHealthChecksClient(
      std::shared_ptr<HttpHealthChecksConnection> connection,
      Options opts = {});
  ~HttpHealthChecksClient();

  ///@{
  /// @name Copy and move support
  HttpHealthChecksClient(HttpHealthChecksClient const&) = default;
  HttpHealthChecksClient& operator=(HttpHealthChecksClient const&) = default;
  HttpHealthChecksClient(HttpHealthChecksClient&&) = default;
  HttpHealthChecksClient& operator=(HttpHealthChecksClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(HttpHealthChecksClient const& a,
                         HttpHealthChecksClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(HttpHealthChecksClient const& a,
                         HttpHealthChecksClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified HttpHealthCheck resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/httpHealthChecks/delete
  ///
  /// @param project  Project ID for this request.
  /// @param http_health_check  Name of the HttpHealthCheck resource to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.http_health_checks.v1.DeleteHttpHealthCheckRequest]: @cloud_cpp_reference_link{google/cloud/compute/http_health_checks/v1/http_health_checks.proto#L116}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteHttpHealthCheck(std::string const& project,
                        std::string const& http_health_check,
                        Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteHttpHealthCheck
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteHttpHealthCheck(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& http_health_check, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified HttpHealthCheck resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/httpHealthChecks/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.http_health_checks.v1.DeleteHttpHealthCheckRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.http_health_checks.v1.DeleteHttpHealthCheckRequest]: @cloud_cpp_reference_link{google/cloud/compute/http_health_checks/v1/http_health_checks.proto#L116}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteHttpHealthCheck(google::cloud::cpp::compute::http_health_checks::v1::
                            DeleteHttpHealthCheckRequest const& request,
                        Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteHttpHealthCheck
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteHttpHealthCheck(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::http_health_checks::v1::
          DeleteHttpHealthCheckRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteHttpHealthCheck
  ///
  /// This method accepts a `google::cloud::cpp::compute::v1::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteHttpHealthCheck(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified HttpHealthCheck resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/httpHealthChecks/get
  ///
  /// @param project  Project ID for this request.
  /// @param http_health_check  Name of the HttpHealthCheck resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.HttpHealthCheck])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.http_health_checks.v1.GetHttpHealthCheckRequest]: @cloud_cpp_reference_link{google/cloud/compute/http_health_checks/v1/http_health_checks.proto#L142}
  /// [google.cloud.cpp.compute.v1.HttpHealthCheck]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_051.proto#L29}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::HttpHealthCheck> GetHttpHealthCheck(
      std::string const& project, std::string const& http_health_check,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified HttpHealthCheck resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/httpHealthChecks/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.http_health_checks.v1.GetHttpHealthCheckRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.HttpHealthCheck])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.http_health_checks.v1.GetHttpHealthCheckRequest]: @cloud_cpp_reference_link{google/cloud/compute/http_health_checks/v1/http_health_checks.proto#L142}
  /// [google.cloud.cpp.compute.v1.HttpHealthCheck]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_051.proto#L29}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::HttpHealthCheck> GetHttpHealthCheck(
      google::cloud::cpp::compute::http_health_checks::v1::
          GetHttpHealthCheckRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a HttpHealthCheck resource in the specified project using the data
  /// included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/httpHealthChecks/insert
  ///
  /// @param project  Project ID for this request.
  /// @param http_health_check_resource  The HttpHealthCheck for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.http_health_checks.v1.InsertHttpHealthCheckRequest]: @cloud_cpp_reference_link{google/cloud/compute/http_health_checks/v1/http_health_checks.proto#L153}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertHttpHealthCheck(std::string const& project,
                        google::cloud::cpp::compute::v1::HttpHealthCheck const&
                            http_health_check_resource,
                        Options opts = {});

  // clang-format off
  ///
  /// @copybrief InsertHttpHealthCheck
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertHttpHealthCheck(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      google::cloud::cpp::compute::v1::HttpHealthCheck const&
          http_health_check_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a HttpHealthCheck resource in the specified project using the data
  /// included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/httpHealthChecks/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.http_health_checks.v1.InsertHttpHealthCheckRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.http_health_checks.v1.InsertHttpHealthCheckRequest]: @cloud_cpp_reference_link{google/cloud/compute/http_health_checks/v1/http_health_checks.proto#L153}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertHttpHealthCheck(google::cloud::cpp::compute::http_health_checks::v1::
                            InsertHttpHealthCheckRequest const& request,
                        Options opts = {});

  // clang-format off
  ///
  /// @copybrief InsertHttpHealthCheck
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertHttpHealthCheck(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::http_health_checks::v1::
          InsertHttpHealthCheckRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief InsertHttpHealthCheck
  ///
  /// This method accepts a `google::cloud::cpp::compute::v1::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertHttpHealthCheck(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of HttpHealthCheck resources available to the specified
  /// project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/httpHealthChecks/list
  ///
  /// @param project  Project ID for this request.
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
  ///     [google.cloud.cpp.compute.v1.HttpHealthCheck], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.http_health_checks.v1.ListHttpHealthChecksRequest]: @cloud_cpp_reference_link{google/cloud/compute/http_health_checks/v1/http_health_checks.proto#L179}
  /// [google.cloud.cpp.compute.v1.HttpHealthCheck]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_051.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::HttpHealthCheck>
  ListHttpHealthChecks(std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of HttpHealthCheck resources available to the specified
  /// project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/httpHealthChecks/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.http_health_checks.v1.ListHttpHealthChecksRequest].
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
  ///     [google.cloud.cpp.compute.v1.HttpHealthCheck], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.http_health_checks.v1.ListHttpHealthChecksRequest]: @cloud_cpp_reference_link{google/cloud/compute/http_health_checks/v1/http_health_checks.proto#L179}
  /// [google.cloud.cpp.compute.v1.HttpHealthCheck]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_051.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::HttpHealthCheck>
  ListHttpHealthChecks(google::cloud::cpp::compute::http_health_checks::v1::
                           ListHttpHealthChecksRequest request,
                       Options opts = {});

  // clang-format off
  ///
  /// Updates a HttpHealthCheck resource in the specified project using the data
  /// included in the request. This method supports PATCH semantics and uses the
  /// JSON merge patch format and processing rules.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/httpHealthChecks/patch
  ///
  /// @param project  Project ID for this request.
  /// @param http_health_check  Name of the HttpHealthCheck resource to patch.
  /// @param http_health_check_resource  The HttpHealthCheck for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.http_health_checks.v1.PatchHttpHealthCheckRequest]: @cloud_cpp_reference_link{google/cloud/compute/http_health_checks/v1/http_health_checks.proto#L247}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchHttpHealthCheck(std::string const& project,
                       std::string const& http_health_check,
                       google::cloud::cpp::compute::v1::HttpHealthCheck const&
                           http_health_check_resource,
                       Options opts = {});

  // clang-format off
  ///
  /// @copybrief PatchHttpHealthCheck
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchHttpHealthCheck(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& http_health_check,
      google::cloud::cpp::compute::v1::HttpHealthCheck const&
          http_health_check_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a HttpHealthCheck resource in the specified project using the data
  /// included in the request. This method supports PATCH semantics and uses the
  /// JSON merge patch format and processing rules.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/httpHealthChecks/patch
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.http_health_checks.v1.PatchHttpHealthCheckRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.http_health_checks.v1.PatchHttpHealthCheckRequest]: @cloud_cpp_reference_link{google/cloud/compute/http_health_checks/v1/http_health_checks.proto#L247}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchHttpHealthCheck(google::cloud::cpp::compute::http_health_checks::v1::
                           PatchHttpHealthCheckRequest const& request,
                       Options opts = {});

  // clang-format off
  ///
  /// @copybrief PatchHttpHealthCheck
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchHttpHealthCheck(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::http_health_checks::v1::
          PatchHttpHealthCheckRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief PatchHttpHealthCheck
  ///
  /// This method accepts a `google::cloud::cpp::compute::v1::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchHttpHealthCheck(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a HttpHealthCheck resource in the specified project using the data
  /// included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/httpHealthChecks/update
  ///
  /// @param project  Project ID for this request.
  /// @param http_health_check  Name of the HttpHealthCheck resource to update.
  /// @param http_health_check_resource  The HttpHealthCheck for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.http_health_checks.v1.UpdateHttpHealthCheckRequest]: @cloud_cpp_reference_link{google/cloud/compute/http_health_checks/v1/http_health_checks.proto#L277}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateHttpHealthCheck(std::string const& project,
                        std::string const& http_health_check,
                        google::cloud::cpp::compute::v1::HttpHealthCheck const&
                            http_health_check_resource,
                        Options opts = {});

  // clang-format off
  ///
  /// @copybrief UpdateHttpHealthCheck
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateHttpHealthCheck(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& http_health_check,
      google::cloud::cpp::compute::v1::HttpHealthCheck const&
          http_health_check_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a HttpHealthCheck resource in the specified project using the data
  /// included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/httpHealthChecks/update
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.http_health_checks.v1.UpdateHttpHealthCheckRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.http_health_checks.v1.UpdateHttpHealthCheckRequest]: @cloud_cpp_reference_link{google/cloud/compute/http_health_checks/v1/http_health_checks.proto#L277}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateHttpHealthCheck(google::cloud::cpp::compute::http_health_checks::v1::
                            UpdateHttpHealthCheckRequest const& request,
                        Options opts = {});

  // clang-format off
  ///
  /// @copybrief UpdateHttpHealthCheck
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateHttpHealthCheck(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::http_health_checks::v1::
          UpdateHttpHealthCheckRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief UpdateHttpHealthCheck
  ///
  /// This method accepts a `google::cloud::cpp::compute::v1::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateHttpHealthCheck(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

 private:
  std::shared_ptr<HttpHealthChecksConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_http_health_checks_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTP_HEALTH_CHECKS_V1_HTTP_HEALTH_CHECKS_CLIENT_H
