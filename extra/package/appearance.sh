#!/bin/bash

set -xeu -o pipefail

api_url="https://api.github.com/repos/${appearance_repo}/releases/latest"

cd "$release_dir"
wget -nv "$(curl -s $api_url | grep browser_download_url | grep -v non_canon | awk -F '"' '{print $4}')"
unzip hero_appearance*.zip
rm -f hero_appearance*.zip
