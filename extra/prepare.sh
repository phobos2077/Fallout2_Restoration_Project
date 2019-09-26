#!/bin/bash

set -xeu -o pipefail

extra_dir=${extra_dir:-extra}
mpack_version=${mpack_version:-4.1.9}

if ! $extra_dir/need-build.sh ; then
  echo "scripts haven't changed, skipping build"
  exit 0
fi

mpack_file="modderspack_$mpack_version.7z"
mpack_url="https://sourceforge.net/projects/sfall/files/Modders%20pack/$mpack_file/download"
compile_exe="compile.exe"
mpack_compile="ScriptEditor/resources/$compile_exe"

sfse_url="http://www.nma-fallout.com/resources/sfall-script-editor.77/download?version=181"
sfse_file="sfse.rar"
sfse_dir="Fallout sFall Script Editor/Resources"

# directories
cache_dir="$HOME/.cache/build"
bin_dir="$(realpath extra/bin)"
mkdir -p "$cache_dir" "$bin_dir"

# packages
sudo apt-get -q update
sudo apt-get -q -y --no-install-recommends install wine-stable wine32 p7zip p7zip-full p7zip-rar moreutils

# compile.exe, no cache (mpack version may change)
wget -q "$mpack_url" -O "$mpack_7z"
7z e "$mpack_7z" "$mpack_compile"
mv -f "$compile_exe" "$bin_dir/"
# sfall headers
7z x "$mpack_7z" "scripting_docs/headers"
mv "scripting_docs/headers" "scripts_src/HEADERS/sfall"

# wcc, check cache
if [[ ! -f "$cache_dir/wcc386.exe" || ! -f "$cache_dir/wccd386.dll" || ! -f "$cache_dir/dat2.exe" ]]; then
  wget -q "$sfse_url" -O "$sfse_file"
  for f in wcc386.exe wccd386.dll dat2.exe; do
    7z e "$sfse_file" "$sfse_dir/$f"
    mv -f "$f" "$cache_dir/"
  done
fi
# copy
for f in wcc386.exe wccd386.dll dat2.exe; do
  cp -f "$cache_dir/$f" "$bin_dir/"
done
