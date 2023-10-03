/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef MODOC_H
#define MODOC_H

#define state_ghost_pip_none                          (0)
#define state_ghost_pip_investigate                   (1)
#define state_ghost_pip_message                       (2)
#define state_ghost_pip_delivered_message             (3)
#define state_ghost_pip_find_karl                     (4)
#define state_ghost_pip_send_karl_home                (5)
#define state_ghost_pip_complete                      (6)
#define ghost_pip(x)                                  (global_var(GVAR_MODOC_GHOST_SEED_PIP) == x)
#define set_ghost_pip(x)                              if (global_var(GVAR_MODOC_GHOST_SEED_PIP) < x) then set_global_var(GVAR_MODOC_GHOST_SEED_PIP, x); \
                                                      ndebug("ghost pip == "+global_var(GVAR_MODOC_GHOST_SEED_PIP))

#ifndef tile_in_box
#define tile_in_box(x, ul, ur, lr, ll)                tile_in_tile_rect(ul, ur, ll, lr, x)
#endif
#define obj_in_loc(obj, ul, ur, lr, ll, map, elev)    ((tile_in_box(tile_num(obj), ul, ur, lr, ll)) and (cur_map_index == map) and ((elevation(obj) == elev) or (-1 == elev)))
#define tile_in_grisham_wedding_wait_zone(x)          tile_in_box(x, 26907, 26895, 28695, 29107)
#define tile_in_cage_area(x)                          tile_in_box(x, 12335, 12313, 16513, 16535)
#define tile_in_coup_area(x)                          tile_in_box(x, 13530, 13516, 15116, 15130)
#define tile_in_slaughter_house_area(x)               tile_in_box(x, 15085, 15061, 21461, 21485)
#define tile_in_slaughter_house(x)                    tile_in_box(x, 19485, 19461, 21461, 21485)
#define tile_in_brahmin_pen(x)                        tile_in_box(x, 15483, 15463, 17863, 17883)
#define tile_in_ghost_farm_shack(x)                   tile_in_box(x, 15261, 15255, 17655, 17661)
#define obj_in_mole_rat_cage(x)                       tile_in_box(x, 18488, 18478, 20078, 20088)
#define obj_in_roses(x)                               obj_in_loc(x, 19111, 18895, 21095, 21111, MAP_MODOC_BEDNBREAKFAST, -1)
#define obj_in_roses_bedroom(x)                       obj_in_loc(x, 15103, 14898, 18699, 18703, MAP_MODOC_BEDNBREAKFAST, -1)

#define match_dude_elevation                          if ((cur_map_index == MAP_MODOC_BEDNBREAKFAST) and (self_elevation != shitter_has_blown)) then move_to(self_obj, self_tile, shitter_has_blown)

#define modoc_mstr(x)                                 message_str(SCRIPT_MODMAIN,(x))
#define modoc_display_mstr(x)                         display_msg(modoc_mstr(x))
#define modoc_floater(x)                              float_msg(self_obj, modoc_mstr(x), FLOAT_COLOR_NORMAL)
#define modoc_floater_bad(x)                          float_msg(self_obj, modoc_mstr(x), FLOAT_COLOR_BAD)
#define modoc_dude_floater(x)                         float_msg(dude_obj, modoc_mstr(x), FLOAT_COLOR_NORMAL)
#define kill_them_all_floater                         modoc_floater_bad(random(1000, 1003))

#define mod_add_timer_event(obj, sec, param)          rm_fixed_timer_event(obj, param);               \
                                                      add_timer_event(obj, game_ticks(sec), param)
#define mod_add_timer_event_rand(obj, x, y, param)    mod_add_timer_event(obj, random(x, y), param)

#define tile_in_church(x)                             tile_in_box(x, 20316, 20298, 23498, 23516)
#define tile_in_grisham_house(x)                      tile_in_box(x, 26708, 26694, 30694, 30708)
#define tile_in_balthas_house(x)                      tile_in_box(x, 10714, 10692, 13692, 13714)
//#define tile_in_slaughter_house(x)                    tile_in_box(x, 15058, 15061, 21461, 21285)

#define tile_in_stable_1(x)                           tile_in_box(x, 18346, 18322, 19322, 19346)
#define tile_in_stable_2(x)                           tile_in_box(x, 20546, 20522, 22122, 22146)
#define tile_in_cornelius(x)                          tile_in_box(x, 13104, 13088, 14688, 14704)
#define tile_in_farrel(x)                             tile_in_box(x, 24292, 24274, 27674, 27692)

#define go_to_wander_tile(temp, type)                                                                                            \
         if (self_visible == false) then begin                                                                                   \
         end else if (is_staging_wedding == false) then begin                                                                    \
            if (tile_distance(self_tile, local_var(LVAR_Home_Tile)) > 20) then begin                                             \
               temp := tile_num_in_direction(self_tile, rotation_to_tile(self_tile, local_var(LVAR_Home_Tile)), random(5, 10));  \
            end else begin                                                                                                       \
               temp := self_cur_rot + random(0,2) - 1;                                                                           \
               FixRotationArc(temp);                                                                                             \
               temp := tile_num_in_direction(self_tile, temp, random(5, 10));                                                    \
            end                                                                                                                  \
            if (cur_map_index == MAP_MODOC_MAINSTREET) then begin                                                                \
               if ((tile_in_church(temp)) or                                                                                     \
                  (tile_in_grisham_house(temp)) or                                                                               \
                  (tile_in_balthas_house(temp)) or                                                                               \
                  (tile_in_slaughter_house(temp))) then begin                                                                    \
                  temp := 0;                                                                                                     \
               end                                                                                                               \
            end else if (cur_map_index == MAP_MODOC_BEDNBREAKFAST) then begin                                                    \
               if ((tile_in_cage_area(temp)) or                                                                                  \
                  (tile_in_stable_1(temp)) or                                                                                    \
                  (tile_in_stable_2(temp)) or                                                                                    \
                  (tile_in_cornelius(temp)) or                                                                                   \
                  (tile_in_farrel(temp))) then begin                                                                             \
                  temp := 0;                                                                                                     \
               end                                                                                                               \
            end                                                                                                                  \
            if (temp != 0) then begin                                                                                            \
               animate_##type##_to_tile(temp);                                                                                   \
            end                                                                                                                  \
         end

#define move_to_wander_tile(temp)         go_to_wander_tile(temp, move)
#define run_to_wander_tile(temp)          go_to_wander_tile(temp, run)

/*
#define QUEST_NONE                          (0)
#define QUEST_KNOWN                         (1)
#define QUEST_DECLINED                      (2)
#define QUEST_INACTIVE                      (3)
#define QUEST_ACCEPTED                      (4)
#define QUEST_PAST_PART_1                   (5)
#define QUEST_PAST_PART_2                   (6)
#define QUEST_COMPLETED                     (7)
#define QUEST_DEFAULT_SOLVE                 (8)
*/

// endings
#define ending_state_none                             (0)
#define ending_state_default                          (1)
#define ending_state_wipeout_1                        (2)
#define ending_state_wipeout_2                        (3)
#define ending_state_happy                            (4)
#define get_ending_state                              (global_var(GVAR_MODOC_ENDINGS))
#define set_modoc_ending_default                      if (get_ending_state < ending_state_default) then set_global_var(GVAR_MODOC_ENDINGS, ending_state_default); ndebug("set_modoc_ending_default")
#define set_modoc_ending_wipeout_1                    if (ghost_farm_seed_accepted) then begin        \
                                                         set_ghost_pip(state_ghost_pip_delivered_message);     \
                                                      end                                             \
                                                      if (get_ending_state < ending_state_wipeout_1) then set_global_var(GVAR_MODOC_ENDINGS, ending_state_wipeout_1); ndebug("set_modoc_ending_wipeout_1")
#define set_modoc_ending_wipeout_2                    if (ghost_farm_seed_accepted) then begin        \
                                                         set_ghost_pip(state_ghost_pip_delivered_message);     \
                                                      end                                             \
                                                      if (get_ending_state < ending_state_wipeout_2) then set_global_var(GVAR_MODOC_ENDINGS, ending_state_wipeout_2); ndebug("set_modoc_ending_wipeout_2")
#define set_modoc_ending_happy                        if (ghost_farm_seed_accepted) then begin        \
                                                         set_ghost_pip(state_ghost_pip_delivered_message);     \
                                                      end                                             \
                                                      if (get_ending_state < ending_state_happy) then set_global_var(GVAR_MODOC_ENDINGS, ending_state_happy); clear_attack_slag_time; ndebug("set_modoc_ending_happy")

#define dude_in_modoc_town                            ((cur_map_index == MAP_MODOC_MAINSTREET) or (cur_map_index == MAP_MODOC_BEDNBREAKFAST))

// seed generic
   // getting state
   #define seed_unknown(x)                      (global_var(x) == QUEST_NONE)
   #define seed_known(x)                        (global_var(x) >= QUEST_KNOWN)
   #define seed_accepted(x)                     (global_var(x) >= QUEST_ACCEPTED)
   #define seed_active(x)                       ((seed_accepted(x)) and (global_var(x) < QUEST_COMPLETED))
   #define seed_declined(x)                     (global_var(x) == QUEST_DECLINED)
   #define seed_completed(x)                    (global_var(x) >= QUEST_COMPLETED)

   // setting state
   #define set_seed_known(x)                    if (seed_unknown(x)) then set_global_var(x, QUEST_KNOWN)
   #define set_seed_active(x)                   if (global_var(x) < QUEST_ACCEPTED) then set_global_var(x,QUEST_ACCEPTED)
   #define set_seed_inactive(x)                 if (seed_accepted(x) == false) then set_global_var(x,QUEST_INACTIVE);      \
                                                else if (seed_completed(x) == false) then set_global_var(x, QUEST_DEFAULT_SOLVE)

   #define set_seed_declined(x)                 set_global_var(x,QUEST_DECLINED)

// family fued seed
   // type 1
   #define feud_help_cornelius_seed                GVAR_MODOC_FAMILY_FEUD_SEED_ONE
   #define feud_help_cornelius_seed_unknown        seed_unknown(feud_help_cornelius_seed)
   #define feud_help_cornelius_seed_known          seed_known(feud_help_cornelius_seed)
   #define feud_help_cornelius_seed_accepted       seed_accepted(feud_help_cornelius_seed)
   #define feud_help_cornelius_seed_active         seed_active(feud_help_cornelius_seed)
   #define feud_help_cornelius_seed_declined       seed_declined(feud_help_cornelius_seed)
   #define feud_help_cornelius_seed_completed      (feud_help_cornelius_seed)
   #define set_feud_help_cornelius_seed_active     set_seed_active(feud_help_cornelius_seed)
   #define set_feud_help_cornelius_seed_inactive   set_seed_inactive(feud_help_cornelius_seed)
   #define set_feud_help_cornelius_seed_declined   set_seed_declined(feud_help_cornelius_seed)
   // type 2
   #define feud_help_farrel_seed                   GVAR_MODOC_FAMILY_FEUD_SEED_TWO
   #define feud_help_farrel_seed_unknown           seed_unknown(feud_help_farrel_seed)
   #define feud_help_farrel_seed_known             seed_known(feud_help_farrel_seed)
   #define feud_help_farrel_seed_accepted          seed_accepted(feud_help_farrel_seed)
   #define feud_help_farrel_seed_active            seed_active(feud_help_farrel_seed)
   #define feud_help_farrel_seed_declined          seed_declined(feud_help_farrel_seed)
   #define feud_help_farrel_seed_completed         seed_completed(feud_help_farrel_seed)
   #define set_feud_help_farrel_seed_active        set_seed_active(feud_help_farrel_seed)
   #define set_feud_help_farrel_seed_inactive      set_seed_inactive(feud_help_farrel_seed)
   #define set_feud_help_farrel_seed_declined      set_seed_declined(feud_help_farrel_seed)
   // these combine both feud results
   #define family_feud_seed_unknown                ((feud_help_cornelius_seed_unknown) or (feud_help_farrel_seed_unknown))
   #define family_feud_seed_active                 ((feud_help_cornelius_seed_active) or (feud_help_farrel_seed_active))
   #define family_feud_seed_complete               ((feud_help_cornelius_seed_completed) or (feud_help_farrel_seed_completed))
   #define set_family_feud_seed_inactive           set_feud_help_cornelius_seed_inactive;  \
                                                   set_feud_help_farrel_seed_inactive;

// brahmin seed
#define brahmin_seed                            GVAR_MODOC_BRAHMIN_SEED
#define brahmin_seed_unknown                    seed_unknown(brahmin_seed)
#define brahmin_seed_known                      seed_known(brahmin_seed)
#define brahmin_seed_accepted                   seed_accepted(brahmin_seed)
#define brahmin_seed_active                     seed_active(brahmin_seed)
#define brahmin_seed_declined                   seed_declined(brahmin_seed)
#define brahmin_seed_completed                  seed_completed(brahmin_seed)
#define set_brahmin_seed_active                 set_seed_active(brahmin_seed)
#define set_brahmin_seed_inactive               set_seed_inactive(brahmin_seed)
#define set_brahmin_seed_declined               set_seed_declined(brahmin_seed)

#define state_jonny_none                              (0)
#define state_jonny_missing                           (1)
#define state_jonny_found_jonny                       (2)
#define state_jonny_in_caves                          (3)
#define state_jonny_complete                          (4)
#define jonny_pip                                     (global_var(GVAR_MODOC_JONNY_PIP))
#define set_jonny_pip(x)                              if (jonny_pip < x) then set_global_var(GVAR_MODOC_JONNY_PIP, x)

#define set_found_jonny                               if (state_jonny_missing) then set_jonny_pip(state_jonny_found_jonny)

#define jonny_seed_active                       ((jonny_pip > state_jonny_none) and (jonny_pip < state_jonny_complete))
#define jonny_seed_unknown                      (jonny_pip == state_jonny_none)
#define set_jonny_seed_active                   set_jonny_pip(state_jonny_missing)
#define set_jonny_seed_inactive                 if (jonny_pip != jonny_seed_active) then begin              \
                                                end else if (jonny_pip == state_jonny_missing) then begin   \
                                                   set_jonny_pip(state_jonny_found_jonny);                  \
                                                end else if (jonny_pip == state_jonny_complete) then        \
                                                   set_jonny_pip(state_jonny_complete)
/*
// jonny seed

#define state_jonny_none                              (0)
#define state_jonny_missing                           (1)
#define state_jonny_in_caves                          (2)
#define state_jonny_complete                          (3)
#define jonny_pip                                     (global_var(GVAR_MODOC_JONNY_PIP))

#define jonny_seed                              GVAR_MODOC_JONNY_SEED
#define jonny_seed_unknown                      seed_unknown(jonny_seed)
#define jonny_seed_known                        seed_known(jonny_seed)
#define jonny_seed_accepted                     seed_accepted(jonny_seed)
#define jonny_seed_declined                     seed_declined(jonny_seed)
#define jonny_seed_completed                    seed_completed(jonny_seed)
#define set_jonny_seed_inactive                 set_seed_inactive(jonny_seed)
#define set_jonny_seed_declined                 set_seed_declined(jonny_seed)
*/

// karl seed
#define karl_seed                               GVAR_MODOC_KARL_SEED
#define karl_seed_unknown                       seed_unknown(karl_seed)
#define karl_seed_known                         seed_known(karl_seed)
#define karl_seed_accepted                      seed_accepted(karl_seed)
#define karl_seed_active                        seed_active(karl_seed)
#define karl_seed_declined                      seed_declined(karl_seed)
#define karl_seed_completed                     seed_completed(karl_seed)
#define set_karl_seed_active                    set_seed_active(karl_seed)
#define set_karl_seed_inactive                  set_seed_inactive(karl_seed)
#define set_karl_seed_declined                  set_seed_declined(karl_seed)

// vermin hunter d seed
#define vermin_hunter_seed                      GVAR_MODOC_VERMIN_HUNTER_SEED
#define vermin_hunter_seed_unknown              seed_unknown(vermin_hunter_seed)
#define vermin_hunter_seed_known                seed_known(vermin_hunter_seed)
#define vermin_hunter_seed_accepted             seed_accepted(vermin_hunter_seed)
#define vermin_hunter_seed_active               seed_active(vermin_hunter_seed)
#define vermin_hunter_seed_declined             seed_declined(vermin_hunter_seed)
#define vermin_hunter_seed_completed            seed_completed(vermin_hunter_seed)
#define set_vermin_hunter_seed_active           set_seed_active(vermin_hunter_seed)
#define set_vermin_hunter_seed_inactive         set_seed_inactive(vermin_hunter_seed)
#define set_vermin_hunter_seed_declined         set_seed_declined(vermin_hunter_seed)

// ghost farm seed
#define ghost_farm_seed                         GVAR_MODOC_GHOST_FARM_SEED
#define ghost_farm_seed_unknown                 seed_unknown(ghost_farm_seed)
#define ghost_farm_seed_known                   seed_known(ghost_farm_seed)
#define ghost_farm_seed_accepted                seed_accepted(ghost_farm_seed)
#define ghost_farm_seed_active                  seed_active(ghost_farm_seed)
#define ghost_farm_seed_declined                seed_declined(ghost_farm_seed)
#define ghost_farm_seed_completed               seed_completed(ghost_farm_seed)
#define set_ghost_farm_seed_known               set_seed_known(ghost_farm_seed)
#define set_ghost_farm_seed_active              set_ghost_pip(state_ghost_pip_investigate);  \
                                                set_seed_active(ghost_farm_seed)
#define set_ghost_farm_seed_inactive            set_seed_inactive(ghost_farm_seed)
#define set_ghost_farm_seed_declined            set_seed_declined(ghost_farm_seed)

#define set_ghost_farm_seeds_inactive           set_ghost_farm_seed_inactive

// special pids
#define jonny_bb_gun_pid                        PID_JONNY_BB_GUN
#define special_leather_armor_pid               PID_CURED_LEATHER_ARMOR
#define cornelius_watch_pid                     PID_CORNELIUS_GOLD_WATCH
#define grisham_jerky_pid                       PID_MEAT_JERKY
#define cookie_pid                              PID_COOKIE

// special tiles
#define well_tile                               (17319)

// modoc vs. slags
#define starting_attack_days                    (31)
#define attack_time_set                         (global_var(GVAR_SLAUGHTER_SLAG_TIME) != 0)
#define set_kill_slag_time                      if (attack_time_set == false) then begin                              \
                                                   set_global_var(GVAR_SLAUGHTER_SLAG_TIME, GAME_TIME_IN_DAYS + starting_attack_days); \
                                                end ndebug("didn't set new kill slag time")
#define days_till_slag_attack                   (global_var(GVAR_SLAUGHTER_SLAG_TIME) - GAME_TIME_IN_DAYS)
#define attack_slag_time_up                     (((days_till_slag_attack <= 0) or (days_till_slag_attack > starting_attack_days)) and (global_var(GVAR_SLAUGHTER_SLAG_TIME) > 0))
#define clear_attack_slag_time                  set_global_var(GVAR_SLAUGHTER_SLAG_TIME, -1)

#define slag_attack_none                        (0)
#define slag_attack_attacking                   (1)
#define slag_attack_slags_dead                  (2)
#define modoc_attacked_slags                    (global_var(GVAR_SLAG_ATTACK) != slag_attack_none)
#define attacking_slags                         (global_var(GVAR_SLAG_ATTACK) == slag_attack_attacking)
#define pre_attack                              (false) // this case is not used anymore due to problems
#define slags_killed_by_townspeople             ((global_var(GVAR_SLAG_ATTACK) == slag_attack_slags_dead) or (attack_slag_time_up))
#define set_townspeople_kill_all_slags          set_global_var(GVAR_SLAG_ATTACK, slag_attack_slags_dead)
#define set_wipeout_scenario_1                  if (global_var(GVAR_SLAG_ATTACK) == slag_attack_none) then begin           \
                                                   set_global_var(GVAR_SLAG_ATTACK, slag_attack_attacking);                \
                                                   inc_global_var_amt(GVAR_TOWN_REP_MODOC,REP_TOWN_SOLVE_GHOST_FARM_WORST); /* Seraph's Fix: changed 'inc_global_var' to 'inc_global_var_amt'. Thanks Rob! */\
                                                end                                                                        \
                                                set_ghost_farm_seed_inactive
#define set_wipeout_scenario_2                  if (global_var(GVAR_SLAG_ATTACK) == slag_attack_none) then        \
                                                   set_global_var(GVAR_SLAG_ATTACK, slag_attack_attacking);       \
                                                set_ghost_farm_seed_inactive
#define dude_has_slag_message                   (obj_is_carrying_obj_pid(dude_obj, PID_SLAG_MESSAGE) > 0)
#define all_slags_dead                          (((entered_farm) and (global_var(GVAR_SLAG_CNT) <= 0)) or (slags_killed_by_townspeople))
#define inc_slag_cnt                            if (slag_in_farm) then inc_global_var(GVAR_SLAG_CNT);          \
                                                ndebug("current slag count == "+global_var(GVAR_SLAG_CNT))
#define dec_slag_cnt                            dec_global_var(GVAR_SLAG_CNT);                                 \
                                                if (all_slags_dead) then begin                                 \
                                                   if (modoc_attacked_slags) then begin                        \
                                                      set_modoc_ending_wipeout_1;                              \
                                                   end else begin                                              \
                                                      set_modoc_ending_wipeout_2;                              \
                                                   end                                                         \
                                                end                                                            \
                                                ndebug("current slag count == "+global_var(GVAR_SLAG_CNT))
#define slags_wiped_out                         (all_slags_dead)
#define check_destroy_slag                      if ((started_slag_attack) or (slags_killed_by_townspeople)) then begin                       \
                                                   if (slag_in_farm) then begin                                                              \
                                                      if (all_slags_dead) then begin                                                         \
                                                         ndebug("KILLING SLAG IN FARM");                                                  \
                                                         dec_slag_cnt;                                                                       \
                                                         kill_critter(self_obj, random(ANIM_fall_back_blood_sf, ANIM_fall_front_blood_sf));  \
                                                      end                                                                                    \
                                                   end else begin                                                                            \
                                                      ndebug("DESTROYING SLAG");                                                          \
                                                      dec_slag_cnt;                                                                          \
                                                      destroy_object(self_obj);                                                              \
                                                   end                                                                                       \
                                                end

#define place_slag_in_random_attacking_tile     ndebug("placing slag in random ATTACKING tile");                                                           \
                                                check_set_obj_visiblility(self_obj, false);                                                                          \
                                                critter_attempt_placement(self_obj, tile_num_in_direction(18087, random(0,5), random(2, 5)), self_elevation); \
                                                Face_Critter(self_obj, dude_obj)
#define place_slag_in_random_farming_tile       ndebug("placing slag in random FARMING tile");                                                                                       \
                                                check_set_obj_visiblility(self_obj, false);                                                                                                    \
                                                critter_attempt_placement(self_obj, tile_num_in_direction(local_var(LVAR_Home_Tile), random(0,5), random(15, 25)), self_elevation)
#define check_put_slags_out                     if (slag_in_farm) then begin                                                           \
                                                   if (slags_visible_in_farm_time) then begin                                          \
                                                      if (obj_is_visible_flag(self_obj) == false) then begin                           \
                                                         check_set_obj_visiblility(self_obj, false);                                   \
                                                         if ((attacking_slags) or (NAME == SCRIPT_MCPROTEC)) then begin                \
                                                            if (NAME == SCRIPT_MCPROTEC) then begin                                    \
                                                               ndebug("putting out protector");                                     \
                                                            end                                                                        \
                                                            place_slag_in_random_attacking_tile;                                       \
                                                         end else begin                                                                \
                                                            place_slag_in_random_farming_tile;                                         \
                                                         end                                                                           \
                                                      end                                                                              \
                                                   end else begin                                                                      \
                                                      check_set_obj_visiblility(self_obj, true);                                       \
                                                   end                                                                                 \
                                                end else if (attacking_slags) then begin                                               \
                                                   check_destroy_slag                                                                  \
                                                end else if (slags_visible_in_farm_time) then begin                                    \
                                                   check_set_obj_visiblility(self_obj, true);                                          \
                                                end else begin                                                                         \
                                                   check_set_obj_visiblility(self_obj, false);                                         \
                                                end

// wall safe
#define wall_safe_state_none                    (0)
#define wall_safe_state_known                   (1)
#define wall_safe_attempt_1                     (2)
#define wall_safe_attempt_2                     (3)
#define wall_safe_attempt_3                     (4)
#define wall_safe_attempt_4                     (5)
#define wall_safe_found                         (map_var(MVAR_WALL_SAFE) >= wall_safe_state_known)
#define wall_safe_attempts                      ((map_var(MVAR_WALL_SAFE) - wall_safe_state_known) * (wall_safe_found))
#define set_wall_safe_found                     if (map_var(MVAR_WALL_SAFE) == wall_safe_state_none) then set_map_var(MVAR_WALL_SAFE, wall_safe_state_known)
#define inc_wall_safe_attempt                   if (wall_safe_found == false) then begin                                \
                                                   set_map_var(MVAR_WALL_SAFE, wall_safe_attempt_1);           \
                                                end if (map_var(MVAR_WALL_SAFE) < wall_safe_attempt_4) then    \
                                                   inc_map_var(MVAR_WALL_SAFE)

// lost and found
#define lost_and_found_state_none               (0)
#define lost_and_found_attempt_1                (1)
#define lost_and_found_attempt_2                (2)
#define lost_and_found_attempt_3                (3)
#define lost_and_found_attempt_4                (4)
#define lost_and_found_attempts                 (map_var(MVAR_LOST_AND_FOUND))
#define inc_lost_and_found_attempt              if (lost_and_found_unlocked == false) then inc_map_var(MVAR_LOST_AND_FOUND)

// shelf
#define shelf_state_unlocked                    (-1)
#define shelf_state_none                        (0)
#define shelf_attempt_1                         (1)
#define shelf_attempt_2                         (2)
#define shelf_attempt_3                         (3)
#define shelf_attempt_4                         (4)
#define shelf_unlocked                          (shelf_attempts == shelf_state_unlocked)
#define set_shelf_unlocked                      set_map_var(MVAR_SHELF, shelf_state_unlocked)
#define shelf_attempts                          (map_var(MVAR_SHELF))
#define inc_shelf_attempt                       if (map_var(MVAR_SHELF) < shelf_attempt_4) then    \
                                                   inc_map_var(MVAR_SHELF)

// cornelius
#define dude_has_cornelius_watch                (obj_is_carrying_obj_pid(dude_obj, cornelius_watch_pid) > 0)

// death claw
#define death_claw_dead                         (chicken_is_dead)

#define is_killable_map                         ((cur_map_index == MAP_MODOC_MAINSTREET) or (cur_map_index == MAP_MODOC_BEDNBREAKFAST) or (cur_map_index == MAP_MODOC_BRAHMINPASTURES) or (cur_map_index == MAP_MODOC_GARDEN))
#define death_claw_cage_tile                    (16128)
#define death_claw_escape_tile                  (17145)
#define death_claw_kill_pid(x)                  kill_critter_type(x, random(ANIM_fall_back_blood_sf, ANIM_fall_front_blood_sf))
#define check_kill_party_pid(x)                 if (party_member_obj(x) == 0) then death_claw_kill_pid(x)
#define do_kill_everyone_on_map                 ndebug("\ndo_kill_everyone_on_map");               \
                                                check_kill_party_pid(PID_VIC);                     \
                                                check_kill_party_pid(PID_MYRON);                   \
                                                check_kill_party_pid(PID_MARCUS);                  \
                                                check_kill_party_pid(PID_JOHN_MACRAE);             \
                                                check_kill_party_pid(PID_SULIK);                   \
                                                check_kill_party_pid(PID_LENNY);                   \
                                                check_kill_party_pid(PID_CYBERDOG);                \
                                                check_kill_party_pid(PID_DOC);                     \
                                                check_kill_party_pid(PID_GORIS);                   \
                                                check_kill_party_pid(PID_DAVIN);                   \
                                                check_kill_party_pid(PID_MIRIA);                   \
                                                check_kill_party_pid(PID_BRAINBOT);                \
                                                check_kill_party_pid(PID_LADDIE);                  \
                                                check_kill_party_pid(PID_BESS);                    \
                                                check_kill_party_pid(PID_KARL);                    \
                                                check_kill_party_pid(PID_JONNY);                   \
                                                death_claw_kill_pid(PID_WEAK_GUN_GUARD_FEMALE);    \
                                                death_claw_kill_pid(PID_WEAK_GUN_GUARD_MALE);      \
                                                death_claw_kill_pid(PID_WEAK_MELEE_GUARD_MALE);    \
                                                death_claw_kill_pid(PID_STRONG_PEASANT_MALE);      \
                                                death_claw_kill_pid(PID_STRONG_PEASANT_FEMALE);    \
                                                death_claw_kill_pid(PID_WEAK_PEASANT_MALE);        \
                                                death_claw_kill_pid(PID_WEAK_PEASANT_FEMALE);      \
                                                death_claw_kill_pid(PID_AVERAGE_PEASANT_MALE);     \
                                                death_claw_kill_pid(PID_AVERAGE_PEASANT_FEMALE);   \
                                                death_claw_kill_pid(PID_DOG);                      \
                                                death_claw_kill_pid(PID_WILD_DOG);                 \
                                                death_claw_kill_pid(PID_BRAHMIN);                  \
                                                death_claw_kill_pid(PID_RAT);                      \
                                                death_claw_kill_pid(PID_BALTHAS);                  \
                                                death_claw_kill_pid(PID_GRISHAM);                  \
                                                death_claw_kill_pid(PID_KARL);                     \
                                                death_claw_kill_pid(PID_JO);                       \
                                                death_claw_kill_pid(PID_BUTCHER);                  \
                                                death_claw_kill_pid(PID_CHILD_MALE);               \
                                                death_claw_kill_pid(PID_CHILD_FEMALE);             \
                                                death_claw_kill_pid(PID_GENERIC_GLOWING_ONE);      \
                                                death_claw_kill_pid(PID_AVERAGE_MERCHANT_MALE);    \
                                                death_claw_kill_pid(PID_AVERAGE_MERCHANT_FEMALE)

#define map_to_death_claw_wait_tile             (((cur_map_index == MAP_MODOC_MAINSTREET) * 16703) +        \
                                                 ((cur_map_index == MAP_MODOC_BEDNBREAKFAST) * 22488) +     \
                                                 ((cur_map_index == MAP_MODOC_BRAHMINPASTURES) * 15497) +   \
                                                 ((cur_map_index == MAP_MODOC_GARDEN) * 19292))

// jonny
#define jonny_state_dead                        (-1)
#define jonny_state_none                        (0)
#define jonny_state_known                       (1)
#define jonny_state_spoken                      (2)
#define jonny_none                              (global_var(GVAR_JONNY_STATE) == jonny_state_none)
#define jonny_dead                              (global_var(GVAR_JONNY_STATE) == jonny_state_dead)
#define jonny_functioning                       ((global_var(GVAR_JONNY_STATE) > jonny_state_none) and (jonny_dead == false))
#define jonny_spoken                            (global_var(GVAR_JONNY_STATE) >= jonny_state_spoken)
#define jonny_known                             (global_var(GVAR_JONNY_STATE) >= jonny_state_known)
#define set_jonny_dead                          set_global_var(GVAR_JONNY_STATE, jonny_state_dead)
#define set_jonny_known                         if (jonny_none) then set_global_var(GVAR_JONNY_STATE, jonny_state_known)
#define set_jonny_name_known                    if (jonny_dead == false) then set_global_var(GVAR_JONNY_STATE, jonny_state_spoken)
#define jonny_near(the_tile)                    (tile_distance(the_tile, global_var(GVAR_JONNY_TILE)) <= 7)
#define jonny_bb_gun_found                      (obj_is_carrying_obj_pid(dude_obj, jonny_bb_gun_pid) > 0)

// jonny home flag
#define home_flag_jonny_none                    (0)
#define home_flag_jonny_wants_home              (1)
#define home_flag_jonny_at_home                 (2)
#define jonny_request_home                      (global_var(GVAR_MODOC_JONNY_HOME) == home_flag_jonny_wants_home)
#define jonny_at_home                           (global_var(GVAR_MODOC_JONNY_HOME) == home_flag_jonny_at_home)
#define set_jonny_request_home                  set_jonny_pip(state_jonny_in_caves);            \
                                                set_global_var(GVAR_MODOC_JONNY_HOME, home_flag_jonny_wants_home)
#define set_jonny_at_home                       set_jonny_seed_inactive;   \
                                                set_global_var(GVAR_MODOC_JONNY_HOME, home_flag_jonny_at_home)

// karl
#define karl_state_dead                         (-1)
#define karl_state_none                         (0)
#define karl_state_spoken                       (1)
#define karl_none                               (global_var(GVAR_KARL_STATE) == karl_state_none)
#define karl_dead                               (global_var(GVAR_KARL_STATE) == karl_state_dead)
#define karl_functioning                        ((global_var(GVAR_KARL_STATE) > karl_state_none) and (karl_dead == false))
#define karl_found                              (global_var(GVAR_KARL_STATE) >= karl_state_spoken)
#define set_karl_found                          if (karl_dead == false) then set_global_var(GVAR_KARL_STATE, karl_state_spoken)
#define set_karl_dead                           set_global_var(GVAR_KARL_STATE, karl_state_dead)

// laddie
#define laddie_state_dead                       (-1)
#define laddie_state_none                       (0)
#define laddie_state_joins_party                (1)
#define laddie_set_party                        (2)
#define laddie_none                             (global_var(GVAR_LADDIE_STATE) == laddie_state_none)
#define laddie_dead                             (global_var(GVAR_LADDIE_STATE) == laddie_state_dead)
#define set_laddie_dead                         set_global_var(GVAR_LADDIE_STATE, laddie_state_dead)
#define laddie_functioning                      ((global_var(GVAR_LADDIE_STATE) > laddie_state_none) and (laddie_dead == false))
#define laddie_join_party                       (global_var(GVAR_LADDIE_STATE) == laddie_state_joins_party)
#define set_laddie_joins_party                  if (laddie_none) then set_global_var(GVAR_LADDIE_STATE, laddie_state_joins_party)
#define laddie_near(the_tile)                   (tile_distance(the_tile, self_tile) <= 5)
#define laddie_at_well                          laddie_near(well_tile)

// bodies on a stick
#define bodies_state_none                       (0)
#define bodies_state_examined                   (1)
#define bodies_state_fake                       (2)
#define examined_bodies                         (global_var(GVAR_MODOC_BODIES) >= bodies_state_examined)
#define fake_bodies                             (global_var(GVAR_MODOC_BODIES) >= bodies_state_fake)
#define set_examined_bodies                     if (global_var(GVAR_MODOC_BODIES) == bodies_state_none) then    \
                                                   set_global_var(GVAR_MODOC_BODIES,bodies_state_examined)
#define set_fake_bodies                         if (global_var(GVAR_MODOC_BODIES) == bodies_state_none) then    \
                                                   set_global_var(GVAR_MODOC_BODIES,bodies_state_fake)
#define destroy_prop_state                      ((clear_props_from_farm) or (get_ending_state == ending_state_happy))
#define check_set_clear_props                   if (destroy_prop_state == false) then begin     \
                                                   if (all_slags_dead) then begin               \
                                                      set_clear_props_from_farm;                \
                                                   end                                          \
                                                end

// grisham
#define brahmin_start_count                     (10)
#define all_brahmin_dead                        (global_var(GVAR_MODOC_BRAHMIN_ALIVE) < 0)
#define set_all_brahmin_dead                    set_global_var(GVAR_MODOC_BRAHMIN_ALIVE, -1)
#define do_kill_brahmin                         dec_global_var(GVAR_MODOC_BRAHMIN_ALIVE);                                     \
                                                if (global_var(GVAR_MODOC_BRAHMIN_ALIVE) <= 0) then set_all_brahmin_dead;     \
                                                ndebug("current brahmin status == "+global_var(GVAR_MODOC_BRAHMIN_ALIVE))
#define all_dogs_dead                           (global_var(GVAR_MODOC_DOGS_ALIVE) < 0)
#define set_all_dogs_dead                       set_global_var(GVAR_MODOC_DOGS_ALIVE,-1)
#define do_kill_dog                             dec_global_var(GVAR_MODOC_DOGS_ALIVE);                                        \
                                                if (global_var(GVAR_MODOC_DOGS_ALIVE) <= 0) then set_all_dogs_dead;           \
                                                ndebug("current dogs status == "+global_var(GVAR_MODOC_DOGS_ALIVE))
#define brahmin_killed                          (brahmin_start_count - global_var(GVAR_MODOC_BRAHMIN_ALIVE))
#define brahmin_seed_reward                     (1000 - (100 * brahmin_killed))
#define dog_attack_start_hour                   (2000)
#define dog_attack_late_hour                    (2259)
#define dog_attack_finish_hour                  (600)
#define is_dog_attack_time                      ((game_time_hour >= dog_attack_start_hour) or  (game_time_hour < dog_attack_finish_hour))
#define do_kill_all_brahmin                     if ((all_dogs_dead == false) and (global_var(GVAR_MODOC_KILL_ALL_BRAHMIN_TIME) != 0)) then begin                              \
                                                   if (all_brahmin_dead == false) then begin                                                                                  \
                                                      set_all_brahmin_dead;                                                                                                   \
                                                   end                                                                                                                        \
                                                   if (cur_map_index == MAP_MODOC_BRAHMINPASTURES) then begin                                                                 \
                                                      kill_critter_type(PID_BRAHMIN, random(ANIM_fall_back_blood_sf, ANIM_fall_front_blood_sf));                              \
                                                      if (map_var(MVAR_Did_Fake_Dog_Kill) == false) then begin                                                                \
                                                         if (all_brahmin_dead) then begin                                                                                     \
                                                            set_map_var(MVAR_Did_Fake_Dog_Kill, random(0, (global_var(GVAR_MODOC_DOGS_ALIVE)/2)));                            \
                                                            while (map_var(MVAR_Did_Fake_Dog_Kill) > 0) do begin                                                              \
                                                               temp_dog := create_object_sid(PID_DOG,0,0, SCRIPT_MCATKDOG);                                                   \
                                                               critter_attempt_placement(temp_dog, tile_num_in_direction(brahmin_prox_tile, random(0,5), random(2,10)), 0);   \
                                                               dec_map_var(MVAR_Did_Fake_Dog_Kill);                                                                           \
                                                            end                                                                                                               \
                                                            kill_critter_type(PID_DOG, random(ANIM_fall_back_blood_sf, ANIM_fall_front_blood_sf));                            \
                                                            set_map_var(MVAR_Did_Fake_Dog_Kill, true);                                                                        \
                                                         end                                                                                                                  \
                                                      end                                                                                                                     \
                                                   end                                                                                 \
                                                end
#define check_kill_all_brahmin                  if ((global_var(GVAR_MODOC_KILL_ALL_BRAHMIN_TIME) - game_time) < 0) then begin         \
                                                   do_kill_all_brahmin                                                                 \
                                                end
#define brahmin_prox_tile                       16915
// slaughterhouse brahmin
#define slaughter_1_tile                        (20075)
#define slaughter_2_tile                        (20068)
#define is_slaughter_1_time                     (game_time > map_var(MVAR_Butcher_Time_1))
#define is_slaughter_house_brahmin              (cur_map_index == MAP_MODOC_MAINSTREET)
#define assign_brahmin_number                   if (brahmin_1_object == 0) then begin                                                                                                                                                                                     \
                                                   brahmin_1_object := self_obj;                                                                                                                                                                                          \
                                                end

#define send_to_slaughter                       if (night == false) then begin                           \
                                                   if (is_slaughter_1_time) then begin                   \
                                                      if (anim_busy(self_obj) == false) then begin       \
                                                         if (self_tile != slaughter_1_tile) then begin   \
                                                            animate_move_to_tile(slaughter_1_tile);      \
                                                         end                                             \
                                                      end                                                \
                                                   end                                                   \
                                                end
#define bess_sold_for_jerky                     (global_var(GVAR_MODOC_SLAUGHTER_BESS_TIME) != 0)
#define set_sold_bess_for_jerky                 if (global_var(GVAR_MODOC_SLAUGHTER_BESS_TIME) == 0) then begin                              \
                                                   set_global_var(GVAR_MODOC_SLAUGHTER_BESS_TIME, game_time + (random(6,7) * ONE_GAME_DAY)); \
                                                end
#define is_slaughter_bess_time                  (game_time > global_var(GVAR_MODOC_SLAUGHTER_BESS_TIME))

// marriage related
#define married_to_miria                        dude_spouse_is_female
#define married_to_davin                        dude_spouse_is_male
#define marriage_same_sex                       (((dude_is_male) and (married_to_davin)) or        \
                                                 ((dude_is_female) and (married_to_miria)))
#define married_to_sibling                      ((((self_is_male) and (married_to_miria)) or       \
                                                 ((self_is_female) and (married_to_davin))) and    \
                                                 (dude_is_married))
   // marriage script
   #define sex_act_straight                     ((dude_is_male) and (is_staging_miria_wedding)) or \
                                                ((dude_is_female) and (is_staging_davin_wedding))
   #define having_sex_with_davin                (is_staging_davin_wedding)

// church seats
#define church_row_1_seat_1                     (21305)
#define church_row_1_seat_2                     (21105)
#define church_row_1_seat_3                     (21307)
#define church_row_1_seat_4                     (21107)
#define church_row_1_seat_5                     (21309)
#define church_row_1_seat_6                     (21109)
#define church_row_1_seat_7                     (21311)
#define church_row_1_seat_8                     (21111)
#define church_row_1_num_to_seat_tile(x)        (((x == 1) * church_row_1_seat_1) + ((x == 2) * church_row_1_seat_2) +     \
                                                 ((x == 3) * church_row_1_seat_3) + ((x == 4) * church_row_1_seat_4) +     \
                                                 ((x == 5) * church_row_1_seat_5) + ((x == 6) * church_row_1_seat_6) +     \
                                                 ((x == 7) * church_row_1_seat_7) + ((x == 8) * church_row_1_seat_8))

#define church_row_2_seat_1                     (22505)
#define church_row_2_seat_2                     (22705)
#define church_row_2_seat_3                     (22507)
#define church_row_2_seat_4                     (22707)
#define church_row_2_seat_5                     (22509)
#define church_row_2_seat_6                     (22709)
#define church_row_2_seat_7                     (22511)
#define church_row_2_seat_8                     (22711)
#define church_row_2_num_to_seat_tile(x)        (((x == 1) * church_row_2_seat_1) + ((x == 2) * church_row_2_seat_2) +     \
                                                 ((x == 3) * church_row_2_seat_3) + ((x == 4) * church_row_2_seat_4) +     \
                                                 ((x == 5) * church_row_2_seat_5) + ((x == 6) * church_row_2_seat_6) +     \
                                                 ((x == 7) * church_row_2_seat_7) + ((x == 8) * church_row_2_seat_8))
#define church_jo_spot                          (21502)
#define church_grisham_seat                     ((church_row_2_seat_1 * is_staging_davin_wedding) + (church_row_1_seat_1 * is_staging_miria_wedding))
#define church_davin_seat                       ((21704 * is_staging_davin_wedding) + (church_row_1_seat_2 * is_staging_miria_wedding))
#define church_miria_seat                       ((21504 * is_staging_miria_wedding) + (church_row_2_seat_2 * is_staging_davin_wedding))
#define church_player_seat                      ((21504 * is_staging_davin_wedding) + (21704 * is_staging_miria_wedding))
#define place_in_church_seat(who, seat)         reg_anim_clear(who);                      \
                                                move_to(who, seat, dude_elevation);       \
                                                Face_Critter(modoc_jo_obj, who)
#define seat_party_member(who, seat_num)        if (is_staging_davin_wedding) then begin                                   \
                                                   place_in_church_seat(who, church_row_1_num_to_seat_tile(seat_num));     \
                                                end else begin                                                             \
                                                   place_in_church_seat(who, church_row_2_num_to_seat_tile(seat_num));     \
                                                end
#define seat_wedding_guest(who, seat_num)       if (is_staging_davin_wedding) then begin                                   \
                                                   place_in_church_seat(who, church_row_2_num_to_seat_tile(seat_num));     \
                                                end else begin                                                             \
                                                   place_in_church_seat(who, church_row_1_num_to_seat_tile(seat_num));     \
                                                end
#define outcast_party_spot_1                    (21723)
#define outcast_party_spot_2                    (22722)
#define outcast_party_spot_3                    (21926)
#define outcast_party_spot_4                    (23125)
#define outcast_party_spot_5                    (22329)
#define outcast_party_spot_6                    (23328)
#define outcast_party_spot_7                    (21123)
#define outcast_party_spot_8                    (23322)
#define outcast_party_spot_9                    (21326)
#define outcast_party_spot_10                   (23725)
#define outcast_party_spot_11                   (21729)
#define outcast_party_spot_12                   (23928)
#define outcast_num_to_tile(x)                  ((((x) == 1) * outcast_party_spot_1) + (((x) == 2) * outcast_party_spot_2) +     \
                                                 (((x) == 3) * outcast_party_spot_3) + (((x) == 4) * outcast_party_spot_4) +     \
                                                 (((x) == 5) * outcast_party_spot_5) + (((x) == 6) * outcast_party_spot_6) +     \
                                                 (((x) == 7) * outcast_party_spot_7) + (((x) == 8) * outcast_party_spot_8) +     \
                                                 (((x) == 9) * outcast_party_spot_9) + (((x) == 10) * outcast_party_spot_10) +   \
                                                 (((x) == 11) * outcast_party_spot_11) + (((x) == 12) * outcast_party_spot_12))
#define check_seat_party_member(the_member)     if (the_member##_In_Party) then begin                                                \
                                                   if (current_seat<=8) then begin                                                   \
                                                      seat_party_member(the_member##_Ptr, current_seat)                              \
                                                   end else if (current_seat<=20) then begin                                         \
                                                      place_in_church_seat(the_member##_Ptr, outcast_num_to_tile(current_seat - 8)); \
                                                   end                                                                               \
                                                   current_seat += 1;                                                                \
                                                end
// message
#define message_state_none                      (0)
#define message_state_given                     (1)
#define message_state_delivered                 (2)
#define message_flag_none                       (global_var(GVAR_MODOC_MESSAGE) == message_state_none)
#define message_flag_given                      (global_var(GVAR_MODOC_MESSAGE) >= message_state_given)
#define message_flag_delivered                  (global_var(GVAR_MODOC_MESSAGE) >= message_state_delivered)
#define set_message_state_given                 if (message_flag_none) then begin                                    \
                                                   set_global_var(GVAR_MODOC_MESSAGE,message_state_given);           \
                                                   set_ghost_pip(state_ghost_pip_message);                           \
                                                   add_obj_to_inven(dude_obj,create_object(PID_SLAG_MESSAGE,0,0));   \
                                                end
#define set_message_delivered                   set_global_var(GVAR_MODOC_MESSAGE, message_state_delivered)

// basic flags
#define tool_flag                               (global_var(GVAR_MODOC_TOOL_FLAG))
#define set_tool_flag                           set_global_var(GVAR_MODOC_TOOL_FLAG,true)
#define slaughter_flag                          (global_var(GVAR_MODOC_SLAUGHTER_FLAG))
#define set_slaughter_flag                      set_global_var(GVAR_MODOC_SLAUGHTER_FLAG,true)
#define rose_flag                               (global_var(GVAR_MODOC_ROSE_FLAG))
#define set_rose_flag                           set_global_var(GVAR_MODOC_ROSE_FLAG,true)
#define tannery_flag                            (global_var(GVAR_MODOC_TANNERY_FLAG))
#define set_tannery_flag                        set_global_var(GVAR_MODOC_TANNERY_FLAG,true)
#define post_flag                               (global_var(GVAR_MODOC_POST_FLAG))
#define set_post_flag                           set_global_var(GVAR_MODOC_POST_FLAG,true)

// bess
#define bess_in_pen_tile                        (16871)

// enemy modoc
#define enemy_modoc_rep                         (-1000)
#define dude_enemy_modoc                        (global_var(GVAR_TOWN_REP_MODOC) <= enemy_modoc_rep)
#define set_enemy_modoc                         if (dude_enemy_modoc == false) then set_global_var(GVAR_TOWN_REP_MODOC,enemy_modoc_rep)

// misc.
#define dude_is_stupid                          (dude_iq <= 3)
#define dude_has_rope                           (obj_is_carrying_obj_pid(dude_obj, PID_ROPE) > 0)
#define vegier_talk_tile                        (25102)

// these are for the staged events
#define param_clear_float                       (666)
#define quick_stage_time                        (3)
#define default_stage_time                      (5)
#define wait_stage_time                         (30)
// main stages
#define nothing_stage                           (0)
#define rape_stage                              (100)
#define wedding_miria_stage                     (200)
#define wedding_davin_stage                     (300)
// sub stages
// "rape"
#define rape_stage_help                         (1)   // miria
#define rape_stage_confront                     (2)   // grisham
#define rape_stage_go_away                      (3)   // grisham
#define rape_stage_attack                       (4)   // grisham
// "wedding"
#define wedding_stage_grisham_what              (1)   // gisham
#define wedding_stage_what_response             (2)   // partner
#define wedding_stage_grisham_response          (3)   // grisham
#define wedding_stage_response_wait             (4)   // grisham
   // from here on, this is actually the wedding
#define wedding_stage_place_important           (5)   // grisham
#define wedding_stage_place_party               (6)   // grisham
#define wedding_stage_place_butcher_1           (7)   // guests
#define wedding_stage_place_butcher_2           (8)   // guests
#define wedding_stage_place_guest_1             (9)   // guests
#define wedding_stage_place_guest_2             (10)  // guests
#define wedding_stage_place_guest_3             (11)  // guests
#define wedding_stage_place_guest_4             (12)  // guests
#define wedding_stage_ready                     (13)  // jo
#define wedding_stage_dearly_beloved            (14)  // jo
#define wedding_stage_ask_skip                  (15)  // grisham
#define wedding_stage_jo_question               (16)  // jo
#define wedding_stage_question_response         (17)  // partner
#define wedding_stage_question_response_2       (18)  // grisham
#define wedding_stage_continue                  (19)  // partner
#define wedding_stage_jo_bride_vow              (20)  // jo
#define wedding_stage_bride_vow_response        (21)  // partner
#define wedding_stage_jo_groom_vow              (22)  // jo
#define wedding_stage_groom_vow_response        (23)  // partner
#define wedding_stage_grisham_response_2        (24)  // grisham
#define wedding_stage_player_vow_response       (25)  // partner
#define wedding_stage_pronounce_married         (26)  // jo
#define wedding_stage_done                      (27)  // jo

#define get_stage                               (global_var(GVAR_MODOC_STAGE_STATE))
#define get_main_stage                          (get_stage - (get_stage % 100))
#define get_sub_stage                           (get_stage % 100)
#define set_next_stage_time_only(x)             set_global_var(GVAR_MODOC_STAGE_TIMER, game_time + (x * ONE_GAME_SECOND));
#define set_next_stage_time(x)                  set_next_stage_time_only(x)                                       \
                                                add_timer_event(self_obj, game_ticks(x) - 2, param_clear_float);
#define set_stage_event(x)                      set_global_var(GVAR_MODOC_STAGE_STATE, x);      \
                                                ndebug("\n SET_STAGE_EVENT == "+get_stage+" in script "+self_name);
#define set_main_stage(x)                       set_stage_event((x) + get_sub_stage)
#define set_sub_stage(x)                        set_stage_event(get_main_stage + (x))
#define clear_stage                             set_global_var(GVAR_MODOC_STAGE_STATE, nothing_stage);
#define stage_time_ready                        (game_time >= global_var(GVAR_MODOC_STAGE_TIMER))

#define is_staging_nothing                      (get_main_stage == nothing_stage)
#define is_staging_rape                         (get_main_stage == rape_stage)
#define is_staging_miria_wedding                (get_main_stage == wedding_miria_stage)
#define is_staging_davin_wedding                (get_main_stage == wedding_davin_stage)
#define is_staging_wedding                      (is_staging_miria_wedding or is_staging_davin_wedding)
#define is_staging_wedding_placing_guests       ((is_staging_wedding) and (get_sub_stage >= wedding_stage_place_guest_1) and (get_sub_stage <= wedding_stage_place_guest_4))

#define setup_rape_stage                        gfade_out(1);                                \
                                                game_ui_disable;                             \
                                                clear_stage                                  \
                                                set_main_stage(rape_stage)                   \
                                                set_sub_stage(rape_stage_help)               \
                                                inc_general_rep(REP_BONUS_MODOC_RAPE_MIRIA); \
                                                critter_attempt_placement(dude_obj, 27501, dude_elevation); /* Seraph's Code */ \
                                                /*obj_drop_everything(dude_obj); Disabled by Seraph */                 \
                                                remove_armor(dude_obj); /* Seraph's Code */

#define setup_wedding_stage                     gfade_out(1);                                                              \
                                                party_no_follow_on;                                                        \
                                                game_ui_disable;                                                           \
                                                reg_anim_clear(dude_obj);                                                  \
                                                if (day == false) then begin                                               \
                                                   game_time_advance_hour(1200);                                           \
                                                end                                                                        \
                                                clear_stage                                                                \
                                                if (NAME == SCRIPT_MCMIRIA) then begin                                     \
                                                   set_main_stage(wedding_miria_stage)                                     \
                                                   critter_attempt_placement(dude_obj, 27703, dude_elevation);             \
                                                end else begin                                                             \
                                                   set_main_stage(wedding_davin_stage)                                     \
                                                   critter_attempt_placement(dude_obj, 27697, dude_elevation);             \
                                                end                                                                        \
                                                if (tile_distance(self_tile, local_var(LVAR_Home_Tile)) > 1) then begin    \
                                                   critter_attempt_placement(self_obj, local_var(LVAR_Home_Tile), 0);      \
                                                end                                                                        \
                                                /*critter_attempt_placement(dude_obj, ((27501 * is_staging_miria_wedding) + (27295 * is_staging_davin_wedding)), dude_elevation); */ /* Seraph's Code */\
                                                /*obj_drop_everything(dude_obj); Disabled by Seraph */                     \
                                                remove_armor(dude_obj) /* Seraph's Code */                                 \
                                                set_sub_stage(wedding_stage_grisham_what)

// slags
#define slag_in_cave                            (slag_in_farm == false)
#define slag_in_farm                            (cur_map_index == MAP_GHOST_FARM)
#define slags_visible_in_farm_time              (((game_time_hour >= 000) and (game_time_hour < 500)) or (attacking_slags))
#define slag_rug_tile                           (16257)
#define check_show_ghost_farm_attackers         if (is_loading_game == false) then begin                    \
                                                   if (obj_in_party(self_obj) == false) then begin          \
                                                      if (cur_map_index == MAP_GHOST_FARM) then begin       \
                                                         if (all_slags_dead) then begin                     \
                                                            ndebug("no need for attackers");                \
                                                            check_set_obj_visiblility(self_obj, true);      \
                                                            destroy_object(self_obj);                       \
                                                         end else if (attacking_slags) then begin           \
                                                            ndebug("showing need for attackers");           \
                                                            critter_add_trait(self_obj,TRAIT_OBJECT,OBJECT_TEAM_NUM, TEAM_PLAYER);    \
                                                            check_set_obj_visiblility(self_obj, false);     \
                                                         end else begin                                     \
                                                            ndebug("hiding need for attackers");            \
                                                            check_set_obj_visiblility(self_obj, true);      \
                                                         end                                                \
                                                      end                                                   \
                                                   end                                                      \
                                                end
#define Do_Attacking_Slag(x,y)                  if (obj_is_visible_flag(self_obj)) then begin                        \
                                                   if (obj_can_see_obj(self_obj, ghost_farm_slag_obj)) then begin    \
                                                      attack(ghost_farm_slag_obj);                                   \
                                                   end else begin                                                    \
                                                      Follow_Dude(x,y)                                               \
                                                   end                                                               \
                                                end

// doors
#define davin_door_tile                         (28297)
#define miria_door_tile                         (28303)
#define cage_door_tile                          (16524)
#define coup_door_tile                          (15127)
#define slag_enterance_door_tile                (13862)
#define davin_door                              ((self_tile == davin_door_tile) and (cur_map_index == MAP_MODOC_MAINSTREET))
#define miria_door                              ((self_tile == miria_door_tile) and (cur_map_index == MAP_MODOC_MAINSTREET))
#define cage_door                               ((self_tile == cage_door_tile) and (cur_map_index == MAP_MODOC_BEDNBREAKFAST))
#define coup_door                               ((self_tile == coup_door_tile) and (cur_map_index == MAP_MODOC_BEDNBREAKFAST))
#define slag_enterance_door                     ((self_tile == slag_enterance_door_tile) and (cur_map_index == MAP_GHOST_CAVERN))

// generic modoc flags
#define set_modoc_flag_on(x, y)                 set_gvar_bit_on(GVAR_MODOC_GENERIC_FLAG_##y, x)
#define set_modoc_flag_off(x, y)                set_gvar_bit_off(GVAR_MODOC_GENERIC_FLAG_##y, x)
#define get_modoc_flag(x, y)                    gvar_bit(GVAR_MODOC_GENERIC_FLAG_##y, x)

#define set_modoc_flag_1_on(x)                  set_modoc_flag_on(x, 1)
#define set_modoc_flag_1_off(x)                 set_modoc_flag_off(x, 1)
#define get_modoc_flag_1(x)                     get_modoc_flag(x, 1)

#define set_modoc_flag_2_on(x)                  set_modoc_flag_on(x, 2)
#define set_modoc_flag_2_off(x)                 set_modoc_flag_off(x, 2)
#define get_modoc_flag_2(x)                     get_modoc_flag(x, 2)
// 1
#define shitter_blew_bit                        bit_1
#define chicken_dead_bit                        bit_2
#define dog_message_bit                         bit_3
#define chicken_message_bit                     bit_4
#define chicken_1st_visible_bit                 bit_5
#define met_rose_bit                            bit_6
#define met_grisham_bit                         bit_7
#define butcher_leaving_bit                     bit_8
#define freed_bess_bit                          bit_9
#define enemy_slags_bit                         bit_10
#define sleezy_stranger_flag_bit                bit_11
#define slags_spot_dude_bit                     bit_12
#define proctector_said_surrender_bit           bit_13
#define surrender_to_slag_bit                   bit_14
#define cornelius_dead_bit                      bit_15
#define davin_dead_bit                          bit_16
#define farrel_dead_bit                         bit_17
#define grisham_dead_bit                        bit_18
#define balthas_dead_bit                        bit_19
#define jo_dead_bit                             bit_20
#define vegeir_dead_bit                         bit_21
#define found_jonny_bb_gun_bit                  bit_22
#define destroy_prop_bit                        bit_23
#define said_fell_bit                           bit_24
#define leaving_shitter_bit                     bit_25
#define did_fade_out_bit                        bit_26
#define surrender_to_guards_bit                 bit_27
#define chicken_let_out_bit                     bit_28
#define setup_slag_guard_bit                    bit_29
#define spoke_to_vegeir_bit                     bit_30
#define stole_wish_bit                          bit_31
#define rats_killed_bit                         bit_32
//above rats_killed_bit was bit_8, but since there was already one, I had to change it to bit_32 - killap

// 2
#define brightlight_bit                         bit_1
#define karl_left_bit                           bit_2
#define clear_props_from_farm_bit               bit_3
#define fall_comment_bit                        bit_4
#define flew_out_of_shitter_bit                 bit_5
#define entered_caves_bit                       bit_6
#define jonny_sad_laddie_died_bit               bit_7
#define came_from_shitter_bit                   bit_8
#define came_from_cave_2_bit                    bit_9
#define jonny_arriving_at_home_bit              bit_10
#define entered_farm_bit                        bit_11
#define started_slag_attack_bit                 bit_12
#define attack_dog_team_bit                     bit_13
#define miria_dead_bit                          bit_14
#define karl_going_home_bit                     bit_15
#define brahmin_seed_dog_attacked_bit           bit_16
#define protector_said_message_bit              bit_17
#define karl_come_home_bit                      bit_18
#define lost_and_found_unlocked_bit             bit_19

#define lost_and_found_unlocked                 (get_modoc_flag_2(lost_and_found_unlocked_bit))
#define shitter_has_blown                       (get_modoc_flag_1(shitter_blew_bit))
#define chicken_is_dead                         (get_modoc_flag_1(chicken_dead_bit))
#define did_dog_message                         (get_modoc_flag_1(dog_message_bit))
#define did_chicken_message                     (get_modoc_flag_1(chicken_message_bit))
#define chicken_set_1st_visible                 (get_modoc_flag_1(chicken_1st_visible_bit))
#define dude_met_rose                           (get_modoc_flag_1(met_rose_bit))
#define dude_met_grisham                        (get_modoc_flag_1(met_grisham_bit))
#define butcher_said_leaving                    (get_modoc_flag_1(butcher_leaving_bit))
#define all_rats_killed                         (get_modoc_flag_1(rats_killed_bit))
#define freed_bess                              (get_modoc_flag_1(freed_bess_bit))
#define enemy_slags                             (get_modoc_flag_1(enemy_slags_bit))
#define sleezy_stranger_flag                    (get_modoc_flag_1(sleezy_stranger_flag_bit))
#define slags_spot_dude                         (get_modoc_flag_1(slags_spot_dude_bit))
#define proctector_said_surrender               (get_modoc_flag_1(proctector_said_surrender_bit))
#define surrendered_to_slag                     (get_modoc_flag_1(surrender_to_slag_bit))
#define cornelius_dead                          (get_modoc_flag_1(cornelius_dead_bit))
#define davin_dead                              (get_modoc_flag_1(davin_dead_bit))
#define farrel_dead                             (get_modoc_flag_1(farrel_dead_bit))
#define grisham_dead                            (get_modoc_flag_1(grisham_dead_bit))
#define balthas_dead                            (get_modoc_flag_1(balthas_dead_bit))
#define jo_dead                                 (get_modoc_flag_1(jo_dead_bit))
#define vegeir_dead                             (get_modoc_flag_1(vegeir_dead_bit))
#define dude_found_jonny_bb_gun                 (get_modoc_flag_1(found_jonny_bb_gun_bit))
#define destroy_props                           (get_modoc_flag_1(destroy_prop_bit))
#define karl_come_home                          (get_modoc_flag_2(karl_come_home_bit))
#define leaving_shitter                         (get_modoc_flag_1(leaving_shitter_bit))
#define did_fade_out                            (get_modoc_flag_1(did_fade_out_bit))
#define surrender_to_guards                     (get_modoc_flag_1(surrender_to_guards_bit))
#define chicken_let_out                         (get_modoc_flag_1(chicken_let_out_bit))
#define setup_slag_guard                        (get_modoc_flag_1(setup_slag_guard_bit))
#define spoke_to_vegeir                         (get_modoc_flag_1(spoke_to_vegeir_bit))
#define stole_wish                              (get_modoc_flag_1(stole_wish_bit))
#define said_fell                               (get_modoc_flag_1(said_fell_bit))
#define brightlight                             (get_modoc_flag_2(brightlight_bit))
#define karl_left                               (get_modoc_flag_2(karl_left_bit))
#define clear_props_from_farm                   (get_modoc_flag_2(clear_props_from_farm_bit))
#define fall_comment                            (get_modoc_flag_2(fall_comment_bit))
#define flew_out_of_shitter                     (get_modoc_flag_2(flew_out_of_shitter_bit))
#define entered_caves                           (get_modoc_flag_2(entered_caves_bit))
#define jonny_sad_laddie_died                   (get_modoc_flag_2(jonny_sad_laddie_died_bit))
#define came_from_shitter                       (get_modoc_flag_2(came_from_shitter_bit))
#define came_from_cave_2                        (get_modoc_flag_2(came_from_cave_2_bit))
#define jonny_arriving_at_home                  (get_modoc_flag_2(jonny_arriving_at_home_bit))
#define entered_farm                            (get_modoc_flag_2(entered_farm_bit))
#define started_slag_attack                     (get_modoc_flag_2(started_slag_attack_bit))
#define attack_dog_team                         (get_modoc_flag_2(attack_dog_team_bit))
#define miria_dead                              (get_modoc_flag_2(miria_dead_bit))
#define karl_going_home                         (get_modoc_flag_2(karl_going_home_bit))
#define brahmin_seed_dog_attacked               (get_modoc_flag_2(brahmin_seed_dog_attacked_bit))
#define protector_said_message                  (get_modoc_flag_2(protector_said_message_bit))

#define set_lost_and_found_unlocked             set_modoc_flag_2_on(lost_and_found_unlocked_bit)
#define set_shitter_blown                       set_modoc_flag_1_on(shitter_blew_bit)
#define set_chicken_dead                        set_modoc_flag_1_on(chicken_dead_bit)
#define set_dog_message                         set_modoc_flag_1_on(dog_message_bit)
#define set_chicken_message                     set_modoc_flag_1_on(chicken_message_bit)
#define set_chicken_1st_visible                 set_modoc_flag_1_on(chicken_1st_visible_bit)
#define set_dude_met_rose                       set_modoc_flag_1_on(met_rose_bit)
#define set_dude_met_grisham                    set_modoc_flag_1_on(met_grisham_bit)
#define on_butcher_said_leaving                 set_modoc_flag_1_on(butcher_leaving_bit)
#define off_butcher_said_leaving                set_modoc_flag_1_off(butcher_leaving_bit)
#define set_all_rats_killed                     set_modoc_flag_1_on(rats_killed_bit)
#define set_freed_bess                          set_modoc_flag_1_on(freed_bess_bit)
#define set_freed_bess_off                      set_modoc_flag_1_off(freed_bess_bit)
#define set_enemy_slags                         set_modoc_flag_1_on(enemy_slags_bit); ndebug("I SET ENEMY SLAGS!!!! I'M SCRIPT #"+NAME)
#define set_sleezy_stranger_flag                set_modoc_flag_1_on(sleezy_stranger_flag_bit)
#define set_slags_spot_dude_on                  set_modoc_flag_1_on(slags_spot_dude_bit)
#define set_slags_spot_dude_off                 set_modoc_flag_1_off(slags_spot_dude_bit)
#define set_proctector_said_surrender_on        set_modoc_flag_1_on(proctector_said_surrender_bit)
#define set_proctector_said_surrender_off       set_modoc_flag_1_off(proctector_said_surrender_bit)
#define set_surrendered_to_slag_on              set_modoc_flag_1_on(surrender_to_slag_bit); ndebug("SETTING SURRENDER_TO_SLAG ON")
#define set_surrendered_to_slag_off             set_modoc_flag_1_off(surrender_to_slag_bit); ndebug("SETTING SURRENDER_TO_SLAG ON")
#define set_cornelius_dead                      set_modoc_flag_1_on(cornelius_dead_bit)
#define set_davin_dead                          set_modoc_flag_1_on(davin_dead_bit)
#define set_farrel_dead                         set_modoc_flag_1_on(farrel_dead_bit)
#define set_grisham_dead                        set_modoc_flag_1_on(grisham_dead_bit)
#define set_balthas_dead                        set_modoc_flag_1_on(balthas_dead_bit)
#define set_jo_dead                             set_modoc_flag_1_on(jo_dead_bit)
#define set_vegeir_dead                         set_modoc_flag_1_on(vegeir_dead_bit)
#define set_dude_found_jonny_bb_gun             set_modoc_flag_1_on(found_jonny_bb_gun_bit)
#define set_destroy_props                       set_modoc_flag_1_on(destroy_prop_bit)
#define set_karl_come_home                      set_modoc_flag_2_on(karl_come_home_bit); ndebug("set_karl_come_home")
#define set_leaving_shitter                     set_modoc_flag_1_on(leaving_shitter_bit)
#define off_leaving_shitter                     set_modoc_flag_1_off(leaving_shitter_bit)
#define set_did_fade_out                        set_modoc_flag_1_on(did_fade_out_bit)
#define off_did_fade_out                        set_modoc_flag_1_off(did_fade_out_bit)
#define set_surrender_to_guards_on              set_modoc_flag_1_on(surrender_to_guards_bit)
#define set_surrender_to_guards_off             set_modoc_flag_1_off(surrender_to_guards_bit)
#define set_chicken_let_out_on                  set_modoc_flag_1_on(chicken_let_out_bit)
#define set_chicken_let_out_off                 set_modoc_flag_1_off(chicken_let_out_bit)
#define set_setup_slag_guard                    set_modoc_flag_1_on(setup_slag_guard_bit)
#define set_spoke_to_vegeir                     set_modoc_flag_1_on(spoke_to_vegeir_bit)
#define set_stole_wish                          if (stole_wish == false) then begin    \
                                                   modoc_dude_floater(610);            \
                                                end                                    \
                                                set_modoc_flag_1_on(stole_wish_bit)
#define set_said_fell                           set_modoc_flag_1_on(said_fell_bit)
#define set_brightlight                         set_modoc_flag_2_on(brightlight_bit)
#define set_karl_left                           set_modoc_flag_2_on(karl_left_bit)
#define set_clear_props_from_farm               set_modoc_flag_2_on(clear_props_from_farm_bit)
#define set_fall_comment                        set_modoc_flag_2_on(fall_comment_bit)
#define off_fall_comment                        set_modoc_flag_2_off(fall_comment_bit)
#define set_flew_out_of_shitter                 set_modoc_flag_2_on(flew_out_of_shitter_bit)
#define set_entered_caves                       set_modoc_flag_2_on(entered_caves_bit)
#define set_jonny_sad_laddie_died               set_modoc_flag_2_on(jonny_sad_laddie_died_bit)
#define set_came_from_shitter                   set_modoc_flag_2_on(came_from_shitter_bit)
#define off_came_from_shitter                   set_modoc_flag_2_off(came_from_shitter_bit)
#define set_came_from_cave_2                    set_modoc_flag_2_on(came_from_cave_2_bit)
#define off_came_from_cave_2                    set_modoc_flag_2_off(came_from_cave_2_bit)
#define set_jonny_arriving_at_home              set_modoc_flag_2_on(jonny_arriving_at_home_bit)
#define off_jonny_arriving_at_home              set_modoc_flag_2_off(jonny_arriving_at_home_bit)
#define set_entered_farm                        set_modoc_flag_2_on(entered_farm_bit)
#define set_started_slag_attack                 set_modoc_flag_2_on(started_slag_attack_bit)
#define set_attack_dog_team                     critter_add_trait(self_obj, TRAIT_OBJECT,OBJECT_TEAM_NUM, TEAM_MODOC_ATTACK_DOG_1);
/*
#define set_attack_dog_team                     if (attack_dog_team) then begin                                                         \
                                                   set_modoc_flag_2_off(attack_dog_team_bit);                                           \
                                                   critter_add_trait(self_obj, TRAIT_OBJECT,OBJECT_TEAM_NUM, TEAM_MODOC_ATTACK_DOG_1);  \
                                                end else begin                                                                          \
                                                   set_modoc_flag_2_on(attack_dog_team_bit);                                            \
                                                   critter_add_trait(self_obj, TRAIT_OBJECT,OBJECT_TEAM_NUM, TEAM_MODOC_ATTACK_DOG_2);  \
                                                end
*/
#define set_miria_dead                          set_modoc_flag_2_on(miria_dead_bit)
#define set_karl_going_home                     if (karl_going_home == false) then begin           \
                                                   give_xp(EXP_SENT_KARL_HOME);                    \
                                                   inc_general_rep(REP_TOWN_SEND_KARL_HOME);       \
                                                end                                                \
                                                set_modoc_flag_2_on(karl_going_home_bit)
#define set_brahmin_seed_dog_attacked           set_modoc_flag_2_on(brahmin_seed_dog_attacked_bit)
#define set_protector_said_message              set_modoc_flag_2_on(protector_said_message_bit)
#define off_protector_said_message              set_modoc_flag_2_off(protector_said_message_bit)

#endif // MODOC_H
