#!/bin/bash

set -xeu -o pipefail

release_dir="$(realpath $release_dir)"
scripts_dir="$release_dir/data/scripts"

mkdir -p "$scripts_dir"
7z e "$mpack_7z" mods/gl_npcarmor.int
mv gl_npcarmor.int "$scripts_dir/"
7z e "$mpack_7z" mods/npcarmor.ini
mv npcarmor.ini "$release_dir/"
