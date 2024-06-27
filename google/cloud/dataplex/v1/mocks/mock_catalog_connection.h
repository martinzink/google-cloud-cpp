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
// source: google/cloud/dataplex/v1/catalog.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_MOCKS_MOCK_CATALOG_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_MOCKS_MOCK_CATALOG_CONNECTION_H

#include "google/cloud/dataplex/v1/catalog_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dataplex_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `CatalogServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `CatalogServiceClient`. To do so,
 * construct an object of type `CatalogServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockCatalogServiceConnection
    : public dataplex_v1::CatalogServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateEntryType)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateEntryType(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::EntryType>>, CreateEntryType,
      (google::cloud::dataplex::v1::CreateEntryTypeRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateEntryType,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataplex::v1::CreateEntryTypeRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::EntryType>>,
              CreateEntryType,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateEntryType)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateEntryType(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::EntryType>>, UpdateEntryType,
      (google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateEntryType,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::EntryType>>,
              UpdateEntryType,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteEntryType)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteEntryType(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
      DeleteEntryType,
      (google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteEntryType,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
              DeleteEntryType,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::dataplex::v1::EntryType>),
              ListEntryTypes,
              (google::cloud::dataplex::v1::ListEntryTypesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::EntryType>, GetEntryType,
              (google::cloud::dataplex::v1::GetEntryTypeRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateAspectType)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateAspectType(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::AspectType>>,
      CreateAspectType,
      (google::cloud::dataplex::v1::CreateAspectTypeRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateAspectType,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataplex::v1::CreateAspectTypeRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::AspectType>>,
              CreateAspectType,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateAspectType)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateAspectType(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::AspectType>>,
      UpdateAspectType,
      (google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateAspectType,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::AspectType>>,
              UpdateAspectType,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteAspectType)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteAspectType(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
      DeleteAspectType,
      (google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteAspectType,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
              DeleteAspectType,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::dataplex::v1::AspectType>),
              ListAspectTypes,
              (google::cloud::dataplex::v1::ListAspectTypesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dataplex::v1::AspectType>, GetAspectType,
      (google::cloud::dataplex::v1::GetAspectTypeRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateEntryGroup)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateEntryGroup(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::EntryGroup>>,
      CreateEntryGroup,
      (google::cloud::dataplex::v1::CreateEntryGroupRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateEntryGroup,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataplex::v1::CreateEntryGroupRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::EntryGroup>>,
              CreateEntryGroup,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateEntryGroup)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateEntryGroup(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::EntryGroup>>,
      UpdateEntryGroup,
      (google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateEntryGroup,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::EntryGroup>>,
              UpdateEntryGroup,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteEntryGroup)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteEntryGroup(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
      DeleteEntryGroup,
      (google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteEntryGroup,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
              DeleteEntryGroup,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::dataplex::v1::EntryGroup>),
              ListEntryGroups,
              (google::cloud::dataplex::v1::ListEntryGroupsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dataplex::v1::EntryGroup>, GetEntryGroup,
      (google::cloud::dataplex::v1::GetEntryGroupRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::Entry>, CreateEntry,
              (google::cloud::dataplex::v1::CreateEntryRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::Entry>, UpdateEntry,
              (google::cloud::dataplex::v1::UpdateEntryRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::Entry>, DeleteEntry,
              (google::cloud::dataplex::v1::DeleteEntryRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::dataplex::v1::Entry>), ListEntries,
              (google::cloud::dataplex::v1::ListEntriesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::Entry>, GetEntry,
              (google::cloud::dataplex::v1::GetEntryRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::Entry>, LookupEntry,
              (google::cloud::dataplex::v1::LookupEntryRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::dataplex::v1::SearchEntriesResult>),
              SearchEntries,
              (google::cloud::dataplex::v1::SearchEntriesRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_MOCKS_MOCK_CATALOG_CONNECTION_H
