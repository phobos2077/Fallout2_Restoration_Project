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
    files=""
    for f in $(ls | grep -i "\.ssl$"); do # build file list
      int="$(echo $f | sed 's|\.ssl$|.int|')"
      if grep -qi "^$int " "$scripts_lst" || [[ "$d" == "global" ]]; then # if file is in scripts.lst or a global script
        script_name="$(echo "$f" | sed 's|\.ssl$|.int|')"
        gcc -E -x c -P -Werror -Wfatal-errors -o "${f}.tmp" "$f" # preprocess
        set +e
        wine "$compile_exe" -n -l -q -O2 "$f.tmp" -o "$dst/$script_name" # compile
        if [[ "$?" != "0" ]]; then # 1 retry on wine connection reset
          set -e
          sleep 1
          wine "$compile_exe" -n -l -q -O2 "$f.tmp" -o "$dst/$script_name" # compile
        fi
        set -e
      fi
    done
    cd ..
  fi
done
