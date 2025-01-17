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
// source: google/cloud/scheduler/v1/cloudscheduler.proto

#include "google/cloud/scheduler/cloud_scheduler_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace scheduler {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

CloudSchedulerConnectionIdempotencyPolicy::
    ~CloudSchedulerConnectionIdempotencyPolicy() = default;

namespace {
class DefaultCloudSchedulerConnectionIdempotencyPolicy
    : public CloudSchedulerConnectionIdempotencyPolicy {
 public:
  ~DefaultCloudSchedulerConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<CloudSchedulerConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<DefaultCloudSchedulerConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency ListJobs(google::cloud::scheduler::v1::ListJobsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetJob(
      google::cloud::scheduler::v1::GetJobRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateJob(
      google::cloud::scheduler::v1::CreateJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateJob(
      google::cloud::scheduler::v1::UpdateJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteJob(
      google::cloud::scheduler::v1::DeleteJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency PauseJob(
      google::cloud::scheduler::v1::PauseJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ResumeJob(
      google::cloud::scheduler::v1::ResumeJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency RunJob(
      google::cloud::scheduler::v1::RunJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<CloudSchedulerConnectionIdempotencyPolicy>
MakeDefaultCloudSchedulerConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultCloudSchedulerConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace scheduler
}  // namespace cloud
}  // namespace google
