#!/bin/bash

set -xeu -o pipefail

export extra_dir="$(realpath extra)"
export bin_dir="$extra_dir/bin"
export release_dir="$(realpath release)"
export mods_dir="$release_dir/mods"
export mpack_version=${mpack_version:-4.2.9}
export sfall_version=${sfall_version:-4.2.9}
export WINEARCH=win32
export WINEDEBUG=-all
export mod_name=rpu
export trans_dir="$(realpath translations)"

export appearance_repo="BGforgeNet/Fallout2_Hero_Appearance"
export party_orders_repo="BGforgeNet/Fallout2_Party_Orders"
export hq_music_repo="BGforgeNet/Fallout2-HQ-music"
export npc_armor_repo="BGforgeNet/Fallout2_NPC_Armor"

set +xeu +o pipefail
