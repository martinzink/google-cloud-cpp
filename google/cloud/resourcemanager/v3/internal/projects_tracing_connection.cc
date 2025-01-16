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
// source: google/cloud/resourcemanager/v3/projects.proto

#include "google/cloud/resourcemanager/v3/internal/projects_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ProjectsTracingConnection::ProjectsTracingConnection(
    std::shared_ptr<resourcemanager_v3::ProjectsConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::resourcemanager::v3::Project>
ProjectsTracingConnection::GetProject(
    google::cloud::resourcemanager::v3::GetProjectRequest const& request) {
  auto span =
      internal::MakeSpan("resourcemanager_v3::ProjectsConnection::GetProject");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetProject(request));
}

StreamRange<google::cloud::resourcemanager::v3::Project>
ProjectsTracingConnection::ListProjects(
    google::cloud::resourcemanager::v3::ListProjectsRequest request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::ListProjects");
  internal::OTelScope scope(span);
  auto sr = child_->ListProjects(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::resourcemanager::v3::Project>(std::move(span),
                                                   std::move(sr));
}

StreamRange<google::cloud::resourcemanager::v3::Project>
ProjectsTracingConnection::SearchProjects(
    google::cloud::resourcemanager::v3::SearchProjectsRequest request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::SearchProjects");
  internal::OTelScope scope(span);
  auto sr = child_->SearchProjects(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::resourcemanager::v3::Project>(std::move(span),
                                                   std::move(sr));
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsTracingConnection::CreateProject(
    google::cloud::resourcemanager::v3::CreateProjectRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::CreateProject");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateProject(request));
}

StatusOr<google::longrunning::Operation>
ProjectsTracingConnection::CreateProject(
    NoAwaitTag,
    google::cloud::resourcemanager::v3::CreateProjectRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::CreateProject");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->CreateProject(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsTracingConnection::CreateProject(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::CreateProject");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateProject(operation));
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsTracingConnection::UpdateProject(
    google::cloud::resourcemanager::v3::UpdateProjectRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::UpdateProject");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateProject(request));
}

StatusOr<google::longrunning::Operation>
ProjectsTracingConnection::UpdateProject(
    NoAwaitTag,
    google::cloud::resourcemanager::v3::UpdateProjectRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::UpdateProject");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->UpdateProject(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsTracingConnection::UpdateProject(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::UpdateProject");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateProject(operation));
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsTracingConnection::MoveProject(
    google::cloud::resourcemanager::v3::MoveProjectRequest const& request) {
  auto span =
      internal::MakeSpan("resourcemanager_v3::ProjectsConnection::MoveProject");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->MoveProject(request));
}

StatusOr<google::longrunning::Operation> ProjectsTracingConnection::MoveProject(
    NoAwaitTag,
    google::cloud::resourcemanager::v3::MoveProjectRequest const& request) {
  auto span =
      internal::MakeSpan("resourcemanager_v3::ProjectsConnection::MoveProject");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->MoveProject(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsTracingConnection::MoveProject(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("resourcemanager_v3::ProjectsConnection::MoveProject");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->MoveProject(operation));
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsTracingConnection::DeleteProject(
    google::cloud::resourcemanager::v3::DeleteProjectRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::DeleteProject");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteProject(request));
}

StatusOr<google::longrunning::Operation>
ProjectsTracingConnection::DeleteProject(
    NoAwaitTag,
    google::cloud::resourcemanager::v3::DeleteProjectRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::DeleteProject");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DeleteProject(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsTracingConnection::DeleteProject(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::DeleteProject");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteProject(operation));
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsTracingConnection::UndeleteProject(
    google::cloud::resourcemanager::v3::UndeleteProjectRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::UndeleteProject");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UndeleteProject(request));
}

StatusOr<google::longrunning::Operation>
ProjectsTracingConnection::UndeleteProject(
    NoAwaitTag,
    google::cloud::resourcemanager::v3::UndeleteProjectRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::UndeleteProject");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UndeleteProject(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsTracingConnection::UndeleteProject(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::UndeleteProject");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UndeleteProject(operation));
}

StatusOr<google::iam::v1::Policy> ProjectsTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy> ProjectsTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ProjectsTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

StatusOr<google::longrunning::Operation>
ProjectsTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::ProjectsConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<resourcemanager_v3::ProjectsConnection>
MakeProjectsTracingConnection(
    std::shared_ptr<resourcemanager_v3::ProjectsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ProjectsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google
