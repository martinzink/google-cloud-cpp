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
// source: google/cloud/run/v2/execution.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_EXECUTIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_EXECUTIONS_CLIENT_H

#include "google/cloud/run/v2/executions_connection.h"
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
namespace run_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Cloud Run Execution Control Plane API.
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
class ExecutionsClient {
 public:
  explicit ExecutionsClient(std::shared_ptr<ExecutionsConnection> connection,
                            Options opts = {});
  ~ExecutionsClient();

  ///@{
  /// @name Copy and move support
  ExecutionsClient(ExecutionsClient const&) = default;
  ExecutionsClient& operator=(ExecutionsClient const&) = default;
  ExecutionsClient(ExecutionsClient&&) = default;
  ExecutionsClient& operator=(ExecutionsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ExecutionsClient const& a, ExecutionsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ExecutionsClient const& a, ExecutionsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Gets information about an Execution.
  ///
  /// @param name  Required. The full name of the Execution.
  ///  Format:
  ///  `projects/{project}/locations/{location}/jobs/{job}/executions/{execution}`,
  ///  where `{project}` can be project id or number.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.run.v2.Execution])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.run.v2.Execution]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L173}
  /// [google.cloud.run.v2.GetExecutionRequest]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L85}
  ///
  // clang-format on
  StatusOr<google::cloud::run::v2::Execution> GetExecution(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets information about an Execution.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.run.v2.GetExecutionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.run.v2.Execution])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.run.v2.Execution]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L173}
  /// [google.cloud.run.v2.GetExecutionRequest]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L85}
  ///
  // clang-format on
  StatusOr<google::cloud::run::v2::Execution> GetExecution(
      google::cloud::run::v2::GetExecutionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists Executions from a Job.
  ///
  /// @param parent  Required. The Execution from which the Executions should be listed.
  ///  To list all Executions across Jobs, use "-" instead of Job name.
  ///  Format: `projects/{project}/locations/{location}/jobs/{job}`, where
  ///  `{project}` can be project id or number.
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
  ///     [google.cloud.run.v2.Execution], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.run.v2.Execution]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L173}
  /// [google.cloud.run.v2.ListExecutionsRequest]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L97}
  ///
  // clang-format on
  StreamRange<google::cloud::run::v2::Execution> ListExecutions(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists Executions from a Job.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.run.v2.ListExecutionsRequest].
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
  ///     [google.cloud.run.v2.Execution], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.run.v2.Execution]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L173}
  /// [google.cloud.run.v2.ListExecutionsRequest]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L97}
  ///
  // clang-format on
  StreamRange<google::cloud::run::v2::Execution> ListExecutions(
      google::cloud::run::v2::ListExecutionsRequest request, Options opts = {});

  // clang-format off
  ///
  /// Deletes an Execution.
  ///
  /// @param name  Required. The name of the Execution to delete.
  ///  Format:
  ///  `projects/{project}/locations/{location}/jobs/{job}/executions/{execution}`,
  ///  where `{project}` can be project id or number.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.run.v2.Execution] proto message.
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
  /// [google.cloud.run.v2.DeleteExecutionRequest]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L131}
  /// [google.cloud.run.v2.Execution]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L173}
  ///
  // clang-format on
  future<StatusOr<google::cloud::run::v2::Execution>> DeleteExecution(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteExecution
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> DeleteExecution(
      ExperimentalTag, NoAwaitTag, std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes an Execution.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.run.v2.DeleteExecutionRequest].
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
  ///     [google.cloud.run.v2.Execution] proto message.
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
  /// [google.cloud.run.v2.DeleteExecutionRequest]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L131}
  /// [google.cloud.run.v2.Execution]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L173}
  ///
  // clang-format on
  future<StatusOr<google::cloud::run::v2::Execution>> DeleteExecution(
      google::cloud::run::v2::DeleteExecutionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteExecution
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> DeleteExecution(
      ExperimentalTag, NoAwaitTag,
      google::cloud::run::v2::DeleteExecutionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteExecution
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::run::v2::Execution>> DeleteExecution(
      ExperimentalTag, google::longrunning::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Cancels an Execution.
  ///
  /// @param name  Required. The name of the Execution to cancel.
  ///  Format:
  ///  `projects/{project}/locations/{location}/jobs/{job}/executions/{execution}`,
  ///  where `{project}` can be project id or number.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.run.v2.Execution] proto message.
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
  /// [google.cloud.run.v2.CancelExecutionRequest]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L151}
  /// [google.cloud.run.v2.Execution]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L173}
  ///
  // clang-format on
  future<StatusOr<google::cloud::run::v2::Execution>> CancelExecution(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// @copybrief CancelExecution
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> CancelExecution(
      ExperimentalTag, NoAwaitTag, std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Cancels an Execution.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.run.v2.CancelExecutionRequest].
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
  ///     [google.cloud.run.v2.Execution] proto message.
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
  /// [google.cloud.run.v2.CancelExecutionRequest]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L151}
  /// [google.cloud.run.v2.Execution]: @googleapis_reference_link{google/cloud/run/v2/execution.proto#L173}
  ///
  // clang-format on
  future<StatusOr<google::cloud::run::v2::Execution>> CancelExecution(
      google::cloud::run::v2::CancelExecutionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CancelExecution
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> CancelExecution(
      ExperimentalTag, NoAwaitTag,
      google::cloud::run::v2::CancelExecutionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CancelExecution
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::run::v2::Execution>> CancelExecution(
      ExperimentalTag, google::longrunning::Operation const& operation,
      Options opts = {});

 private:
  std::shared_ptr<ExecutionsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_EXECUTIONS_CLIENT_H
