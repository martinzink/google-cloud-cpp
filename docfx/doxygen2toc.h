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

#ifndef GOOGLE_CLOUD_CPP_DOCFX_DOXYGEN2TOC_H
#define GOOGLE_CLOUD_CPP_DOCFX_DOXYGEN2TOC_H

#include "docfx/config.h"
#include "docfx/toc_entry.h"
#include <pugixml.hpp>
#include <string>

namespace docfx {

/// Generates the YAML table of contents.
std::string Doxygen2Toc(Config const& config, pugi::xml_document const& doc);

}  // namespace docfx

#endif  // GOOGLE_CLOUD_CPP_DOCFX_DOXYGEN2TOC_H
