//various custom commands
#ifndef UPU_H
#define UPU_H

#define upu_ini "mods\\upu.ini"
#define sec_main "main"
#define upu_setting(section, setting) get_ini_setting(upu_ini + "|" + section + "|" + setting)
#define upu_string(section, setting) get_ini_string(upu_ini + "|" + section + "|" + setting)
#define upu_msetting(setting) get_ini_setting(upu_ini + "|" + sec_main + "|" + setting)
#define set_goris_derobing "goris_quick_derobing"
#define repeatable_brahmin_drive upu_setting("ncr", "repeatable_brahmin_drive")

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

//force use item remotely
procedure create_and_use_itempid_on(variable target, variable itempid) begin
   variable item;
   item := create_object(itempid, tile_num(target), elevation(target));
   set_self(target);
   set_self(target);
   use_obj_on_obj(item, target);
   set_self(0);
end

procedure is_human(variable who) begin
   variable type;
   type := critter_kill_type(who);
   if type == KILL_TYPE_men_kills or type == KILL_TYPE_women_kills or type == KILL_TYPE_children_kills then return true;
   return false;
end

#define is_critter(obj)    (obj_type(obj) == OBJ_TYPE_CRITTER)

//a workaround for game_time going negative after 7 years
#define restock_fix \
  if ( (game_time < 0) and (local_var(LVAR_Restock_Time_Fix) == 0) ) then begin \
    set_local_var(LVAR_Restock_Time, game_time - 1); \
    set_local_var(LVAR_Restock_Time_Fix, 1); \
  end
// only used on tribe maps
#define restock_fix_map \
  if ( (game_time < 0) and (map_var(MVAR_Restock_Time_Fix) == 0)  ) then begin \
    set_map_var(MVAR_Restock_Time, game_time - 1); \
    set_map_var(MVAR_Restock_Time_Fix, 1); \
  end

#define CUR_AREA_MILITARY_BASE            (cur_town == AREA_MILITARY_BASE)

#define self_exists (self_pid != -1)
#define destroy_self destroy_object(self_obj)

procedure closest_party_member(variable obj) begin
  variable who, cur_distance, min_distance = -1, closest_who = false;
  // only dude
  if len_array(party_member_list_critters) == 1 then return false;

  foreach who in party_member_list_critters begin
    if who != dude_obj then begin
      cur_distance = tile_distance_objs(obj, who);
      if (min_distance == -1) or (cur_distance < min_distance) then begin
        min_distance = cur_distance;
        closest_who = who;
      end
    end
  end
  return closest_who;
end



/* Reputation */
#define dude_has_cult has_trait(TRAIT_PERK, dude_obj, PERK_cult_of_personality)

// effective reputation for critter reaction or lines (Reply). NOT for dude responses (NOption, etc).
// Evil_Critter is defined in talk_p_proc, while check_general_rep happens in other procedures too, so we build a separate array for them.
procedure self_is_evil begin
  variable evil_critters = [
    // grep -R "Evil_Critter:=1" scripts_src/ | awk -F ':' '{print $1}' | xargs grep "#define SCRIPT_REALNAME" | awk '{print $3}' | sort
    // Can't use SCRIPT_NAME because it's defined in (parentheses) and sfall array syntax won't have it.
    "bcdardog",
    "bcdargrd",
    "bcdarion",
    "bcgengrd",
    "bckarla",
    "bcphil",
    "dcslvgrt",
    "ecmstden",
    "ecmstnew",
    "fcdaveh",
    "fcelrind",
    "fcjuavki",
    "fclopan",
    "fcoz7",
    "fcoz9",
    "ncbismen",
    "ncdrgdlr",
    "ncmormen",
    "ncramire",
    "ncsalmen",
    "ocmatt",
    "qcfrank",
    "rchakes",
    "scbuster",
    "sclenny",
    "scmerk",
    "scmira",
    "scmrkgrd",
    "scoswald",
    "scrawpat",
    "scskeete",
    "scslvgrd",
    "scvortis"
  ];
  if is_in_array(SCRIPT_REALNAME, evil_critters) then return true;
  return false;
end

// account for karma beacon
procedure beacon_rep begin
  variable rep = global_var(GVAR_PLAYER_REPUTATION);
  if has_trait(TRAIT_PERK, dude_obj, PERK_karma_beacon_perk) then rep = rep * 2;
  return rep;
end
// account for Evil_Critter, aligned with critter's good/evil. For good, more is better. For evil, less is better.
procedure cult_rep begin
  variable rep = beacon_rep;
  if dude_has_cult then begin
    rep = abs(rep);
    if self_is_evil then rep = -rep;
  end
  return rep;
end
// account for Evil_Critter, absolute "good" value. More is better.
procedure self_rep begin
  variable rep = beacon_rep;
  if rep < 0 and self_is_evil then rep = abs(rep);
  if dude_has_cult then rep = abs(rep);
  return rep;
end
#define self_rep_positive (self_rep > 0)
#define self_rep_negative (self_rep < 0)

// normal mode: critter likes dude if he has title, taking Evil_Critter into account
procedure check_title(variable title) begin
  variable rep := cult_rep;
  if not self_is_evil and rep >= title then return true;
  if self_is_evil and rep <= title then return true;
  return false;
end
// inverse mode: critter dislikes dude if he has title, taking Evil_Critter into account
procedure check_title_bad(variable title) begin
  variable rep := cult_rep;
  if not self_is_evil and rep <= title then return true;
  if self_is_evil and rep >= title then return true;
  return false;
end


#endif  // UPU_H
