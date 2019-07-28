@echo off

set "bdir=backup\rpu"

if not exist %bdir% mkdir %bdir%

if exist patch000.dat (
  move patch000.dat %bdir%\
)

:: I don't know how to iterate over files in batch properly, so just moving back and forth
move data %bdir%\
move %bdir%\data\savegame data\ 2>nul
move %bdir%\data\*.txt data\ 2>nul
move %bdir%\data\*.gcd data\ 2>nul
move %bdir%\data\sound data\ 2>nul

:: old appearance mod in directories
set appearances=hfr00s00,hfr00s01,hfr00s02,hmr00s00,hmr00s01,hmr00s02
for %%a in (%appearances%) do (
  if exist appearance\%%a (
    if not exist %bdir%\appearance mkdir %bdir%\appearance
    move appearance\%%a %bdir%\appearance\
  )
)

echo RPU installed. Backup is in %bdir%
pause
