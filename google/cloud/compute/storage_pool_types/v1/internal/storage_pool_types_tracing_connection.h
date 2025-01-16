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
// source: google/cloud/compute/storage_pool_types/v1/storage_pool_types.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_STORAGE_POOL_TYPES_V1_INTERNAL_STORAGE_POOL_TYPES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_STORAGE_POOL_TYPES_V1_INTERNAL_STORAGE_POOL_TYPES_TRACING_CONNECTION_H

#include "google/cloud/compute/storage_pool_types/v1/storage_pool_types_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_storage_pool_types_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class StoragePoolTypesTracingConnection
    : public compute_storage_pool_types_v1::StoragePoolTypesConnection {
 public:
  ~StoragePoolTypesTracingConnection() override = default;

  explicit StoragePoolTypesTracingConnection(
      std::shared_ptr<compute_storage_pool_types_v1::StoragePoolTypesConnection>
          child);

  Options options() override { return child_->options(); }

  StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::StoragePoolTypesScopedList>>
  AggregatedListStoragePoolTypes(
      google::cloud::cpp::compute::storage_pool_types::v1::
          AggregatedListStoragePoolTypesRequest request) override;

  StatusOr<google::cloud::cpp::compute::v1::StoragePoolType> GetStoragePoolType(
      google::cloud::cpp::compute::storage_pool_types::v1::
          GetStoragePoolTypeRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::StoragePoolType>
  ListStoragePoolTypes(google::cloud::cpp::compute::storage_pool_types::v1::
                           ListStoragePoolTypesRequest request) override;

 private:
  std::shared_ptr<compute_storage_pool_types_v1::StoragePoolTypesConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_storage_pool_types_v1::StoragePoolTypesConnection>
MakeStoragePoolTypesTracingConnection(
    std::shared_ptr<compute_storage_pool_types_v1::StoragePoolTypesConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_storage_pool_types_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_STORAGE_POOL_TYPES_V1_INTERNAL_STORAGE_POOL_TYPES_TRACING_CONNECTION_H
