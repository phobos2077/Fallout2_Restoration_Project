#!/bin/bash

set -xeu -o pipefail

bin_dir="$(realpath $bin_dir)"
mods_dir="$(realpath $mods_dir)"
release_dir="$(realpath release_dir)"
install_iss="$extra_dir/inno/inno.iss"
inno_dir=~/.wine/drive_c/programs/inno
inno_bin="$inno_dir/ISCC.exe"
inno_install_bin="is.exe"
inno_install_dir="C:\programs\inno"
inno_url="https://jrsoftware.org/download.php/$inno_install_bin"

#install innosetup
wget -q "$inno_url"
wine "$inno_install_bin" /VERYSILENT /SUPPRESSMSGBOXES /NORESTART /DIR="$inno_install_dir"
rm -f "$inno_install_bin"

# delete unnecessary files
rm -f "$release_dir"/{upu-install.sh,upu-install.command}
sed -i "s|define uversion .*|define uversion \"${uversion}\"|" "$install_iss"
sed -i "s|define vversion .*|define vversion \"${vversion}\"|" "$install_iss"
wine "$inno_bin" "$install_iss"
mv "$extra_dir"/inno/Output/*.exe .
