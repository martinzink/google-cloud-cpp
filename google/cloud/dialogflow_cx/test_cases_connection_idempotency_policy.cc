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
// source: google/cloud/dialogflow/cx/v3/test_case.proto

#include "google/cloud/dialogflow_cx/test_cases_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

TestCasesConnectionIdempotencyPolicy::~TestCasesConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<TestCasesConnectionIdempotencyPolicy>
TestCasesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<TestCasesConnectionIdempotencyPolicy>(*this);
}

Idempotency TestCasesConnectionIdempotencyPolicy::ListTestCases(
    google::cloud::dialogflow::cx::v3::ListTestCasesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::BatchDeleteTestCases(
    google::cloud::dialogflow::cx::v3::BatchDeleteTestCasesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::GetTestCase(
    google::cloud::dialogflow::cx::v3::GetTestCaseRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::CreateTestCase(
    google::cloud::dialogflow::cx::v3::CreateTestCaseRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::UpdateTestCase(
    google::cloud::dialogflow::cx::v3::UpdateTestCaseRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::RunTestCase(
    google::cloud::dialogflow::cx::v3::RunTestCaseRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::BatchRunTestCases(
    google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::CalculateCoverage(
    google::cloud::dialogflow::cx::v3::CalculateCoverageRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::ImportTestCases(
    google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::ExportTestCases(
    google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::ListTestCaseResults(
    google::cloud::dialogflow::cx::v3::ListTestCaseResultsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::GetTestCaseResult(
    google::cloud::dialogflow::cx::v3::GetTestCaseResultRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TestCasesConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<TestCasesConnectionIdempotencyPolicy>
MakeDefaultTestCasesConnectionIdempotencyPolicy() {
  return std::make_unique<TestCasesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google
