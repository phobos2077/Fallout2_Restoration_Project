#!/bin/bash

set -xeu -o pipefail

# shellcheck disable=SC2154  # from env.sh
api_url="https://api.github.com/repos/${appearance_repo}/releases/latest"

# shellcheck disable=SC2154  # from env.sh
cd "$release_dir"
wget -nv "$(curl -s "$api_url" | grep browser_download_url | grep -v non_canon | awk -F '"' '{print $4}')"
unzip hero_appearance*.zip
rm -f hero_appearance*.zip
