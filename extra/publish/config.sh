#!/bin/bash

set -xeu -o pipefail

release_dir=$(realpath $release_dir)

wget "https://github.com/dbohdan/initool/releases/download/v0.10.0/initool-v0.10.0-e5daa7c-win32.zip" -O initool.zip
unzip initool.zip
mv camlrt.dll initool.exe $release_dir/
