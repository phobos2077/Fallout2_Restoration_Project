#!/bin/bash

set -xeu -o pipefail

bin_dir="$(realpath $bin_dir)"
dat2a="wine $bin_dir/dat2.exe a -1"
file_list="$(realpath file.list)"
release_dir="$(realpath $release_dir)"

if [[ -d "$appearance_dir" ]]; then
  mkdir -p "$release_dir/appearance"
  cd "$appearance_dir"
  for a in $(ls); do
    dat="$a.dat"
    cd "$a"
    find . -type f | sed -e 's|^\.\/||' -e 's|\/|\\|g' | sort > "$file_list"
    $dat2a "$release_dir/appearance/$dat" @"$file_list"
    cd ..
  done
  cd ..
fi
