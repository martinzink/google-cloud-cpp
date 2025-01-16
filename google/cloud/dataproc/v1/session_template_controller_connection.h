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
// source: google/cloud/dataproc/v1/session_templates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_SESSION_TEMPLATE_CONTROLLER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_SESSION_TEMPLATE_CONTROLLER_CONNECTION_H

#include "google/cloud/dataproc/v1/internal/session_template_controller_retry_traits.h"
#include "google/cloud/dataproc/v1/session_template_controller_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/dataproc/v1/session_templates.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `SessionTemplateControllerConnection`.
class SessionTemplateControllerRetryPolicy
    : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<SessionTemplateControllerRetryPolicy> clone()
      const = 0;
};

/**
 * A retry policy for `SessionTemplateControllerConnection` based on counting
 * errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SessionTemplateControllerLimitedErrorCountRetryPolicy
    : public SessionTemplateControllerRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit SessionTemplateControllerLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  SessionTemplateControllerLimitedErrorCountRetryPolicy(
      SessionTemplateControllerLimitedErrorCountRetryPolicy&& rhs) noexcept
      : SessionTemplateControllerLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  SessionTemplateControllerLimitedErrorCountRetryPolicy(
      SessionTemplateControllerLimitedErrorCountRetryPolicy const& rhs) noexcept
      : SessionTemplateControllerLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<SessionTemplateControllerRetryPolicy> clone() const override {
    return std::make_unique<
        SessionTemplateControllerLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SessionTemplateControllerRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      dataproc_v1_internal::SessionTemplateControllerRetryTraits>
      impl_;
};

/**
 * A retry policy for `SessionTemplateControllerConnection` based on elapsed
 * time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SessionTemplateControllerLimitedTimeRetryPolicy
    : public SessionTemplateControllerRetryPolicy {
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
  explicit SessionTemplateControllerLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  SessionTemplateControllerLimitedTimeRetryPolicy(
      SessionTemplateControllerLimitedTimeRetryPolicy&& rhs) noexcept
      : SessionTemplateControllerLimitedTimeRetryPolicy(
            rhs.maximum_duration()) {}
  SessionTemplateControllerLimitedTimeRetryPolicy(
      SessionTemplateControllerLimitedTimeRetryPolicy const& rhs) noexcept
      : SessionTemplateControllerLimitedTimeRetryPolicy(
            rhs.maximum_duration()) {}

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
  std::unique_ptr<SessionTemplateControllerRetryPolicy> clone() const override {
    return std::make_unique<SessionTemplateControllerLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SessionTemplateControllerRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      dataproc_v1_internal::SessionTemplateControllerRetryTraits>
      impl_;
};

/**
 * The `SessionTemplateControllerConnection` object for
 * `SessionTemplateControllerClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `SessionTemplateControllerClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `SessionTemplateControllerClient`.
 *
 * To create a concrete instance, see
 * `MakeSessionTemplateControllerConnection()`.
 *
 * For mocking, see
 * `dataproc_v1_mocks::MockSessionTemplateControllerConnection`.
 */
class SessionTemplateControllerConnection {
 public:
  virtual ~SessionTemplateControllerConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::dataproc::v1::SessionTemplate>
  CreateSessionTemplate(
      google::cloud::dataproc::v1::CreateSessionTemplateRequest const& request);

  virtual StatusOr<google::cloud::dataproc::v1::SessionTemplate>
  UpdateSessionTemplate(
      google::cloud::dataproc::v1::UpdateSessionTemplateRequest const& request);

  virtual StatusOr<google::cloud::dataproc::v1::SessionTemplate>
  GetSessionTemplate(
      google::cloud::dataproc::v1::GetSessionTemplateRequest const& request);

  virtual StreamRange<google::cloud::dataproc::v1::SessionTemplate>
  ListSessionTemplates(
      google::cloud::dataproc::v1::ListSessionTemplatesRequest request);

  virtual Status DeleteSessionTemplate(
      google::cloud::dataproc::v1::DeleteSessionTemplateRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `SessionTemplateControllerConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * SessionTemplateControllerClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `SessionTemplateControllerConnection`. Expected options are any of
 * the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dataproc_v1::SessionTemplateControllerPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `SessionTemplateControllerConnection`
 * created by this function.
 */
std::shared_ptr<SessionTemplateControllerConnection>
MakeSessionTemplateControllerConnection(std::string const& location,
                                        Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_SESSION_TEMPLATE_CONTROLLER_CONNECTION_H
