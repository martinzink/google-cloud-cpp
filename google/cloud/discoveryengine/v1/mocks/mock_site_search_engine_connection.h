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
// source: google/cloud/discoveryengine/v1/site_search_engine_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_MOCKS_MOCK_SITE_SEARCH_ENGINE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_MOCKS_MOCK_SITE_SEARCH_ENGINE_CONNECTION_H

#include "google/cloud/discoveryengine/v1/site_search_engine_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace discoveryengine_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `SiteSearchEngineServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `SiteSearchEngineServiceClient`. To
 * do so, construct an object of type `SiteSearchEngineServiceClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockSiteSearchEngineServiceConnection
    : public discoveryengine_v1::SiteSearchEngineServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::discoveryengine::v1::SiteSearchEngine>,
      GetSiteSearchEngine,
      (google::cloud::discoveryengine::v1::GetSiteSearchEngineRequest const&
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateTargetSite)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateTargetSite(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::discoveryengine::v1::TargetSite>>,
      CreateTargetSite,
      (google::cloud::discoveryengine::v1::CreateTargetSiteRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateTargetSite,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::discoveryengine::v1::CreateTargetSiteRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::discoveryengine::v1::TargetSite>>,
              CreateTargetSite,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, BatchCreateTargetSites)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, BatchCreateTargetSites(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<
          google::cloud::discoveryengine::v1::BatchCreateTargetSitesResponse>>,
      BatchCreateTargetSites,
      (google::cloud::discoveryengine::v1::BatchCreateTargetSitesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, BatchCreateTargetSites,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::discoveryengine::v1::BatchCreateTargetSitesRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::discoveryengine::v1::BatchCreateTargetSitesResponse>>,
      BatchCreateTargetSites,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::discoveryengine::v1::TargetSite>, GetTargetSite,
      (google::cloud::discoveryengine::v1::GetTargetSiteRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateTargetSite)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateTargetSite(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::discoveryengine::v1::TargetSite>>,
      UpdateTargetSite,
      (google::cloud::discoveryengine::v1::UpdateTargetSiteRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateTargetSite,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::discoveryengine::v1::UpdateTargetSiteRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::discoveryengine::v1::TargetSite>>,
              UpdateTargetSite,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteTargetSite)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteTargetSite(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<
          google::cloud::discoveryengine::v1::DeleteTargetSiteMetadata>>,
      DeleteTargetSite,
      (google::cloud::discoveryengine::v1::DeleteTargetSiteRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteTargetSite,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::discoveryengine::v1::DeleteTargetSiteRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::discoveryengine::v1::DeleteTargetSiteMetadata>>,
      DeleteTargetSite,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::discoveryengine::v1::TargetSite>),
      ListTargetSites,
      (google::cloud::discoveryengine::v1::ListTargetSitesRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, EnableAdvancedSiteSearch)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, EnableAdvancedSiteSearch(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::discoveryengine::v1::
                                  EnableAdvancedSiteSearchResponse>>,
              EnableAdvancedSiteSearch,
              (google::cloud::discoveryengine::v1::
                   EnableAdvancedSiteSearchRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              EnableAdvancedSiteSearch,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::discoveryengine::v1::
                   EnableAdvancedSiteSearchRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::discoveryengine::v1::
                                  EnableAdvancedSiteSearchResponse>>,
              EnableAdvancedSiteSearch,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DisableAdvancedSiteSearch)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DisableAdvancedSiteSearch(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::discoveryengine::v1::
                                  DisableAdvancedSiteSearchResponse>>,
              DisableAdvancedSiteSearch,
              (google::cloud::discoveryengine::v1::
                   DisableAdvancedSiteSearchRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              DisableAdvancedSiteSearch,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::discoveryengine::v1::
                   DisableAdvancedSiteSearchRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::discoveryengine::v1::
                                  DisableAdvancedSiteSearchResponse>>,
              DisableAdvancedSiteSearch,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, RecrawlUris)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, RecrawlUris(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::discoveryengine::v1::RecrawlUrisResponse>>,
      RecrawlUris,
      (google::cloud::discoveryengine::v1::RecrawlUrisRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, RecrawlUris,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::discoveryengine::v1::RecrawlUrisRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::discoveryengine::v1::RecrawlUrisResponse>>,
      RecrawlUris,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, BatchVerifyTargetSites)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, BatchVerifyTargetSites(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<
          google::cloud::discoveryengine::v1::BatchVerifyTargetSitesResponse>>,
      BatchVerifyTargetSites,
      (google::cloud::discoveryengine::v1::BatchVerifyTargetSitesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, BatchVerifyTargetSites,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::discoveryengine::v1::BatchVerifyTargetSitesRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::discoveryengine::v1::BatchVerifyTargetSitesResponse>>,
      BatchVerifyTargetSites,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::discoveryengine::v1::TargetSite>),
      FetchDomainVerificationStatus,
      (google::cloud::discoveryengine::v1::FetchDomainVerificationStatusRequest
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_MOCKS_MOCK_SITE_SEARCH_ENGINE_CONNECTION_H
