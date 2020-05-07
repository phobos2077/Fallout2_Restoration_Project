#!/bin/bash

set -xeu -o pipefail

release_ini="$release_dir/ddraw.ini"
custom_ini="$extra_dir/publish/ddraw.ini"

sfall_url="https://sourceforge.net/projects/sfall/files/sfall/sfall_$sfall_version.7z/download"
files="
ddraw.dll
ddraw.ini
sfall.dat
sfall-mods.ini
data/scripts/gl_highlighting.int
data/scripts/gl_partycontrol.int
"

wget -q "$sfall_url" -O sfall.7z
for f in $files; do
  7zr e sfall.7z "$f"
  mv "$f" "$release_dir/"
done
mv "$release_dir/sfall-mods.ini" "$release_dir/mods/"

crudini --merge "$release_ini" < "$custom_ini"
crudini --set "$release_ini" "Misc" "VersionString" "FALLOUT II 1.02d  RP 2.3.3${uversion}"
sed -i "s|^\([[:alnum:]]\+\) = |\1=|" "$release_ini" # crudini adds spaces arouns the values, need to remove them
unix2dos "$release_ini"
