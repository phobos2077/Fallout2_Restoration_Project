#!/bin/bash

bdir="backup.rpu"

if [[ -f patch000.dat ]]; then
  mv patch000.dat $bdir/
fi

mkdir -p $bdir/data

# keep savegames, sound, character files
for i in $(ls data | grep -vi "^savegame$\|\.txt$\|\.gcd$\|^sound$"); do
  mv data/$i $bdir/data/
done

# old appearance mod in directories
if [[ -d appearance ]]; then
  for i in $(ls appearance); do
    if [[ -d $i ]]; then
      mv appearance/$i $bdir/
    fi
  done
fi

echo "RPU installed."
