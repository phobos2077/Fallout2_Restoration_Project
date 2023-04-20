[Code]
function NextButtonClick(PageId: Integer): Boolean;
begin
  Result := True;
  if (PageId = wpSelectDir) then begin
    if not FileExists(ExpandConstant('{app}\fallout2.exe')) then begin
      MsgBox('fallout2.exe not found in the selected directory. Re-check game path.', mbError, MB_OK);
      Result := False;
      exit;
    end;
    if FileExists(ExpandConstant('{app}\up-changelog.txt')) and not FileExists(ExpandConstant('{app}\rp-changelog.txt')) then begin
      MsgBox('UP installation detected. RPU cannot be installed on UP. Re-start with a fresh Fallout 2 installation.', mbError, MB_OK);
      Result := False;
      exit;
    end;
    if FileExists(ExpandConstant('{app}\mods\upu.dat')) then begin
      MsgBox('UPU installation detected. RPU cannot be installed on UPU. Re-start with a fresh Fallout 2 installation.', mbError, MB_OK);
      Result := False;
      exit;
    end;
  end;
end;
