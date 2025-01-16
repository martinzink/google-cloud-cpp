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
// source: google/cloud/essentialcontacts/v1/service.proto

#include "google/cloud/essentialcontacts/v1/internal/essential_contacts_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace essentialcontacts_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EssentialContactsServiceTracingStub::EssentialContactsServiceTracingStub(
    std::shared_ptr<EssentialContactsServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::essentialcontacts::v1::Contact>
EssentialContactsServiceTracingStub::CreateContact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::essentialcontacts::v1::CreateContactRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.essentialcontacts.v1.EssentialContactsService",
      "CreateContact");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateContact(context, options, request));
}

StatusOr<google::cloud::essentialcontacts::v1::Contact>
EssentialContactsServiceTracingStub::UpdateContact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::essentialcontacts::v1::UpdateContactRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.essentialcontacts.v1.EssentialContactsService",
      "UpdateContact");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateContact(context, options, request));
}

StatusOr<google::cloud::essentialcontacts::v1::ListContactsResponse>
EssentialContactsServiceTracingStub::ListContacts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::essentialcontacts::v1::ListContactsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.essentialcontacts.v1.EssentialContactsService",
      "ListContacts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListContacts(context, options, request));
}

StatusOr<google::cloud::essentialcontacts::v1::Contact>
EssentialContactsServiceTracingStub::GetContact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::essentialcontacts::v1::GetContactRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.essentialcontacts.v1.EssentialContactsService",
      "GetContact");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetContact(context, options, request));
}

Status EssentialContactsServiceTracingStub::DeleteContact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::essentialcontacts::v1::DeleteContactRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.essentialcontacts.v1.EssentialContactsService",
      "DeleteContact");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteContact(context, options, request));
}

StatusOr<google::cloud::essentialcontacts::v1::ComputeContactsResponse>
EssentialContactsServiceTracingStub::ComputeContacts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::essentialcontacts::v1::ComputeContactsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.essentialcontacts.v1.EssentialContactsService",
      "ComputeContacts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ComputeContacts(context, options, request));
}

Status EssentialContactsServiceTracingStub::SendTestMessage(
    grpc::ClientContext& context, Options const& options,
    google::cloud::essentialcontacts::v1::SendTestMessageRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.essentialcontacts.v1.EssentialContactsService",
      "SendTestMessage");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SendTestMessage(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<EssentialContactsServiceStub>
MakeEssentialContactsServiceTracingStub(
    std::shared_ptr<EssentialContactsServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<EssentialContactsServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace essentialcontacts_v1_internal
}  // namespace cloud
}  // namespace google
