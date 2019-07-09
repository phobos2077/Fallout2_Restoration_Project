#!/bin/bash

set -xeu -o pipefail

# release?
if [ -n "$TRAVIS_TAG" ]; then # tag found: releasing
  version="$TRAVIS_TAG"

  # data
  dst="$mods_dir/$mod_name.dat"
  mkdir -p "$dst"
  mv data/* "$dst/"

  # sfall
  sfall_url="https://sourceforge.net/projects/sfall/files/sfall/sfall_$sfall_version.7z/download"
  wget -q "$sfall_url" -O sfall.7z
  7z e sfall.7z ddraw.dll
  cp extra/sfall/ddraw.ini .
  zip -r "${mod_name}_${version}.zip" ddraw.dll ddraw.ini "$mods_dir/" # our package
fi
