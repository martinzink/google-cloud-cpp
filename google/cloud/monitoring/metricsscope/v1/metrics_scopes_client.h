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
// source: google/monitoring/metricsscope/v1/metrics_scopes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_METRICSSCOPE_V1_METRICS_SCOPES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_METRICSSCOPE_V1_METRICS_SCOPES_CLIENT_H

#include "google/cloud/monitoring/metricsscope/v1/metrics_scopes_connection.h"
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
namespace monitoring_metricsscope_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Manages Cloud Monitoring Metrics Scopes, and the monitoring of Google Cloud
/// projects and AWS accounts.
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
class MetricsScopesClient {
 public:
  explicit MetricsScopesClient(
      std::shared_ptr<MetricsScopesConnection> connection, Options opts = {});
  ~MetricsScopesClient();

  ///@{
  /// @name Copy and move support
  MetricsScopesClient(MetricsScopesClient const&) = default;
  MetricsScopesClient& operator=(MetricsScopesClient const&) = default;
  MetricsScopesClient(MetricsScopesClient&&) = default;
  MetricsScopesClient& operator=(MetricsScopesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(MetricsScopesClient const& a,
                         MetricsScopesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(MetricsScopesClient const& a,
                         MetricsScopesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns a specific `Metrics Scope`.
  ///
  /// @param name  Required. The resource name of the `Metrics Scope`.
  ///  Example:
  ///  `locations/global/metricsScopes/{SCOPING_PROJECT_ID_OR_NUMBER}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.metricsscope.v1.MetricsScope])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.metricsscope.v1.GetMetricsScopeRequest]: @googleapis_reference_link{google/monitoring/metricsscope/v1/metrics_scopes.proto#L90}
  /// [google.monitoring.metricsscope.v1.MetricsScope]: @googleapis_reference_link{google/monitoring/metricsscope/v1/metrics_scope.proto#L35}
  ///
  // clang-format on
  StatusOr<google::monitoring::metricsscope::v1::MetricsScope> GetMetricsScope(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Returns a specific `Metrics Scope`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.metricsscope.v1.GetMetricsScopeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.metricsscope.v1.MetricsScope])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.metricsscope.v1.GetMetricsScopeRequest]: @googleapis_reference_link{google/monitoring/metricsscope/v1/metrics_scopes.proto#L90}
  /// [google.monitoring.metricsscope.v1.MetricsScope]: @googleapis_reference_link{google/monitoring/metricsscope/v1/metrics_scope.proto#L35}
  ///
  // clang-format on
  StatusOr<google::monitoring::metricsscope::v1::MetricsScope> GetMetricsScope(
      google::monitoring::metricsscope::v1::GetMetricsScopeRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns a list of every `Metrics Scope` that a specific `MonitoredProject`
  /// has been added to. The metrics scope representing the specified monitored
  /// project will always be the first entry in the response.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.metricsscope.v1.ListMetricsScopesByMonitoredProjectRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.metricsscope.v1.ListMetricsScopesByMonitoredProjectResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.metricsscope.v1.ListMetricsScopesByMonitoredProjectRequest]: @googleapis_reference_link{google/monitoring/metricsscope/v1/metrics_scopes.proto#L103}
  /// [google.monitoring.metricsscope.v1.ListMetricsScopesByMonitoredProjectResponse]: @googleapis_reference_link{google/monitoring/metricsscope/v1/metrics_scopes.proto#L111}
  ///
  // clang-format on
  StatusOr<google::monitoring::metricsscope::v1::
               ListMetricsScopesByMonitoredProjectResponse>
  ListMetricsScopesByMonitoredProject(
      google::monitoring::metricsscope::v1::
          ListMetricsScopesByMonitoredProjectRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Adds a `MonitoredProject` with the given project ID
  /// to the specified `Metrics Scope`.
  ///
  /// @param parent  Required. The resource name of the existing `Metrics Scope` that will monitor this
  ///  project.
  ///  Example:
  ///  `locations/global/metricsScopes/{SCOPING_PROJECT_ID_OR_NUMBER}`
  /// @param monitored_project  Required. The initial `MonitoredProject` configuration.
  ///  Specify only the `monitored_project.name` field. All other fields are
  ///  ignored. The `monitored_project.name` must be in the format:
  ///  `locations/global/metricsScopes/{SCOPING_PROJECT_ID_OR_NUMBER}/projects/{MONITORED_PROJECT_ID_OR_NUMBER}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.monitoring.metricsscope.v1.MonitoredProject] proto message.
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
  /// [google.monitoring.metricsscope.v1.CreateMonitoredProjectRequest]: @googleapis_reference_link{google/monitoring/metricsscope/v1/metrics_scopes.proto#L118}
  /// [google.monitoring.metricsscope.v1.MonitoredProject]: @googleapis_reference_link{google/monitoring/metricsscope/v1/metrics_scope.proto#L62}
  ///
  // clang-format on
  future<StatusOr<google::monitoring::metricsscope::v1::MonitoredProject>>
  CreateMonitoredProject(
      std::string const& parent,
      google::monitoring::metricsscope::v1::MonitoredProject const&
          monitored_project,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateMonitoredProject
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> CreateMonitoredProject(
      ExperimentalTag, NoAwaitTag, std::string const& parent,
      google::monitoring::metricsscope::v1::MonitoredProject const&
          monitored_project,
      Options opts = {});

  // clang-format off
  ///
  /// Adds a `MonitoredProject` with the given project ID
  /// to the specified `Metrics Scope`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.metricsscope.v1.CreateMonitoredProjectRequest].
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
  ///     [google.monitoring.metricsscope.v1.MonitoredProject] proto message.
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
  /// [google.monitoring.metricsscope.v1.CreateMonitoredProjectRequest]: @googleapis_reference_link{google/monitoring/metricsscope/v1/metrics_scopes.proto#L118}
  /// [google.monitoring.metricsscope.v1.MonitoredProject]: @googleapis_reference_link{google/monitoring/metricsscope/v1/metrics_scope.proto#L62}
  ///
  // clang-format on
  future<StatusOr<google::monitoring::metricsscope::v1::MonitoredProject>>
  CreateMonitoredProject(
      google::monitoring::metricsscope::v1::CreateMonitoredProjectRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateMonitoredProject
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> CreateMonitoredProject(
      ExperimentalTag, NoAwaitTag,
      google::monitoring::metricsscope::v1::CreateMonitoredProjectRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateMonitoredProject
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::monitoring::metricsscope::v1::MonitoredProject>>
  CreateMonitoredProject(ExperimentalTag,
                         google::longrunning::Operation const& operation,
                         Options opts = {});

  // clang-format off
  ///
  /// Deletes a `MonitoredProject` from the specified `Metrics Scope`.
  ///
  /// @param name  Required. The resource name of the `MonitoredProject`.
  ///  Example:
  ///  `locations/global/metricsScopes/{SCOPING_PROJECT_ID_OR_NUMBER}/projects/{MONITORED_PROJECT_ID_OR_NUMBER}`
  ///  @n
  ///  Authorization requires the following [Google
  ///  IAM](https://cloud.google.com/iam) permissions on both the `Metrics Scope`
  ///  and on the `MonitoredProject`: `monitoring.metricsScopes.link`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.monitoring.metricsscope.v1.OperationMetadata] proto message.
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
  /// [google.monitoring.metricsscope.v1.DeleteMonitoredProjectRequest]: @googleapis_reference_link{google/monitoring/metricsscope/v1/metrics_scopes.proto#L138}
  /// [google.monitoring.metricsscope.v1.OperationMetadata]: @googleapis_reference_link{google/monitoring/metricsscope/v1/metrics_scopes.proto#L156}
  ///
  // clang-format on
  future<StatusOr<google::monitoring::metricsscope::v1::OperationMetadata>>
  DeleteMonitoredProject(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteMonitoredProject
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> DeleteMonitoredProject(
      ExperimentalTag, NoAwaitTag, std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a `MonitoredProject` from the specified `Metrics Scope`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.metricsscope.v1.DeleteMonitoredProjectRequest].
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
  ///     [google.monitoring.metricsscope.v1.OperationMetadata] proto message.
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
  /// [google.monitoring.metricsscope.v1.DeleteMonitoredProjectRequest]: @googleapis_reference_link{google/monitoring/metricsscope/v1/metrics_scopes.proto#L138}
  /// [google.monitoring.metricsscope.v1.OperationMetadata]: @googleapis_reference_link{google/monitoring/metricsscope/v1/metrics_scopes.proto#L156}
  ///
  // clang-format on
  future<StatusOr<google::monitoring::metricsscope::v1::OperationMetadata>>
  DeleteMonitoredProject(
      google::monitoring::metricsscope::v1::DeleteMonitoredProjectRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteMonitoredProject
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> DeleteMonitoredProject(
      ExperimentalTag, NoAwaitTag,
      google::monitoring::metricsscope::v1::DeleteMonitoredProjectRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteMonitoredProject
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::monitoring::metricsscope::v1::OperationMetadata>>
  DeleteMonitoredProject(ExperimentalTag,
                         google::longrunning::Operation const& operation,
                         Options opts = {});

 private:
  std::shared_ptr<MetricsScopesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_metricsscope_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_METRICSSCOPE_V1_METRICS_SCOPES_CLIENT_H
