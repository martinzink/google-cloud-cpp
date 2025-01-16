# Copyright 2021 Google LLC
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

FROM opensuse/leap:15
ARG NCPU=4

## [BEGIN packaging.md]

# Install the minimal development tools.

# **NOTE:** The default compiler on openSUSE (GCC 7.5.0) crashes while compiling
# some of the files generated by Protobuf. Minor variations in the Protobuf
# version or the libraries changes where the compiler crashes. We recommend you
# use GCC 8 or higher to compile `google-cloud-cpp`.

# ```bash
RUN zypper refresh && \
    zypper install --allow-downgrade -y automake cmake curl \
        gcc gcc-c++ gcc8 gcc8-c++ git gzip libtool make patch tar wget
# ```

# Install some of the dependencies for `google-cloud-cpp`.

# ```bash
RUN zypper refresh && \
    zypper install --allow-downgrade -y abseil-cpp-devel c-ares-devel \
        libcurl-devel libopenssl-devel libcrc32c-devel nlohmann_json-devel \
        grpc-devel libprotobuf-devel
# ```

# The following steps will install libraries and tools in `/usr/local`. openSUSE
# does not search for shared libraries in these directories by default. There
# are multiple ways to solve this problem, the following steps are one solution:

# ```bash
RUN (echo "/usr/local/lib" ; echo "/usr/local/lib64") | \
    tee /etc/ld.so.conf.d/usrlocal.conf
ENV PKG_CONFIG_PATH=/usr/local/lib/pkgconfig:/usr/local/lib64/pkgconfig
ENV PATH=/usr/local/bin:${PATH}
# ```

# #### opentelemetry-cpp

# The project has an **optional** dependency on the OpenTelemetry library.
# We recommend installing this library because:
# - the dependency will become required in the google-cloud-cpp v3.x series.
# - it is needed to produce distributed traces of the library.

# ```bash
WORKDIR /var/tmp/build/opentelemetry-cpp
RUN curl -fsSL https://github.com/open-telemetry/opentelemetry-cpp/archive/v1.18.0.tar.gz | \
    tar -xzf - --strip-components=1 && \
    cmake \
        -DCMAKE_BUILD_TYPE=Release \
        -DBUILD_SHARED_LIBS=yes \
        -DWITH_EXAMPLES=OFF \
        -DWITH_ABSEIL=ON \
        -DBUILD_TESTING=OFF \
        -DOPENTELEMETRY_INSTALL=ON \
        -DOPENTELEMETRY_ABI_VERSION_NO=2 \
        -S . -B cmake-out && \
    cmake --build cmake-out --target install -- -j ${NCPU:-4} && \
    ldconfig
# ```

# Use the following environment variables to configure the compiler used by
# CMake.

ENV CXX=g++-8

ENV CC=gcc-8

## [DONE packaging.md]

WORKDIR /var/tmp/sccache
RUN curl -fsSL https://github.com/mozilla/sccache/releases/download/v0.9.1/sccache-v0.9.1-x86_64-unknown-linux-musl.tar.gz | \
    tar -zxf - --strip-components=1 && \
    mkdir -p /usr/local/bin && \
    mv sccache /usr/local/bin/sccache && \
    chmod +x /usr/local/bin/sccache

# Update the ld.conf cache in case any libraries were installed in /usr/local/lib*
RUN ldconfig /usr/local/lib*
