#!/bin/bash

bdir="data.rpu.bak"

rm -f patch000.dat
mv data $bdir
mkdir -p data/sound
mv $bdir/SAVEGAME data/
mv $bdir/sound/music data/sound/
for ext in txt TXT gcd GCD; do
if [[ "$(ls $bdir | grep -c $ext)" -gt 0 ]]; then
  mv $bdir/*.$ext data/
fi
echo "RPU installed."
