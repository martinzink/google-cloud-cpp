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
// source: google/api/cloudquotas/v1/cloudquotas.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDQUOTAS_V1_CLOUD_QUOTAS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDQUOTAS_V1_CLOUD_QUOTAS_CLIENT_H

#include "google/cloud/cloudquotas/v1/cloud_quotas_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace cloudquotas_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The Cloud Quotas API is an infrastructure service for Google Cloud that lets
/// service consumers list and manage their resource usage limits.
///
/// - List/Get the metadata and current status of the quotas for a service.
/// - Create/Update quota preferencess that declare the preferred quota values.
/// - Check the status of a quota preference request.
/// - List/Get pending and historical quota preference.
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
class CloudQuotasClient {
 public:
  explicit CloudQuotasClient(std::shared_ptr<CloudQuotasConnection> connection,
                             Options opts = {});
  ~CloudQuotasClient();

  ///@{
  /// @name Copy and move support
  CloudQuotasClient(CloudQuotasClient const&) = default;
  CloudQuotasClient& operator=(CloudQuotasClient const&) = default;
  CloudQuotasClient(CloudQuotasClient&&) = default;
  CloudQuotasClient& operator=(CloudQuotasClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(CloudQuotasClient const& a,
                         CloudQuotasClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(CloudQuotasClient const& a,
                         CloudQuotasClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists QuotaInfos of all quotas for a given project, folder or organization.
  ///
  /// @param parent  Required. Parent value of QuotaInfo resources.
  ///  Listing across different resource containers (such as 'projects/-') is not
  ///  allowed.
  ///  @n
  ///  Example names:
  ///  `projects/123/locations/global/services/compute.googleapis.com`
  ///  `folders/234/locations/global/services/compute.googleapis.com`
  ///  `organizations/345/locations/global/services/compute.googleapis.com`
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
  ///     [google.api.cloudquotas.v1.QuotaInfo], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.cloudquotas.v1.ListQuotaInfosRequest]: @googleapis_reference_link{google/api/cloudquotas/v1/cloudquotas.proto#L156}
  /// [google.api.cloudquotas.v1.QuotaInfo]: @googleapis_reference_link{google/api/cloudquotas/v1/resources.proto#L48}
  ///
  // clang-format on
  StreamRange<google::api::cloudquotas::v1::QuotaInfo> ListQuotaInfos(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists QuotaInfos of all quotas for a given project, folder or organization.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.api.cloudquotas.v1.ListQuotaInfosRequest].
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
  ///     [google.api.cloudquotas.v1.QuotaInfo], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.cloudquotas.v1.ListQuotaInfosRequest]: @googleapis_reference_link{google/api/cloudquotas/v1/cloudquotas.proto#L156}
  /// [google.api.cloudquotas.v1.QuotaInfo]: @googleapis_reference_link{google/api/cloudquotas/v1/resources.proto#L48}
  ///
  // clang-format on
  StreamRange<google::api::cloudquotas::v1::QuotaInfo> ListQuotaInfos(
      google::api::cloudquotas::v1::ListQuotaInfosRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieve the QuotaInfo of a quota for a project, folder or organization.
  ///
  /// @param name  Required. The resource name of the quota info.
  ///  @n
  ///  An example name:
  ///  `projects/123/locations/global/services/compute.googleapis.com/quotaInfos/CpusPerProjectPerRegion`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.api.cloudquotas.v1.QuotaInfo])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.cloudquotas.v1.GetQuotaInfoRequest]: @googleapis_reference_link{google/api/cloudquotas/v1/cloudquotas.proto#L191}
  /// [google.api.cloudquotas.v1.QuotaInfo]: @googleapis_reference_link{google/api/cloudquotas/v1/resources.proto#L48}
  ///
  // clang-format on
  StatusOr<google::api::cloudquotas::v1::QuotaInfo> GetQuotaInfo(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Retrieve the QuotaInfo of a quota for a project, folder or organization.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.api.cloudquotas.v1.GetQuotaInfoRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.api.cloudquotas.v1.QuotaInfo])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.cloudquotas.v1.GetQuotaInfoRequest]: @googleapis_reference_link{google/api/cloudquotas/v1/cloudquotas.proto#L191}
  /// [google.api.cloudquotas.v1.QuotaInfo]: @googleapis_reference_link{google/api/cloudquotas/v1/resources.proto#L48}
  ///
  // clang-format on
  StatusOr<google::api::cloudquotas::v1::QuotaInfo> GetQuotaInfo(
      google::api::cloudquotas::v1::GetQuotaInfoRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists QuotaPreferences in a given project, folder or organization.
  ///
  /// @param parent  Required. Parent value of QuotaPreference resources.
  ///  Listing across different resource containers (such as 'projects/-') is not
  ///  allowed.
  ///  @n
  ///  When the value starts with 'folders' or 'organizations', it lists the
  ///  QuotaPreferences for org quotas in the container. It does not list the
  ///  QuotaPreferences in the descendant projects of the container.
  ///  @n
  ///  Example parents:
  ///  `projects/123/locations/global`
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
  ///     [google.api.cloudquotas.v1.QuotaPreference], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.cloudquotas.v1.ListQuotaPreferencesRequest]: @googleapis_reference_link{google/api/cloudquotas/v1/cloudquotas.proto#L205}
  /// [google.api.cloudquotas.v1.QuotaPreference]: @googleapis_reference_link{google/api/cloudquotas/v1/resources.proto#L168}
  ///
  // clang-format on
  StreamRange<google::api::cloudquotas::v1::QuotaPreference>
  ListQuotaPreferences(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists QuotaPreferences in a given project, folder or organization.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.api.cloudquotas.v1.ListQuotaPreferencesRequest].
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
  ///     [google.api.cloudquotas.v1.QuotaPreference], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.cloudquotas.v1.ListQuotaPreferencesRequest]: @googleapis_reference_link{google/api/cloudquotas/v1/cloudquotas.proto#L205}
  /// [google.api.cloudquotas.v1.QuotaPreference]: @googleapis_reference_link{google/api/cloudquotas/v1/resources.proto#L168}
  ///
  // clang-format on
  StreamRange<google::api::cloudquotas::v1::QuotaPreference>
  ListQuotaPreferences(
      google::api::cloudquotas::v1::ListQuotaPreferencesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single QuotaPreference.
  ///
  /// @param name  Required. Name of the resource
  ///  @n
  ///  Example name:
  ///  `projects/123/locations/global/quota_preferences/my-config-for-us-east1`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.api.cloudquotas.v1.QuotaPreference])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.cloudquotas.v1.GetQuotaPreferenceRequest]: @googleapis_reference_link{google/api/cloudquotas/v1/cloudquotas.proto#L261}
  /// [google.api.cloudquotas.v1.QuotaPreference]: @googleapis_reference_link{google/api/cloudquotas/v1/resources.proto#L168}
  ///
  // clang-format on
  StatusOr<google::api::cloudquotas::v1::QuotaPreference> GetQuotaPreference(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single QuotaPreference.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.api.cloudquotas.v1.GetQuotaPreferenceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.api.cloudquotas.v1.QuotaPreference])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.cloudquotas.v1.GetQuotaPreferenceRequest]: @googleapis_reference_link{google/api/cloudquotas/v1/cloudquotas.proto#L261}
  /// [google.api.cloudquotas.v1.QuotaPreference]: @googleapis_reference_link{google/api/cloudquotas/v1/resources.proto#L168}
  ///
  // clang-format on
  StatusOr<google::api::cloudquotas::v1::QuotaPreference> GetQuotaPreference(
      google::api::cloudquotas::v1::GetQuotaPreferenceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new QuotaPreference that declares the desired value for a quota.
  ///
  /// @param parent  Required. Value for parent.
  ///  @n
  ///  Example:
  ///  `projects/123/locations/global`
  /// @param quota_preference  Required. The resource being created
  /// @param quota_preference_id  Optional. Id of the requesting object, must be unique under its parent.
  ///  If client does not set this field, the service will generate one.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.api.cloudquotas.v1.QuotaPreference])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.cloudquotas.v1.CreateQuotaPreferenceRequest]: @googleapis_reference_link{google/api/cloudquotas/v1/cloudquotas.proto#L275}
  /// [google.api.cloudquotas.v1.QuotaPreference]: @googleapis_reference_link{google/api/cloudquotas/v1/resources.proto#L168}
  ///
  // clang-format on
  StatusOr<google::api::cloudquotas::v1::QuotaPreference> CreateQuotaPreference(
      std::string const& parent,
      google::api::cloudquotas::v1::QuotaPreference const& quota_preference,
      std::string const& quota_preference_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a new QuotaPreference that declares the desired value for a quota.
  ///
  /// @param parent  Required. Value for parent.
  ///  @n
  ///  Example:
  ///  `projects/123/locations/global`
  /// @param quota_preference  Required. The resource being created
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.api.cloudquotas.v1.QuotaPreference])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.cloudquotas.v1.CreateQuotaPreferenceRequest]: @googleapis_reference_link{google/api/cloudquotas/v1/cloudquotas.proto#L275}
  /// [google.api.cloudquotas.v1.QuotaPreference]: @googleapis_reference_link{google/api/cloudquotas/v1/resources.proto#L168}
  ///
  // clang-format on
  StatusOr<google::api::cloudquotas::v1::QuotaPreference> CreateQuotaPreference(
      std::string const& parent,
      google::api::cloudquotas::v1::QuotaPreference const& quota_preference,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new QuotaPreference that declares the desired value for a quota.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.api.cloudquotas.v1.CreateQuotaPreferenceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.api.cloudquotas.v1.QuotaPreference])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.cloudquotas.v1.CreateQuotaPreferenceRequest]: @googleapis_reference_link{google/api/cloudquotas/v1/cloudquotas.proto#L275}
  /// [google.api.cloudquotas.v1.QuotaPreference]: @googleapis_reference_link{google/api/cloudquotas/v1/resources.proto#L168}
  ///
  // clang-format on
  StatusOr<google::api::cloudquotas::v1::QuotaPreference> CreateQuotaPreference(
      google::api::cloudquotas::v1::CreateQuotaPreferenceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the parameters of a single QuotaPreference. It can updates the
  /// config in any states, not just the ones pending approval.
  ///
  /// @param quota_preference  Required. The resource being updated
  /// @param update_mask  Optional. Field mask is used to specify the fields to be overwritten in the
  ///  QuotaPreference resource by the update.
  ///  The fields specified in the update_mask are relative to the resource, not
  ///  the full request. A field will be overwritten if it is in the mask. If the
  ///  user does not provide a mask then all fields will be overwritten.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.api.cloudquotas.v1.QuotaPreference])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.cloudquotas.v1.QuotaPreference]: @googleapis_reference_link{google/api/cloudquotas/v1/resources.proto#L168}
  /// [google.api.cloudquotas.v1.UpdateQuotaPreferenceRequest]: @googleapis_reference_link{google/api/cloudquotas/v1/cloudquotas.proto#L299}
  ///
  // clang-format on
  StatusOr<google::api::cloudquotas::v1::QuotaPreference> UpdateQuotaPreference(
      google::api::cloudquotas::v1::QuotaPreference const& quota_preference,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates the parameters of a single QuotaPreference. It can updates the
  /// config in any states, not just the ones pending approval.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.api.cloudquotas.v1.UpdateQuotaPreferenceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.api.cloudquotas.v1.QuotaPreference])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.cloudquotas.v1.QuotaPreference]: @googleapis_reference_link{google/api/cloudquotas/v1/resources.proto#L168}
  /// [google.api.cloudquotas.v1.UpdateQuotaPreferenceRequest]: @googleapis_reference_link{google/api/cloudquotas/v1/cloudquotas.proto#L299}
  ///
  // clang-format on
  StatusOr<google::api::cloudquotas::v1::QuotaPreference> UpdateQuotaPreference(
      google::api::cloudquotas::v1::UpdateQuotaPreferenceRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<CloudQuotasConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudquotas_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDQUOTAS_V1_CLOUD_QUOTAS_CLIENT_H
