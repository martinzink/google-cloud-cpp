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
// google/cloud/compute/interconnect_locations/v1/interconnect_locations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_LOCATIONS_V1_INTERNAL_INTERCONNECT_LOCATIONS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_LOCATIONS_V1_INTERNAL_INTERCONNECT_LOCATIONS_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/interconnect_locations/v1/internal/interconnect_locations_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/interconnect_locations/v1/interconnect_locations.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_interconnect_locations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InterconnectLocationsRestMetadata : public InterconnectLocationsRestStub {
 public:
  ~InterconnectLocationsRestMetadata() override = default;
  explicit InterconnectLocationsRestMetadata(
      std::shared_ptr<InterconnectLocationsRestStub> child,
      std::string api_client_header = "");

  StatusOr<google::cloud::cpp::compute::v1::InterconnectLocation>
  GetInterconnectLocation(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_locations::v1::
          GetInterconnectLocationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InterconnectLocationList>
  ListInterconnectLocations(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_locations::v1::
          ListInterconnectLocationsRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   Options const& options,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<InterconnectLocationsRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_locations_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_LOCATIONS_V1_INTERNAL_INTERCONNECT_LOCATIONS_REST_METADATA_DECORATOR_H
