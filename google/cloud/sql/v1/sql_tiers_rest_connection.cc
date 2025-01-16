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
// source: google/cloud/sql/v1/cloud_sql_tiers.proto

#include "google/cloud/sql/v1/sql_tiers_rest_connection.h"
#include "google/cloud/sql/v1/internal/sql_tiers_option_defaults.h"
#include "google/cloud/sql/v1/internal/sql_tiers_rest_connection_impl.h"
#include "google/cloud/sql/v1/internal/sql_tiers_rest_stub_factory.h"
#include "google/cloud/sql/v1/internal/sql_tiers_tracing_connection.h"
#include "google/cloud/sql/v1/sql_tiers_options.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/rest_background_threads_impl.h"
#include "google/cloud/internal/rest_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace sql_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<SqlTiersServiceConnection> MakeSqlTiersServiceConnectionRest(
    Options options) {
  internal::CheckExpectedOptions<
      CommonOptionList, RestOptionList, UnifiedCredentialsOptionList,
      rest_internal::TargetApiVersionOption, SqlTiersServicePolicyOptionList>(
      options, __func__);
  options = sql_v1_internal::SqlTiersServiceDefaultOptions(std::move(options));
  auto background = std::make_unique<
      rest_internal::AutomaticallyCreatedRestBackgroundThreads>();
  auto stub = sql_v1_internal::CreateDefaultSqlTiersServiceRestStub(options);
  return sql_v1_internal::MakeSqlTiersServiceTracingConnection(
      std::make_shared<sql_v1_internal::SqlTiersServiceRestConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1
}  // namespace cloud
}  // namespace google
