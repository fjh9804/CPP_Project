#!/bin/bash

set -e

BUILD_TYPE=${1:-Debug}
BUILD_DIR=build

echo "Build type: ${BUILD_TYPE}"
echo "Build dir : ${BUILD_DIR}"

rm -rf ${BUILD_DIR}
mkdir -p ${BUILD_DIR}
cd ${BUILD_DIR}

cmake .. -DCMAKE_BUILD_TYPE=Debug
make -j$(nproc)
