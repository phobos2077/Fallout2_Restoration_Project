#!/bin/bash

set -xeu -o pipefail

extra_dir="$(realpath extra)"
export extra_dir
export bin_dir="$extra_dir/bin"
release_dir="$(realpath release)"
export release_dir
export mods_dir="$release_dir/mods"
export mpack_version=${mpack_version:-4.4}
export mpack_7z="mpack.7z"
export sfall_version=${sfall_version:-4.4.0.1}
export WINEARCH=win32
export WINEDEBUG=-all
export mod_name=rpu
trans_dir="$(realpath translations)"
export trans_dir

export appearance_repo="BGforgeNet/Fallout2_Hero_Appearance"
export party_orders_repo="BGforgeNet/Fallout2_Party_Orders"
export hq_music_repo="BGforgeNet/Fallout2-HQ-music"
export npc_armor_repo="BGforgeNet/Fallout2_NPC_Armor"
