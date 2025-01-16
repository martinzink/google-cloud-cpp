// Copyright 2020 Google LLC
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

#include "generator/internal/mock_connection_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/descriptor_utils.h"
#include "generator/internal/longrunning.h"
#include "generator/internal/pagination.h"
#include "generator/internal/predicate_utils.h"
#include "generator/internal/printer.h"
#include <google/protobuf/descriptor.h>

namespace google {
namespace cloud {
namespace generator_internal {

MockConnectionGenerator::MockConnectionGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context,
    std::vector<MixinMethod> const& mixin_methods)
    : ServiceCodeGenerator("mock_connection_header_path", service_descriptor,
                           std::move(service_vars),
                           std::move(service_method_vars), context,
                           mixin_methods) {}

Status MockConnectionGenerator::GenerateHeader() {
  HeaderPrint(CopyrightLicenseFileHeader());
  HeaderPrint(  // clang-format off
    "\n"
    "// Generated by the Codegen C++ plugin.\n"
    "// If you make any local changes, they will be lost.\n"
    "// source: $proto_file_name$\n"
    "\n"
    "#ifndef $header_include_guard$\n"
    "#define $header_include_guard$\n");
  // clang-format on

  // includes
  HeaderPrint("\n");
  HeaderLocalIncludes({vars("connection_header_path")});
  HeaderSystemIncludes({"gmock/gmock.h"});

  auto result = HeaderOpenNamespaces(NamespaceType::kMocks);
  if (!result.ok()) return result;

  // Abstract interface Connection base class
  HeaderPrint(R"""(
/**
 * A class to mock `$connection_class_name$`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `$client_class_name$`. To do so,
 * construct an object of type `$client_class_name$` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class $mock_connection_class_name$ : public $product_namespace$::$connection_class_name$ {
 public:
  MOCK_METHOD(Options, options, (), (override));
)""");

  for (auto const& method : methods()) {
    if (IsBidirStreaming(method)) {
      HeaderPrintMethod(method, __FILE__, __LINE__,
                        R"""(
  MOCK_METHOD((std::unique_ptr<
      ::google::cloud::AsyncStreamingReadWriteRpc<
          $request_type$, $response_type$>>),
      Async$method_name$, (), (override));
)""");
      continue;
    }
    HeaderPrintMethod(
        method,
        {MethodPattern(
             {
                 {"\n  MOCK_METHOD($return_type$,\n"},
                 // clang-format off
   {"  $method_name$,\n"
    "  ($request_type$ const& request), (override));\n",}
                 // clang-format on
             },
             All(IsNonStreaming, Not(IsLongrunningOperation),
                 Not(IsPaginated))),
         MethodPattern(
             {
                 {
                     R"""(
  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, $method_name$(Matcher<$request_type$ const&>(_)))
  /// @endcode
)"""},
                 {IsResponseTypeEmpty,
                  // clang-format off
    "  MOCK_METHOD(future<Status>,\n",
    "  MOCK_METHOD(future<StatusOr<$longrunning_deduced_response_type$>>,\n"},
   {"  $method_name$,\n"
    "  ($request_type$ const& request), (override));\n\n",},
                 // clang-format on
                 {R"""(
  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, $method_name$(_, _))
  /// @endcode
)"""},
                 {IsResponseTypeEmpty,
                  // clang-format off
    "  MOCK_METHOD(Status,\n",
    "  MOCK_METHOD(StatusOr<$longrunning_operation_type$>,\n"},
   {"  $method_name$, (NoAwaitTag,\n"
    "    $request_type$ const& request), (override));\n\n"},
                 // clang-format on
                 {R"""(
  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, $method_name$(Matcher<$longrunning_operation_type$ const&>(_)))
  /// @endcode
)"""},
                 {IsResponseTypeEmpty,
                  // clang-format off
    "  MOCK_METHOD(future<Status>,\n",
    "  MOCK_METHOD(future<StatusOr<$longrunning_deduced_response_type$>>,\n"},
   {"  $method_name$, (\n"
    "    $longrunning_operation_type$ const& operation), (override));\n"}  // clang-format on
             },
             All(IsNonStreaming, IsLongrunningOperation, Not(IsPaginated))),
         MethodPattern(
             {
                 // clang-format off
   {"\n  MOCK_METHOD((StreamRange<$range_output_type$>),\n"
    "  $method_name$,\n"
    "  ($request_type$ request), (override));\n"},
                 // clang-format on
             },
             All(IsNonStreaming, Not(IsLongrunningOperation), IsPaginated)),
         MethodPattern(
             {
                 // clang-format off
   {"\n  MOCK_METHOD(StreamRange<$response_type$>,\n"
    "  $method_name$,\n"
    "  ($request_type$ const& request), (override));\n"},
                 // clang-format on
             },
             IsStreamingRead)},
        __FILE__, __LINE__);
  }

  for (auto const& method : async_methods()) {
    HeaderPrintMethod(
        method,
        {MethodPattern(
            {
                {"\n  MOCK_METHOD(future<$return_type$>,\n"},
                // clang-format off
   {"  Async$method_name$,\n"
    "  ($request_type$ const& request), (override));\n",}
                // clang-format on
            },
            All(IsNonStreaming, Not(IsLongrunningOperation),
                Not(IsPaginated)))},
        __FILE__, __LINE__);
  }

  // close abstract interface Connection base class
  HeaderPrint("};\n");

  HeaderCloseNamespaces();
  // close header guard
  HeaderPrint("\n#endif  // $header_include_guard$\n");
  return {};
}

Status MockConnectionGenerator::GenerateCc() { return {}; }

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
