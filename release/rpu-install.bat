set "bdir=backup\rpu"
set "scripts_dir=data\scripts"

if not exist %bdir% mkdir %bdir%

if exist patch000.dat (
  move patch000.dat %bdir%\
)

:: I don't know how to iterate over files in batch properly, so just moving back and forth
move /y data %bdir%\
move /y %bdir%\data\savegame data\
move /y %bdir%\data\*.txt data\
move /y %bdir%\data\*.gcd data\
mkdir data\sound\music
move /y %bdir%\data\sound\music\*.acm data\sound\music\
move /y %bdir%\data\sound data\

:: old appearance mod in directories
set appearances=hfr00s00,hfr00s01,hfr00s02,hmr00s00,hmr00s01,hmr00s02
for %%a in (%appearances%) do (
  if exist appearance\%%a (
    if not exist %bdir%\appearance mkdir %bdir%\appearance
    move appearance\%%a %bdir%\appearance\
  )
)

:: sfall scripts
mkdir data\scripts
move gl_ammomod.int %scripts_dir%\
move gl_highlighting.int %scripts_dir%\
move gl_npcarmor.int %scripts_dir%\
move gl_partycontrol.int %scripts_dir%\

:: sound path fix
initool.exe s fallout2.cfg sound music_path1 data\sound\music\ > tmp.cfg
initool.exe s tmp.cfg sound music_path2 sound\music\ > tmp2.cfg
del /s %bdir%\fallout2.cfg
move /y fallout2.cfg %bdir%\
del /s tmp.cfg initool.exe camlrt.dll
move /y tmp2.cfg fallout2.cfg

del /s rpu-install.sh rpu-install.bat rpu-install.command
echo UPU installed. Backup is in %bdir%
