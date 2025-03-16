#!/bin/bash

rm -rf build
mkdir -p build
cd build

cmake -DCMAKE_BUILD_TYPE=relwithdebinfo ..
cmake --build . --config relwithdebinfo

cd ..

# echo continue && read -n 1
