#!/bin/bash

set -xeu -o pipefail

bin_dir="$(realpath $bin_dir)"
dat2="WINEARCH=win32 WINEDEBUG=-all wine $bin_dir/dat2.exe"
comp_dir="components"

# release?
if [ -n "$TRAVIS_TAG" ]; then # tag found: releasing
  version="$TRAVIS_TAG"

  # data
  dat="$mod_name.dat"
  mkdir -p "$mods_dir"
  chmod 0444 data/proto/*/*

  cd data
  # I don't know how to pack recursively
  find . -type f | sed -e 's|^\.\/||' -e 's|\/|\\|g' | sort > ../file.list # replace slashes with backslashes
  $dat2 a $dat @../file.list
  cd ..
  mv "data/$dat" "$mods_dir/"

  # pack components into separate dat files
  cd "$comp_dir"
  for c in $(ls) do
    dat="${mod_name}_$c.dat"
    cd "$c"
    find . -type f | sed -e 's|^\.\/||' -e 's|\/|\\|g' | sort > ../../file.list
    $dat2 a $dat @../../file.list
    cd ..
  done
  cd ..
  mv "$comp_dir/*dat" "$mods_dir/"

  # sfall
  sfall_url="https://sourceforge.net/projects/sfall/files/sfall/sfall_$sfall_version.7z/download"
  wget -q "$sfall_url" -O sfall.7z
  7z e sfall.7z ddraw.dll
  cp extra/sfall/ddraw.ini .
  zip -r "${mod_name}_${version}.zip" ddraw.dll ddraw.ini "$mods_dir/" # our package
fi
