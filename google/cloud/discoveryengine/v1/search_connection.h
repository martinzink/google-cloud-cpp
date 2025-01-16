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
// source: google/cloud/discoveryengine/v1/search_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_SEARCH_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_SEARCH_CONNECTION_H

#include "google/cloud/discoveryengine/v1/internal/search_retry_traits.h"
#include "google/cloud/discoveryengine/v1/search_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/discoveryengine/v1/search_service.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `SearchServiceConnection`.
class SearchServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<SearchServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `SearchServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SearchServiceLimitedErrorCountRetryPolicy
    : public SearchServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit SearchServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  SearchServiceLimitedErrorCountRetryPolicy(
      SearchServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : SearchServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  SearchServiceLimitedErrorCountRetryPolicy(
      SearchServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : SearchServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<SearchServiceRetryPolicy> clone() const override {
    return std::make_unique<SearchServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SearchServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      discoveryengine_v1_internal::SearchServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `SearchServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SearchServiceLimitedTimeRetryPolicy : public SearchServiceRetryPolicy {
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
  explicit SearchServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  SearchServiceLimitedTimeRetryPolicy(
      SearchServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : SearchServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  SearchServiceLimitedTimeRetryPolicy(
      SearchServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : SearchServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<SearchServiceRetryPolicy> clone() const override {
    return std::make_unique<SearchServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SearchServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      discoveryengine_v1_internal::SearchServiceRetryTraits>
      impl_;
};

/**
 * The `SearchServiceConnection` object for `SearchServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `SearchServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `SearchServiceClient`.
 *
 * To create a concrete instance, see `MakeSearchServiceConnection()`.
 *
 * For mocking, see `discoveryengine_v1_mocks::MockSearchServiceConnection`.
 */
class SearchServiceConnection {
 public:
  virtual ~SearchServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<
      google::cloud::discoveryengine::v1::SearchResponse::SearchResult>
  Search(google::cloud::discoveryengine::v1::SearchRequest request);

  virtual StreamRange<
      google::cloud::discoveryengine::v1::SearchResponse::SearchResult>
  SearchLite(google::cloud::discoveryengine::v1::SearchRequest request);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

/**
 * A factory function to construct an object of type `SearchServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of SearchServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `SearchServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::discoveryengine_v1::SearchServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `SearchServiceConnection` created by
 * this function.
 */
std::shared_ptr<SearchServiceConnection> MakeSearchServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_SEARCH_CONNECTION_H
