// RP-specific additions go here
#ifndef RPU_H
#define RPU_H

#define rpu_ini "mods\\rpu.ini"
#define sec_main "main"
#define rpu_setting(section, setting) get_ini_setting(rpu_ini + "|" + section + "|" + setting)
#define rpu_string(section, setting) get_ini_string(rpu_ini + "|" + section + "|" + setting)
#define rpu_msetting(setting) get_ini_setting(rpu_ini + "|" + sec_main + "|" + setting)

#define set_marcus_armor "marcus_armor"
#define set_dogmeat_armor "dogmeat_armor"
#define set_smoking "smoking"
#define set_lenny_look "lenny_new_look"
#define set_vault_boxer "vault_boxer"
#define set_cassidy_head "cassidy_head"
#define set_goris_derobing "goris_quick_derobing"

#define appearance_mod_enabled get_ini_setting("ddraw.ini|Misc|EnableHeroAppearanceMod")

procedure check_filesystem_override begin
  variable fs_override := get_ini_setting("ddraw.ini|Misc|UseFileSystemOverride");
  if fs_override != 1 then begin
    ndebug("UseFileSystemOverride is disabled, enabling");
    set_ini_setting("ddraw.ini|Misc|UseFileSystemOverride", 1);
    float_msg(dude_obj, SCRIPT_REALNAME + ": filesystem override was disabled, some features failed to load. The setting is corrected. EXIT AND RE-LAUNCH THE GAME now.", FLOAT_MSG_WARNING);
    return false;
  end
  return true;
end

procedure is_lockpick_elec(variable item) begin
  switch (obj_pid(item)) begin
    case PID_ELECTRONIC_LOCKPICKS: return true;
    case PID_ELEC_LOCKPICK_MKII: return true;
    default: return false;
  end
end
procedure is_lockpick_mech(variable item) begin
  switch (obj_pid(item)) begin
    case PID_LOCKPICKS: return true;
    case PID_EXP_LOCKPICK_SET: return true;
    default: return false;
  end
end
procedure is_lockpick(variable item) begin
  if is_lockpick_mech(item) then return true;
  if is_lockpick_elec(item) then return true;
  return false;
end


#endif  // RPU_H
