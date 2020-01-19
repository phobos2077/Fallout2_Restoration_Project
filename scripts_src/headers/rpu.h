#include "command.h" //for vault boxer

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

#define enable_vault_boxer_style(style_item_pid) \
  if (obj_carrying_pid_obj(dude_obj,style_item_pid) == 0) then begin \
    variable armor := create_object(style_item_pid,0,0); \
    add_obj_to_inven(dude_obj,armor); \
    wield_obj_critter(dude_obj, armor); \
    refresh_pc_art;
  end

procedure doVaultBoxerAppearance begin
  variable enabled := rpu_msetting(set_vault_boxer);
  if enabled and appearance_mod_enabled then begin
    set_global_var(GVAR_TMP_GLOBAL_VAR,1);
    if dude_is_male then begin
      switch (get_sfall_global_int("HApStyle") begin
        case LONG_HAIR: enable_vault_boxer_style(PID_VAULT_BOXER_MALE_LONG_HAIR)
        case BALD_HAIR: enable_vault_boxer_style(PID_VAULT_BOXER_MALE_LONG_HAIR)
        case REG_HAIR: enable_vault_boxer_style(PID_VAULT_BOXER_MALE_NORMAL)
      end
    end
  end
end

procedure removeVaultBoxerAppearance begin
  variable enabled := rpu_msetting(set_vault_boxer);
  if enabled and appearance_mod_enabled then begin
    set_global_var(GVAR_TMP_GLOBAL_VAR,0);
    if dude_is_male then begin
      if ((get_sfall_global_int("HApStyle")) == LONG_HAIR) then begin
        remove_armor(dude_obj)
        destroy_object(obj_carrying_pid_obj(dude_obj,PID_VAULT_BOXER_MALE_LONG_HAIR));
        refresh_pc_art;
      end else if ((get_sfall_global_int("HApStyle")) == BALD_HAIR) then begin
        remove_armor(dude_obj)
        destroy_object(obj_carrying_pid_obj(dude_obj,PID_VAULT_BOXER_MALE_BALD));
        refresh_pc_art;
      end else if ((get_sfall_global_int("HApStyle")) == REG_HAIR) then begin
        remove_armor(dude_obj)
        destroy_object(obj_carrying_pid_obj(dude_obj,PID_VAULT_BOXER_MALE_NORMAL));
        refresh_pc_art;
      end
    end
  end
end


#endif  // RPU_H
