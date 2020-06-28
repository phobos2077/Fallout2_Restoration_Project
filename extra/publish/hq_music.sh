#!/bin/bash

set -xeu -o pipefail

bin_dir="$(realpath $bin_dir)"
release_dir="$(realpath $release_dir)"
sound_dir="$release_dir/data/sound"

mkdir -p "$sound_dir"
cd "$sound_dir"
wget -nv "$(curl -s https://api.github.com/repos/${hq_music_repo}/releases/latest | grep browser_download_url | grep 'fallout12_hq_music' | awk -F '"' '{print $4}')"
unzip fallout12_hq_music*.zip
rm -f fallout12_hq_music*.zip
