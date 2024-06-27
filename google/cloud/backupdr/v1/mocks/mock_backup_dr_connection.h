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
// source: google/cloud/backupdr/v1/backupdr.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BACKUPDR_V1_MOCKS_MOCK_BACKUP_DR_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BACKUPDR_V1_MOCKS_MOCK_BACKUP_DR_CONNECTION_H

#include "google/cloud/backupdr/v1/backup_dr_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace backupdr_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `BackupDRConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `BackupDRClient`. To do so,
 * construct an object of type `BackupDRClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockBackupDRConnection : public backupdr_v1::BackupDRConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::backupdr::v1::ManagementServer>),
      ListManagementServers,
      (google::cloud::backupdr::v1::ListManagementServersRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::backupdr::v1::ManagementServer>,
      GetManagementServer,
      (google::cloud::backupdr::v1::GetManagementServerRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateManagementServer)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateManagementServer(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::backupdr::v1::ManagementServer>>,
              CreateManagementServer,
              (google::cloud::backupdr::v1::CreateManagementServerRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateManagementServer,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::backupdr::v1::CreateManagementServerRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::backupdr::v1::ManagementServer>>,
              CreateManagementServer,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteManagementServer)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteManagementServer(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::backupdr::v1::OperationMetadata>>,
              DeleteManagementServer,
              (google::cloud::backupdr::v1::DeleteManagementServerRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteManagementServer,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::backupdr::v1::DeleteManagementServerRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::backupdr::v1::OperationMetadata>>,
              DeleteManagementServer,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace backupdr_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BACKUPDR_V1_MOCKS_MOCK_BACKUP_DR_CONNECTION_H
