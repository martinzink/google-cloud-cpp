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
// source: google/cloud/aiplatform/v1/feature_online_store_admin_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURE_ONLINE_STORE_ADMIN_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURE_ONLINE_STORE_ADMIN_CONNECTION_IMPL_H

#include "google/cloud/aiplatform/v1/feature_online_store_admin_connection.h"
#include "google/cloud/aiplatform/v1/feature_online_store_admin_connection_idempotency_policy.h"
#include "google/cloud/aiplatform/v1/feature_online_store_admin_options.h"
#include "google/cloud/aiplatform/v1/internal/feature_online_store_admin_retry_traits.h"
#include "google/cloud/aiplatform/v1/internal/feature_online_store_admin_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class FeatureOnlineStoreAdminServiceConnectionImpl
    : public aiplatform_v1::FeatureOnlineStoreAdminServiceConnection {
 public:
  ~FeatureOnlineStoreAdminServiceConnectionImpl() override = default;

  FeatureOnlineStoreAdminServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          aiplatform_v1_internal::FeatureOnlineStoreAdminServiceStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>>
  CreateFeatureOnlineStore(
      google::cloud::aiplatform::v1::CreateFeatureOnlineStoreRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateFeatureOnlineStore(
      NoAwaitTag,
      google::cloud::aiplatform::v1::CreateFeatureOnlineStoreRequest const&
          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>>
  CreateFeatureOnlineStore(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>
  GetFeatureOnlineStore(
      google::cloud::aiplatform::v1::GetFeatureOnlineStoreRequest const&
          request) override;

  StreamRange<google::cloud::aiplatform::v1::FeatureOnlineStore>
  ListFeatureOnlineStores(
      google::cloud::aiplatform::v1::ListFeatureOnlineStoresRequest request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>>
  UpdateFeatureOnlineStore(
      google::cloud::aiplatform::v1::UpdateFeatureOnlineStoreRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateFeatureOnlineStore(
      NoAwaitTag,
      google::cloud::aiplatform::v1::UpdateFeatureOnlineStoreRequest const&
          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>>
  UpdateFeatureOnlineStore(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeatureOnlineStore(
      google::cloud::aiplatform::v1::DeleteFeatureOnlineStoreRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteFeatureOnlineStore(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteFeatureOnlineStoreRequest const&
          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeatureOnlineStore(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::FeatureView>>
  CreateFeatureView(
      google::cloud::aiplatform::v1::CreateFeatureViewRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateFeatureView(
      NoAwaitTag,
      google::cloud::aiplatform::v1::CreateFeatureViewRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::FeatureView>>
  CreateFeatureView(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::FeatureView> GetFeatureView(
      google::cloud::aiplatform::v1::GetFeatureViewRequest const& request)
      override;

  StreamRange<google::cloud::aiplatform::v1::FeatureView> ListFeatureViews(
      google::cloud::aiplatform::v1::ListFeatureViewsRequest request) override;

  future<StatusOr<google::cloud::aiplatform::v1::FeatureView>>
  UpdateFeatureView(
      google::cloud::aiplatform::v1::UpdateFeatureViewRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateFeatureView(
      NoAwaitTag,
      google::cloud::aiplatform::v1::UpdateFeatureViewRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::FeatureView>>
  UpdateFeatureView(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeatureView(
      google::cloud::aiplatform::v1::DeleteFeatureViewRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteFeatureView(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteFeatureViewRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeatureView(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::SyncFeatureViewResponse>
  SyncFeatureView(google::cloud::aiplatform::v1::SyncFeatureViewRequest const&
                      request) override;

  StatusOr<google::cloud::aiplatform::v1::FeatureViewSync> GetFeatureViewSync(
      google::cloud::aiplatform::v1::GetFeatureViewSyncRequest const& request)
      override;

  StreamRange<google::cloud::aiplatform::v1::FeatureViewSync>
  ListFeatureViewSyncs(
      google::cloud::aiplatform::v1::ListFeatureViewSyncsRequest request)
      override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

  StatusOr<google::longrunning::Operation> WaitOperation(
      google::longrunning::WaitOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<aiplatform_v1_internal::FeatureOnlineStoreAdminServiceStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURE_ONLINE_STORE_ADMIN_CONNECTION_IMPL_H
