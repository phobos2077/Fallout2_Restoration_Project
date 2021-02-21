//various custom commands
#ifndef UPU_H
#define UPU_H



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

#define CUR_AREA_MILITARY_BASE            (cur_town == AREA_MILITARY_BASE)

#define self_exists (self_pid != -1)

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

// effective reputation for critter reaction or lines (Reply). NOT for dude resposnses (NOption, etc).
procedure effective_rep begin
  variable rep := global_var(GVAR_PLAYER_REPUTATION);
  if has_trait(TRAIT_PERK, dude_obj, PERK_karma_beacon_perk) then rep := rep * 2;
  if dude_has_cult and rep < 0 then rep = -1 * rep;
  return rep;
end

procedure title_better_or_equal(variable title) begin
  variable rep := effective_rep;
  if rep >= title then return true;
  return false;
end
procedure title_worse_or_equal(variable title) begin
  variable rep := effective_rep;
  if rep <= title then return true;
  return false;
end

#endif  // UPU_H
