#!/bin/bash

set -xeu -o pipefail

sound_dir="$release_dir/data/sound/music"

rm -rf "$sound_dir"
mkdir -p "$sound_dir"
cd "$sound_dir"
url="$(curl -s https://api.github.com/repos/BGforgeNet/Fallout2-HQ-music/releases/latest | grep browser_download_url | grep fallout_music_hq | awk -F '"' '{print $4}')"
wget -nv "$url"
unzip fallout_music_hq*.zip
rm -f fallout_music_hq*.zip
