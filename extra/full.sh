#!/bin/bash

set -xeu -o pipefail

rm -f *.7z *.zip *.exe *.list

source ./extra/env.sh
echo $?
./extra/prepare.sh
echo $?
./extra/buildall.sh
echo $?
./extra/package.sh
echo $?
