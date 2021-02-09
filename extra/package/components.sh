#!/bin/bash

set -xeu -o pipefail

dat2a="wine $bin_dir/dat2.exe a -1"
comp_dir="components"
file_list="$(realpath file.list)"

# pack components into separate dat files
if [[ -d "$comp_dir" ]]; then
  cd "$comp_dir"
  for c in $(ls); do
    dat="${mod_name}_$c.dat"
    cd "$c"
    find . -type f | sed -e 's|^\.\/||' -e 's|\/|\\|g' | sort > "$file_list"
    $dat2a "$mods_dir/$dat" @"$file_list"
    cd ..
  done
  cd ..
fi
