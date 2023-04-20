#!/bin/bash

set -xeu -o pipefail

api_url="https://api.github.com/repos/BGforgeNet/Fallout2_Cassidy_Head/releases/latest"

cd "$release_dir"
for f in cassidy_head.dat cassidy_voice_joey_bracken_hq.dat; do
  wget -nv "$(curl -s $api_url | grep browser_download_url | grep $f | awk -F '"' '{print $4}')"
  mv $f mods/
done
