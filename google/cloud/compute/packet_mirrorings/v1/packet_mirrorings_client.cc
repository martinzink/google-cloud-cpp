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
// source: google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto

#include "google/cloud/compute/packet_mirrorings/v1/packet_mirrorings_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_packet_mirrorings_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PacketMirroringsClient::PacketMirroringsClient(
    std::shared_ptr<PacketMirroringsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
PacketMirroringsClient::~PacketMirroringsClient() = default;

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::PacketMirroringsScopedList>>
PacketMirroringsClient::AggregatedListPacketMirrorings(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::packet_mirrorings::v1::
      AggregatedListPacketMirroringsRequest request;
  request.set_project(project);
  return connection_->AggregatedListPacketMirrorings(request);
}

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::PacketMirroringsScopedList>>
PacketMirroringsClient::AggregatedListPacketMirrorings(
    google::cloud::cpp::compute::packet_mirrorings::v1::
        AggregatedListPacketMirroringsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListPacketMirrorings(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PacketMirroringsClient::DeletePacketMirroring(
    std::string const& project, std::string const& region,
    std::string const& packet_mirroring, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::packet_mirrorings::v1::
      DeletePacketMirroringRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_packet_mirroring(packet_mirroring);
  return connection_->DeletePacketMirroring(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PacketMirroringsClient::DeletePacketMirroring(
    NoAwaitTag, std::string const& project, std::string const& region,
    std::string const& packet_mirroring, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::packet_mirrorings::v1::
      DeletePacketMirroringRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_packet_mirroring(packet_mirroring);
  return connection_->DeletePacketMirroring(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PacketMirroringsClient::DeletePacketMirroring(
    google::cloud::cpp::compute::packet_mirrorings::v1::
        DeletePacketMirroringRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePacketMirroring(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PacketMirroringsClient::DeletePacketMirroring(
    NoAwaitTag,
    google::cloud::cpp::compute::packet_mirrorings::v1::
        DeletePacketMirroringRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePacketMirroring(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PacketMirroringsClient::DeletePacketMirroring(
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePacketMirroring(operation);
}

StatusOr<google::cloud::cpp::compute::v1::PacketMirroring>
PacketMirroringsClient::GetPacketMirroring(std::string const& project,
                                           std::string const& region,
                                           std::string const& packet_mirroring,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::packet_mirrorings::v1::GetPacketMirroringRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_packet_mirroring(packet_mirroring);
  return connection_->GetPacketMirroring(request);
}

StatusOr<google::cloud::cpp::compute::v1::PacketMirroring>
PacketMirroringsClient::GetPacketMirroring(
    google::cloud::cpp::compute::packet_mirrorings::v1::
        GetPacketMirroringRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetPacketMirroring(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PacketMirroringsClient::InsertPacketMirroring(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::PacketMirroring const&
        packet_mirroring_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::packet_mirrorings::v1::
      InsertPacketMirroringRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_packet_mirroring_resource() = packet_mirroring_resource;
  return connection_->InsertPacketMirroring(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PacketMirroringsClient::InsertPacketMirroring(
    NoAwaitTag, std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::PacketMirroring const&
        packet_mirroring_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::packet_mirrorings::v1::
      InsertPacketMirroringRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_packet_mirroring_resource() = packet_mirroring_resource;
  return connection_->InsertPacketMirroring(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PacketMirroringsClient::InsertPacketMirroring(
    google::cloud::cpp::compute::packet_mirrorings::v1::
        InsertPacketMirroringRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertPacketMirroring(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PacketMirroringsClient::InsertPacketMirroring(
    NoAwaitTag,
    google::cloud::cpp::compute::packet_mirrorings::v1::
        InsertPacketMirroringRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertPacketMirroring(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PacketMirroringsClient::InsertPacketMirroring(
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertPacketMirroring(operation);
}

StreamRange<google::cloud::cpp::compute::v1::PacketMirroring>
PacketMirroringsClient::ListPacketMirrorings(std::string const& project,
                                             std::string const& region,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::packet_mirrorings::v1::
      ListPacketMirroringsRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListPacketMirrorings(request);
}

StreamRange<google::cloud::cpp::compute::v1::PacketMirroring>
PacketMirroringsClient::ListPacketMirrorings(
    google::cloud::cpp::compute::packet_mirrorings::v1::
        ListPacketMirroringsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListPacketMirrorings(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PacketMirroringsClient::PatchPacketMirroring(
    std::string const& project, std::string const& region,
    std::string const& packet_mirroring,
    google::cloud::cpp::compute::v1::PacketMirroring const&
        packet_mirroring_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::packet_mirrorings::v1::
      PatchPacketMirroringRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_packet_mirroring(packet_mirroring);
  *request.mutable_packet_mirroring_resource() = packet_mirroring_resource;
  return connection_->PatchPacketMirroring(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PacketMirroringsClient::PatchPacketMirroring(
    NoAwaitTag, std::string const& project, std::string const& region,
    std::string const& packet_mirroring,
    google::cloud::cpp::compute::v1::PacketMirroring const&
        packet_mirroring_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::packet_mirrorings::v1::
      PatchPacketMirroringRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_packet_mirroring(packet_mirroring);
  *request.mutable_packet_mirroring_resource() = packet_mirroring_resource;
  return connection_->PatchPacketMirroring(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PacketMirroringsClient::PatchPacketMirroring(
    google::cloud::cpp::compute::packet_mirrorings::v1::
        PatchPacketMirroringRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchPacketMirroring(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PacketMirroringsClient::PatchPacketMirroring(
    NoAwaitTag,
    google::cloud::cpp::compute::packet_mirrorings::v1::
        PatchPacketMirroringRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchPacketMirroring(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PacketMirroringsClient::PatchPacketMirroring(
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchPacketMirroring(operation);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
PacketMirroringsClient::TestIamPermissions(
    std::string const& project, std::string const& region,
    std::string const& resource,
    google::cloud::cpp::compute::v1::TestPermissionsRequest const&
        test_permissions_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::packet_mirrorings::v1::TestIamPermissionsRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_test_permissions_request_resource() =
      test_permissions_request_resource;
  return connection_->TestIamPermissions(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
PacketMirroringsClient::TestIamPermissions(
    google::cloud::cpp::compute::packet_mirrorings::v1::
        TestIamPermissionsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_packet_mirrorings_v1
}  // namespace cloud
}  // namespace google
