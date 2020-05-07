#!/bin/bash

set -xeu -o pipefail

bin_dir="$(realpath $bin_dir)"
release_dir="$(realpath $release_dir)"

cd "$release_dir"
wget -q "$(curl -s https://api.github.com/repos/${hq_music_repo}/releases/latest | grep browser_download_url | awk -F '"' '{print $4}')"
unzip hq_music*.zip
rm -f hq_music*.zip
