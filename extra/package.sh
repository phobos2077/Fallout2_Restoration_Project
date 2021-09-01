#!/bin/bash

set -xeu -o pipefail

export comp_dir="components"
export dat2="wine $bin_dir/dat2.exe"
export dat2a="wine $bin_dir/dat2.exe a -1"
export trans_dir="$(realpath translations)"
export file_list="$(realpath dat2.list)"

short_sha="$(git rev-parse --short HEAD)"
# defaults, local build or github non-tagged
export version="git$short_sha"
export vversion="$version" # in package names
export uversion="$version" # in game

if [[ ! -z "${GITHUB_REF-}" ]]; then # github build
  if echo "$GITHUB_REF" | grep "refs/tags"; then # tagged
    version="$(echo $GITHUB_REF | sed 's|refs\/tags\/v||')"
    export version
    export vversion="v$version"
    export uversion="u$version" # in game
  fi
fi

# cleanup for local build
git checkout -- release
git clean -fd release
git clean -fdX release

# wine pollutes the log with "wine: Read access denied for device" if z is linked to /
z="$(readlink -f ~/.wine/dosdevices/z\:)"
if [[ "$z" == "/" ]]; then
  rm -f ~/.wine/dosdevices/z\:
  ln -s /home ~/.wine/dosdevices/z\:
fi

# translations packaged first, to get extra text out of the way
"$extra_dir"/package/translations.sh

# data
dat="$mod_name.dat"
mkdir -p "$mods_dir"

cd data
# I don't know how to pack recursively
find . -type f | sed -e 's|^\.\/||' -e 's|\/|\\|g' | sort > "$file_list" # replace slashes with backslashes
$dat2a "$mods_dir/$dat" @"$file_list"
cd ..

# pack components into separate dat files
"$extra_dir"/package/components.sh

# pack appearance, too
"$extra_dir"/package/appearance.sh

# cassidy head and voice
"$extra_dir"/package/cassidy_head.sh

# party orders
"$extra_dir"/package/party_orders.sh

# hq music
"$extra_dir"/package/hq_music.sh

# sfall
"$extra_dir"/package/sfall.sh

# npc armor mod from sfall
"$extra_dir"/package/npc_armor.sh

# ammo mod from sfall
"$extra_dir"/package/ammo.sh

# manual package: linux/mac os
pushd .
cd "$release_dir"
zip -r "${mod_name}_${vversion}.zip" * # our package
popd
mv "$release_dir/${mod_name}_${vversion}.zip" .

# exe installer
"$extra_dir"/package/inno.sh

# cleanup for local build
git checkout -- data/text release extra/inno/inno.iss
git clean -fd translations
git clean -fdX translations
