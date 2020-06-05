#!/bin/bash

mkdir -p bld
pushd bld
echo "-------------------"
cmake ..
echo "-------------------"
make && ./threads
echo "-------------------"
popd