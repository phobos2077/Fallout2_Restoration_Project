#!/bin/bash

set -xeu -o pipefail

bin_dir="$(realpath $bin_dir)"
dat2="wine $bin_dir/dat2.exe"
comp_dir="components"
file_list="$(realpath file.list)"
release_dir="$(realpath $release_dir)"
mods_dir="$(realpath $mods_dir)"

# release?
if [ -n "$TRAVIS_TAG" ]; then # tag found: releasing
  version="$TRAVIS_TAG"

  # data
  dat="$mod_name.dat"
  mkdir -p "$mods_dir"
  chmod 0444 data/proto/*/*

  cd data
  # I don't know how to pack recursively
  find . -type f | sed -e 's|^\.\/||' -e 's|\/|\\|g' | sort > "$file_list" # replace slashes with backslashes
  $dat2 a "$mods_dir/$dat" @"$file_list"
  cd ..

  # pack components into separate dat files
  if [[ -d "$comp_dir" ]]; then
    cd "$comp_dir"
    for c in $(ls); do
      dat="${mod_name}_$c.dat"
      cd "$c"
      find . -type f | sed -e 's|^\.\/||' -e 's|\/|\\|g' | sort > "$file_list"
      $dat2 a "$mods_dir/$dat" @"$file_list"
      cd ..
    done
    cd ..
  fi

  # pack appearance, too
  if [[ -d "$appearance_dir" ]]; then
    mkdir -p "$release_dir/appearance"
    cd "$appearance_dir"
    for a in $(ls); do
      dat="$a.dat"
      cd "$a"
      find . -type f | sed -e 's|^\.\/||' -e 's|\/|\\|g' | sort > "$file_list"
      $dat2 a "$release_dir/appearance/$dat" @"$file_list"
      cd ..
    done
    cd ..
  fi

  # sfall
  sfall_url="https://sourceforge.net/projects/sfall/files/sfall/sfall_$sfall_version.7z/download"
  wget -q "$sfall_url" -O sfall.7z
  for f in ddraw.dll sfall.dat; do
    7z e sfall.7z "$f"
    mv "$f" "$release_dir/"
  done
  cp extra/sfall/ddraw.ini "$release_dir/"

  # npc armor mod from sfall
  ./extra/npcarmor.sh

  # ammo mod from sfall
  ./extra/ammo.sh

  # final package
  pushd .
  cd "$release_dir"
  zip -r "${mod_name}_${version}.zip" * # our package
  popd
  mv "$release_dir/${mod_name}_${version}.zip" .
fi
