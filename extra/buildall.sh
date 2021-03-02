#!/bin/bash

set -xeu -o pipefail

# exporting for subshell
export src="$(realpath scripts_src)"
export dst="$(realpath data/scripts)"
export scripts_lst="$dst/scripts.lst"
export compile_exe="$bin_dir/compile.exe"

# wine doesn't return proper error code on missing file
if [[ ! -f $compile_exe ]]; then
  echo "compile.exe missing, failed"
  exit 1
fi

# compile all
for d in $(ls $src); do
  if [[ -d "$src/$d" && "$d" != "template" ]]; then # if it's a dir and not a template
    cd "$src/$d"
    for f in $(ls | grep -i "\.ssl$"); do # build file list
      int="$(echo $f | sed 's|\.ssl$|.int|')"
      process=0
      if grep -qi "^$int " "$scripts_lst"; then # if file is in scripts.lst
        process=1
      fi
      if [[ "$d" == "global" ]]; then # or if it's a global script
        process=1
      fi
      if [[ "$process" == "1" ]]; then
        gcc -E -x c -P -Werror -Wfatal-errors -o "${f}.tmp" "$f" # preprocess
        wine "$compile_exe" -n -l -q -O2 "$f.tmp" -o "$dst/$int"
        rm -f "$f.tmp"
      fi
    done
  fi
done
