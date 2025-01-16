# Copyright 2018 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# DO NOT EDIT -- GENERATED BY CMake -- Change the CMakeLists.txt file if needed

"""Automatically generated source lists for google_cloud_cpp_storage - DO NOT EDIT."""

google_cloud_cpp_storage_hdrs = [
    "auto_finalize.h",
    "bucket_access_control.h",
    "bucket_autoclass.h",
    "bucket_billing.h",
    "bucket_cors_entry.h",
    "bucket_custom_placement_config.h",
    "bucket_encryption.h",
    "bucket_hierarchical_namespace.h",
    "bucket_iam_configuration.h",
    "bucket_lifecycle.h",
    "bucket_logging.h",
    "bucket_metadata.h",
    "bucket_object_retention.h",
    "bucket_retention_policy.h",
    "bucket_rpo.h",
    "bucket_soft_delete_policy.h",
    "bucket_versioning.h",
    "bucket_website.h",
    "client.h",
    "client_options.h",
    "download_options.h",
    "enable_object_retention.h",
    "hash_mismatch_error.h",
    "hashing_options.h",
    "headers_map.h",
    "hmac_key_metadata.h",
    "iam_policy.h",
    "idempotency_policy.h",
    "include_folders_as_prefixes.h",
    "internal/access_control_common.h",
    "internal/access_control_common_parser.h",
    "internal/access_token_credentials.h",
    "internal/base64.h",
    "internal/binary_data_as_debug_string.h",
    "internal/bucket_access_control_parser.h",
    "internal/bucket_acl_requests.h",
    "internal/bucket_metadata_parser.h",
    "internal/bucket_requests.h",
    "internal/common_metadata.h",
    "internal/common_metadata_parser.h",
    "internal/complex_option.h",
    "internal/compute_engine_util.h",
    "internal/connection_factory.h",
    "internal/connection_impl.h",
    "internal/const_buffer.h",
    "internal/crc32c.h",
    "internal/curl/request.h",
    "internal/curl/request_builder.h",
    "internal/default_object_acl_requests.h",
    "internal/empty_response.h",
    "internal/error_credentials.h",
    "internal/generate_message_boundary.h",
    "internal/generic_object_request.h",
    "internal/generic_request.h",
    "internal/generic_stub.h",
    "internal/generic_stub_adapter.h",
    "internal/generic_stub_factory.h",
    "internal/hash_function.h",
    "internal/hash_function_impl.h",
    "internal/hash_validator.h",
    "internal/hash_validator_impl.h",
    "internal/hash_values.h",
    "internal/hmac_key_metadata_parser.h",
    "internal/hmac_key_requests.h",
    "internal/http_response.h",
    "internal/impersonate_service_account_credentials.h",
    "internal/lifecycle_rule_parser.h",
    "internal/logging_stub.h",
    "internal/make_jwt_assertion.h",
    "internal/md5hash.h",
    "internal/metadata_parser.h",
    "internal/notification_metadata_parser.h",
    "internal/notification_requests.h",
    "internal/object_access_control_parser.h",
    "internal/object_acl_requests.h",
    "internal/object_metadata_parser.h",
    "internal/object_read_source.h",
    "internal/object_read_streambuf.h",
    "internal/object_requests.h",
    "internal/object_write_streambuf.h",
    "internal/patch_builder.h",
    "internal/patch_builder_details.h",
    "internal/policy_document_request.h",
    "internal/request_project_id.h",
    "internal/rest/object_read_source.h",
    "internal/rest/request_builder.h",
    "internal/rest/stub.h",
    "internal/retry_object_read_source.h",
    "internal/service_account_parser.h",
    "internal/service_account_requests.h",
    "internal/sign_blob_requests.h",
    "internal/signed_url_requests.h",
    "internal/storage_connection.h",
    "internal/tracing_connection.h",
    "internal/tracing_object_read_source.h",
    "internal/tuple_filter.h",
    "internal/unified_rest_credentials.h",
    "internal/well_known_parameters_impl.h",
    "lifecycle_rule.h",
    "list_buckets_reader.h",
    "list_hmac_keys_reader.h",
    "list_objects_and_prefixes_reader.h",
    "list_objects_reader.h",
    "notification_event_type.h",
    "notification_metadata.h",
    "notification_payload_format.h",
    "oauth2/anonymous_credentials.h",
    "oauth2/authorized_user_credentials.h",
    "oauth2/compute_engine_credentials.h",
    "oauth2/credential_constants.h",
    "oauth2/credentials.h",
    "oauth2/google_application_default_credentials_file.h",
    "oauth2/google_credentials.h",
    "oauth2/refreshing_credentials_wrapper.h",
    "oauth2/service_account_credentials.h",
    "object_access_control.h",
    "object_metadata.h",
    "object_read_stream.h",
    "object_retention.h",
    "object_rewriter.h",
    "object_stream.h",
    "object_write_stream.h",
    "options.h",
    "override_default_project.h",
    "override_unlocked_retention.h",
    "owner.h",
    "parallel_upload.h",
    "policy_document.h",
    "project_team.h",
    "retry_policy.h",
    "service_account.h",
    "signed_url_options.h",
    "soft_deleted.h",
    "storage_class.h",
    "upload_options.h",
    "user_ip_option.h",
    "version.h",
    "version_info.h",
    "well_known_headers.h",
    "well_known_parameters.h",
]

google_cloud_cpp_storage_srcs = [
    "auto_finalize.cc",
    "bucket_access_control.cc",
    "bucket_autoclass.cc",
    "bucket_cors_entry.cc",
    "bucket_custom_placement_config.cc",
    "bucket_hierarchical_namespace.cc",
    "bucket_iam_configuration.cc",
    "bucket_logging.cc",
    "bucket_metadata.cc",
    "bucket_object_retention.cc",
    "bucket_retention_policy.cc",
    "bucket_soft_delete_policy.cc",
    "client.cc",
    "client_options.cc",
    "hashing_options.cc",
    "hmac_key_metadata.cc",
    "iam_policy.cc",
    "idempotency_policy.cc",
    "internal/access_control_common_parser.cc",
    "internal/access_token_credentials.cc",
    "internal/base64.cc",
    "internal/bucket_access_control_parser.cc",
    "internal/bucket_acl_requests.cc",
    "internal/bucket_metadata_parser.cc",
    "internal/bucket_requests.cc",
    "internal/compute_engine_util.cc",
    "internal/connection_factory.cc",
    "internal/connection_impl.cc",
    "internal/const_buffer.cc",
    "internal/crc32c.cc",
    "internal/default_object_acl_requests.cc",
    "internal/empty_response.cc",
    "internal/error_credentials.cc",
    "internal/generate_message_boundary.cc",
    "internal/generic_stub_adapter.cc",
    "internal/generic_stub_factory.cc",
    "internal/hash_function.cc",
    "internal/hash_function_impl.cc",
    "internal/hash_validator.cc",
    "internal/hash_validator_impl.cc",
    "internal/hash_values.cc",
    "internal/hmac_key_metadata_parser.cc",
    "internal/hmac_key_requests.cc",
    "internal/http_response.cc",
    "internal/impersonate_service_account_credentials.cc",
    "internal/lifecycle_rule_parser.cc",
    "internal/logging_stub.cc",
    "internal/make_jwt_assertion.cc",
    "internal/md5hash.cc",
    "internal/metadata_parser.cc",
    "internal/notification_metadata_parser.cc",
    "internal/notification_requests.cc",
    "internal/object_access_control_parser.cc",
    "internal/object_acl_requests.cc",
    "internal/object_metadata_parser.cc",
    "internal/object_read_streambuf.cc",
    "internal/object_requests.cc",
    "internal/object_write_streambuf.cc",
    "internal/openssl/hash_function_impl.cc",
    "internal/patch_builder.cc",
    "internal/patch_builder_details.cc",
    "internal/policy_document_request.cc",
    "internal/request_project_id.cc",
    "internal/rest/object_read_source.cc",
    "internal/rest/request_builder.cc",
    "internal/rest/stub.cc",
    "internal/retry_object_read_source.cc",
    "internal/service_account_parser.cc",
    "internal/service_account_requests.cc",
    "internal/sign_blob_requests.cc",
    "internal/signed_url_requests.cc",
    "internal/storage_connection.cc",
    "internal/tracing_connection.cc",
    "internal/tracing_object_read_source.cc",
    "internal/unified_rest_credentials.cc",
    "internal/win32/hash_function_impl.cc",
    "lifecycle_rule.cc",
    "list_buckets_reader.cc",
    "list_hmac_keys_reader.cc",
    "list_objects_reader.cc",
    "notification_metadata.cc",
    "oauth2/anonymous_credentials.cc",
    "oauth2/authorized_user_credentials.cc",
    "oauth2/compute_engine_credentials.cc",
    "oauth2/credentials.cc",
    "oauth2/google_application_default_credentials_file.cc",
    "oauth2/google_credentials.cc",
    "oauth2/refreshing_credentials_wrapper.cc",
    "oauth2/service_account_credentials.cc",
    "object_access_control.cc",
    "object_metadata.cc",
    "object_read_stream.cc",
    "object_retention.cc",
    "object_rewriter.cc",
    "object_write_stream.cc",
    "parallel_upload.cc",
    "policy_document.cc",
    "service_account.cc",
    "version.cc",
    "well_known_headers.cc",
    "well_known_parameters.cc",
]
