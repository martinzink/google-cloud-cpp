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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ESSENTIALCONTACTS_V1_INTERNAL_ESSENTIAL_CONTACTS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ESSENTIALCONTACTS_V1_INTERNAL_ESSENTIAL_CONTACTS_LOGGING_DECORATOR_H

#include "google/cloud/essentialcontacts/v1/internal/essential_contacts_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace essentialcontacts_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EssentialContactsServiceLogging : public EssentialContactsServiceStub {
 public:
  ~EssentialContactsServiceLogging() override = default;
  EssentialContactsServiceLogging(
      std::shared_ptr<EssentialContactsServiceStub> child,
      TracingOptions tracing_options, std::set<std::string> const& components);

  StatusOr<google::cloud::essentialcontacts::v1::Contact> CreateContact(
      grpc::ClientContext& context, Options const& options,
      google::cloud::essentialcontacts::v1::CreateContactRequest const& request)
      override;

  StatusOr<google::cloud::essentialcontacts::v1::Contact> UpdateContact(
      grpc::ClientContext& context, Options const& options,
      google::cloud::essentialcontacts::v1::UpdateContactRequest const& request)
      override;

  StatusOr<google::cloud::essentialcontacts::v1::ListContactsResponse>
  ListContacts(grpc::ClientContext& context, Options const& options,
               google::cloud::essentialcontacts::v1::ListContactsRequest const&
                   request) override;

  StatusOr<google::cloud::essentialcontacts::v1::Contact> GetContact(
      grpc::ClientContext& context, Options const& options,
      google::cloud::essentialcontacts::v1::GetContactRequest const& request)
      override;

  Status DeleteContact(
      grpc::ClientContext& context, Options const& options,
      google::cloud::essentialcontacts::v1::DeleteContactRequest const& request)
      override;

  StatusOr<google::cloud::essentialcontacts::v1::ComputeContactsResponse>
  ComputeContacts(
      grpc::ClientContext& context, Options const& options,
      google::cloud::essentialcontacts::v1::ComputeContactsRequest const&
          request) override;

  Status SendTestMessage(
      grpc::ClientContext& context, Options const& options,
      google::cloud::essentialcontacts::v1::SendTestMessageRequest const&
          request) override;

 private:
  std::shared_ptr<EssentialContactsServiceStub> child_;
  TracingOptions tracing_options_;
};  // EssentialContactsServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace essentialcontacts_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ESSENTIALCONTACTS_V1_INTERNAL_ESSENTIAL_CONTACTS_LOGGING_DECORATOR_H
