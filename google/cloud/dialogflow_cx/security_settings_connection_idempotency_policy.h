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
// source: google/cloud/dialogflow/cx/v3/security_settings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_SECURITY_SETTINGS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_SECURITY_SETTINGS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/cx/v3/security_settings.grpc.pb.h>
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SecuritySettingsServiceConnectionIdempotencyPolicy {
 public:
  virtual ~SecuritySettingsServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<SecuritySettingsServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency CreateSecuritySettings(
      google::cloud::dialogflow::cx::v3::CreateSecuritySettingsRequest const&
          request);

  virtual google::cloud::Idempotency GetSecuritySettings(
      google::cloud::dialogflow::cx::v3::GetSecuritySettingsRequest const&
          request);

  virtual google::cloud::Idempotency UpdateSecuritySettings(
      google::cloud::dialogflow::cx::v3::UpdateSecuritySettingsRequest const&
          request);

  virtual google::cloud::Idempotency ListSecuritySettings(
      google::cloud::dialogflow::cx::v3::ListSecuritySettingsRequest request);

  virtual google::cloud::Idempotency DeleteSecuritySettings(
      google::cloud::dialogflow::cx::v3::DeleteSecuritySettingsRequest const&
          request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<SecuritySettingsServiceConnectionIdempotencyPolicy>
MakeDefaultSecuritySettingsServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_SECURITY_SETTINGS_CONNECTION_IDEMPOTENCY_POLICY_H
