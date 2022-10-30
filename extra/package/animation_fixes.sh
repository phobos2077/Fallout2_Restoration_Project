#!/bin/bash

set -xeu -o pipefail

api_url="https://api.github.com/repos/BGforgeNet/fo2-alternative-animations/releases/latest"

export optional_dir="optional"
mkdir -p "$optional_dir"
cd "$optional_dir"
for f in goris_fast_derobing_low_fps.dat walk_speed_fix_low_fps.dat; do
  wget -nv "$(curl -s $api_url | grep browser_download_url | grep $f | awk -F '"' '{print $4}')"
done
