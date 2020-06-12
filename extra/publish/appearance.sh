#!/bin/bash

set -xeu -o pipefail

release_dir="$(realpath $release_dir)"

cd "$release_dir"
wget -nv "$(curl -s https://api.github.com/repos/${appearance_repo}/releases/latest | grep browser_download_url | awk -F '"' '{print $4}')"
unzip appearance*.zip
rm -f appearance*.zip
