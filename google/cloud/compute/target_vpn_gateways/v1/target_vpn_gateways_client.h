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
// source: google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_VPN_GATEWAYS_V1_TARGET_VPN_GATEWAYS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_VPN_GATEWAYS_V1_TARGET_VPN_GATEWAYS_CLIENT_H

#include "google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_target_vpn_gateways_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the targetVpnGateways resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/targetVpnGateways
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
class TargetVpnGatewaysClient {
 public:
  explicit TargetVpnGatewaysClient(
      std::shared_ptr<TargetVpnGatewaysConnection> connection,
      Options opts = {});
  ~TargetVpnGatewaysClient();

  ///@{
  /// @name Copy and move support
  TargetVpnGatewaysClient(TargetVpnGatewaysClient const&) = default;
  TargetVpnGatewaysClient& operator=(TargetVpnGatewaysClient const&) = default;
  TargetVpnGatewaysClient(TargetVpnGatewaysClient&&) = default;
  TargetVpnGatewaysClient& operator=(TargetVpnGatewaysClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(TargetVpnGatewaysClient const& a,
                         TargetVpnGatewaysClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(TargetVpnGatewaysClient const& a,
                         TargetVpnGatewaysClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Retrieves an aggregated list of target VPN gateways. To prevent failure,
  /// Google recommends that you set the `returnPartialSuccess` parameter to
  /// `true`.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetVpnGateways/aggregatedList
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
  ///     [google.cloud.cpp.compute.v1.TargetVpnGatewaysScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_vpn_gateways.v1.AggregatedListTargetVpnGatewaysRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto#L115}
  /// [google.cloud.cpp.compute.v1.TargetVpnGatewaysScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_136.proto#L313}
  ///
  // clang-format on
  StreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::TargetVpnGatewaysScopedList>>
  AggregatedListTargetVpnGateways(std::string const& project,
                                  Options opts = {});

  // clang-format off
  ///
  /// Retrieves an aggregated list of target VPN gateways. To prevent failure,
  /// Google recommends that you set the `returnPartialSuccess` parameter to
  /// `true`.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetVpnGateways/aggregatedList
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_vpn_gateways.v1.AggregatedListTargetVpnGatewaysRequest].
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
  ///     [google.cloud.cpp.compute.v1.TargetVpnGatewaysScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_vpn_gateways.v1.AggregatedListTargetVpnGatewaysRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto#L115}
  /// [google.cloud.cpp.compute.v1.TargetVpnGatewaysScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_136.proto#L313}
  ///
  // clang-format on
  StreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::TargetVpnGatewaysScopedList>>
  AggregatedListTargetVpnGateways(
      google::cloud::cpp::compute::target_vpn_gateways::v1::
          AggregatedListTargetVpnGatewaysRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified target VPN gateway.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetVpnGateways/delete
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param target_vpn_gateway  Name of the target VPN gateway to delete.
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
  /// [google.cloud.cpp.compute.target_vpn_gateways.v1.DeleteTargetVpnGatewayRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto#L197}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetVpnGateway(std::string const& project, std::string const& region,
                         std::string const& target_vpn_gateway,
                         Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteTargetVpnGateway
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteTargetVpnGateway(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& region, std::string const& target_vpn_gateway,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified target VPN gateway.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetVpnGateways/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_vpn_gateways.v1.DeleteTargetVpnGatewayRequest].
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
  /// [google.cloud.cpp.compute.target_vpn_gateways.v1.DeleteTargetVpnGatewayRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto#L197}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetVpnGateway(google::cloud::cpp::compute::target_vpn_gateways::v1::
                             DeleteTargetVpnGatewayRequest const& request,
                         Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteTargetVpnGateway
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteTargetVpnGateway(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::target_vpn_gateways::v1::
          DeleteTargetVpnGatewayRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteTargetVpnGateway
  ///
  /// This method accepts a `google::cloud::cpp::compute::v1::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetVpnGateway(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified target VPN gateway.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetVpnGateways/get
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param target_vpn_gateway  Name of the target VPN gateway to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetVpnGateway])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_vpn_gateways.v1.GetTargetVpnGatewayRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto#L230}
  /// [google.cloud.cpp.compute.v1.TargetVpnGateway]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_136.proto#L27}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetVpnGateway>
  GetTargetVpnGateway(std::string const& project, std::string const& region,
                      std::string const& target_vpn_gateway, Options opts = {});

  // clang-format off
  ///
  /// Returns the specified target VPN gateway.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetVpnGateways/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_vpn_gateways.v1.GetTargetVpnGatewayRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetVpnGateway])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_vpn_gateways.v1.GetTargetVpnGatewayRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto#L230}
  /// [google.cloud.cpp.compute.v1.TargetVpnGateway]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_136.proto#L27}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetVpnGateway>
  GetTargetVpnGateway(google::cloud::cpp::compute::target_vpn_gateways::v1::
                          GetTargetVpnGatewayRequest const& request,
                      Options opts = {});

  // clang-format off
  ///
  /// Creates a target VPN gateway in the specified project and region using the
  /// data included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetVpnGateways/insert
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param target_vpn_gateway_resource  The TargetVpnGateway for this request.
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
  /// [google.cloud.cpp.compute.target_vpn_gateways.v1.InsertTargetVpnGatewayRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto#L245}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetVpnGateway(
      std::string const& project, std::string const& region,
      google::cloud::cpp::compute::v1::TargetVpnGateway const&
          target_vpn_gateway_resource,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief InsertTargetVpnGateway
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertTargetVpnGateway(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& region,
      google::cloud::cpp::compute::v1::TargetVpnGateway const&
          target_vpn_gateway_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a target VPN gateway in the specified project and region using the
  /// data included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetVpnGateways/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_vpn_gateways.v1.InsertTargetVpnGatewayRequest].
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
  /// [google.cloud.cpp.compute.target_vpn_gateways.v1.InsertTargetVpnGatewayRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto#L245}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetVpnGateway(google::cloud::cpp::compute::target_vpn_gateways::v1::
                             InsertTargetVpnGatewayRequest const& request,
                         Options opts = {});

  // clang-format off
  ///
  /// @copybrief InsertTargetVpnGateway
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertTargetVpnGateway(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::target_vpn_gateways::v1::
          InsertTargetVpnGatewayRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief InsertTargetVpnGateway
  ///
  /// This method accepts a `google::cloud::cpp::compute::v1::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetVpnGateway(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of target VPN gateways available to the specified project
  /// and region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetVpnGateways/list
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
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
  ///     [google.cloud.cpp.compute.v1.TargetVpnGateway], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_vpn_gateways.v1.ListTargetVpnGatewaysRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto#L278}
  /// [google.cloud.cpp.compute.v1.TargetVpnGateway]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_136.proto#L27}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::TargetVpnGateway>
  ListTargetVpnGateways(std::string const& project, std::string const& region,
                        Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of target VPN gateways available to the specified project
  /// and region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetVpnGateways/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_vpn_gateways.v1.ListTargetVpnGatewaysRequest].
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
  ///     [google.cloud.cpp.compute.v1.TargetVpnGateway], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_vpn_gateways.v1.ListTargetVpnGatewaysRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto#L278}
  /// [google.cloud.cpp.compute.v1.TargetVpnGateway]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_136.proto#L27}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::TargetVpnGateway>
  ListTargetVpnGateways(google::cloud::cpp::compute::target_vpn_gateways::v1::
                            ListTargetVpnGatewaysRequest request,
                        Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on a TargetVpnGateway. To learn more about labels, read the
  /// Labeling Resources documentation.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetVpnGateways/setLabels
  ///
  /// @param project  Project ID for this request.
  /// @param region  The region for this request.
  /// @param resource  Name or id of the resource for this request.
  /// @param region_set_labels_request_resource  The RegionSetLabelsRequest for this request.
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
  /// [google.cloud.cpp.compute.target_vpn_gateways.v1.SetLabelsRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto#L350}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      std::string const& project, std::string const& region,
      std::string const& resource,
      google::cloud::cpp::compute::v1::RegionSetLabelsRequest const&
          region_set_labels_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief SetLabels
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      ExperimentalTag, NoAwaitTag, std::string const& project,
      std::string const& region, std::string const& resource,
      google::cloud::cpp::compute::v1::RegionSetLabelsRequest const&
          region_set_labels_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on a TargetVpnGateway. To learn more about labels, read the
  /// Labeling Resources documentation.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetVpnGateways/setLabels
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_vpn_gateways.v1.SetLabelsRequest].
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
  /// [google.cloud.cpp.compute.target_vpn_gateways.v1.SetLabelsRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto#L350}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::target_vpn_gateways::v1::
          SetLabelsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief SetLabels
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::target_vpn_gateways::v1::
          SetLabelsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief SetLabels
  ///
  /// This method accepts a `google::cloud::cpp::compute::v1::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

 private:
  std::shared_ptr<TargetVpnGatewaysConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_vpn_gateways_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_VPN_GATEWAYS_V1_TARGET_VPN_GATEWAYS_CLIENT_H
