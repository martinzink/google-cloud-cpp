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
// source: google/cloud/datastream/v1/datastream.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTREAM_V1_MOCKS_MOCK_DATASTREAM_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTREAM_V1_MOCKS_MOCK_DATASTREAM_CONNECTION_H

#include "google/cloud/datastream/v1/datastream_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace datastream_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DatastreamConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DatastreamClient`. To do so,
 * construct an object of type `DatastreamClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockDatastreamConnection : public datastream_v1::DatastreamConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::datastream::v1::ConnectionProfile>),
      ListConnectionProfiles,
      (google::cloud::datastream::v1::ListConnectionProfilesRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::datastream::v1::ConnectionProfile>,
              GetConnectionProfile,
              (google::cloud::datastream::v1::GetConnectionProfileRequest const&
                   request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateConnectionProfile)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateConnectionProfile(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>,
      CreateConnectionProfile,
      (google::cloud::datastream::v1::CreateConnectionProfileRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateConnectionProfile,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::datastream::v1::CreateConnectionProfileRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>,
      CreateConnectionProfile,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateConnectionProfile)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateConnectionProfile(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>,
      UpdateConnectionProfile,
      (google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateConnectionProfile,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>,
      UpdateConnectionProfile,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteConnectionProfile)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteConnectionProfile(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeleteConnectionProfile,
      (google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteConnectionProfile,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeleteConnectionProfile,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::datastream::v1::DiscoverConnectionProfileResponse>,
      DiscoverConnectionProfile,
      (google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&
           request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::datastream::v1::Stream>), ListStreams,
              (google::cloud::datastream::v1::ListStreamsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::datastream::v1::Stream>, GetStream,
              (google::cloud::datastream::v1::GetStreamRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateStream)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateStream(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::Stream>>, CreateStream,
      (google::cloud::datastream::v1::CreateStreamRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateStream,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::datastream::v1::CreateStreamRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::datastream::v1::Stream>>,
              CreateStream,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateStream)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateStream(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::Stream>>, UpdateStream,
      (google::cloud::datastream::v1::UpdateStreamRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateStream,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::datastream::v1::UpdateStreamRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::datastream::v1::Stream>>,
              UpdateStream,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteStream)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteStream(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeleteStream,
      (google::cloud::datastream::v1::DeleteStreamRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteStream,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::datastream::v1::DeleteStreamRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeleteStream,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datastream::v1::StreamObject>, GetStreamObject,
      (google::cloud::datastream::v1::GetStreamObjectRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datastream::v1::StreamObject>, LookupStreamObject,
      (google::cloud::datastream::v1::LookupStreamObjectRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::datastream::v1::StreamObject>),
              ListStreamObjects,
              (google::cloud::datastream::v1::ListStreamObjectsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datastream::v1::StartBackfillJobResponse>,
      StartBackfillJob,
      (google::cloud::datastream::v1::StartBackfillJobRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datastream::v1::StopBackfillJobResponse>,
      StopBackfillJob,
      (google::cloud::datastream::v1::StopBackfillJobRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<std::string>), FetchStaticIps,
              (google::cloud::datastream::v1::FetchStaticIpsRequest request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreatePrivateConnection)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreatePrivateConnection(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::PrivateConnection>>,
      CreatePrivateConnection,
      (google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreatePrivateConnection,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::PrivateConnection>>,
      CreatePrivateConnection,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::datastream::v1::PrivateConnection>,
              GetPrivateConnection,
              (google::cloud::datastream::v1::GetPrivateConnectionRequest const&
                   request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::datastream::v1::PrivateConnection>),
      ListPrivateConnections,
      (google::cloud::datastream::v1::ListPrivateConnectionsRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeletePrivateConnection)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeletePrivateConnection(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeletePrivateConnection,
      (google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeletePrivateConnection,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeletePrivateConnection,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateRoute)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateRoute(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::Route>>, CreateRoute,
      (google::cloud::datastream::v1::CreateRouteRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateRoute,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::datastream::v1::CreateRouteRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::datastream::v1::Route>>,
              CreateRoute,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::datastream::v1::Route>, GetRoute,
              (google::cloud::datastream::v1::GetRouteRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::datastream::v1::Route>), ListRoutes,
              (google::cloud::datastream::v1::ListRoutesRequest request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteRoute)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteRoute(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeleteRoute,
      (google::cloud::datastream::v1::DeleteRouteRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteRoute,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::datastream::v1::DeleteRouteRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeleteRoute,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastream_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTREAM_V1_MOCKS_MOCK_DATASTREAM_CONNECTION_H
