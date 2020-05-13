#define basename "rpu"
#define install_dir "C:\Games\Fallout2"
#define backup_dir "backup\" + basename
#define mods_dir "{app}\mods"
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
DefaultDirName={#install_dir}
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
Source: "..\..\release\*.*"; DestDir: "{app}"; Components: core; Flags: ignoreversion recursesubdirs overwritereadonly
Source: "..\..\translations\{#basename}_czech.dat"; DestDir: "{#mods_dir}"; Components: translation\czech; Flags: ignoreversion overwritereadonly
Source: "..\..\translations\{#basename}_french.dat"; DestDir: "{#mods_dir}"; Components: translation\french; Flags: ignoreversion overwritereadonly
Source: "..\..\translations\{#basename}_german.dat"; DestDir: "{#mods_dir}"; Components: translation\german; Flags: ignoreversion overwritereadonly
Source: "..\..\translations\{#basename}_polish.dat"; DestDir: "{#mods_dir}"; Components: translation\polish; Flags: ignoreversion overwritereadonly
Source: "..\..\translations\{#basename}_portuguese.dat"; DestDir: "{#mods_dir}"; Components: translation\portuguese; Flags: ignoreversion overwritereadonly
Source: "..\..\translations\{#basename}_russian.dat"; DestDir: "{#mods_dir}"; Components: translation\russian; Flags: ignoreversion overwritereadonly
Source: "..\..\translations\{#basename}_spanish.dat"; DestDir: "{#mods_dir}"; Components: translation\spanish; Flags: ignoreversion overwritereadonly

[INI]
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "czech";  Components: translation\czech;
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "french";  Components: translation\french;
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "german";  Components: translation\german;
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "polish";  Components: translation\polish;
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "portuguese";  Components: translation\portuguese;
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "russian";  Components: translation\russian;
FileName: "{app}\fallout2.cfg"; Section: "system"; Key: "language"; String: "spanish";  Components: translation\spanish;

[Dirs]
Name: "{app}\{#backup_dir}"

[Run]
Filename: "{app}\{#basename}-install.bat"; Parameters: "> {#backup_dir}\log.txt 2>&1"; WorkingDir: "{app}"; Description: "install script";

[Components]
Name: "core"; Description: "Core"; Types: "custom"; Flags: fixed;
Name: "translation"; Description: "Language"; Types: "custom";
Name: "translation\english"; Description: "English"; Flags: exclusive disablenouninstallwarning;
Name: "translation\czech"; Description: "Czech"; Flags: exclusive disablenouninstallwarning;
Name: "translation\french"; Description: "French"; Flags: exclusive disablenouninstallwarning;
Name: "translation\german"; Description: "German"; Flags: exclusive disablenouninstallwarning;
Name: "translation\polish"; Description: "Polish"; Flags: exclusive disablenouninstallwarning;
Name: "translation\portuguese"; Description: "Portuguese"; Flags: exclusive disablenouninstallwarning;
Name: "translation\russian"; Description: "Russian"; Flags: exclusive disablenouninstallwarning;
Name: "translation\spanish"; Description: "Spanish"; Flags: exclusive disablenouninstallwarning;

[Types]
Name: "custom"; Description: "Custom Selection"; Flags: iscustom
