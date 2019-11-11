#!/bin/bash

set -xeu -o pipefail

release_dir="$(realpath $release_dir)"
extra_dir="$(realpath $extra_dir)"
release_ini="$release_dir/ddraw.ini"
up_ini="$extra_dir/publish/ddraw.ini"

sfall_url="https://sourceforge.net/projects/sfall/files/sfall/sfall_$sfall_version.7z/download"
files="
ddraw.dll
sfall.dat
sfall-mods.ini
data/scripts/gl_highlighting.int
data/scripts/gl_partycontrol.int
"

wget -q "$sfall_url" -O sfall.7z

for f in $files; do
  7zr e sfall.7z "$f"
  mv "$(basename $f)" "$release_dir/"
done

crudini --merge "$release_ini" < "$up_ini"
version="$(echo $TRAVIS_TAG | tr 'v' 'u')"
crudini --set "$release_ini" "Misc" "VersionString" "FALLOUT II 1.02d  RP 2.3.3${version}"
unix2dos "$release_ini"
