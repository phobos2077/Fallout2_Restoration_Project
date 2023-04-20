#!/bin/bash

set -xeu -o pipefail

rm -f *.7z *.zip *.exe *.list

source ./extra/env.sh
./extra/prepare.sh
./extra/buildall.sh
./extra/package.sh
