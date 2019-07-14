#!/bin/bash

set -xeu -o pipefail

src="$(realpath scripts_src)"
dst="$(realpath data/scripts)"
extra_dir="$(realpath extra)"
bin_dir="$(realpath $bin_dir)"
skip_list="$(realpath $extra_dir/skip.list)"

mkdir -p "$dst"

# single file compile
function process_file() {
  f="$1"
  script_name="$(echo "$f" | tr "[A-Z]" "[a-z]" | sed 's|\.ssl$|.int|')" # lowercase
  WINEARCH=win32 WINEDEBUG=-all wine "$bin_dir/wcc386.exe" "$f" -p -fo="$f.tmp" -w  # preprocess
  sed -i '/^[[:space:]]*$/d' "$f.tmp" # delete empty lines
  WINEARCH=win32 WINEDEBUG=-all wine "$bin_dir/compile.exe" -n -l -q -O2 "$f.tmp" -o "$dst/$script_name" # compile
  rm -f "$f.tmp"
}
# compile all
for d in $(ls $src); do
  if [[ -d "$src/$d" && "$d" != "TEMPLATE" ]]; then # if it's a dir and not template
    cd "$src/$d"
    for f in $(ls | grep -i "\.ssl$"); do
      if ! grep -qi "$d/$f" "$skip_list"; then # check if file is not on skip list
        process_file "$f"
      fi
    done
    cd ..
  fi
done
