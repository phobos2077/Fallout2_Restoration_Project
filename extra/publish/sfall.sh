#!/bin/bash

set -xeu -o pipefail

release_ini="$release_dir/ddraw.ini"
custom_ini="$extra_dir/publish/ddraw.ini"

sfall_url="https://sourceforge.net/projects/sfall/files/sfall/sfall_$sfall_version.7z/download"
files="
ddraw.dll
ddraw.ini
sfall.dat
"

wget -q "$sfall_url" -O sfall.7z
for f in $files; do
  7zr e sfall.7z "$f"
  mv "$(basename $f)" "$release_dir/"
done

# uncomment ini settings to preserve options' placement in ddraw.ini
entries="$(cat $custom_ini | grep '=' | awk -F '=' '{print $1}')"
for e in $entries; do
  sed -i "s|^;$e=|$e=|" "$release_ini"
done
# then merge custom settings
crudini --merge "$release_ini" < "$custom_ini"
# set version string
crudini --set "$release_ini" "Misc" "VersionString" "FALLOUT II 1.02.31${uversion}"
# crudini adds spaces arouns the values, need to remove them
sed -i "s|^\([[:alnum:]]\+\) = |\1=|" "$release_ini"
# for windows users
unix2dos "$release_ini"
