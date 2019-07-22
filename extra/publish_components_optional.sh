#!/bin/bash

set -xeu -o pipefail

bin_dir="$(realpath $bin_dir)"
dat2="wine $bin_dir/dat2.exe"
comp_dir="components_optional"
file_list="$(realpath file.list)"
mods_dir="$(realpath $mods_dir)"
release_dir="$(realpath release_dir)"

if [[ -d "$comp_dir" ]]; then
  cd "$comp_dir"
  for c in $(ls); do
    dat="${mod_name}_$c.dat"
    zip="${mod_name}_$c.zip"
    cd "$c"
    find . -type f | sed -e 's|^\.\/||' -e 's|\/|\\|g' | sort > "$file_list"
    $dat2 a "$dat" @"$file_list"
    zip "$zip" "$dat"
    cd ..
  done
  cd ..
  mv "$comp_dir"/*/*.zip .
fi
