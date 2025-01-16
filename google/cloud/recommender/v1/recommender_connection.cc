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
// source: google/cloud/recommender/v1/recommender_service.proto

#include "google/cloud/recommender/v1/recommender_connection.h"
#include "google/cloud/recommender/v1/internal/recommender_connection_impl.h"
#include "google/cloud/recommender/v1/internal/recommender_option_defaults.h"
#include "google/cloud/recommender/v1/internal/recommender_stub_factory.h"
#include "google/cloud/recommender/v1/internal/recommender_tracing_connection.h"
#include "google/cloud/recommender/v1/recommender_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace recommender_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RecommenderConnection::~RecommenderConnection() = default;

StreamRange<google::cloud::recommender::v1::Insight>
RecommenderConnection::ListInsights(
    google::cloud::recommender::v1::
        ListInsightsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::recommender::v1::Insight>>();
}

StatusOr<google::cloud::recommender::v1::Insight>
RecommenderConnection::GetInsight(
    google::cloud::recommender::v1::GetInsightRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recommender::v1::Insight>
RecommenderConnection::MarkInsightAccepted(
    google::cloud::recommender::v1::MarkInsightAcceptedRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::recommender::v1::Recommendation>
RecommenderConnection::ListRecommendations(
    google::cloud::recommender::v1::
        ListRecommendationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::recommender::v1::Recommendation>>();
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderConnection::GetRecommendation(
    google::cloud::recommender::v1::GetRecommendationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderConnection::MarkRecommendationDismissed(
    google::cloud::recommender::v1::MarkRecommendationDismissedRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderConnection::MarkRecommendationClaimed(
    google::cloud::recommender::v1::MarkRecommendationClaimedRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderConnection::MarkRecommendationSucceeded(
    google::cloud::recommender::v1::MarkRecommendationSucceededRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderConnection::MarkRecommendationFailed(
    google::cloud::recommender::v1::MarkRecommendationFailedRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recommender::v1::RecommenderConfig>
RecommenderConnection::GetRecommenderConfig(
    google::cloud::recommender::v1::GetRecommenderConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recommender::v1::RecommenderConfig>
RecommenderConnection::UpdateRecommenderConfig(
    google::cloud::recommender::v1::UpdateRecommenderConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
RecommenderConnection::GetInsightTypeConfig(
    google::cloud::recommender::v1::GetInsightTypeConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
RecommenderConnection::UpdateInsightTypeConfig(
    google::cloud::recommender::v1::UpdateInsightTypeConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<RecommenderConnection> MakeRecommenderConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 RecommenderPolicyOptionList>(options,
                                                              __func__);
  options =
      recommender_v1_internal::RecommenderDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = recommender_v1_internal::CreateDefaultRecommenderStub(
      std::move(auth), options);
  return recommender_v1_internal::MakeRecommenderTracingConnection(
      std::make_shared<recommender_v1_internal::RecommenderConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recommender_v1
}  // namespace cloud
}  // namespace google
