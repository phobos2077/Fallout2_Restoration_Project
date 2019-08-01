#!/bin/bash

bdir="backup/rpu"
mkdir -p $bdir/data

if [[ -f patch000.dat ]]; then
  mv patch000.dat $bdir/
fi

# keep savegames, sound, character files
for i in $(ls data | grep -vi "^savegame$\|\.txt$\|\.gcd$\|^sound$"); do
  mv data/$i $bdir/data/
done

# sfall: ammo and npc armor scripts
mkdir -p data/scripts
for f in gl_npcarmor.int gl_ammomod.int; do
  mv $f data/scripts/
done

# old appearance mod in directories
if [[ -d appearance ]]; then
  for i in $(ls appearance); do
    if [[ -d $i ]]; then
      mv appearance/$i $bdir/
    fi
  done
fi

echo "RPU installed. Backup is in $bdir."
