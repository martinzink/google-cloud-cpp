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
// source: google/cloud/dataproc/v1/clusters.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_MOCKS_MOCK_CLUSTER_CONTROLLER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_MOCKS_MOCK_CLUSTER_CONTROLLER_CONNECTION_H

#include "google/cloud/dataproc/v1/cluster_controller_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dataproc_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ClusterControllerConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ClusterControllerClient`. To do so,
 * construct an object of type `ClusterControllerClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockClusterControllerConnection
    : public dataproc_v1::ClusterControllerConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateCluster)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateCluster(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dataproc::v1::Cluster>>, CreateCluster,
      (google::cloud::dataproc::v1::CreateClusterRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateCluster,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataproc::v1::CreateClusterRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataproc::v1::Cluster>>,
              CreateCluster,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateCluster)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateCluster(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dataproc::v1::Cluster>>, UpdateCluster,
      (google::cloud::dataproc::v1::UpdateClusterRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateCluster,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataproc::v1::UpdateClusterRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataproc::v1::Cluster>>,
              UpdateCluster,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, StopCluster)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, StopCluster(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::dataproc::v1::Cluster>>,
              StopCluster,
              (google::cloud::dataproc::v1::StopClusterRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, StopCluster,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::dataproc::v1::StopClusterRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataproc::v1::Cluster>>,
              StopCluster,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, StartCluster)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, StartCluster(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::dataproc::v1::Cluster>>,
              StartCluster,
              (google::cloud::dataproc::v1::StartClusterRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, StartCluster,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::dataproc::v1::StartClusterRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataproc::v1::Cluster>>,
              StartCluster,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteCluster)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteCluster(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dataproc::v1::ClusterOperationMetadata>>,
      DeleteCluster,
      (google::cloud::dataproc::v1::DeleteClusterRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteCluster,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataproc::v1::DeleteClusterRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataproc::v1::ClusterOperationMetadata>>,
      DeleteCluster,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::dataproc::v1::Cluster>, GetCluster,
              (google::cloud::dataproc::v1::GetClusterRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::dataproc::v1::Cluster>), ListClusters,
              (google::cloud::dataproc::v1::ListClustersRequest request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DiagnoseCluster)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DiagnoseCluster(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dataproc::v1::DiagnoseClusterResults>>,
      DiagnoseCluster,
      (google::cloud::dataproc::v1::DiagnoseClusterRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DiagnoseCluster,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataproc::v1::DiagnoseClusterRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataproc::v1::DiagnoseClusterResults>>,
      DiagnoseCluster,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_MOCKS_MOCK_CLUSTER_CONTROLLER_CONNECTION_H
