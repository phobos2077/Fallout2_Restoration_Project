#define basename "rpu"
#define backup_dir "backup\" + basename
#define mods_dir "{app}\mods"
; build process shenanigans, see inno.sh
#define uversion "u0"
#define vversion "v0"

[Setup]
AppName=Fallout 2 Restoration Project
AppVerName=Fallout 2 Restoration Project 2.3.3{#uversion}
AppId=Fallout 2 Restoration Project
AppPublisher=BGforge
AppPublisherURL=https://bgforge.net
AppSupportURL=https://forums.bgforge.net/viewforum.php?f=34
AppUpdatesURL=https://github.com/BGforgeNet/Fallout2_Restoration_Project
DefaultDirName=C:\Games\Fallout2
AppendDefaultDirName=no
DisableProgramGroupPage=yes
OutputBaseFilename={#basename}_{#vversion}
Compression=lzma
DirExistsWarning=no
Uninstallable=no
InfoBeforeFile=before.rtf
SetupIconFile=nuclear.ico
DisableDirPage=no
UsePreviousAppDir=no
AlwaysShowDirOnReadyPage=yes

[Files]
Source: "release\*.*"; DestDir: "{app}"; Components: core; Flags: ignoreversion recursesubdirs overwritereadonly
#include "files_translations.iss"
Source: "optional\walk_speed_fix_low_fps.dat"; DestDir: "{#mods_dir}"; Components: walk_speed\low_fps; Flags: ignoreversion overwritereadonly
Source: "optional\goris_fast_derobing_low_fps.dat"; DestDir: "{#mods_dir}"; Components: goris\low_fps; Flags: ignoreversion overwritereadonly

[INI]
#include "ini_translations.iss"
#include "ini_qol.iss"
#include "ini_debug.iss"
#include "ini_sound.iss"
FileName: "{app}\mods\upu.ini"; Section: "Main"; Key: "goris_derobing_speed"; String: "0"; Components: goris\skip;

[Dirs]
Name: "{app}\{#backup_dir}"

[Run]
Filename: "{app}\{#basename}-install.bat"; Parameters: "> {#backup_dir}\log.txt 2>&1"; WorkingDir: "{app}"; Description: "install script";

[Components]
Name: "core"; Description: "Core"; Types: "custom"; Flags: fixed;
Name: "qol"; Description: "Enable sfall QoL features"; Types: "custom";

Name: "walk_speed"; Description: "Walk speed fix"; Types: "custom";
Name: "walk_speed\high_fps"; Description: "High FPS"; Flags: exclusive disablenouninstallwarning;
Name: "walk_speed\low_fps"; Description: "Low FPS"; Flags: exclusive disablenouninstallwarning;

Name: "goris"; Description: "Faster derobing for Goris"; Types: "custom";
Name: "goris\high_fps"; Description: "High FPS"; Flags: exclusive disablenouninstallwarning;
Name: "goris\low_fps"; Description: "Low FPS"; Flags: exclusive disablenouninstallwarning;
Name: "goris\skip"; Description: "Skip"; Flags: exclusive disablenouninstallwarning;

Name: "translation"; Description: "Language"; Types: "custom"; Flags: fixed;
#include "components_translations.iss"

[Types]
Name: "custom"; Description: "Custom Selection"; Flags: iscustom

#include "preinstall.iss"
