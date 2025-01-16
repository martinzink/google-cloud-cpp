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
// google/cloud/compute/instance_group_managers/v1/instance_group_managers.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGERS_V1_INSTANCE_GROUP_MANAGERS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGERS_V1_INSTANCE_GROUP_MANAGERS_CONNECTION_H

#include "google/cloud/compute/instance_group_managers/v1/instance_group_managers_connection_idempotency_policy.h"
#include "google/cloud/compute/instance_group_managers/v1/internal/instance_group_managers_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/instance_group_managers/v1/instance_group_managers.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_group_managers_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `InstanceGroupManagersConnection`.
class InstanceGroupManagersRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<InstanceGroupManagersRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `InstanceGroupManagersConnection` based on counting
 * errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class InstanceGroupManagersLimitedErrorCountRetryPolicy
    : public InstanceGroupManagersRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit InstanceGroupManagersLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  InstanceGroupManagersLimitedErrorCountRetryPolicy(
      InstanceGroupManagersLimitedErrorCountRetryPolicy&& rhs) noexcept
      : InstanceGroupManagersLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  InstanceGroupManagersLimitedErrorCountRetryPolicy(
      InstanceGroupManagersLimitedErrorCountRetryPolicy const& rhs) noexcept
      : InstanceGroupManagersLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<InstanceGroupManagersRetryPolicy> clone() const override {
    return std::make_unique<InstanceGroupManagersLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = InstanceGroupManagersRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_instance_group_managers_v1_internal::
          InstanceGroupManagersRetryTraits>
      impl_;
};

/**
 * A retry policy for `InstanceGroupManagersConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class InstanceGroupManagersLimitedTimeRetryPolicy
    : public InstanceGroupManagersRetryPolicy {
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
  explicit InstanceGroupManagersLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  InstanceGroupManagersLimitedTimeRetryPolicy(
      InstanceGroupManagersLimitedTimeRetryPolicy&& rhs) noexcept
      : InstanceGroupManagersLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  InstanceGroupManagersLimitedTimeRetryPolicy(
      InstanceGroupManagersLimitedTimeRetryPolicy const& rhs) noexcept
      : InstanceGroupManagersLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<InstanceGroupManagersRetryPolicy> clone() const override {
    return std::make_unique<InstanceGroupManagersLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = InstanceGroupManagersRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_instance_group_managers_v1_internal::
          InstanceGroupManagersRetryTraits>
      impl_;
};

/**
 * The `InstanceGroupManagersConnection` object for
 * `InstanceGroupManagersClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `InstanceGroupManagersClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `InstanceGroupManagersClient`.
 *
 * To create a concrete instance, see `MakeInstanceGroupManagersConnection()`.
 *
 * For mocking, see
 * `compute_instance_group_managers_v1_mocks::MockInstanceGroupManagersConnection`.
 */
class InstanceGroupManagersConnection {
 public:
  virtual ~InstanceGroupManagersConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AbandonInstances(google::cloud::cpp::compute::instance_group_managers::v1::
                       AbandonInstancesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> AbandonInstances(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      AbandonInstancesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AbandonInstances(google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StreamRange<std::pair<
      std::string,
      google::cloud::cpp::compute::v1::InstanceGroupManagersScopedList>>
  AggregatedListInstanceGroupManagers(
      google::cloud::cpp::compute::instance_group_managers::v1::
          AggregatedListInstanceGroupManagersRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  ApplyUpdatesToInstances(
      google::cloud::cpp::compute::instance_group_managers::v1::
          ApplyUpdatesToInstancesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  ApplyUpdatesToInstances(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      ApplyUpdatesToInstancesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  ApplyUpdatesToInstances(
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  CreateInstances(google::cloud::cpp::compute::instance_group_managers::v1::
                      CreateInstancesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> CreateInstances(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      CreateInstancesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  CreateInstances(google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInstanceGroupManager(
      google::cloud::cpp::compute::instance_group_managers::v1::
          DeleteInstanceGroupManagerRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteInstanceGroupManager(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      DeleteInstanceGroupManagerRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInstanceGroupManager(
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInstances(google::cloud::cpp::compute::instance_group_managers::v1::
                      DeleteInstancesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteInstances(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      DeleteInstancesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInstances(google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePerInstanceConfigs(
      google::cloud::cpp::compute::instance_group_managers::v1::
          DeletePerInstanceConfigsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeletePerInstanceConfigs(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      DeletePerInstanceConfigsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePerInstanceConfigs(
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>
  GetInstanceGroupManager(
      google::cloud::cpp::compute::instance_group_managers::v1::
          GetInstanceGroupManagerRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertInstanceGroupManager(
      google::cloud::cpp::compute::instance_group_managers::v1::
          InsertInstanceGroupManagerRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertInstanceGroupManager(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      InsertInstanceGroupManagerRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertInstanceGroupManager(
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StreamRange<google::cloud::cpp::compute::v1::InstanceGroupManager>
  ListInstanceGroupManagers(
      google::cloud::cpp::compute::instance_group_managers::v1::
          ListInstanceGroupManagersRequest request);

  virtual StreamRange<
      google::cloud::cpp::compute::v1::InstanceManagedByIgmError>
  ListErrors(google::cloud::cpp::compute::instance_group_managers::v1::
                 ListErrorsRequest request);

  virtual StatusOr<google::cloud::cpp::compute::v1::
                       InstanceGroupManagersListManagedInstancesResponse>
  ListManagedInstances(google::cloud::cpp::compute::instance_group_managers::
                           v1::ListManagedInstancesRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::PerInstanceConfig>
  ListPerInstanceConfigs(google::cloud::cpp::compute::instance_group_managers::
                             v1::ListPerInstanceConfigsRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchInstanceGroupManager(
      google::cloud::cpp::compute::instance_group_managers::v1::
          PatchInstanceGroupManagerRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchInstanceGroupManager(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      PatchInstanceGroupManagerRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchInstanceGroupManager(
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPerInstanceConfigs(
      google::cloud::cpp::compute::instance_group_managers::v1::
          PatchPerInstanceConfigsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchPerInstanceConfigs(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      PatchPerInstanceConfigsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPerInstanceConfigs(
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RecreateInstances(google::cloud::cpp::compute::instance_group_managers::v1::
                        RecreateInstancesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  RecreateInstances(NoAwaitTag,
                    google::cloud::cpp::compute::instance_group_managers::v1::
                        RecreateInstancesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RecreateInstances(
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Resize(
      google::cloud::cpp::compute::instance_group_managers::v1::
          ResizeRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> Resize(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      ResizeRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Resize(
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  ResumeInstances(google::cloud::cpp::compute::instance_group_managers::v1::
                      ResumeInstancesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> ResumeInstances(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      ResumeInstancesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  ResumeInstances(google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetInstanceTemplate(google::cloud::cpp::compute::instance_group_managers::v1::
                          SetInstanceTemplateRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetInstanceTemplate(NoAwaitTag,
                      google::cloud::cpp::compute::instance_group_managers::v1::
                          SetInstanceTemplateRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetInstanceTemplate(
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetTargetPools(google::cloud::cpp::compute::instance_group_managers::v1::
                     SetTargetPoolsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> SetTargetPools(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      SetTargetPoolsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetTargetPools(google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StartInstances(google::cloud::cpp::compute::instance_group_managers::v1::
                     StartInstancesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> StartInstances(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      StartInstancesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StartInstances(google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StopInstances(google::cloud::cpp::compute::instance_group_managers::v1::
                    StopInstancesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> StopInstances(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      StopInstancesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StopInstances(google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SuspendInstances(google::cloud::cpp::compute::instance_group_managers::v1::
                       SuspendInstancesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> SuspendInstances(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      SuspendInstancesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SuspendInstances(google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdatePerInstanceConfigs(
      google::cloud::cpp::compute::instance_group_managers::v1::
          UpdatePerInstanceConfigsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  UpdatePerInstanceConfigs(
      NoAwaitTag, google::cloud::cpp::compute::instance_group_managers::v1::
                      UpdatePerInstanceConfigsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdatePerInstanceConfigs(
      google::cloud::cpp::compute::v1::Operation const& operation);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_group_managers_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGERS_V1_INSTANCE_GROUP_MANAGERS_CONNECTION_H
