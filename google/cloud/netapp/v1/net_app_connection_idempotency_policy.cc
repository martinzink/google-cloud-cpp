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
// source: google/cloud/netapp/v1/cloud_netapp_service.proto

#include "google/cloud/netapp/v1/net_app_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace netapp_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

NetAppConnectionIdempotencyPolicy::~NetAppConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<NetAppConnectionIdempotencyPolicy>
NetAppConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<NetAppConnectionIdempotencyPolicy>(*this);
}

Idempotency NetAppConnectionIdempotencyPolicy::ListStoragePools(
    google::cloud::netapp::v1::ListStoragePoolsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::CreateStoragePool(
    google::cloud::netapp::v1::CreateStoragePoolRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::GetStoragePool(
    google::cloud::netapp::v1::GetStoragePoolRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::UpdateStoragePool(
    google::cloud::netapp::v1::UpdateStoragePoolRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::DeleteStoragePool(
    google::cloud::netapp::v1::DeleteStoragePoolRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::ValidateDirectoryService(
    google::cloud::netapp::v1::ValidateDirectoryServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::SwitchActiveReplicaZone(
    google::cloud::netapp::v1::SwitchActiveReplicaZoneRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::ListVolumes(
    google::cloud::netapp::v1::ListVolumesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::GetVolume(
    google::cloud::netapp::v1::GetVolumeRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::CreateVolume(
    google::cloud::netapp::v1::CreateVolumeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::UpdateVolume(
    google::cloud::netapp::v1::UpdateVolumeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::DeleteVolume(
    google::cloud::netapp::v1::DeleteVolumeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::RevertVolume(
    google::cloud::netapp::v1::RevertVolumeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::ListSnapshots(
    google::cloud::netapp::v1::ListSnapshotsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::GetSnapshot(
    google::cloud::netapp::v1::GetSnapshotRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::CreateSnapshot(
    google::cloud::netapp::v1::CreateSnapshotRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::DeleteSnapshot(
    google::cloud::netapp::v1::DeleteSnapshotRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::UpdateSnapshot(
    google::cloud::netapp::v1::UpdateSnapshotRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::ListActiveDirectories(
    google::cloud::netapp::v1::ListActiveDirectoriesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::GetActiveDirectory(
    google::cloud::netapp::v1::GetActiveDirectoryRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::CreateActiveDirectory(
    google::cloud::netapp::v1::CreateActiveDirectoryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::UpdateActiveDirectory(
    google::cloud::netapp::v1::UpdateActiveDirectoryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::DeleteActiveDirectory(
    google::cloud::netapp::v1::DeleteActiveDirectoryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::ListKmsConfigs(
    google::cloud::netapp::v1::ListKmsConfigsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::CreateKmsConfig(
    google::cloud::netapp::v1::CreateKmsConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::GetKmsConfig(
    google::cloud::netapp::v1::GetKmsConfigRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::UpdateKmsConfig(
    google::cloud::netapp::v1::UpdateKmsConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::EncryptVolumes(
    google::cloud::netapp::v1::EncryptVolumesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::VerifyKmsConfig(
    google::cloud::netapp::v1::VerifyKmsConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::DeleteKmsConfig(
    google::cloud::netapp::v1::DeleteKmsConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::ListReplications(
    google::cloud::netapp::v1::ListReplicationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::GetReplication(
    google::cloud::netapp::v1::GetReplicationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::CreateReplication(
    google::cloud::netapp::v1::CreateReplicationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::DeleteReplication(
    google::cloud::netapp::v1::DeleteReplicationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::UpdateReplication(
    google::cloud::netapp::v1::UpdateReplicationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::StopReplication(
    google::cloud::netapp::v1::StopReplicationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::ResumeReplication(
    google::cloud::netapp::v1::ResumeReplicationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::ReverseReplicationDirection(
    google::cloud::netapp::v1::ReverseReplicationDirectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::EstablishPeering(
    google::cloud::netapp::v1::EstablishPeeringRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::SyncReplication(
    google::cloud::netapp::v1::SyncReplicationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::CreateBackupVault(
    google::cloud::netapp::v1::CreateBackupVaultRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::GetBackupVault(
    google::cloud::netapp::v1::GetBackupVaultRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::ListBackupVaults(
    google::cloud::netapp::v1::ListBackupVaultsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::UpdateBackupVault(
    google::cloud::netapp::v1::UpdateBackupVaultRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::DeleteBackupVault(
    google::cloud::netapp::v1::DeleteBackupVaultRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::CreateBackup(
    google::cloud::netapp::v1::CreateBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::GetBackup(
    google::cloud::netapp::v1::GetBackupRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::ListBackups(
    google::cloud::netapp::v1::ListBackupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::DeleteBackup(
    google::cloud::netapp::v1::DeleteBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::UpdateBackup(
    google::cloud::netapp::v1::UpdateBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::CreateBackupPolicy(
    google::cloud::netapp::v1::CreateBackupPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::GetBackupPolicy(
    google::cloud::netapp::v1::GetBackupPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::ListBackupPolicies(
    google::cloud::netapp::v1::ListBackupPoliciesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::UpdateBackupPolicy(
    google::cloud::netapp::v1::UpdateBackupPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::DeleteBackupPolicy(
    google::cloud::netapp::v1::DeleteBackupPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetAppConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<NetAppConnectionIdempotencyPolicy>
MakeDefaultNetAppConnectionIdempotencyPolicy() {
  return std::make_unique<NetAppConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace netapp_v1
}  // namespace cloud
}  // namespace google
