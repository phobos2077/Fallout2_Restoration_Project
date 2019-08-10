#!/bin/bash

set -xeu -o pipefail

release_dir="$(realpath $release_dir)"

sfall_url="https://sourceforge.net/projects/sfall/files/sfall/sfall_$sfall_version.7z/download"
files="
ddraw.dll
sfall.dat
sfall-mods.ini
data/scripts/gl_highlighting.int
data/scripts/gl_partycontrol.int
"

wget -q "$sfall_url" -O sfall.7z

for f in $files; do
  7z e sfall.7z "$f"
  mv "$f" "$release_dir/"
done
