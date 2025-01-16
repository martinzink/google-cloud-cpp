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
// source:
// google/cloud/compute/region_ssl_certificates/v1/region_ssl_certificates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_CERTIFICATES_V1_MOCKS_MOCK_REGION_SSL_CERTIFICATES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_CERTIFICATES_V1_MOCKS_MOCK_REGION_SSL_CERTIFICATES_CONNECTION_H

#include "google/cloud/compute/region_ssl_certificates/v1/region_ssl_certificates_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_region_ssl_certificates_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `RegionSslCertificatesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `RegionSslCertificatesClient`. To do
 * so, construct an object of type `RegionSslCertificatesClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockRegionSslCertificatesConnection
    : public compute_region_ssl_certificates_v1::
          RegionSslCertificatesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteSslCertificate(Matcher<google::cloud::cpp::compute::region_ssl_certificates::v1::DeleteSslCertificateRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteSslCertificate,
              (google::cloud::cpp::compute::region_ssl_certificates::v1::
                   DeleteSslCertificateRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteSslCertificate(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteSslCertificate,
              (NoAwaitTag,
               google::cloud::cpp::compute::region_ssl_certificates::v1::
                   DeleteSslCertificateRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteSslCertificate(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteSslCertificate,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::SslCertificate>,
              GetSslCertificate,
              (google::cloud::cpp::compute::region_ssl_certificates::v1::
                   GetSslCertificateRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// InsertSslCertificate(Matcher<google::cloud::cpp::compute::region_ssl_certificates::v1::InsertSslCertificateRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertSslCertificate,
              (google::cloud::cpp::compute::region_ssl_certificates::v1::
                   InsertSslCertificateRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, InsertSslCertificate(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              InsertSslCertificate,
              (NoAwaitTag,
               google::cloud::cpp::compute::region_ssl_certificates::v1::
                   InsertSslCertificateRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// InsertSslCertificate(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertSslCertificate,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::SslCertificate>),
              ListRegionSslCertificates,
              (google::cloud::cpp::compute::region_ssl_certificates::v1::
                   ListRegionSslCertificatesRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_ssl_certificates_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_CERTIFICATES_V1_MOCKS_MOCK_REGION_SSL_CERTIFICATES_CONNECTION_H
