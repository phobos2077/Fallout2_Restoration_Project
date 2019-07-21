#!/bin/bash

bdir="data.rpu.bak"

rm -f patch000.dat
mv data $bdir
mkdir -p data/sound
mv $bdir/SAVEGAME data/
mv $bdir/sound/music data/sound/
mv $bdir/*.txt data/
mv $bdir/*.gcd data/
echo "RPU installed."
