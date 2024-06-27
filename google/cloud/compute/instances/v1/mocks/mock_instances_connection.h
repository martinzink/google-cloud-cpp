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
// source: google/cloud/compute/instances/v1/instances.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCES_V1_MOCKS_MOCK_INSTANCES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCES_V1_MOCKS_MOCK_INSTANCES_CONNECTION_H

#include "google/cloud/compute/instances/v1/instances_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_instances_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `InstancesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `InstancesClient`. To do so,
 * construct an object of type `InstancesClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockInstancesConnection
    : public compute_instances_v1::InstancesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, AddAccessConfig)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, AddAccessConfig(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      AddAccessConfig,
      (google::cloud::cpp::compute::instances::v1::AddAccessConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, AddAccessConfig,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::instances::v1::AddAccessConfigRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddAccessConfig,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, AddResourcePolicies)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, AddResourcePolicies(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddResourcePolicies,
              (google::cloud::cpp::compute::instances::v1::
                   AddResourcePoliciesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              AddResourcePolicies,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   AddResourcePoliciesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddResourcePolicies,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<std::pair<
           std::string, google::cloud::cpp::compute::v1::InstancesScopedList>>),
      AggregatedListInstances,
      (google::cloud::cpp::compute::instances::v1::
           AggregatedListInstancesRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, AttachDisk)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, AttachDisk(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, AttachDisk,
      (google::cloud::cpp::compute::instances::v1::AttachDiskRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, AttachDisk,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::instances::v1::AttachDiskRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AttachDisk,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, BulkInsert)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, BulkInsert(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, BulkInsert,
      (google::cloud::cpp::compute::instances::v1::BulkInsertRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, BulkInsert,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::instances::v1::BulkInsertRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              BulkInsert,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      DeleteInstance,
      (google::cloud::cpp::compute::instances::v1::DeleteInstanceRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, DeleteInstance,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::instances::v1::DeleteInstanceRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteInstance,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteAccessConfig)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteAccessConfig(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteAccessConfig,
              (google::cloud::cpp::compute::instances::v1::
                   DeleteAccessConfigRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteAccessConfig,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   DeleteAccessConfigRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteAccessConfig,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DetachDisk)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DetachDisk(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, DetachDisk,
      (google::cloud::cpp::compute::instances::v1::DetachDiskRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, DetachDisk,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::instances::v1::DetachDiskRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DetachDisk,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Instance>, GetInstance,
      (google::cloud::cpp::compute::instances::v1::GetInstanceRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::
                           InstancesGetEffectiveFirewallsResponse>,
              GetEffectiveFirewalls,
              (google::cloud::cpp::compute::instances::v1::
                   GetEffectiveFirewallsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::GuestAttributes>,
              GetGuestAttributes,
              (google::cloud::cpp::compute::instances::v1::
                   GetGuestAttributesRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Policy>, GetIamPolicy,
      (google::cloud::cpp::compute::instances::v1::GetIamPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Screenshot>, GetScreenshot,
      (google::cloud::cpp::compute::instances::v1::GetScreenshotRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::SerialPortOutput>,
              GetSerialPortOutput,
              (google::cloud::cpp::compute::instances::v1::
                   GetSerialPortOutputRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::ShieldedInstanceIdentity>,
      GetShieldedInstanceIdentity,
      (google::cloud::cpp::compute::instances::v1::
           GetShieldedInstanceIdentityRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, InsertInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, InsertInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      InsertInstance,
      (google::cloud::cpp::compute::instances::v1::InsertInstanceRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, InsertInstance,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::instances::v1::InsertInstanceRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertInstance,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::Instance>),
              ListInstances,
              (google::cloud::cpp::compute::instances::v1::ListInstancesRequest
                   request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::Reference>),
              ListReferrers,
              (google::cloud::cpp::compute::instances::v1::ListReferrersRequest
                   request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, PerformMaintenance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, PerformMaintenance(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PerformMaintenance,
              (google::cloud::cpp::compute::instances::v1::
                   PerformMaintenanceRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              PerformMaintenance,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   PerformMaintenanceRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PerformMaintenance,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, RemoveResourcePolicies)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, RemoveResourcePolicies(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveResourcePolicies,
              (google::cloud::cpp::compute::instances::v1::
                   RemoveResourcePoliciesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              RemoveResourcePolicies,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   RemoveResourcePoliciesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveResourcePolicies,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, Reset)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, Reset(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, Reset,
      (google::cloud::cpp::compute::instances::v1::ResetRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, Reset,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::instances::v1::ResetRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Reset,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, Resume)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, Resume(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Resume,
              (google::cloud::cpp::compute::instances::v1::ResumeRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, Resume,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::ResumeRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Resume,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(Status, SendDiagnosticInterrupt,
              (google::cloud::cpp::compute::instances::v1::
                   SendDiagnosticInterruptRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetDeletionProtection)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetDeletionProtection(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetDeletionProtection,
              (google::cloud::cpp::compute::instances::v1::
                   SetDeletionProtectionRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetDeletionProtection,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   SetDeletionProtectionRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetDeletionProtection,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetDiskAutoDelete)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetDiskAutoDelete(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetDiskAutoDelete,
              (google::cloud::cpp::compute::instances::v1::
                   SetDiskAutoDeleteRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetDiskAutoDelete,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   SetDiskAutoDeleteRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetDiskAutoDelete,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Policy>, SetIamPolicy,
      (google::cloud::cpp::compute::instances::v1::SetIamPolicyRequest const&
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetLabels)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetLabels(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, SetLabels,
      (google::cloud::cpp::compute::instances::v1::SetLabelsRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, SetLabels,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::instances::v1::SetLabelsRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetLabels,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetMachineResources)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetMachineResources(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetMachineResources,
              (google::cloud::cpp::compute::instances::v1::
                   SetMachineResourcesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetMachineResources,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   SetMachineResourcesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetMachineResources,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetMachineType)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetMachineType(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      SetMachineType,
      (google::cloud::cpp::compute::instances::v1::SetMachineTypeRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, SetMachineType,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::instances::v1::SetMachineTypeRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetMachineType,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetMetadata)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetMetadata(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, SetMetadata,
      (google::cloud::cpp::compute::instances::v1::SetMetadataRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, SetMetadata,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::instances::v1::SetMetadataRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetMetadata,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetMinCpuPlatform)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetMinCpuPlatform(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetMinCpuPlatform,
              (google::cloud::cpp::compute::instances::v1::
                   SetMinCpuPlatformRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetMinCpuPlatform,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   SetMinCpuPlatformRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetMinCpuPlatform,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetName)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetName(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetName,
              (google::cloud::cpp::compute::instances::v1::SetNameRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, SetName,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::SetNameRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetName,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetScheduling)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetScheduling(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      SetScheduling,
      (google::cloud::cpp::compute::instances::v1::SetSchedulingRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, SetScheduling,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::instances::v1::SetSchedulingRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetScheduling,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetSecurityPolicy)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetSecurityPolicy(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetSecurityPolicy,
              (google::cloud::cpp::compute::instances::v1::
                   SetSecurityPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetSecurityPolicy,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   SetSecurityPolicyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetSecurityPolicy,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetServiceAccount)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetServiceAccount(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetServiceAccount,
              (google::cloud::cpp::compute::instances::v1::
                   SetServiceAccountRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetServiceAccount,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   SetServiceAccountRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetServiceAccount,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetShieldedInstanceIntegrityPolicy)` is now ambiguous.
  /// Use `EXPECT_CALL(*mock, SetShieldedInstanceIntegrityPolicy(::testing::_))`
  /// instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetShieldedInstanceIntegrityPolicy,
              (google::cloud::cpp::compute::instances::v1::
                   SetShieldedInstanceIntegrityPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetShieldedInstanceIntegrityPolicy,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   SetShieldedInstanceIntegrityPolicyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetShieldedInstanceIntegrityPolicy,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetTags)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetTags(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetTags,
              (google::cloud::cpp::compute::instances::v1::SetTagsRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, SetTags,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::SetTagsRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetTags,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SimulateMaintenanceEvent)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SimulateMaintenanceEvent(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SimulateMaintenanceEvent,
              (google::cloud::cpp::compute::instances::v1::
                   SimulateMaintenanceEventRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SimulateMaintenanceEvent,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   SimulateMaintenanceEventRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SimulateMaintenanceEvent,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, Start)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, Start(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, Start,
      (google::cloud::cpp::compute::instances::v1::StartRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, Start,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::instances::v1::StartRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Start,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, StartWithEncryptionKey)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, StartWithEncryptionKey(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              StartWithEncryptionKey,
              (google::cloud::cpp::compute::instances::v1::
                   StartWithEncryptionKeyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              StartWithEncryptionKey,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   StartWithEncryptionKeyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              StartWithEncryptionKey,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, Stop)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, Stop(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, Stop,
      (google::cloud::cpp::compute::instances::v1::StopRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, Stop,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::instances::v1::StopRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Stop,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, Suspend)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, Suspend(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Suspend,
              (google::cloud::cpp::compute::instances::v1::SuspendRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, Suspend,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::SuspendRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Suspend,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>,
      TestIamPermissions,
      (google::cloud::cpp::compute::instances::v1::
           TestIamPermissionsRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      UpdateInstance,
      (google::cloud::cpp::compute::instances::v1::UpdateInstanceRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, UpdateInstance,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::instances::v1::UpdateInstanceRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateInstance,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateAccessConfig)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateAccessConfig(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateAccessConfig,
              (google::cloud::cpp::compute::instances::v1::
                   UpdateAccessConfigRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              UpdateAccessConfig,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   UpdateAccessConfigRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateAccessConfig,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateDisplayDevice)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateDisplayDevice(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateDisplayDevice,
              (google::cloud::cpp::compute::instances::v1::
                   UpdateDisplayDeviceRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              UpdateDisplayDevice,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   UpdateDisplayDeviceRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateDisplayDevice,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateNetworkInterface)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateNetworkInterface(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateNetworkInterface,
              (google::cloud::cpp::compute::instances::v1::
                   UpdateNetworkInterfaceRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              UpdateNetworkInterface,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   UpdateNetworkInterfaceRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateNetworkInterface,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateShieldedInstanceConfig)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateShieldedInstanceConfig(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateShieldedInstanceConfig,
              (google::cloud::cpp::compute::instances::v1::
                   UpdateShieldedInstanceConfigRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              UpdateShieldedInstanceConfig,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::instances::v1::
                   UpdateShieldedInstanceConfigRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateShieldedInstanceConfig,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instances_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCES_V1_MOCKS_MOCK_INSTANCES_CONNECTION_H
