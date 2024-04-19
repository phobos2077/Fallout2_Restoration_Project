/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef SANFRAN_H
#define SANFRAN_H

//San francisco area header

//Global shi flags
//GVAR_SAN_FRAN_FLAGS

#define SF_SHI_ENEMY           bit_1
#define SF_LEE_DEAD            bit_2
#define SF_OZ9_DEAD            bit_3
#define SF_LOPAN_DEAD          bit_4
#define SF_DRAGON_DEAD         bit_5
#define SF_WONG_YI_TZE_DEAD    bit_6
#define SF_SHENG_MING_DEAD     bit_7
#define SF_JING_TIE_GAHNG_DEAD bit_8
#define SF_LOPAN_ENEMY         bit_9
#define SF_PUNKS_ENEMY         bit_10
#define SF_EMPEROR_FORMATTED   bit_11
#define SF_LEE_OK_FUEL_TANKER  bit_12
#define SF_EMP_ROOM_BIO        bit_13
#define SF_EMP_ROOM_CHEM       bit_14
#define SF_EMP_ROOM_PHY        bit_15
#define SF_GAS_ELRONS          bit_16
#define SF_GAS_BEGUN           bit_17
#define SF_SUZE_SAVED          bit_18
#define SF_ELRON_ENEMY         bit_19
#define SF_ELRON_DRIVE_FORMAT  bit_20
#define SF_ON_DRAGON_MISSION   bit_21
#define SF_ON_LOPAN_MISSION    bit_22
#define SF_EMPEROR_FIELD_OFF   bit_23
#define SF_IN_BROTHER_HOOD     bit_24
#define SF_FUEL_COMP_KNOWN     bit_25
#define SF_BROTHER_PLANS       bit_26

#define on_dragon_mission (san_fran_flag(SF_ON_DRAGON_MISSION))
#define on_lopan_mission  (san_fran_flag(SF_ON_LOPAN_MISSION))

#define IS_BOS   (san_fran_flag(SF_IN_BROTHER_HOOD))
#define SET_BOS  set_san_fran_flag(SF_IN_BROTHER_HOOD)

#define san_fran_flag(x)       gvar_bit(GVAR_SAN_FRAN_FLAGS, x)
#define set_san_fran_flag(x)   set_gvar_bit_on(GVAR_SAN_FRAN_FLAGS, x)
#define unset_san_fran_flag(x) set_gvar_bit_off(GVAR_SAN_FRAN_FLAGS, x)

//Gas flags as per docs
#define GASDONE (tanker_flag(TANK_FUEL) or san_fran_flag(SF_GAS_ELRONS))
#define GASBEGUN (san_fran_flag(SF_GAS_BEGUN))


//Using bit values just in case, but is really one state at a time
#define SUB_DEACTIVATED bit_1
#define SUB_DISCOVERED  bit_2

#define sub_flag(x)            (global_var(GVAR_SAN_FRAN_SUB) == x)
#define set_sub_flag(x)        set_global_var(GVAR_SAN_FRAN_SUB, x)

//Using bit values just in case, but is really one state at a time
#define TANK_KNOWN    bit_1
#define TANK_FOB      bit_2
#define TANK_NAVCOMP  bit_3
#define TANK_FUEL     bit_4
//#define TANK_MONSTERS bit_1
//#define TANK_GO       bit_5

#define tanker_flag_any        (global_var(GVAR_SAN_FRAN_TANKER))
#define tanker_flag(x)         (gvar_bit(GVAR_SAN_FRAN_TANKER, x))

#define check_f2_tanker          \
   if (tanker_flag(TANK_FUEL) and tanker_flag(TANK_NAVCOMP)) then set_f2(f2_state_tanker_fixed)

#define set_tanker_flag(x)       \
   set_gvar_bit_on(GVAR_SAN_FRAN_TANKER, x); \
   check_f2_tanker

//Using bit values just in case, but is really one state at a time
#define SHI_TRUE    bit_1
#define SHI_AVENGED bit_2

#define shihacked_flag(x)     (global_var(GVAR_SAN_FRAN_SHIHACKED) == x)
#define set_shihacked_flag(x) set_global_var(GVAR_SAN_FRAN_SHIHACKED, x)

//Using bit values just in case, but is really one state at a time
#define STRUG_SHIRECRUIT bit_1
#define STRUG_OZ9DEAD    bit_2 //Dosen't need to exist
#define STRUG_SHIDOUBLE  bit_3

#define STRUG_ELRECRUIT  bit_4
#define STRUG_ELRECRUIT2 bit_5
#define STRUG_EMPDEAD    bit_6 //Doesn't need to exist
#define STRUG_ELDOUBLE   bit_7

#define STRUG_DONE       bit_9

#define struggle_flag_any     (global_var(GVAR_SAN_FRAN_STRUGGLE))
#define struggle_flag(x)      (global_var(GVAR_SAN_FRAN_STRUGGLE) == x)
#define set_struggle_flag(x)  set_global_var(GVAR_SAN_FRAN_STRUGGLE, x)

//Using bit values just in case, but is really one state at a time
#define BADGER_HACKEDSHI bit_1 //hacked the shi
#define BADGER_DEADSHI   bit_2 //was killed by the shi
#define BADGER_HACKEDEL  bit_3 //hack the elrons
#define BADGER_FGFRIEND  bit_4 //Badger wants you to find his girlfriend before he helps you
#define BADGER_GFRIEND1  bit_5 //Girlfriend is dead
#define BADGER_GFRIEND2  bit_6 //Girlfriend was saved
#define BADGER_MET       bit_7 //Badger met flag
#define BADGER_DEADCBT   bit_8 //Badger is dead
#define BADGER_DONESHI   bit_9
#define BADGER_DONEELE   bit_10

#define BADGER_DEAD      (badger_flag(BADGER_DEADSHI) or badger_flag(BADGER_DEADCBT) or elron_flag(EL_ACBADGDEAD))

/* TODO: This is wrong and should be checking actual bit flags.
   Proper fix would require full San Francisco playthrough.
*/
#define badger_flag(x)        (global_var(GVAR_SAN_FRAN_BADGER) == x)
#define set_badger_flag(x)    set_global_var(GVAR_SAN_FRAN_BADGER, x)
#define badger_dead           (badger_flag(BADGER_DEADCBT) or badger_flag(BADGER_DEADSHI))

//Using bit values just in case, but is really one state at a time
#define EL_SPOKEN        bit_1
#define EL_ASKED         bit_2
#define EL_REJECTED      bit_3
#define EL_ACCEPTED      bit_4 //Joined the Elronoligists
#define EL_ACBADGEROFFER bit_5
#define EL_ACBADGER      bit_6 //Elronoligits ask you to kill the badger
#define EL_ACBADGDEAD    bit_7 //You killed the Badger by accepting this thread

#define elron_flag_any        (global_var(GVAR_SAN_FRAN_ELRON))
#define elron_flag(x)         (global_var(GVAR_SAN_FRAN_ELRON) == x)
#define set_elron_flag(x)     set_global_var(GVAR_SAN_FRAN_ELRON, x)

//Using bit values just in case, but is really one state at a time
#define SP_ACCEPTED      1
#define SP_TALKWONG      2
#define SP_FOUND         3 //Found Chip's spleen
#define SP_UNPAID        4
#define SP_FUNGCHARGE    5 //Fung will fix the spleen and the player already payed
#define SP_FUNGFREE      6 //Fung will fix the spleen for free
#define SP_CHIPTOLD      7
#define SP_REINSERTED    8
#define SP_REJECTED      9
#define SP_LOST          10
#define SP_NOFUNG        11

#define spleen_flag_any       (global_var(GVAR_SAN_FRAN_SPLEEN))
#define spleen_flag(x)        (global_var(GVAR_SAN_FRAN_SPLEEN) == x)
#define set_spleen_flag(x)    set_global_var(GVAR_SAN_FRAN_SPLEEN, x)

#define start_spleen_time if (global_var(GVAR_SAN_FRAN_SPLEEN_TIME) == 0) then set_global_var(GVAR_SAN_FRAN_SPLEEN_TIME, game_time)
#define spleen_elapse     (game_time - global_var(GVAR_SAN_FRAN_SPLEEN_TIME))

//Using bit values just in case, but is really one state at a time
#define EL_WH_NOTHING     0
#define EL_WH_REJECTED    bit_1
#define EL_WH_ACCEPTED    bit_2
#define EL_WH_STEALSHI    bit_3
#define EL_WH_GIVEN       bit_4

#define elron_whirly_any       (global_var(GVAR_SAN_FRAN_ELRON_WHIRLY))
#define elron_whirly(x)        (global_var(GVAR_SAN_FRAN_ELRON_WHIRLY) == x)
#define set_elron_whirly(x)    set_global_var(GVAR_SAN_FRAN_ELRON_WHIRLY, x)

#define SH_WH_NOTHING     0
#define SH_WH_REJECTED    bit_1
#define SH_WH_ACCEPTED    bit_2
#define SH_WH_STEALELE    bit_3
#define SH_WH_GIVEN       bit_4

#define SHI_WANT_PLANS       (shi_whirly(SH_WH_ACCEPTED) or shi_whirly(SH_WH_STEALELE))

#define shi_whirly_any       (global_var(GVAR_SAN_FRAN_SHI_WHIRLY))
#define shi_whirly(x)        (global_var(GVAR_SAN_FRAN_SHI_WHIRLY) == x)
#define set_shi_whirly(x)    set_global_var(GVAR_SAN_FRAN_SHI_WHIRLY, x)

//Using bit values just in case, GVAR_SAN_FRAN_ARMOR
#define ARMOR_KNOWN          1
#define ARMOR_START          2 //Told you about the upgrade
#define ARMOR_GOTTENPAID     3 //Waiting for armor crocket to make the armor
#define ARMOR_GOTTEN         4 //You have gotten the upgrade
#define ARMOR_SOLDFUELELRON  5 //You sold the armor to get fuel to the elrons
#define ARMOR_SOLDFUELTANKER 6 //You sold the armor to get fuel to the tanker
#define ARMOR_SOLDMONEY      7 //You sold the armor for money.

#define armor_flag_any       (global_var(GVAR_SAN_FRAN_ARMOR))
#define armor_flag(x)        (global_var(GVAR_SAN_FRAN_ARMOR) == x)
#define set_armor_flag(x)    set_global_var(GVAR_SAN_FRAN_ARMOR, x)

//Dave flags GVAR_SAN_FRAN_DAVE
#define DAVE_LOVE        bit_1
#define DAVE_NOTALKLOVE  bit_2
#define DAVE_REJECTED    bit_3
#define DAVE_TOLD        bit_4
#define DAVE_TOLD2       bit_5

#define dave_flag_any   global_var(GVAR_SAN_FRAN_DAVE)
#define dave_flag(x)     (global_var(GVAR_SAN_FRAN_DAVE) == x)
#define set_dave_flag(x) set_global_var(GVAR_SAN_FRAN_DAVE, x)


//BOS flags
#define BOS_KNOW     1
#define BOS_REFUSE   2
#define BOS_ACCEPT   3
#define BOS_COMPLETE 4

#define set_bos_state(x)   set_global_var(GVAR_SAN_FRAN_BOS_QUEST, x)
#define bos_state(x)       (global_var(GVAR_SAN_FRAN_BOS_QUEST) == x)

//Hello Nasty

// Used for super computer
#define GUARD_PID PID_SHI_GUARD

//Generic flags
#define KNOW_DOC_HOLIDAY      global_var(GVAR_KNOW_DOC_HOLIDAY)

#ifndef MORESTRING
#define MORESTRING             (g_mstr(352))
#endif
#define ENDSTRING              (g_mstr(350))
#ifndef MOREOPTION
#define MOREOPTION(x)          NOption(MORESTRING, x, 0)
#endif
#define ENDOPTION              NOption(ENDSTRING, Node999, 0)
#define ENDHOSTILE             NOption(ENDSTRING, Node998, 0)

#define OBJ_VIS   0
#define OBJ_INVIS 1

#define WHIRLY_PLANS_PID      PID_VERTIBIRD_PLANS

#define DUDE_ADJUSTED         (global_var(GVAR_NCR_ELRON_ADJUST))
#define DUDE_LETTER           (dude_item(PID_ENLIGHTENED_ONE_LETTER))
#define GIMPED                (global_var(GVAR_GIMP_FLAG) == 1)

//Elronologists Guard macros
#define SET_GUARD_NOTIFY(attack_obj)                   \
    set_global_var(GVAR_SAN_FRAN_EG_NOTIFY, bit_ALL); \
    set_global_var(GVAR_SAN_FRAN_EG_A_OBJ,  attack_obj)

#define OBJ_NOTIFY_GUARD          (global_var(GVAR_SAN_FRAN_EG_NOTIFY))
#define BIT_NOTIFY_GUARD_OFF(x)   set_gvar_bit_off(GVAR_SAN_FRAN_EG_NOTIFY, x)
#define OBJ_ATTACK_OBJ            (global_var(GVAR_SAN_FRAN_EG_A_OBJ))

//Gun Merchant and Table timer defines
#define TIMER_USE_TABLE   5

//Used for emitters that control force fields
#define TIMER_SET_STATE_ON        1
#define TIMER_SET_STATE_DELAY     2
#define TIMER_SET_STATE_DESTROYED 3
#define TIMER_SET_STATE_FLICKER   4
#define TIMER_DO_FLICKER          5
#define TIMER_CHECK_POWER         6
#define TIMER_SET_STATE_OFF       7

#define EMITTER_SET_FIELD_ON(x)        if (x != -1) then add_timer_event(x, 0, TIMER_SET_STATE_ON)
#define EMITTER_SET_FIELD_DELAY(x)     if (x != -1) then add_timer_event(x, 0, TIMER_SET_STATE_DELAY)
#define EMITTER_SET_FIELD_DESTROYED(x) if (x != -1) then add_timer_event(x, 0, TIMER_SET_STATE_DESTROYED)
#define EMITTER_SET_FIELD_FLICKER(x)   if (x != -1) then add_timer_event(x, 0, TIMER_SET_STATE_FLICKER)
#define EMITTER_SET_FIELD_OFF(x)       if (x != -1) then add_timer_event(x, 0, TIMER_SET_STATE_OFF)

//Timer defines for brotherhood people
#define TIMER_SCREW_WITH_DOOR     10

#define SHOW_TANKER_FUEL_QST                               \
    if (global_var(GVAR_SAN_FRAN_FUEL_TANK_QST) == 0) then \
        set_global_var(GVAR_SAN_FRAN_FUEL_TANK_QST, 1)

#define SHOW_TANKER_NAVCOMP_QST                            \
    if (global_var(GVAR_SAN_FRAN_NAV_TANK_QST) == 0) then  \
        set_global_var(GVAR_SAN_FRAN_NAV_TANK_QST, 1)

#define SHOW_TANKER_FOB_QST                               \
    if (global_var(GVAR_SAN_FRAN_FOB_TANK_QST) == 0) then  \
        set_global_var(GVAR_SAN_FRAN_FOB_TANK_QST, 1)

#define SHOW_ALL_TANKER_QST            \
    SHOW_TANKER_FUEL_QST;              \
    SHOW_TANKER_NAVCOMP_QST

#define COMPLETE_TANKER_FUEL                        \
   set_tanker_flag(TANK_FUEL);                      \
   if (NAME != SCRIPT_FCDAVEH) then begin           \
      COMP_QUEST(REP_BONUS_SAN_FRAN_GAS, REP_HERO_SAN_FRAN_GAS, EXP_SAN_FRAN_GAS) \
   end                                              \
   set_global_var(GVAR_SAN_FRAN_FUEL_TANK_QST, 2)

#define COMPLETE_TANKER_NAVCOMP                     \
   set_tanker_flag(TANK_NAVCOMP);                   \
   COMP_QUEST(0, 0, EXP_TANKER_FIX_NAV)             \
   set_global_var(GVAR_SAN_FRAN_NAV_TANK_QST, 2)

#define COMPLETE_TANKER_FOB                              \
   set_tanker_flag(TANK_FOB);                            \
   if (global_var(GVAR_SAN_FRAN_FOB_TANK_QST) != 2) then begin \
      set_global_var(GVAR_SAN_FRAN_FOB_TANK_QST, 2);     \
      COMP_QUEST(0, 0, EXP_TANKER_FOB)                   \
   end


#define SHOW_ELRON_GAS_QUEST                       \
    set_san_fran_flag(SF_GAS_BEGUN);               \
    if (global_var(GVAR_SAN_FRAN_ELRON_GAS_QST) == 0) then \
        set_global_var(GVAR_SAN_FRAN_ELRON_GAS_QST, 1)

//it is possible ot have this be "unset" by dave but not sure if I should do anything about it.
#define COMPLETE_ELRON_GAS_QUEST                   \
    inc_general_rep(REP_BONUS_SAN_FRAN_FUEL_EMP);  \
    give_xp(EXP_ELRON_FUEL_ELRON_SHIP);            \
    inc_san_fran_rep(REP_HERO_SAN_FRAN_FUEL_EMP);  \
    set_san_fran_flag(SF_GAS_ELRONS);              \
    set_global_var(GVAR_SAN_FRAN_ELRON_GAS_QST, 2)

#define SHOW_BADGER_GFRIEND_QUEST                  \
    set_badger_flag(BADGER_FGFRIEND);              \
    if (global_var(GVAR_SAN_FRAN_BADGER_GFRIEND_QST) == 0) then \
        set_global_var(GVAR_SAN_FRAN_BADGER_GFRIEND_QST, 1)

#define COMPLETE_BADGER_GFRIEND_QUEST_DEAD              \
    inc_general_rep(REP_BONUS_SAN_FRAN_SAVE_GIRL_DEAD); \
    inc_san_fran_rep(REP_HERO_SAN_FRAN_SAVE_GIRL_DEAD); \
    set_global_var(GVAR_SAN_FRAN_BADGER_GFRIEND_QST, 2)

#define COMPLETE_BADGER_GFRIEND_QUEST_ALIVE               \
    inc_general_rep(REP_BONUS_SAN_FRAN_SAVE_GIRL_ALIVE);  \
    inc_san_fran_rep(REP_HERO_SAN_FRAN_SAVE_GIRL_ALIVE);  \
    give_xp(EXP_SAVE_GIRL_ALIVE);                         \
    set_global_var(GVAR_SAN_FRAN_BADGER_GFRIEND_QST, 2)

#define SHOW_LOPAN_KDRAGON_QUEST                         \
    if (global_var(GVAR_SAN_FRAN_LOPAN_KDRAGON_QST) == 0) then \
        set_global_var(GVAR_SAN_FRAN_LOPAN_KDRAGON_QST, 1)

#define COMPLETE_LOPAN_KDRAGON_QUEST     \
    COMP_QUEST(REP_BONUS_SAN_FRAN_KILL_DRAGON, REP_HERO_SAN_FRAN_KILL_DRAGON_LOPAN, EXP_LOPAN_CHALLENGE_MISSION) \
    set_global_var(GVAR_SAN_FRAN_LOPAN_KDRAGON_QST, 2)

#define SHOW_DRAGON_KLOPAN_QUEST                         \
    if (global_var(GVAR_SAN_FRAN_DRAGON_KLOPAN_QST) == 0) then \
         set_global_var(GVAR_SAN_FRAN_DRAGON_KLOPAN_QST, 1)

#define COMPLETE_DRAGON_KLOPAN_QUEST                      \
   inc_general_rep(REP_BONUS_SAN_FRAN_KILL_LOPAN);        \
   give_xp(EXP_LOPAN_CHALLENGE_MISSION);                  \
   inc_san_fran_rep(REP_HERO_SAN_FRAN_KILL_LOPAN_DRAGON); \
   set_global_var(GVAR_SAN_FRAN_DRAGON_KLOPAN_QST, 2)

#define SHOW_ARMOR_QUEST                 \
   if (global_var(GVAR_SAN_FRAN_ARMOR_QST) == 0) then \
      set_global_var(GVAR_SAN_FRAN_ARMOR_QST, 1)

#define COMPLETE_ARMOR_QUEST                   \
   COMP_QUEST(REP_HERO_SAN_FRAN_ARMOR, REP_BONUS_SAN_FRAN_ARMOR, EXP_ARMOR) \
   set_global_var(GVAR_SAN_FRAN_ARMOR_QST, 2)

#define SHOW_KILL_OZ9_QST           \
   if (global_var(GVAR_SAN_FRAN_KILL_OZ9_QST) == 0) then \
      set_global_var(GVAR_SAN_FRAN_KILL_OZ9_QST, 1)

#define COMPLETE_KILL_OZ9_QST       \
   if (global_var(GVAR_SAN_FRAN_KILL_OZ9_QST) != 2) then begin\
      inc_general_rep(REP_BONUS_SAN_FRAN_SHI_KILL_OZ9); \
      inc_san_fran_rep(REP_HERO_SAN_FRAN_KILL_OZ9);     \
      give_xp(EXP_SHI_KILL_OZ9);                        \
      set_global_var(GVAR_SAN_FRAN_KILL_OZ9_QST, 2);    \
   end

#define SHOW_KILL_EMP_QST    \
   if (global_var(GVAR_SAN_FRAN_KILL_EMP_QST) == 0) then \
      set_global_var(GVAR_SAN_FRAN_KILL_EMP_QST, 1)

#define COMPLETE_KILL_EMP_QST \
   if (global_var(GVAR_SAN_FRAN_KILL_EMP_QST) != 2) then begin \
      inc_general_rep(REP_BONUS_SAN_FRAN_ELRON_KILL_EMP); \
      inc_san_fran_rep(REP_HERO_SAN_FRAN_ELRON_KILL_EMP); \
      give_xp(EXP_ELRON_KILL_EMPEROR);                    \
      set_global_var(GVAR_SAN_FRAN_KILL_EMP_QST, 2);      \
   end

#define SET_WONG_EAT_TIME                                    \
   if (global_var(GVAR_SAN_FRAN_WONG_EAT_TIME) == 0) then    \
      set_global_var(GVAR_SAN_FRAN_WONG_EAT_TIME, game_time + ONE_GAME_DAY)

#define SHOW_STEAL_VERT_SHI                                     \
   if (global_var(GVAR_SAN_FRAN_VERTI_STEAL_SHI_QST) == 0) then \
      set_global_var(GVAR_SAN_FRAN_VERTI_STEAL_SHI_QST, 1)

#define COMPLETE_STEAL_VERTI_SHI                                \
   set_global_var(GVAR_SAN_FRAN_VERTI_STEAL_SHI_QST, 2)

#define SHOW_STEAL_VERTI_ELE                                    \
   if (global_var(GVAR_SAN_FRAN_VERTI_STEAL_ELE_QST) == 0) then \
      set_global_var(GVAR_SAN_FRAN_VERTI_STEAL_ELE_QST, 1)

#define COMPLETE_STEAL_VERTI_ELE                         \
   set_global_var(GVAR_SAN_FRAN_VERTI_STEAL_ELE_QST, 2)

#define SHOW_VERTI_SHI                                    \
   if (global_var(GVAR_SAN_FRAN_VERTI_SHI_QST) == 0) then \
      set_global_var(GVAR_SAN_FRAN_VERTI_SHI_QST, 1)

#define COMPLETE_VERTI_SHI                                \
   set_global_var(GVAR_SAN_FRAN_VERTI_SHI_QST, 2)

#define SHOW_VERTI_ELE       \
   if (global_var(GVAR_SAN_FRAN_VERTI_ELE_QST) == 0) then \
      set_global_var(GVAR_SAN_FRAN_VERTI_ELE_QST, 1)

#define COMPLETE_VERTI_ELE    \
   set_global_var(GVAR_SAN_FRAN_VERTI_ELE_QST, 2)

#define GET_WONG_EAT_TIME (global_var(GVAR_SAN_FRAN_WONG_EAT_TIME))

#define COMP_QUEST(grep, trep, exp)     \
   if (grep != 0) then begin            \
      inc_general_rep(grep);            \
   end                                  \
   if (trep != 0) then begin            \
      inc_san_fran_rep(trep);           \
   end                                  \
   if (exp != 0) then begin             \
      give_xp(exp);                     \
   end


#endif // SANFRAN_H
