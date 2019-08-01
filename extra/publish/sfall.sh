#!/bin/bash

set -xeu -o pipefail

release_dir="$(realpath $release_dir)"

sfall_url="https://sourceforge.net/projects/sfall/files/sfall/sfall_$sfall_version.7z/download"
wget -q "$sfall_url" -O sfall.7z
for f in ddraw.dll sfall.dat; do
  7z e sfall.7z "$f"
  mv "$f" "$release_dir/"
done
