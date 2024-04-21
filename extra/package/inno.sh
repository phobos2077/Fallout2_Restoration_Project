#!/bin/bash

set -xeu -o pipefail

install_iss="inno.iss" # inno doesn't like absolute path

# inno in docker is picky about permissions and accessing files above current dir
pushd .
cd extra/inno
mkdir -p Output
chmod 0777 Output

# delete unnecessary files
# shellcheck disable=SC2154  # from env.sh
rm -f "$release_dir"/{rpu-install.sh,rpu-install.command}
# shellcheck disable=SC2154  # from env.sh
sed -i "s|define uversion .*|define uversion \"${uversion}\"|" "$install_iss"
# shellcheck disable=SC2154  # from env.sh
sed -i "s|define vversion .*|define vversion \"${vversion}\"|" "$install_iss"

rm -rf release translations
cp -r "$release_dir" ./
mkdir translations
# shellcheck disable=SC2154  # from env.sh
mv "$trans_dir"/*.dat translations/

# move optional components
mkdir optional
mv ./release/mods/rpu_enhanced_worldmap.dat optional/
mv ./release/mods/rpu_rifle_animations.dat optional/
mv ./release/mods/rpu_wakizashi_animations.dat optional/
mv ./release/mods/rpu_extended_flamer.dat optional/
mv ./release/mods/cassidy_head.dat optional/
mv ./release/mods/cassidy_voice_joey_bracken_hq.dat optional/
mv ./release/mods/rpu_improved_mysterious_stranger.dat optional/

# alternative animations, not included into manual install
# shellcheck disable=SC2154  # from env.sh
"$extra_dir"/package/animation_fixes.sh

docker run --rm -i -v "$PWD":/work amake/innosetup "$install_iss"
rm -rf release translations
popd

mv "$extra_dir"/inno/Output/*.exe .
