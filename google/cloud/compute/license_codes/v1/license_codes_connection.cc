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
// source: google/cloud/compute/license_codes/v1/license_codes.proto

#include "google/cloud/compute/license_codes/v1/license_codes_connection.h"
#include "google/cloud/compute/license_codes/v1/internal/license_codes_option_defaults.h"
#include "google/cloud/compute/license_codes/v1/internal/license_codes_tracing_connection.h"
#include "google/cloud/compute/license_codes/v1/license_codes_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_license_codes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LicenseCodesConnection::~LicenseCodesConnection() = default;

StatusOr<google::cloud::cpp::compute::v1::LicenseCode>
LicenseCodesConnection::GetLicenseCode(
    google::cloud::cpp::compute::license_codes::v1::
        GetLicenseCodeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
LicenseCodesConnection::TestIamPermissions(
    google::cloud::cpp::compute::license_codes::v1::
        TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_license_codes_v1
}  // namespace cloud
}  // namespace google
