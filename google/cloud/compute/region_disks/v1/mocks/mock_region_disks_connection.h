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
// source: google/cloud/compute/region_disks/v1/region_disks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_DISKS_V1_MOCKS_MOCK_REGION_DISKS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_DISKS_V1_MOCKS_MOCK_REGION_DISKS_CONNECTION_H

#include "google/cloud/compute/region_disks/v1/region_disks_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_region_disks_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `RegionDisksConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `RegionDisksClient`. To do so,
 * construct an object of type `RegionDisksClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockRegionDisksConnection
    : public compute_region_disks_v1::RegionDisksConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, AddResourcePolicies)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, AddResourcePolicies(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddResourcePolicies,
              (google::cloud::cpp::compute::region_disks::v1::
                   AddResourcePoliciesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              AddResourcePolicies,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_disks::v1::
                   AddResourcePoliciesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddResourcePolicies,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, BulkInsert)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, BulkInsert(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, BulkInsert,
      (google::cloud::cpp::compute::region_disks::v1::BulkInsertRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, BulkInsert,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::region_disks::v1::BulkInsertRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              BulkInsert,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateSnapshot)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateSnapshot(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              CreateSnapshot,
              (google::cloud::cpp::compute::region_disks::v1::
                   CreateSnapshotRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              CreateSnapshot,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_disks::v1::
                   CreateSnapshotRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              CreateSnapshot,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteDisk)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteDisk(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, DeleteDisk,
      (google::cloud::cpp::compute::region_disks::v1::DeleteDiskRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, DeleteDisk,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::region_disks::v1::DeleteDiskRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteDisk,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Disk>, GetDisk,
      (google::cloud::cpp::compute::region_disks::v1::GetDiskRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Policy>, GetIamPolicy,
      (google::cloud::cpp::compute::region_disks::v1::GetIamPolicyRequest const&
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, InsertDisk)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, InsertDisk(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, InsertDisk,
      (google::cloud::cpp::compute::region_disks::v1::InsertDiskRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, InsertDisk,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::region_disks::v1::InsertDiskRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertDisk,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::cpp::compute::v1::Disk>), ListRegionDisks,
      (google::cloud::cpp::compute::region_disks::v1::ListRegionDisksRequest
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, RemoveResourcePolicies)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, RemoveResourcePolicies(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveResourcePolicies,
              (google::cloud::cpp::compute::region_disks::v1::
                   RemoveResourcePoliciesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              RemoveResourcePolicies,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_disks::v1::
                   RemoveResourcePoliciesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveResourcePolicies,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, Resize)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, Resize(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, Resize,
      (google::cloud::cpp::compute::region_disks::v1::ResizeRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, Resize,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::region_disks::v1::ResizeRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Resize,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Policy>, SetIamPolicy,
      (google::cloud::cpp::compute::region_disks::v1::SetIamPolicyRequest const&
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetLabels)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetLabels(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, SetLabels,
      (google::cloud::cpp::compute::region_disks::v1::SetLabelsRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, SetLabels,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::region_disks::v1::SetLabelsRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetLabels,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, StartAsyncReplication)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, StartAsyncReplication(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              StartAsyncReplication,
              (google::cloud::cpp::compute::region_disks::v1::
                   StartAsyncReplicationRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              StartAsyncReplication,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_disks::v1::
                   StartAsyncReplicationRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              StartAsyncReplication,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, StopAsyncReplication)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, StopAsyncReplication(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              StopAsyncReplication,
              (google::cloud::cpp::compute::region_disks::v1::
                   StopAsyncReplicationRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              StopAsyncReplication,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_disks::v1::
                   StopAsyncReplicationRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              StopAsyncReplication,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, StopGroupAsyncReplication)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, StopGroupAsyncReplication(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              StopGroupAsyncReplication,
              (google::cloud::cpp::compute::region_disks::v1::
                   StopGroupAsyncReplicationRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              StopGroupAsyncReplication,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_disks::v1::
                   StopGroupAsyncReplicationRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              StopGroupAsyncReplication,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>,
      TestIamPermissions,
      (google::cloud::cpp::compute::region_disks::v1::
           TestIamPermissionsRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateDisk)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateDisk(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, UpdateDisk,
      (google::cloud::cpp::compute::region_disks::v1::UpdateDiskRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, UpdateDisk,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::region_disks::v1::UpdateDiskRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateDisk,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_disks_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_DISKS_V1_MOCKS_MOCK_REGION_DISKS_CONNECTION_H
