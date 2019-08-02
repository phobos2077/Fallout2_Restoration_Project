#!/bin/bash

set -xeu -o pipefail

bin_dir="$(realpath $bin_dir)"
dat2a="wine $bin_dir/dat2.exe a -1"
comp_dir="components"
file_list="$(realpath file.list)"
release_dir="$(realpath $release_dir)"
mods_dir="$(realpath $mods_dir)"

# release?
if [ -n "$TRAVIS_TAG" ]; then # tag found: releasing
  version="$TRAVIS_TAG"

  # translations packaged first, to get extra text out of the way
  ./"$extra_dir"/publish/translations.sh

  # data
  dat="$mod_name.dat"
  mkdir -p "$mods_dir"
  chmod 0444 data/proto/*/*

  cd data
  # I don't know how to pack recursively
  find . -type f | sed -e 's|^\.\/||' -e 's|\/|\\|g' | sort > "$file_list" # replace slashes with backslashes
  $dat2a "$mods_dir/$dat" @"$file_list"
  cd ..

  # pack components into separate dat files
  ./"$extra_dir"/publish/components.sh

  # pack appearance, too
  ./"$extra_dir"/publish/appearance.sh

  # sfall
  ./"$extra_dir"/publish/sfall.sh

  # initool for config fix on windows
  ./"$extra_dir"/publish/config.sh

  # npc armor mod from sfall
  ./"$extra_dir"/publish/npcarmor.sh

  # ammo mod from sfall
  ./"$extra_dir"/publish/ammo.sh

  # final package
  pushd .
  cd "$release_dir"
  zip -r "${mod_name}_${version}.zip" * # our package
  popd
  mv "$release_dir/${mod_name}_${version}.zip" .
fi
