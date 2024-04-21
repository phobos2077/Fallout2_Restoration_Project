#!/bin/bash

set -xeu -o pipefail

comp_dir="components"

# pack components into separate dat files
if [[ -d "$comp_dir" ]]; then
    cd "$comp_dir"
    # shellcheck disable=SC2045  # let it break on strange names
    for c in $(ls); do
        # shellcheck disable=SC2154  # from env.sh
        dat="${mod_name}_$c.dat"
        cd "$c"
        # shellcheck disable=SC2154  # from env.sh
        find . -type f | sed -e 's|^\.\/||' -e 's|\/|\\|g' | sort >"$file_list"
        # shellcheck disable=SC2154  # from env.sh
        $dat2a "$mods_dir/$dat" @"$file_list"
        cd ..
    done
    cd ..
fi
