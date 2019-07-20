#!/bin/bash

bdir="data.rpu.bak"

rm -f patch000.dat
mv data $bdir
mkdir -p data/sound
mv $bdir/SAVEGAME data/
mv $bdir/sound/music data/sound/
echo "RPU installed."
