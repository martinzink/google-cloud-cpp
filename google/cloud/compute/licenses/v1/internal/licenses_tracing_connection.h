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
// source: google/cloud/compute/licenses/v1/licenses.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_INTERNAL_LICENSES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_INTERNAL_LICENSES_TRACING_CONNECTION_H

#include "google/cloud/compute/licenses/v1/licenses_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_licenses_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class LicensesTracingConnection
    : public compute_licenses_v1::LicensesConnection {
 public:
  ~LicensesTracingConnection() override = default;

  explicit LicensesTracingConnection(
      std::shared_ptr<compute_licenses_v1::LicensesConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteLicense(
      google::cloud::cpp::compute::licenses::v1::DeleteLicenseRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteLicense(
      NoAwaitTag,
      google::cloud::cpp::compute::licenses::v1::DeleteLicenseRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteLicense(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::License> GetLicense(
      google::cloud::cpp::compute::licenses::v1::GetLicenseRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::licenses::v1::GetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertLicense(
      google::cloud::cpp::compute::licenses::v1::InsertLicenseRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertLicense(
      NoAwaitTag,
      google::cloud::cpp::compute::licenses::v1::InsertLicenseRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertLicense(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::License> ListLicenses(
      google::cloud::cpp::compute::licenses::v1::ListLicensesRequest request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::licenses::v1::SetIamPolicyRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::licenses::v1::
                         TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<compute_licenses_v1::LicensesConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_licenses_v1::LicensesConnection>
MakeLicensesTracingConnection(
    std::shared_ptr<compute_licenses_v1::LicensesConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_licenses_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_INTERNAL_LICENSES_TRACING_CONNECTION_H
