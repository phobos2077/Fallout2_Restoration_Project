// This file is for RP additions to command.h.
// Its purpose is to keep actual command.h identical between UP and RP, easing maintenance.
// Non-command.h additions should go to rpu.h.

#ifndef RPU_COMMAND_H
#define RPU_COMMAND_H


procedure vault_boxer_style(variable enable) begin
  variable style_item_pid;
  if dude_is_male then return;

  switch get_sfall_global_int("HApStyle") begin
    case LONG_HAIR: style_item_pid := PID_VAULT_BOXER_MALE_LONG_HAIR;
    case BALD_HAIR: style_item_pid := PID_VAULT_BOXER_MALE_BALD;
    case REG_HAIR: style_item_pid := PID_VAULT_BOXER_MALE_NORMAL;
  end
  if enable begin
    if (obj_carrying_pid_obj(dude_obj,style_item_pid) == 0) then begin
      variable armor := create_object(style_item_pid,0,0);
      add_obj_to_inven(dude_obj,armor);
      wield_obj_critter(dude_obj, armor);
    end
  end else begin
    remove_armor(dude_obj)
    destroy_object(obj_carrying_pid_obj(dude_obj,style_item_pid));
  end
  refresh_pc_art;
end

procedure doVaultBoxerAppearance begin
  variable enabled := rpu_msetting(set_vault_boxer);
  if enabled and appearance_mod_enabled then begin
    set_global_var(GVAR_TMP_GLOBAL_VAR,1);
    call vault_boxer_style(true);
  end
end

procedure removeVaultBoxerAppearance begin
  variable enabled := rpu_msetting(set_vault_boxer);
  if enabled and appearance_mod_enabled then begin
    set_global_var(GVAR_TMP_GLOBAL_VAR,0);
    call vault_boxer_style(false);
  end
end


#endif  // RPU_COMMAND_H
