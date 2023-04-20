/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef NCR_H
#define NCR_H

#include "../headers/define.h"
#include "../headers/command.h"
#include "../headers/caravan.h"
//General

//Generic Seed states
#define WORK_KNOWN 1

#define temp_in_box(x, ul, ur, lr, ll)                ((tile_distance(x, ul) <= tile_distance(ul, lr)) and  \
                                                       (tile_distance(x, ur) <= tile_distance(ur, ll)) and  \
                                                       (tile_distance(x, lr) <= tile_distance(lr, ul)) and  \
                                                       (tile_distance(x, ll) <= tile_distance(ll, ur)))

#ifndef tile_in_box
#define tile_in_box(x, ul, ur, lr, ll)                temp_in_box(x, ul, ur, lr, ll) // *** replace with jesse function
#endif

#define obj_in_loc(obj, ul, ur, lr, ll, map, elev)    ((tile_in_box(tile_num(obj), ul, ur, lr, ll)) and (cur_map_index == map) and ((elevation(obj) == elev) or (-1 == elev)))

#ifndef dude_level
#define dude_level      get_pc_stat(PCSTAT_level)
#endif

#ifndef dude_has_booze
#define dude_has_booze     (obj_is_carrying_obj_pid(dude_obj, PID_BOOZE))
#endif
#define dude_has_beer      (obj_is_carrying_obj_pid(dude_obj, PID_BEER))
#define dude_has_rum       (obj_is_carrying_obj_pid(dude_obj, PID_ROENTGEN_RUM))
#define dude_has_gulp_beer (obj_is_carrying_obj_pid(dude_obj, PID_GAMMA_GULP_BEER))

#define dude_booze_ptr     (obj_carrying_pid_obj(dude_obj, PID_BOOZE))
#define dude_beer_ptr      (obj_carrying_pid_obj(dude_obj, PID_BEER))
#define dude_rum_ptr       (obj_carrying_pid_obj(dude_obj, PID_ROENTGEN_RUM))
#define dude_gulp_beer_ptr (obj_carrying_pid_obj(dude_obj, PID_GAMMA_GULP_BEER))

#define dude_has_alcohol   (dude_has_booze or dude_has_beer or dude_has_rum or dude_has_gulp_beer)

//or global var
#define or_global(x, val)  set_global_var(x, global_var(x) bwor val)

#define party_member_is_armed  (0) //Temp
#define dude_looking_for_geck  (dude_found_geck == FALSE) //Temp

#ifndef MOREOPTION
#define MOREOPTION(x)          NOption(MORESTRING, x, 0)
#endif
#define ENDOPTION              NOption(ENDSTRING, Node999, 0)
#define ENDHOSTILE             NOption(ENDSTRING, Node998, 0)

#define OBJ_VIS   0
#define OBJ_INVIS 1

#define V13KNOWN  (town_known(AREA_VAULT_13))
#define NIGHTTIME 2000
#define DAYTIME   600

#define IS_DAYTIME  (game_time_hour >= DAYTIME and game_time_hour < NIGHTTIME)
#define T4HRm(w, x, y, z) (w bwor x bwor y bwor z)
#define T8HRm(s, t, u, v, w, x, y, z) T4HRm(s, t, u, v) bwor T4HRm(w, x, y, z)
#define T16HRm(k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z) T8HRm(k, l, m, n, o, p, q, r) bwor T8HRm(s, t, u, v, w, x, y, z)


#define do_self_anim_callback                   \
   if (anim_busy(self_obj)) then                \
      anim_flag := 1;                           \
   else if (anim_flag == 1) then begin          \
      anim_flag := 0;                           \
      call anim_end_call;                       \
   end

//Deathclaw stuff
#define DEATH_CLAW_FLEE_DIST 15

//Elightened one stuff
#define OZ_LETTER_PID     PID_ENLIGHTENED_ONE_LETTER
#define POS_ADJUST        20903
#define POS_ADJUST_PLAYER 21304

//Tandi/Gunther
#define TJOB_ACCEPT  1
#define TJOB_DONE    2

#define SPY_HOLO_PID PID_SPY_HOLO

//Generic flags from GVAR_NCR_GENERIC_STATE
#define NCR_KARL_REF_RANGERS   bit_1
#define NCR_SALBOB_REF_DOCTOR  bit_2
#define NCR_VORTIS_REF_RANGERS bit_3
#define NCR_DOC_REF_RANGERS    bit_4
#define NCR_GENERATOR_COUNT    bit_5
#define NCR_SLAVES_FREE        bit_6
#define NCR_CRAPS_KNOWN        bit_7
#define NCR_OSWALD_DEAD        bit_8

#define ncr_global_state(x)     (global_var(GVAR_NCR_GENERIC_STATE) bwand x)
#define ncr_set_global_state(x) set_global_var(GVAR_NCR_GENERIC_STATE, global_var(GVAR_NCR_GENERIC_STATE) bwor x)
#define ncr_rangers_known       (ncr_global_state(NCR_KARL_REF_RANGERS) or ncr_global_state(NCR_VORTIS_REF_RANGERS) \
                                 or ncr_global_state(NCR_DOC_REF_RANGERS) or (global_var(GVAR_NCR_RANGERS_KNOWN)))

//Westin
#define LYNETTE_PID_HOLO     PID_LYNETTE_HOLO
#define WESTIN_PID_HOLO      PID_WESTIN_HOLO

//Felix stuff
//GVAR_NCR_FELIX_SEED
#define FELIX_FRIENDLY        bit_1
#define FELIX_SENT_BY_WESTIN  bit_2
#define FELIX_CRITTERS_DEAD   bit_3
#define FELIX_CRITTERS_ACCEPT bit_4
#define FELIX_DUMONT_REF      bit_5
#define FELIX_CRITTERS_DONE   bit_6

#define get_felix_seed(x) (global_var(GVAR_NCR_FELIX_SEED) bwand x)
#define set_felix_seed(x) set_global_var(GVAR_NCR_FELIX_SEED, global_var(GVAR_NCR_FELIX_SEED) bwor x)
#define rem_felix_seed(x) set_global_var(GVAR_NCR_FELIX_SEED, global_var(GVAR_NCR_FELIX_SEED) bwxor x)

//Elise stuff
//GVAR_NCR_ELISE_SEED
#define RANGER_PIN_PID     PID_RANGER_PIN
#define ELISE_SLAVES_FREED 1
#define ELISE_OFFERED      2
#define ELISE_TEST         3
#define ELISE_DONE         4
#define ELISE_REJECTED     5

#define get_elise_seed (global_var(GVAR_NCR_ELISE_SEED))
#define set_elise_seed(x) set_global_var(GVAR_NCR_ELISE_SEED, x)

//Karl stuff
//#define FRONT_OF_DOOR 15691
#define FRONT_OF_DOOR 16291
//#define HOME_POS      15897
#define HOME_POS      16697

//Dusty and his bar stuff

//Doc Jubilee stuff

#define POISON_PID  PID_HYPO_POISON
#define PILL_PID    PID_HEART_PILLS

//Jack stuff
#define JACK_SURRENDER    1
#define JACK_ALARM        2
#define JACK_COUNTDOWN    3
#define JACK_CRAZY        4

#define jack_state global_var(GVAR_NCR_JACK_STATE)
#define set_jack_state(x)      set_global_var(GVAR_NCR_JACK_STATE, x)
#define JACK_EXPLOSIVE_DAMAGE  0
#define JACK_JAIL_TILE         17889
#define JACK_CRAZY_TILE        14866

#define POS_POLICE             14707
#define POS_POWER              14866
#define POS_INTER              13091

//Hoss stuff
#define beat_hoss (global_var(GVAR_NCR_BEAT_HOSS) == 1)

#define HOSS_KNOWN 1 //used for map vars

//NCR Police stuff
#define POLICE_WARN_DIST 8

//Duppo Crap
#define CATTLE_OFFERED  bit_1
#define CATTLE_MISSED   bit_2
#define CATTLE_ACCEPT   bit_3
#define CATTLE_FINISHED bit_4
#define CATTLE_ON       bit_5
#define CATTLE_SCREWED  bit_6
#define CATTLE_FAIL     bit_7
#define CATTLE_AVERAGE  bit_8
#define CATTLE_SUCCESS  bit_9
#define CATTLE_ON1      bit_10
#define CATTLE_ABANDON  bit_11
#define HAL_DEAD        bit_12

#define cattle_drive(x) (gvar_bit(GVAR_NCR_CATTLE_DRIVE, x))
#define set_cattle_drive(x) set_gvar_bit_on(GVAR_NCR_CATTLE_DRIVE, x)
#define unset_cattle_drive(x) set_gvar_bit_off(GVAR_NCR_CATTLE_DRIVE, x)

procedure calc_cattle_drive_status begin
   variable brahmin_num = caravan_brahmin_left;
   ndebug("caravan_brahmin_left: " + brahmin_num);
   if (brahmin_num <= 0) then begin // In some cases number goes below 0, probably when encountering other caravans. This needs to be cleaned up eventually.
      ndebug("in 0 case number: " + brahmin_num);
      set_cattle_drive(CATTLE_SCREWED);
   end else if (caravan_brahmin_left < 4) then begin
      ndebug("in < 4 case number: " + brahmin_num);
      set_cattle_drive(CATTLE_FAIL);
   end else if (caravan_brahmin_left < 6) then begin
      ndebug("in < 6 case number: " + brahmin_num);
      set_cattle_drive(CATTLE_AVERAGE);
   end else begin
      ndebug("in else case number: " + brahmin_num);
      set_cattle_drive(CATTLE_SUCCESS);
   end
end

//Dorothy Crap
#define PP_MURDER        1
#define PP_DEFUSED       2
#define PP_DESTROYED     3
#define PP_DAMAGED       4
#define PP_ACCEPT        5
#define PP_DONE          6
#define PP_REFUSED       7
#define PP_REPAIRED      8
#define PP_REPAIR_FAILED 9

#define DOROTHY_YARD_TILE 16274
#define DOROTHY_CRAZY_POS 15462
#define DUDE_CRAZY_POS    15266
#define DOROTHY_FIX_POS   14865
#define DORTHY_POS_INVIS  11231

#define DOROTHY_JACK_C1   16274
#define DOROTHY_NORM_POS  15462

#define FIX_GENERATOR_POINTS 3000

//Dr Henry crap
#define HYPO_GIVEN       1
#define HYPO_USED        2
#define CYBER_DOG_JOIN   3
#define CYBER_DOG_JOINED 4

#define HENRY_LAB_TILE 23329
#define HENRY_SERUM    PID_MUTAGENIC_SYRUM

#define CYBER_DOG_FID  -1

//Global power flags
#define POWER_ON  0
#define POWER_OFF 1

//Terminal locations
#define TERMINAL1 17715
#define TERMINAL2 13904
#define TERMINAL3 15504
#define TERMINAL4 17104

//Slavedoor Tilenums
#define SLVDORG1D1 14118
#define SLVDORG1D2 15118
#define SLVDORG1D3 16118
#define SLVDORG1D4 17118

#define SLVDORG2D1 13902
#define SLVDORG2D2 13898
#define SLVDORG2D3 13894

#define SLVDORG3D1 15502
#define SLVDORG3D2 15498
#define SLVDORG3D3 15494

#define SLVDORG4D1 17102
#define SLVDORG4D2 17098
#define SLVDORG4D3 17094

#define set_slave_door(x)   slvdor_##x := self_obj
#define open_slave_door(x)  reg_anim_clear(slvdor_##x);obj_unlock(slvdor_##x);obj_open(slvdor_##x)
#define close_slave_door(x) reg_anim_clear(slvdor_##x);animate_stand_reverse_obj(slvdor_##x);obj_lock(slvdor_##x)

#define SLV_RUN_TILE_1    13921
#define SLV_RUN_TILE_2    11521
#define SLV_RUN_TILE_3    10931
#define SLV_RUN_TILE_4     6918

//Slave guards
#define SLVGRD_PT_1       14121
#define SLVGRD_PT_2       18316
#define SLVGRD_PT_3       12707
#define SLVGRD_PT_4       11886
#define SLVGRD_PT_5       17687
#define SLVGRD_PT_6       17909
#define SLVGRD_PT_7       18723
#define SLVGRD_OFFICE_POS 11918

//Slave overseer
     //Facing directions
#define QUARTERS_DIR 4
#define WORK_DIR     5
    //Tile positions
#define OVR_TILE_8TO11 10501
#define OVR_TILE_12TO3 11921
#define OVR_TILE_4TO11 11921
#define OVR_TILE_12TO7 10501
#define OVR_TILE_QUATERS OVR_TILE_8TO11
#define OVR_TILE_WORK    OVR_TILE_12TO3

//Gate guard captain

//Gate guards
#define SUCCESSNOCHECK 20
#define GUARDLOOKDIST   6
#define GUARDATTACKDIST 4


//Carlson Gate Guard info
#define CARLSON_GATE_GUARD_CAPTAIN_TILE 19312
#define GATE_CHECK_TILE 19516
#define GATE_CHECK_DIST 4
#define OBJ_PRES_PASS   PID_PRESIDENTIAL_PASS

//Carlson Guards info
#define CARLSON_GUARD_TALK_DIST 5

//Probably should be also done in new reno.

#define westinValid (get_westin_flag(WESTIN_ACCEPT_SNUFF) and not get_westin_flag(WESTIN_DEAD))
//I am making these bit flags just incase we need the info later.
/*
    Moved to global.h

#define WESTIN_ACCEPT_SNUFF 1
#define WESTIN_DEAD         2

#define CARLSON_ACCEPT_SNUFF  1
#define CARLSON_DEAD          2
#define CARLSON_SECURITY_DUTY 4

#define get_westin_flag(x)  (global_var(GVAR_NEWRENO_SNUFF_WESTIN) bwand x)
#define set_westin_flag(x)  set_global_var(GVAR_NEWRENO_SNUFF_WESTIN, global_var(GVAR_NEWRENO_SNUFF_WESTIN) bwor x)

#define get_carlson_flag(x) (global_var(GVAR_NEWRENO_SNUFF_CARLSON) bwand x)
#define set_carlson_flag(x) set_global_var(GVAR_NEWRENO_SNUFF_CARLSON, global_var(GVAR_NEWRENO_SNUFF_CARLSON) bwor x)
*/

//Mira
/*#define MJOBTAKEN         1
#define MJOBJACKEDWHACKED 2
#define MJOBDONE          3
#define MJACKTALK         4
#define MJACKDEAD         5
#define HKP90C_PID        PID_HK_P90C*/

#define MJACKTALK         1
#define MJACKDEAD         2
#define MJOBTAKEN         3
#define MJOBJACKEDWHACKED 4
#define MJOBDONE          5
#define HKP90C_PID        PID_HK_P90C

//Merk stuff
#define FAKE_HOLODISK           PID_HOLODISK_FAKE_V13
#define PID_DOC_PAPERS          PID_DR_HENRY_PAPERS
//Need to change later: above

#define DUDE_HAS_FAKE_MAP       1
#define DUDE_FIGURED_FAKE_MAP   2

#define MERK_BAZAAR_POS         22154
#define MERK_CARLSON_POS        18551
#define MERK_HOME_POS           16337
//#define MERK_ENTER_BAZAAR_MAP   29133
#define MERK_ENTER_BAZAAR_MAP   30134
#define MERK_ENTER_COUNCIL_MAP  14096
#define MERK_ENTER_COUNCIL_WAY1 19508
#define MERK_ENTER_COUNCIL_WAY2 19518



#define MERK_STATUS_DEAD         1
#define MERK_STATUS_MET          2
#define MERK_STATUS_BAD_REACTION 3
#define MERK_STATUS_PLEASED      4

#define MSS_DR_HENRY_ACCEPT      1
#define MSS_DR_HENRY_DONE        2
#define MSS_DR_HENRY_DEAD        4
#define MSS_DR_HENRY_PAPERS      8
#define MSS_KILL_SKEETER         16
#define MSS_SKEETER_DEAD         32
#define MSS_KILL_ELRON           64
#define MSS_ELRON_DEAD           128

#define LENNYBOXSTART            23747
#define PLAYERBOXSTART           21752
#define FIGHTRETURNTILE          23752
#define merk_status             (global_var(GVAR_NCR_SCMERK_STATUS))
#define set_merk_status(x)      set_global_var(GVAR_NCR_SCMERK_STATUS, x)
#define merk_seed_status(x)     (global_var(GVAR_NCR_SCMERK_SEED_STATUS) bwand x)
#define set_mss(x)              set_global_var(GVAR_NCR_SCMERK_SEED_STATUS, global_var(GVAR_NCR_SCMERK_SEED_STATUS) bwor x)

//Stuff for Ratch
#define RATCHNOPARTS  1
#define RATCHDONEFIX  2
#define RATCHREPAIR   3
#define RATCH_WORKTILE 23275
#define RATCH_HOMETILE 15352

//Stuff for Buster
#ifndef MORESTRING
#define MORESTRING             (g_mstr(352))
#endif
#define ENDSTRING              (g_mstr(350))
#define TIMERATTACK            1
#define TIMERSHOPOPEN          2

//Stuff for Votris
#define VOR_ESCORT_OUT_TILE 11529

#define VORTISOFFICEPLACE   10518 //edit by killap - was 10507
#define VORTISBEDPLACE      10510 //edit by killap - was 10507
#define VORTISBEDDIR        4
#define VORTISOFFICEDIR     3

#define VORTIS_QUEST_ACCEPTED 1
#define VORTIS_QUEST_DONE     2

#define VORTIS_QUEST2_ACCEPTED  3
#define VORTIS_QUEST2_DONE      4

#define VORTIS_GREP_THRESH   80
    //Used to define when vortis will think you are a goodie too shoes.
#define VOTRIS_NCR_MAP       PID_RANGER_MAP
    //Bit flags
#define RANGERS_KNOWN        1
#define RANGERS_SENT         2

#define dude_is_ranger   (global_var(GVAR_NCR_PLAYER_RANGER))

/*
    Unknown design problems.
    SCVOTRIS.SSL:
        Note the design had Slavers=leave in it. I am not sure what the hell that means.
*/
#define NCR_GUARD_ENEMY     bit_1
//************ Using for Tandi too use with Gunther her assistant *************
#define NCR_PAY_V15_CLEAR   bit_2
#define NCR_PAYED_V15_CLEAR bit_3

#define NCR_PAY_PARTS       bit_4
#define NCR_PAYED_PARTS     bit_6

#define NCR_PAY_HOLO        bit_7
#define NCR_PAYED_HOLO      bit_8

#define NCR_PAY_FIND_V13    bit_9
#define NCR_PAYED_FIND_V13  bit_10

#define NCR_WESTIN_ENEMY              bit_11
#define NCR_GUARD_CHECK_HOSTILE       bit_12

#define NCR_ELISE_TAMPER_FLAG         bit_13
#define NCR_GUARD_CAPTAIN_TAMPER_FLAG bit_14
#define NCR_KILLED_GOND_SERUM_FLAG    bit_15
#define NCR_KILLED_LENNY_SERUM_FLAG   bit_16
#define NCR_MERK_SERUM_FLAG           bit_17
#define NCR_BOMB_JACK                 bit_18
#define NCR_GRANT_ACCESS              bit_19

#define PAY_V15_CLEAR (ncr_flag(NCR_PAY_V15_CLEAR) and not ncr_flag(NCR_PAYED_V15_CLEAR))
#define PAY_PARTS     (ncr_flag(NCR_PAY_PARTS) and not ncr_flag(NCR_PAYED_PARTS))
#define PAY_HOLO      (ncr_flag(NCR_PAY_HOLO) and not ncr_flag(NCR_PAYED_HOLO))
#define PAY_FIND_V13  (ncr_flag(NCR_PAY_FIND_V13) and not ncr_flag(NCR_PAYED_FIND_V13))
#define NCR_ENEMY     (ncr_flag(NCR_GUARD_ENEMY))
#define SET_NCR_ENEMY set_ncr_flag(NCR_GUARD_ENEMY)
//*****************************************************************************

#define ncr_flag(x)      (gvar_bit(GVAR_NCR_GEN_FLAGS, x))
#define set_ncr_flag(x)  set_gvar_bit_on(GVAR_NCR_GEN_FLAGS, x)
#define unset_ncr_flag(x) set_gvar_bit_off(GVAR_NCR_GEN_FLAGS, x)

//Used for emitters that control force fields
#define TIMER_SET_STATE_ON        1
#define TIMER_SET_STATE_DELAY     2
#define TIMER_SET_STATE_DESTROYED 3
#define TIMER_SET_STATE_FLICKER   4
#define TIMER_DO_FLICKER          5
#define TIMER_CHECK_POWER         6

#define EMITTER_SET_FIELD_ON(x)        add_timer_event(x, 0, TIMER_SET_STATE_ON)
#define EMITTER_SET_FIELD_DELAY(x)     add_timer_event(x, 0, TIMER_SET_STATE_DELAY)
#define EMITTER_SET_FIELD_DESTROYED(x) add_timer_event(x, 0, TIMER_SET_STATE_DESTROYED)
#define EMITTER_SET_FIELD_FLICKER(x)   add_timer_event(x, 0, TIMER_SET_STATE_FLICKER)

//Emitter control flags for using a controling macro in a force field
#define EMITTER_CONTROL_ON         1
#define EMITTER_CONTROL_DELAY      2
#define EMITTER_CONTROL_DESTROYED  3
#define EMITTER_CONTROL_FLICKER    4

#define NCR_BASE_TIMER          4278190080
#define NCR_TIMER_PLAYER_WARN   (NCR_BASE_TIMER + 1) //Used for NPC to warn the player when they are doing somthing not approprate to another object.
#define NCR_TIMER_ATTACK_PLAYER (NCR_TIMER_PLAYER_WARN + 1)

#define POSTGLOBALTIMER(who, event)  if (who and who != -1) then add_timer_event(who, 0, event)

#define CHECK_START_TILE(tile)                            \
   if (tile != self_tile) then begin                      \
      if (not anim_busy(self_obj)) then begin             \
         reg_anim_clear(self_obj);                        \
         reg_anim_begin();                                \
         animate_move_to_tile(tile);                      \
         reg_anim_end();                                  \
      end                                                 \
   end

#define VAULTPARTS    PID_V15_COMPUTER_PART


#define GUARDS_CHECK_OBJ(x)     set_global_var(GVAR_NCR_GUARDS_CHECK_OBJ, x)

#endif // NCR_H
