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
// source: google/cloud/kms/v1/service.proto

#include "google/cloud/kms/v1/internal/key_management_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace kms_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

KeyManagementServiceTracingStub::KeyManagementServiceTracingStub(
    std::shared_ptr<KeyManagementServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::kms::v1::ListKeyRingsResponse>
KeyManagementServiceTracingStub::ListKeyRings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::ListKeyRingsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "ListKeyRings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListKeyRings(context, options, request));
}

StatusOr<google::cloud::kms::v1::ListCryptoKeysResponse>
KeyManagementServiceTracingStub::ListCryptoKeys(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::ListCryptoKeysRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "ListCryptoKeys");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListCryptoKeys(context, options, request));
}

StatusOr<google::cloud::kms::v1::ListCryptoKeyVersionsResponse>
KeyManagementServiceTracingStub::ListCryptoKeyVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::ListCryptoKeyVersionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "ListCryptoKeyVersions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListCryptoKeyVersions(context, options, request));
}

StatusOr<google::cloud::kms::v1::ListImportJobsResponse>
KeyManagementServiceTracingStub::ListImportJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::ListImportJobsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "ListImportJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListImportJobs(context, options, request));
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceTracingStub::GetKeyRing(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::GetKeyRingRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "GetKeyRing");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetKeyRing(context, options, request));
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceTracingStub::GetCryptoKey(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::GetCryptoKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "GetCryptoKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetCryptoKey(context, options, request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingStub::GetCryptoKeyVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::GetCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "GetCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetCryptoKeyVersion(context, options, request));
}

StatusOr<google::cloud::kms::v1::PublicKey>
KeyManagementServiceTracingStub::GetPublicKey(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::GetPublicKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "GetPublicKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetPublicKey(context, options, request));
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceTracingStub::GetImportJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::GetImportJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "GetImportJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetImportJob(context, options, request));
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceTracingStub::CreateKeyRing(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::CreateKeyRingRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "CreateKeyRing");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateKeyRing(context, options, request));
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceTracingStub::CreateCryptoKey(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::CreateCryptoKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "CreateCryptoKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateCryptoKey(context, options, request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingStub::CreateCryptoKeyVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::CreateCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "CreateCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CreateCryptoKeyVersion(context, options, request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingStub::ImportCryptoKeyVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::ImportCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "ImportCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ImportCryptoKeyVersion(context, options, request));
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceTracingStub::CreateImportJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::CreateImportJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "CreateImportJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateImportJob(context, options, request));
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceTracingStub::UpdateCryptoKey(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::UpdateCryptoKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "UpdateCryptoKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateCryptoKey(context, options, request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingStub::UpdateCryptoKeyVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::UpdateCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "UpdateCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->UpdateCryptoKeyVersion(context, options, request));
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceTracingStub::UpdateCryptoKeyPrimaryVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::UpdateCryptoKeyPrimaryVersionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "UpdateCryptoKeyPrimaryVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->UpdateCryptoKeyPrimaryVersion(context, options, request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingStub::DestroyCryptoKeyVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::DestroyCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "DestroyCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DestroyCryptoKeyVersion(context, options, request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingStub::RestoreCryptoKeyVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::RestoreCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "RestoreCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->RestoreCryptoKeyVersion(context, options, request));
}

StatusOr<google::cloud::kms::v1::EncryptResponse>
KeyManagementServiceTracingStub::Encrypt(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::EncryptRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "Encrypt");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->Encrypt(context, options, request));
}

StatusOr<google::cloud::kms::v1::DecryptResponse>
KeyManagementServiceTracingStub::Decrypt(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::DecryptRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "Decrypt");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->Decrypt(context, options, request));
}

StatusOr<google::cloud::kms::v1::RawEncryptResponse>
KeyManagementServiceTracingStub::RawEncrypt(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::RawEncryptRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "RawEncrypt");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RawEncrypt(context, options, request));
}

StatusOr<google::cloud::kms::v1::RawDecryptResponse>
KeyManagementServiceTracingStub::RawDecrypt(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::RawDecryptRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "RawDecrypt");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RawDecrypt(context, options, request));
}

StatusOr<google::cloud::kms::v1::AsymmetricSignResponse>
KeyManagementServiceTracingStub::AsymmetricSign(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::AsymmetricSignRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "AsymmetricSign");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->AsymmetricSign(context, options, request));
}

StatusOr<google::cloud::kms::v1::AsymmetricDecryptResponse>
KeyManagementServiceTracingStub::AsymmetricDecrypt(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::AsymmetricDecryptRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "AsymmetricDecrypt");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->AsymmetricDecrypt(context, options, request));
}

StatusOr<google::cloud::kms::v1::MacSignResponse>
KeyManagementServiceTracingStub::MacSign(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::MacSignRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "MacSign");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->MacSign(context, options, request));
}

StatusOr<google::cloud::kms::v1::MacVerifyResponse>
KeyManagementServiceTracingStub::MacVerify(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::MacVerifyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "MacVerify");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->MacVerify(context, options, request));
}

StatusOr<google::cloud::kms::v1::GenerateRandomBytesResponse>
KeyManagementServiceTracingStub::GenerateRandomBytes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::GenerateRandomBytesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "GenerateRandomBytes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GenerateRandomBytes(context, options, request));
}

StatusOr<google::cloud::location::ListLocationsResponse>
KeyManagementServiceTracingStub::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "ListLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLocations(context, options, request));
}

StatusOr<google::cloud::location::Location>
KeyManagementServiceTracingStub::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

StatusOr<google::iam::v1::Policy> KeyManagementServiceTracingStub::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::Policy> KeyManagementServiceTracingStub::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
KeyManagementServiceTracingStub::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->TestIamPermissions(context, options, request));
}

StatusOr<google::longrunning::Operation>
KeyManagementServiceTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<KeyManagementServiceStub> MakeKeyManagementServiceTracingStub(
    std::shared_ptr<KeyManagementServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<KeyManagementServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1_internal
}  // namespace cloud
}  // namespace google
