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
// google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUP_MANAGERS_V1_MOCKS_MOCK_REGION_INSTANCE_GROUP_MANAGERS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUP_MANAGERS_V1_MOCKS_MOCK_REGION_INSTANCE_GROUP_MANAGERS_CONNECTION_H

#include "google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_region_instance_group_managers_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `RegionInstanceGroupManagersConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `RegionInstanceGroupManagersClient`.
 * To do so, construct an object of type `RegionInstanceGroupManagersClient`
 * with an instance of this class. Then use the Google Test framework functions
 * to program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockRegionInstanceGroupManagersConnection
    : public compute_region_instance_group_managers_v1::
          RegionInstanceGroupManagersConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, AbandonInstances)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, AbandonInstances(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AbandonInstances,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   AbandonInstancesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              AbandonInstances,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_instance_group_managers::v1::
                   AbandonInstancesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AbandonInstances,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ApplyUpdatesToInstances)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ApplyUpdatesToInstances(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              ApplyUpdatesToInstances,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   ApplyUpdatesToInstancesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              ApplyUpdatesToInstances,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_instance_group_managers::v1::
                   ApplyUpdatesToInstancesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              ApplyUpdatesToInstances,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateInstances)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateInstances(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              CreateInstances,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   CreateInstancesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              CreateInstances,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_instance_group_managers::v1::
                   CreateInstancesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              CreateInstances,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteInstanceGroupManager)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteInstanceGroupManager(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteInstanceGroupManager,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   DeleteInstanceGroupManagerRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteInstanceGroupManager,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_instance_group_managers::v1::
                   DeleteInstanceGroupManagerRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteInstanceGroupManager,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteInstances)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteInstances(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteInstances,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   DeleteInstancesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteInstances,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_instance_group_managers::v1::
                   DeleteInstancesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteInstances,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeletePerInstanceConfigs)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeletePerInstanceConfigs(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeletePerInstanceConfigs,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   DeletePerInstanceConfigsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeletePerInstanceConfigs,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_instance_group_managers::v1::
                   DeletePerInstanceConfigsRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeletePerInstanceConfigs,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>,
              GetInstanceGroupManager,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   GetInstanceGroupManagerRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, InsertInstanceGroupManager)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, InsertInstanceGroupManager(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertInstanceGroupManager,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   InsertInstanceGroupManagerRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              InsertInstanceGroupManager,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_instance_group_managers::v1::
                   InsertInstanceGroupManagerRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertInstanceGroupManager,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::cpp::compute::v1::InstanceGroupManager>),
      ListRegionInstanceGroupManagers,
      (google::cloud::cpp::compute::region_instance_group_managers::v1::
           ListRegionInstanceGroupManagersRequest request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::cpp::compute::v1::InstanceManagedByIgmError>),
      ListErrors,
      (google::cloud::cpp::compute::region_instance_group_managers::v1::
           ListErrorsRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::
                           RegionInstanceGroupManagersListInstancesResponse>,
              ListManagedInstances,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   ListManagedInstancesRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::PerInstanceConfig>),
              ListPerInstanceConfigs,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   ListPerInstanceConfigsRequest request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, PatchInstanceGroupManager)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, PatchInstanceGroupManager(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchInstanceGroupManager,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   PatchInstanceGroupManagerRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              PatchInstanceGroupManager,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_instance_group_managers::v1::
                   PatchInstanceGroupManagerRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchInstanceGroupManager,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, PatchPerInstanceConfigs)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, PatchPerInstanceConfigs(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchPerInstanceConfigs,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   PatchPerInstanceConfigsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              PatchPerInstanceConfigs,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_instance_group_managers::v1::
                   PatchPerInstanceConfigsRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchPerInstanceConfigs,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, RecreateInstances)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, RecreateInstances(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RecreateInstances,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   RecreateInstancesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              RecreateInstances,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_instance_group_managers::v1::
                   RecreateInstancesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RecreateInstances,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, Resize)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, Resize(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Resize,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   ResizeRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, Resize,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_instance_group_managers::v1::
                   ResizeRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Resize,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetInstanceTemplate)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetInstanceTemplate(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetInstanceTemplate,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   SetInstanceTemplateRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetInstanceTemplate,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_instance_group_managers::v1::
                   SetInstanceTemplateRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetInstanceTemplate,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetTargetPools)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetTargetPools(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetTargetPools,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   SetTargetPoolsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetTargetPools,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_instance_group_managers::v1::
                   SetTargetPoolsRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetTargetPools,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdatePerInstanceConfigs)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdatePerInstanceConfigs(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdatePerInstanceConfigs,
              (google::cloud::cpp::compute::region_instance_group_managers::v1::
                   UpdatePerInstanceConfigsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              UpdatePerInstanceConfigs,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::region_instance_group_managers::v1::
                   UpdatePerInstanceConfigsRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdatePerInstanceConfigs,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_group_managers_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUP_MANAGERS_V1_MOCKS_MOCK_REGION_INSTANCE_GROUP_MANAGERS_CONNECTION_H
