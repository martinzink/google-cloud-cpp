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
// source: google/cloud/dialogflow/v2/document.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_DOCUMENTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_DOCUMENTS_CONNECTION_H

#include "google/cloud/dialogflow_es/documents_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dialogflow_es_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DocumentsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DocumentsClient`. To do so,
 * construct an object of type `DocumentsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockDocumentsConnection : public dialogflow_es::DocumentsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::dialogflow::v2::Document>),
              ListDocuments,
              (google::cloud::dialogflow::v2::ListDocumentsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::Document>, GetDocument,
      (google::cloud::dialogflow::v2::GetDocumentRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateDocument)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateDocument(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::Document>>, CreateDocument,
      (google::cloud::dialogflow::v2::CreateDocumentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateDocument,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dialogflow::v2::CreateDocumentRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dialogflow::v2::Document>>,
              CreateDocument,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ImportDocuments)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ImportDocuments(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::ImportDocumentsResponse>>,
      ImportDocuments,
      (google::cloud::dialogflow::v2::ImportDocumentsRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ImportDocuments,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dialogflow::v2::ImportDocumentsRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::ImportDocumentsResponse>>,
      ImportDocuments,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteDocument)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteDocument(::testing::_))` instead.
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::dialogflow::v2::KnowledgeOperationMetadata>>,
      DeleteDocument,
      (google::cloud::dialogflow::v2::DeleteDocumentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteDocument,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dialogflow::v2::DeleteDocumentRequest const& request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::dialogflow::v2::KnowledgeOperationMetadata>>,
      DeleteDocument,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateDocument)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateDocument(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::Document>>, UpdateDocument,
      (google::cloud::dialogflow::v2::UpdateDocumentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateDocument,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dialogflow::v2::UpdateDocumentRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dialogflow::v2::Document>>,
              UpdateDocument,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ReloadDocument)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ReloadDocument(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::Document>>, ReloadDocument,
      (google::cloud::dialogflow::v2::ReloadDocumentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ReloadDocument,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dialogflow::v2::ReloadDocumentRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dialogflow::v2::Document>>,
              ReloadDocument,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ExportDocument)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ExportDocument(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::Document>>, ExportDocument,
      (google::cloud::dialogflow::v2::ExportDocumentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ExportDocument,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dialogflow::v2::ExportDocumentRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dialogflow::v2::Document>>,
              ExportDocument,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_DOCUMENTS_CONNECTION_H
