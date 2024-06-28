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
// source: generator/integration_tests/test2.proto

#include "generator/integration_tests/golden/v1/internal/golden_rest_only_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <generator/integration_tests/test2.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultGoldenRestOnlyRestStub::DefaultGoldenRestOnlyRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultGoldenRestOnlyRestStub::DefaultGoldenRestOnlyRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    Options options)
    : service_(std::move(service)),
      options_(std::move(options)) {}

Status DefaultGoldenRestOnlyRestStub::Noop(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::protobuf::Empty const& request) {
  return rest_internal::Post<google::cloud::rest_internal::EmptyResponseType>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/noop"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google
