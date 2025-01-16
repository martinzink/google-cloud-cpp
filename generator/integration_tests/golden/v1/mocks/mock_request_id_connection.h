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
// source: generator/integration_tests/test_request_id.proto

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_MOCKS_MOCK_REQUEST_ID_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_MOCKS_MOCK_REQUEST_ID_CONNECTION_H

#include "generator/integration_tests/golden/v1/request_id_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace golden_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `RequestIdServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `RequestIdServiceClient`. To do so,
 * construct an object of type `RequestIdServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockRequestIdServiceConnection : public golden_v1::RequestIdServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::test::requestid::v1::Foo>,
  CreateFoo,
  (google::test::requestid::v1::CreateFooRequest const& request), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, RenameFoo(Matcher<google::test::requestid::v1::RenameFooRequest const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::test::requestid::v1::Foo>>,
  RenameFoo,
  (google::test::requestid::v1::RenameFooRequest const& request), (override));


  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RenameFoo(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
  RenameFoo, (NoAwaitTag,
    google::test::requestid::v1::RenameFooRequest const& request), (override));


  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, RenameFoo(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::test::requestid::v1::Foo>>,
  RenameFoo, (
    google::longrunning::Operation const& operation), (override));

  MOCK_METHOD((StreamRange<google::test::requestid::v1::Foo>),
  ListFoos,
  (google::test::requestid::v1::ListFoosRequest request), (override));

  MOCK_METHOD(future<StatusOr<google::test::requestid::v1::Foo>>,
  AsyncCreateFoo,
  (google::test::requestid::v1::CreateFooRequest const& request), (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_MOCKS_MOCK_REQUEST_ID_CONNECTION_H
