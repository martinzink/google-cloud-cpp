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
// source: google/cloud/vpcaccess/v1/vpc_access.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VPCACCESS_V1_VPC_ACCESS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VPCACCESS_V1_VPC_ACCESS_CLIENT_H

#include "google/cloud/vpcaccess/v1/vpc_access_connection.h"
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
namespace vpcaccess_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Serverless VPC Access API allows users to create and manage connectors for
/// App Engine, Cloud Functions and Cloud Run to have internal connections to
/// Virtual Private Cloud networks.
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
class VpcAccessServiceClient {
 public:
  explicit VpcAccessServiceClient(
      std::shared_ptr<VpcAccessServiceConnection> connection,
      Options opts = {});
  ~VpcAccessServiceClient();

  ///@{
  /// @name Copy and move support
  VpcAccessServiceClient(VpcAccessServiceClient const&) = default;
  VpcAccessServiceClient& operator=(VpcAccessServiceClient const&) = default;
  VpcAccessServiceClient(VpcAccessServiceClient&&) = default;
  VpcAccessServiceClient& operator=(VpcAccessServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(VpcAccessServiceClient const& a,
                         VpcAccessServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(VpcAccessServiceClient const& a,
                         VpcAccessServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a Serverless VPC Access connector, returns an operation.
  ///
  /// @param parent  Required. The project and location in which the configuration should be created,
  ///  specified in the format `projects/*/locations/*`.
  /// @param connector_id  Required. The ID to use for this connector.
  /// @param connector  Required. Resource to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.vpcaccess.v1.Connector] proto message.
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
  /// [google.cloud.vpcaccess.v1.Connector]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L86}
  /// [google.cloud.vpcaccess.v1.CreateConnectorRequest]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L163}
  ///
  // clang-format on
  future<StatusOr<google::cloud::vpcaccess::v1::Connector>> CreateConnector(
      std::string const& parent, std::string const& connector_id,
      google::cloud::vpcaccess::v1::Connector const& connector,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateConnector
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> CreateConnector(
      ExperimentalTag, NoAwaitTag, std::string const& parent,
      std::string const& connector_id,
      google::cloud::vpcaccess::v1::Connector const& connector,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a Serverless VPC Access connector, returns an operation.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.vpcaccess.v1.CreateConnectorRequest].
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
  ///     [google.cloud.vpcaccess.v1.Connector] proto message.
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
  /// [google.cloud.vpcaccess.v1.Connector]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L86}
  /// [google.cloud.vpcaccess.v1.CreateConnectorRequest]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L163}
  ///
  // clang-format on
  future<StatusOr<google::cloud::vpcaccess::v1::Connector>> CreateConnector(
      google::cloud::vpcaccess::v1::CreateConnectorRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateConnector
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> CreateConnector(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vpcaccess::v1::CreateConnectorRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateConnector
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::vpcaccess::v1::Connector>> CreateConnector(
      ExperimentalTag, google::longrunning::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Gets a Serverless VPC Access connector. Returns NOT_FOUND if the resource
  /// does not exist.
  ///
  /// @param name  Required. Name of a Serverless VPC Access connector to get.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.vpcaccess.v1.Connector])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.vpcaccess.v1.Connector]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L86}
  /// [google.cloud.vpcaccess.v1.GetConnectorRequest]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L181}
  ///
  // clang-format on
  StatusOr<google::cloud::vpcaccess::v1::Connector> GetConnector(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets a Serverless VPC Access connector. Returns NOT_FOUND if the resource
  /// does not exist.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.vpcaccess.v1.GetConnectorRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.vpcaccess.v1.Connector])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.vpcaccess.v1.Connector]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L86}
  /// [google.cloud.vpcaccess.v1.GetConnectorRequest]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L181}
  ///
  // clang-format on
  StatusOr<google::cloud::vpcaccess::v1::Connector> GetConnector(
      google::cloud::vpcaccess::v1::GetConnectorRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists Serverless VPC Access connectors.
  ///
  /// @param parent  Required. The project and location from which the routes should be listed.
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
  ///     [google.cloud.vpcaccess.v1.Connector], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.vpcaccess.v1.Connector]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L86}
  /// [google.cloud.vpcaccess.v1.ListConnectorsRequest]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L192}
  ///
  // clang-format on
  StreamRange<google::cloud::vpcaccess::v1::Connector> ListConnectors(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists Serverless VPC Access connectors.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.vpcaccess.v1.ListConnectorsRequest].
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
  ///     [google.cloud.vpcaccess.v1.Connector], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.vpcaccess.v1.Connector]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L86}
  /// [google.cloud.vpcaccess.v1.ListConnectorsRequest]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L192}
  ///
  // clang-format on
  StreamRange<google::cloud::vpcaccess::v1::Connector> ListConnectors(
      google::cloud::vpcaccess::v1::ListConnectorsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a Serverless VPC Access connector. Returns NOT_FOUND if the
  /// resource does not exist.
  ///
  /// @param name  Required. Name of a Serverless VPC Access connector to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.vpcaccess.v1.OperationMetadata] proto message.
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
  /// [google.cloud.vpcaccess.v1.DeleteConnectorRequest]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L218}
  /// [google.cloud.vpcaccess.v1.OperationMetadata]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L229}
  ///
  // clang-format on
  future<StatusOr<google::cloud::vpcaccess::v1::OperationMetadata>>
  DeleteConnector(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteConnector
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> DeleteConnector(
      ExperimentalTag, NoAwaitTag, std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a Serverless VPC Access connector. Returns NOT_FOUND if the
  /// resource does not exist.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.vpcaccess.v1.DeleteConnectorRequest].
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
  ///     [google.cloud.vpcaccess.v1.OperationMetadata] proto message.
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
  /// [google.cloud.vpcaccess.v1.DeleteConnectorRequest]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L218}
  /// [google.cloud.vpcaccess.v1.OperationMetadata]: @googleapis_reference_link{google/cloud/vpcaccess/v1/vpc_access.proto#L229}
  ///
  // clang-format on
  future<StatusOr<google::cloud::vpcaccess::v1::OperationMetadata>>
  DeleteConnector(
      google::cloud::vpcaccess::v1::DeleteConnectorRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteConnector
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> DeleteConnector(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vpcaccess::v1::DeleteConnectorRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteConnector
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::vpcaccess::v1::OperationMetadata>>
  DeleteConnector(ExperimentalTag,
                  google::longrunning::Operation const& operation,
                  Options opts = {});

 private:
  std::shared_ptr<VpcAccessServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vpcaccess_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VPCACCESS_V1_VPC_ACCESS_CLIENT_H
