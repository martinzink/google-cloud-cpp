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
// source: google/cloud/bigquery/analyticshub/v1/analyticshub.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICSHUB_V1_ANALYTICS_HUB_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICSHUB_V1_ANALYTICS_HUB_CONNECTION_H

#include "google/cloud/bigquery/analyticshub/v1/analytics_hub_connection_idempotency_policy.h"
#include "google/cloud/bigquery/analyticshub/v1/internal/analytics_hub_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/analyticshub/v1/analyticshub.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_analyticshub_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `AnalyticsHubServiceConnection`.
class AnalyticsHubServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<AnalyticsHubServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `AnalyticsHubServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class AnalyticsHubServiceLimitedErrorCountRetryPolicy
    : public AnalyticsHubServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit AnalyticsHubServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  AnalyticsHubServiceLimitedErrorCountRetryPolicy(
      AnalyticsHubServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : AnalyticsHubServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  AnalyticsHubServiceLimitedErrorCountRetryPolicy(
      AnalyticsHubServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : AnalyticsHubServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<AnalyticsHubServiceRetryPolicy> clone() const override {
    return std::make_unique<AnalyticsHubServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = AnalyticsHubServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      bigquery_analyticshub_v1_internal::AnalyticsHubServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `AnalyticsHubServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class AnalyticsHubServiceLimitedTimeRetryPolicy
    : public AnalyticsHubServiceRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit AnalyticsHubServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  AnalyticsHubServiceLimitedTimeRetryPolicy(
      AnalyticsHubServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : AnalyticsHubServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  AnalyticsHubServiceLimitedTimeRetryPolicy(
      AnalyticsHubServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : AnalyticsHubServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<AnalyticsHubServiceRetryPolicy> clone() const override {
    return std::make_unique<AnalyticsHubServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = AnalyticsHubServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      bigquery_analyticshub_v1_internal::AnalyticsHubServiceRetryTraits>
      impl_;
};

/**
 * The `AnalyticsHubServiceConnection` object for `AnalyticsHubServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `AnalyticsHubServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `AnalyticsHubServiceClient`.
 *
 * To create a concrete instance, see `MakeAnalyticsHubServiceConnection()`.
 *
 * For mocking, see
 * `bigquery_analyticshub_v1_mocks::MockAnalyticsHubServiceConnection`.
 */
class AnalyticsHubServiceConnection {
 public:
  virtual ~AnalyticsHubServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>
  ListDataExchanges(
      google::cloud::bigquery::analyticshub::v1::ListDataExchangesRequest
          request);

  virtual StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>
  ListOrgDataExchanges(
      google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesRequest
          request);

  virtual StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  GetDataExchange(
      google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest const&
          request);

  virtual StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  CreateDataExchange(google::cloud::bigquery::analyticshub::v1::
                         CreateDataExchangeRequest const& request);

  virtual StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  UpdateDataExchange(google::cloud::bigquery::analyticshub::v1::
                         UpdateDataExchangeRequest const& request);

  virtual Status DeleteDataExchange(
      google::cloud::bigquery::analyticshub::v1::
          DeleteDataExchangeRequest const& request);

  virtual StreamRange<google::cloud::bigquery::analyticshub::v1::Listing>
  ListListings(
      google::cloud::bigquery::analyticshub::v1::ListListingsRequest request);

  virtual StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
  GetListing(google::cloud::bigquery::analyticshub::v1::GetListingRequest const&
                 request);

  virtual StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
  CreateListing(
      google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&
          request);

  virtual StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
  UpdateListing(
      google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&
          request);

  virtual Status DeleteListing(
      google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&
          request);

  virtual StatusOr<
      google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse>
  SubscribeListing(
      google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest const&
          request);

  virtual future<StatusOr<
      google::cloud::bigquery::analyticshub::v1::SubscribeDataExchangeResponse>>
  SubscribeDataExchange(google::cloud::bigquery::analyticshub::v1::
                            SubscribeDataExchangeRequest const& request);

  virtual StatusOr<google::longrunning::Operation> SubscribeDataExchange(
      NoAwaitTag, google::cloud::bigquery::analyticshub::v1::
                      SubscribeDataExchangeRequest const& request);

  virtual future<StatusOr<
      google::cloud::bigquery::analyticshub::v1::SubscribeDataExchangeResponse>>
  SubscribeDataExchange(google::longrunning::Operation const& operation);

  virtual future<StatusOr<
      google::cloud::bigquery::analyticshub::v1::RefreshSubscriptionResponse>>
  RefreshSubscription(google::cloud::bigquery::analyticshub::v1::
                          RefreshSubscriptionRequest const& request);

  virtual StatusOr<google::longrunning::Operation> RefreshSubscription(
      NoAwaitTag, google::cloud::bigquery::analyticshub::v1::
                      RefreshSubscriptionRequest const& request);

  virtual future<StatusOr<
      google::cloud::bigquery::analyticshub::v1::RefreshSubscriptionResponse>>
  RefreshSubscription(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::bigquery::analyticshub::v1::Subscription>
  GetSubscription(
      google::cloud::bigquery::analyticshub::v1::GetSubscriptionRequest const&
          request);

  virtual StreamRange<google::cloud::bigquery::analyticshub::v1::Subscription>
  ListSubscriptions(
      google::cloud::bigquery::analyticshub::v1::ListSubscriptionsRequest
          request);

  virtual StreamRange<google::cloud::bigquery::analyticshub::v1::Subscription>
  ListSharedResourceSubscriptions(
      google::cloud::bigquery::analyticshub::v1::
          ListSharedResourceSubscriptionsRequest request);

  virtual StatusOr<
      google::cloud::bigquery::analyticshub::v1::RevokeSubscriptionResponse>
  RevokeSubscription(google::cloud::bigquery::analyticshub::v1::
                         RevokeSubscriptionRequest const& request);

  virtual future<
      StatusOr<google::cloud::bigquery::analyticshub::v1::OperationMetadata>>
  DeleteSubscription(google::cloud::bigquery::analyticshub::v1::
                         DeleteSubscriptionRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteSubscription(
      NoAwaitTag, google::cloud::bigquery::analyticshub::v1::
                      DeleteSubscriptionRequest const& request);

  virtual future<
      StatusOr<google::cloud::bigquery::analyticshub::v1::OperationMetadata>>
  DeleteSubscription(google::longrunning::Operation const& operation);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `AnalyticsHubServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * AnalyticsHubServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `AnalyticsHubServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * -
 * `google::cloud::bigquery_analyticshub_v1::AnalyticsHubServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `AnalyticsHubServiceConnection`
 * created by this function.
 */
std::shared_ptr<AnalyticsHubServiceConnection>
MakeAnalyticsHubServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_analyticshub_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICSHUB_V1_ANALYTICS_HUB_CONNECTION_H
