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
// source: google/cloud/aiplatform/v1/schedule_service.proto

#include "google/cloud/aiplatform/v1/schedule_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ScheduleServiceConnectionIdempotencyPolicy::
    ~ScheduleServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<ScheduleServiceConnectionIdempotencyPolicy>
ScheduleServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ScheduleServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::CreateSchedule(
    google::cloud::aiplatform::v1::CreateScheduleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::DeleteSchedule(
    google::cloud::aiplatform::v1::DeleteScheduleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::GetSchedule(
    google::cloud::aiplatform::v1::GetScheduleRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::ListSchedules(
    google::cloud::aiplatform::v1::ListSchedulesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::PauseSchedule(
    google::cloud::aiplatform::v1::PauseScheduleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::ResumeSchedule(
    google::cloud::aiplatform::v1::ResumeScheduleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::UpdateSchedule(
    google::cloud::aiplatform::v1::UpdateScheduleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ScheduleServiceConnectionIdempotencyPolicy::WaitOperation(
    google::longrunning::WaitOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ScheduleServiceConnectionIdempotencyPolicy>
MakeDefaultScheduleServiceConnectionIdempotencyPolicy() {
  return std::make_unique<ScheduleServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
