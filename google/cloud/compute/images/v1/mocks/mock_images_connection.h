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
// source: google/cloud/compute/images/v1/images.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_IMAGES_V1_MOCKS_MOCK_IMAGES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_IMAGES_V1_MOCKS_MOCK_IMAGES_CONNECTION_H

#include "google/cloud/compute/images/v1/images_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_images_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ImagesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ImagesClient`. To do so,
 * construct an object of type `ImagesClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockImagesConnection : public compute_images_v1::ImagesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteImage)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteImage(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, DeleteImage,
      (google::cloud::cpp::compute::images::v1::DeleteImageRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, DeleteImage,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::images::v1::DeleteImageRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteImage,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, Deprecate)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, Deprecate(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Deprecate,
              (google::cloud::cpp::compute::images::v1::DeprecateRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, Deprecate,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::images::v1::DeprecateRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Deprecate,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Image>, GetImage,
      (google::cloud::cpp::compute::images::v1::GetImageRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Image>, GetFromFamily,
      (google::cloud::cpp::compute::images::v1::GetFromFamilyRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Policy>, GetIamPolicy,
      (google::cloud::cpp::compute::images::v1::GetIamPolicyRequest const&
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, InsertImage)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, InsertImage(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, InsertImage,
      (google::cloud::cpp::compute::images::v1::InsertImageRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, InsertImage,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::cpp::compute::images::v1::InsertImageRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertImage,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::cpp::compute::v1::Image>), ListImages,
      (google::cloud::cpp::compute::images::v1::ListImagesRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, PatchImage)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, PatchImage(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchImage,
              (google::cloud::cpp::compute::images::v1::PatchImageRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, PatchImage,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::images::v1::PatchImageRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchImage,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Policy>, SetIamPolicy,
      (google::cloud::cpp::compute::images::v1::SetIamPolicyRequest const&
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetLabels)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetLabels(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetLabels,
              (google::cloud::cpp::compute::images::v1::SetLabelsRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, SetLabels,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::cpp::compute::images::v1::SetLabelsRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetLabels,
              (ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>,
      TestIamPermissions,
      (google::cloud::cpp::compute::images::v1::TestIamPermissionsRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_images_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_IMAGES_V1_MOCKS_MOCK_IMAGES_CONNECTION_H
