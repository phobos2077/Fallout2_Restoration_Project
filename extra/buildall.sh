#!/bin/bash

set -xeu -o pipefail

src="$(realpath scripts_src)"
dst="$(realpath data/scripts)"
extra_dir="$(realpath extra)"
bin_dir="$(realpath $bin_dir)"
skip_list="$(realpath $extra_dir/compile_skip.list)"

mkdir -p "$dst"

# single file compile
function process_file() {
  set -eu -o pipefail
  f="$1"
  dst="$2"
  script_name="$(echo "$f" | sed 's|\.ssl$|.int|')"
  gcc -E -x c -P -Werror -Wfatal-errors -o "${f}.tmp" "$f" # preprocess

  # retry on wine connection reset, 1 time should be enough
  set +e
  result_text="$(wine "$bin_dir/compile.exe" -n -l -q -O2 "$f.tmp" -o "$dst/$script_name" 2>&1)" # compile
  result_code="$?"
  set -e
  if [[ "$result_code" != "0" ]]; then
    set -x
    if echo "$result_text" | grep -q "recvmsg: Connection reset by peer"; then
      sleep 1
      wine "$bin_dir/compile.exe" -n -l -q -O2 "$f.tmp" -o "$dst/$script_name" # 1 retry
    else
      echo "Compilation failed:"
      echo "$result_text"
      exit 1
    fi
    set +x
  fi
  rm -f "$f.tmp"
}
export -f process_file

# compile all
for d in $(ls $src); do
  if [[ -d "$src/$d" ]]; then # if it's a dir
    cd "$src/$d"
    files=""
    set +x # ok this is too verbose
    for f in $(ls | grep -i "\.ssl$"); do # build file list
      if ! grep -q "$d/$f" "$skip_list"; then # check if file is not on skip list. Ugly but works.
        files="$files $f"
      fi
    done
    set -x # enabling output again
    if [[ -n "$files" ]]; then
      parallel -j2 -i bash -c "process_file {} $dst" -- $files
    fi
    cd ..
  fi
done
