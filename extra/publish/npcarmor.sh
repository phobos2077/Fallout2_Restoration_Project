#!/bin/bash

set -xeu -o pipefail

release_dir="$(realpath $release_dir)"
scripts_dir="$release_dir/data/scripts"

mkdir -p "$scripts_dir"
for f in gl_npcarmor.int npcarmor.ini; do
  7z e "$mpack_7z" mods/$f
  mv $f "$release_dir/"
done
