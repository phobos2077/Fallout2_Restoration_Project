#define install_dir "C:\Games\Fallout2"
#define backup_dir "backup\upu"
#define mods_dir "{app}\mods"
#define uversion "u0"
#define vversion "v0"

[Setup]
AppName=Fallout 2 Unofficial Patch
AppVerName=Fallout 2 Unofficial Patch 1.02.31{#uversion}
AppId=Fallout 2 Unofficial Patch
AppPublisher=BGforge
AppPublisherURL=https://bgforge.net
AppSupportURL=https://forums.bgforge.net/viewforum.php?f=34
AppUpdatesURL=https://github.com/BGforgeNet/Fallout2_Unofficial_Patch
DefaultDirName={#install_dir}
DisableProgramGroupPage=yes
OutputBaseFilename=upu_{#vversion}
Compression=lzma
DirExistsWarning=no
Uninstallable=no
InfoBeforeFile=before.rtf
SetupIconFile=nuclear.ico

[Files]
Source: "..\..\release\*.*"; DestDir: "{app}"; Components: core; Flags: ignoreversion recursesubdirs overwritereadonly
Source: "..\..\translations\upu_czech.dat"; DestDir: "{#mods_dir}"; Components: translation\czech; Flags: ignoreversion overwritereadonly
Source: "..\..\translations\upu_french.dat"; DestDir: "{#mods_dir}"; Components: translation\french; Flags: ignoreversion overwritereadonly
Source: "..\..\translations\upu_german.dat"; DestDir: "{#mods_dir}"; Components: translation\german; Flags: ignoreversion overwritereadonly
Source: "..\..\translations\upu_hungarian.dat"; DestDir: "{#mods_dir}"; Components: translation\hungarian; Flags: ignoreversion overwritereadonly
Source: "..\..\translations\upu_italian.dat"; DestDir: "{#mods_dir}"; Components: translation\italian; Flags: ignoreversion overwritereadonly
Source: "..\..\translations\upu_polish.dat"; DestDir: "{#mods_dir}"; Components: translation\polish; Flags: ignoreversion overwritereadonly
Source: "..\..\translations\upu_portuguese.dat"; DestDir: "{#mods_dir}"; Components: translation\portuguese; Flags: ignoreversion overwritereadonly
Source: "..\..\translations\upu_russian.dat"; DestDir: "{#mods_dir}"; Components: translation\russian; Flags: ignoreversion overwritereadonly
Source: "..\..\translations\upu_spanish.dat"; DestDir: "{#mods_dir}"; Components: translation\spanish; Flags: ignoreversion overwritereadonly

[INI]
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "czech";  Components: translation\czech;
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "french";  Components: translation\french;
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "german";  Components: translation\german;
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "hungarian";  Components: translation\hungarian;
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "italian";  Components: translation\italian;
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "polish";  Components: translation\polish;
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "portuguese";  Components: translation\portuguese;
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "russian";  Components: translation\russian;
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "spanish";  Components: translation\spanish;

[Dirs]
Name: "{app}\{#backup_dir}"

[Run]
Filename: "{app}\upu-install.bat"; Parameters: "> {#backup_dir}\log.txt 2>&1"; WorkingDir: "{app}"; Description: "install script";

[Components]
Name: "core"; Description: "All the fixes"; Types: "custom"; Flags: fixed;
Name: "translation"; Description: "Language"; Types: "custom";
Name: "translation\english"; Description: "English"; Flags: exclusive disablenouninstallwarning;
Name: "translation\czech"; Description: "Czech"; Flags: exclusive disablenouninstallwarning;
Name: "translation\french"; Description: "French"; Flags: exclusive disablenouninstallwarning;
Name: "translation\german"; Description: "German"; Flags: exclusive disablenouninstallwarning;
Name: "translation\hungarian"; Description: "Hungarian"; Flags: exclusive disablenouninstallwarning;
Name: "translation\italian"; Description: "Italian"; Flags: exclusive disablenouninstallwarning;
Name: "translation\polish"; Description: "Polish"; Flags: exclusive disablenouninstallwarning;
Name: "translation\portuguese"; Description: "Portuguese"; Flags: exclusive disablenouninstallwarning;
Name: "translation\russian"; Description: "Russian"; Flags: exclusive disablenouninstallwarning;
Name: "translation\spanish"; Description: "Spanish"; Flags: exclusive disablenouninstallwarning;

[Types]
Name: "custom"; Description: "Custom Selection"; Flags: iscustom
