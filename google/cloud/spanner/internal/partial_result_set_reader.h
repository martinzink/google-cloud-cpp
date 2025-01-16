// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_INTERNAL_PARTIAL_RESULT_SET_READER_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_INTERNAL_PARTIAL_RESULT_SET_READER_H

#include "google/cloud/spanner/version.h"
#include "google/cloud/status.h"
#include "google/cloud/status_or.h"
#include "absl/types/optional.h"
#include <google/spanner/v1/spanner.pb.h>
#include <grpcpp/grpcpp.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace spanner_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * The result of a successful `PartialResultSetReader::Read()`, which may
 * be the next partial result of a stream, or a resumption of an interrupted
 * stream from the `resume_token` if it was engaged. In the latter case, the
 * caller should discard any pending state not covered by the token, as that
 * data will be replayed.
 */
struct PartialResultSet {
  google::spanner::v1::PartialResultSet result;
  bool resumption;
};

/**
 * Wrap `grpc::ClientReaderInterface<google::spanner::v1::PartialResultSet>`.
 *
 * This defines an interface to handle a streaming RPC returning a sequence
 * of `google::spanner::v1::PartialResultSet`. Its main purpose is to
 * simplify memory management, as each streaming RPC requires two separate
 * `std::unique_ptr<>`. As a side-effect, it is also easier to mock as it
 * has a narrower interface.
 */
class PartialResultSetReader {
 public:
  virtual ~PartialResultSetReader() = default;
  virtual void TryCancel() = 0;
  virtual absl::optional<PartialResultSet> Read(
      absl::optional<std::string> const& resume_token) = 0;
  virtual Status Finish() = 0;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_INTERNAL_PARTIAL_RESULT_SET_READER_H
