#!/bin/bash

set -xeu -o pipefail

# shellcheck disable=SC2154  # from env.sh
cd "$release_dir"
# shellcheck disable=SC2154  # from env.sh
wget -nv "$(curl -s "https://api.github.com/repos/${npc_armor_repo}/releases/latest" | grep browser_download_url | awk -F '"' '{print $4}')"
unzip npc_armor*.zip "mods/*"
rm -f npc_armor*.zip
