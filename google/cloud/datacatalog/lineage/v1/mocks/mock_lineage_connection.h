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
// source: google/cloud/datacatalog/lineage/v1/lineage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_LINEAGE_V1_MOCKS_MOCK_LINEAGE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_LINEAGE_V1_MOCKS_MOCK_LINEAGE_CONNECTION_H

#include "google/cloud/datacatalog/lineage/v1/lineage_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace datacatalog_lineage_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `LineageConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `LineageClient`. To do so,
 * construct an object of type `LineageClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockLineageConnection : public datacatalog_lineage_v1::LineageConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::datacatalog::lineage::v1::
                           ProcessOpenLineageRunEventResponse>,
              ProcessOpenLineageRunEvent,
              (google::cloud::datacatalog::lineage::v1::
                   ProcessOpenLineageRunEventRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::lineage::v1::Process>, CreateProcess,
      (google::cloud::datacatalog::lineage::v1::CreateProcessRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::lineage::v1::Process>, UpdateProcess,
      (google::cloud::datacatalog::lineage::v1::UpdateProcessRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::datacatalog::lineage::v1::Process>,
              GetProcess,
              (google::cloud::datacatalog::lineage::v1::GetProcessRequest const&
                   request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::datacatalog::lineage::v1::Process>),
      ListProcesses,
      (google::cloud::datacatalog::lineage::v1::ListProcessesRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteProcess)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteProcess(::testing::_))` instead.
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>,
      DeleteProcess,
      (google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteProcess,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>,
      DeleteProcess,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::datacatalog::lineage::v1::Run>, CreateRun,
              (google::cloud::datacatalog::lineage::v1::CreateRunRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::datacatalog::lineage::v1::Run>, UpdateRun,
              (google::cloud::datacatalog::lineage::v1::UpdateRunRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::lineage::v1::Run>, GetRun,
      (google::cloud::datacatalog::lineage::v1::GetRunRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::datacatalog::lineage::v1::Run>), ListRuns,
      (google::cloud::datacatalog::lineage::v1::ListRunsRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteRun)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteRun(::testing::_))` instead.
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>,
      DeleteRun,
      (google::cloud::datacatalog::lineage::v1::DeleteRunRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteRun,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::datacatalog::lineage::v1::DeleteRunRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>,
      DeleteRun,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>,
      CreateLineageEvent,
      (google::cloud::datacatalog::lineage::v1::CreateLineageEventRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>,
      GetLineageEvent,
      (google::cloud::datacatalog::lineage::v1::GetLineageEventRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::datacatalog::lineage::v1::LineageEvent>),
      ListLineageEvents,
      (google::cloud::datacatalog::lineage::v1::ListLineageEventsRequest
           request),
      (override));

  MOCK_METHOD(
      Status, DeleteLineageEvent,
      (google::cloud::datacatalog::lineage::v1::DeleteLineageEventRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::datacatalog::lineage::v1::Link>), SearchLinks,
      (google::cloud::datacatalog::lineage::v1::SearchLinksRequest request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::datacatalog::lineage::v1::ProcessLinks>),
      BatchSearchLinkProcesses,
      (google::cloud::datacatalog::lineage::v1::BatchSearchLinkProcessesRequest
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_lineage_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_LINEAGE_V1_MOCKS_MOCK_LINEAGE_CONNECTION_H
