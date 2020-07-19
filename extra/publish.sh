#!/bin/bash

set -xeu -o pipefail

export comp_dir="components"
export bin_dir="$(realpath $bin_dir)"
export dat2="wine $bin_dir/dat2.exe"
export dat2a="wine $bin_dir/dat2.exe a -1"
export trans_dir="$(realpath translations)"
export mods_dir="$(realpath $mods_dir)"
export release_dir="$(realpath $release_dir)"
export file_list="file.list"

# release?
if [ -n "$TRAVIS_TAG" ]; then # tag found: releasing
  export version="$(echo $TRAVIS_TAG | tr -d 'v')" # numeric
  export vversion="$TRAVIS_TAG"
  export uversion="$(echo $TRAVIS_TAG | tr 'v' 'u')" # in-game
else
  export version='0' # numeric
  export vversion="git$TRAVIS_COMMIT"
  export uversion="git$TRAVIS_COMMIT"
fi

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

# party orders
./"$extra_dir"/publish/party_orders.sh

# hq music
./"$extra_dir"/publish/hq_music.sh

# sfall
./"$extra_dir"/publish/sfall.sh

# npc armor mod from sfall
./"$extra_dir"/publish/npc_armor.sh

# ammo mod from sfall
./"$extra_dir"/publish/ammo.sh

# final package
pushd .
cd "$release_dir"
zip -r "${mod_name}_${vversion}.zip" * # our package
popd
mv "$release_dir/${mod_name}_${vversion}.zip" .

# exe installer
./"$extra_dir"/publish/inno.sh
