#!/bin/bash

set -xeu -o pipefail

rm -f ./*.7z ./*.zip ./*.exe ./*.list

# shellcheck source=/dev/null  # doesn't matter, no vars used in this script
source ./extra/env.sh
./extra/prepare.sh
./extra/buildall.sh
./extra/package.sh
