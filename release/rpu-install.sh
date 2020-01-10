#!/bin/bash

cd -- "$(dirname "$BASH_SOURCE")"

bdir="backup/rpu"
mkdir -p $bdir/data

if [[ -f patch000.dat ]]; then
  mv patch000.dat $bdir/
fi

# keep savegames, sound, character files
for i in $(ls data | grep -vi "^savegame$\|\.txt$\|\.gcd$\|^sound$"); do
  mv data/$i $bdir/data/
done

# sfall mods
mkdir -p data/scripts
scripts="
gl_ammomod.int
gl_highlighting.int
gl_npcarmor.int
gl_partycontrol.int
"
for f in $scripts; do
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

# sound path fix
rm -f camlrt.dll initool.exe
cp fallout2.cfg $bdir/
sed -i.bak 's|music_path1=.*|music_path1=data\\sound\\music\\|' fallout2.cfg
sed -i.bak 's|music_path2=.*|music_path2=sound\\music\\|' fallout2.cfg
rm -f fallout2.cfg.bak

echo "RPU installed. Backup is in $bdir."
