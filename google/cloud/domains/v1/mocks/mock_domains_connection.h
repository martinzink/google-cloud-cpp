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
// source: google/cloud/domains/v1/domains.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_MOCKS_MOCK_DOMAINS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_MOCKS_MOCK_DOMAINS_CONNECTION_H

#include "google/cloud/domains/v1/domains_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace domains_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DomainsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DomainsClient`. To do so,
 * construct an object of type `DomainsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockDomainsConnection : public domains_v1::DomainsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::domains::v1::SearchDomainsResponse>,
              SearchDomains,
              (google::cloud::domains::v1::SearchDomainsRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::domains::v1::RetrieveRegisterParametersResponse>,
      RetrieveRegisterParameters,
      (google::cloud::domains::v1::RetrieveRegisterParametersRequest const&
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, RegisterDomain)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, RegisterDomain(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::domains::v1::Registration>>,
      RegisterDomain,
      (google::cloud::domains::v1::RegisterDomainRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, RegisterDomain,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::domains::v1::RegisterDomainRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::domains::v1::Registration>>,
              RegisterDomain,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::domains::v1::RetrieveTransferParametersResponse>,
      RetrieveTransferParameters,
      (google::cloud::domains::v1::RetrieveTransferParametersRequest const&
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, TransferDomain)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, TransferDomain(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::domains::v1::Registration>>,
      TransferDomain,
      (google::cloud::domains::v1::TransferDomainRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, TransferDomain,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::domains::v1::TransferDomainRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::domains::v1::Registration>>,
              TransferDomain,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::domains::v1::Registration>),
              ListRegistrations,
              (google::cloud::domains::v1::ListRegistrationsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::domains::v1::Registration>, GetRegistration,
      (google::cloud::domains::v1::GetRegistrationRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateRegistration)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateRegistration(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::domains::v1::Registration>>,
      UpdateRegistration,
      (google::cloud::domains::v1::UpdateRegistrationRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateRegistration,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::domains::v1::UpdateRegistrationRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::domains::v1::Registration>>,
              UpdateRegistration,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ConfigureManagementSettings)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ConfigureManagementSettings(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::domains::v1::Registration>>,
      ConfigureManagementSettings,
      (google::cloud::domains::v1::ConfigureManagementSettingsRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ConfigureManagementSettings,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::domains::v1::ConfigureManagementSettingsRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::domains::v1::Registration>>,
              ConfigureManagementSettings,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ConfigureDnsSettings)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ConfigureDnsSettings(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::domains::v1::Registration>>,
      ConfigureDnsSettings,
      (google::cloud::domains::v1::ConfigureDnsSettingsRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ConfigureDnsSettings,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::domains::v1::ConfigureDnsSettingsRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::domains::v1::Registration>>,
              ConfigureDnsSettings,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ConfigureContactSettings)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ConfigureContactSettings(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::domains::v1::Registration>>,
      ConfigureContactSettings,
      (google::cloud::domains::v1::ConfigureContactSettingsRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ConfigureContactSettings,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::domains::v1::ConfigureContactSettingsRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::domains::v1::Registration>>,
              ConfigureContactSettings,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ExportRegistration)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ExportRegistration(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::domains::v1::Registration>>,
      ExportRegistration,
      (google::cloud::domains::v1::ExportRegistrationRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ExportRegistration,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::domains::v1::ExportRegistrationRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::domains::v1::Registration>>,
              ExportRegistration,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteRegistration)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteRegistration(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::domains::v1::OperationMetadata>>,
      DeleteRegistration,
      (google::cloud::domains::v1::DeleteRegistrationRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteRegistration,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::domains::v1::DeleteRegistrationRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::domains::v1::OperationMetadata>>,
              DeleteRegistration,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::domains::v1::AuthorizationCode>,
      RetrieveAuthorizationCode,
      (google::cloud::domains::v1::RetrieveAuthorizationCodeRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::domains::v1::AuthorizationCode>,
              ResetAuthorizationCode,
              (google::cloud::domains::v1::ResetAuthorizationCodeRequest const&
                   request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace domains_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_MOCKS_MOCK_DOMAINS_CONNECTION_H
