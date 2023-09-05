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

#include "google/cloud/recommender/v1/internal/recommender_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/recommender/v1/recommender_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace recommender_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RecommenderMetadata::RecommenderMetadata(
    std::shared_ptr<RecommenderStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::recommender::v1::ListInsightsResponse>
RecommenderMetadata::ListInsights(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::ListInsightsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListInsights(context, request);
}

StatusOr<google::cloud::recommender::v1::Insight>
RecommenderMetadata::GetInsight(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::GetInsightRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetInsight(context, request);
}

StatusOr<google::cloud::recommender::v1::Insight>
RecommenderMetadata::MarkInsightAccepted(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::MarkInsightAcceptedRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->MarkInsightAccepted(context, request);
}

StatusOr<google::cloud::recommender::v1::ListRecommendationsResponse>
RecommenderMetadata::ListRecommendations(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::ListRecommendationsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRecommendations(context, request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderMetadata::GetRecommendation(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::GetRecommendationRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRecommendation(context, request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderMetadata::MarkRecommendationDismissed(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::MarkRecommendationDismissedRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->MarkRecommendationDismissed(context, request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderMetadata::MarkRecommendationClaimed(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::MarkRecommendationClaimedRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->MarkRecommendationClaimed(context, request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderMetadata::MarkRecommendationSucceeded(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::MarkRecommendationSucceededRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->MarkRecommendationSucceeded(context, request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderMetadata::MarkRecommendationFailed(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::MarkRecommendationFailedRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->MarkRecommendationFailed(context, request);
}

StatusOr<google::cloud::recommender::v1::RecommenderConfig>
RecommenderMetadata::GetRecommenderConfig(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::GetRecommenderConfigRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRecommenderConfig(context, request);
}

StatusOr<google::cloud::recommender::v1::RecommenderConfig>
RecommenderMetadata::UpdateRecommenderConfig(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::UpdateRecommenderConfigRequest const&
        request) {
  SetMetadata(
      context,
      absl::StrCat("recommender_config.name=",
                   internal::UrlEncode(request.recommender_config().name())));
  return child_->UpdateRecommenderConfig(context, request);
}

StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
RecommenderMetadata::GetInsightTypeConfig(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::GetInsightTypeConfigRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetInsightTypeConfig(context, request);
}

StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
RecommenderMetadata::UpdateInsightTypeConfig(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::UpdateInsightTypeConfigRequest const&
        request) {
  SetMetadata(
      context,
      absl::StrCat("insight_type_config.name=",
                   internal::UrlEncode(request.insight_type_config().name())));
  return child_->UpdateInsightTypeConfig(context, request);
}

void RecommenderMetadata::SetMetadata(grpc::ClientContext& context,
                                      std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void RecommenderMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recommender_v1_internal
}  // namespace cloud
}  // namespace google
