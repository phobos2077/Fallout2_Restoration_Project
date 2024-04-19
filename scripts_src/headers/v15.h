/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef V15_H
#define V15_H

/* -----------------6/3/98 8:21PM--------------------
 This is the generic section for all vault 15 crap.
 --------------------------------------------------*/

#define lvar(x)             (local_var(x))
#define slvar(x, y)         set_local_var(x, y)

#define gvar(x)             (global_var(x))

#define orlvar(x, y)        slvar(x, lvar(x) bwor y)
#define andlvar(x, y)       (local_var(x) bwand y)
#define xorlvar(x, y)       slvar(x, lvar(x) bwxor y)

#define mvar(x)             map_var(x)
#define smvar(x, y)         set_map_var(x, y)

#define ormvar(x, y)        smvar(x, (mvar(x) bwor y))
#define andmvar(x, y)       (mvar(x) bwand y)
#define xormvar(x, y)       smvar(x, (mvar(x) bwxor y))

#define andV15Status(x) (global_var(GVAR_V15_SEED_STATUS) bwand x)
#define orV15Status(x)  set_global_var(GVAR_V15_SEED_STATUS, global_var(GVAR_V15_SEED_STATUS) bwor x)
#define xorV15Status(x) set_global_var(GVAR_V15_SEED_STATUS, global_var(GVAR_V15_SEED_STATUS) bwxor x)

#define OBJ_VIS   0
#define OBJ_INVIS 1

#ifndef MORESTRING
#define MORESTRING             (g_mstr(352))
#endif
#define ENDSTRING              (g_mstr(350))

#ifndef MOREOPTION
#define MOREOPTION(x)          NOption(MORESTRING, x, 0)
#endif
#define ENDOPTION              NOption(ENDSTRING, Node999, 0)
#define ENDHOSTILE             NOption(ENDSTRING, Node998, 0)

#define T4HRm(w, x, y, z) (w bwor x bwor y bwor z)
#define T8HRm(s, t, u, v, w, x, y, z) T4HRm(s, t, u, v) bwor T4HRm(w, x, y, z)
#define T16HRm(k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z) T8HRm(k, l, m, n, o, p, q, r) bwor T8HRm(s, t, u, v, w, x, y, z)

#define objhas(x, y) obj_carrying_pid_obj(x, y)


/**************************************************************************
    V15Seed Statuses --> general generic flags
 **************************************************************************/
#define V15_SPY       bit_1
#define V15_LOOK_GIRL bit_2  //Aka "Not nothing" in the script design doc, also is ACCEPT in the rebecca dialog
#define V15_TRUST     bit_3  //Set when you complete the girl quest
#define V15_KNOWS     bit_4  //Player knows that the daughter is missing.
#define V15_FOUND     bit_5  //Player has found the girl
#define V15_REFUSE    bit_6  //Refuse in the rebecca dialog
#define V15_GIRL_DEAD bit_7  //Crissy got killed
#define V15_RESCUED   bit_8  //Flag used for me to tell when the player has rescued her
#define V15_DOORS_UNLOCKED   bit_9 //Flag to let me know to unlock the doors.
#define V15_PHIL_LET_GO      bit_10
#define V15_KILLED_SQUATTERS bit_11 //Set if you kill a slave or squatter in the area
#define V15_WANT_DEAL        bit_12
#define V15_PHIL_HOSTILE     bit_13

#define set_v15_status(x)  set_gvar_bit_on(GVAR_V15_SEED_STATUS, x)
#define v15_status(x)      (gvar_bit(GVAR_V15_SEED_STATUS, x))

/* -----------------6/3/98 8:46PM--------------------
Phil stuff
 --------------------------------------------------*/
#define PHIL_KEY_PID    PID_VAULT_13_SHACK_KEY
#define PHIL_CHECK_TILE 17078
#define CELL_DOOR_TILE  18070

/* -----------------6/4/98 2:32PM--------------------
Dalia stuff for right now.
 --------------------------------------------------*/
#define DALIA_DEAD         bit_1
#define DALIA_ON_15        bit_2
#define DALIA_KNOWN        bit_3
#define DALIA_GUARD        bit_4

#define dalia_state(x)     (global_var(GVAR_V13_V15_DALIA_STATE) bwand x)
#define set_dalia_state(x) set_global_var(GVAR_V13_V15_DALIA_STATE, global_var(GVAR_V13_V15_DALIA_STATE) bwor x)

/* -----------------6/4/98 4:02PM--------------------
John stuff
 --------------------------------------------------*/
#define JOHN_HM_TILE 21919

/* -----------------6/5/98 4:01PM--------------------
Rebecca Stuff
 --------------------------------------------------*/
#define REBECCA_TENT_POS 20493
#define DUDE_TENT_POS    20495
#define TENT_TILE_POS    20493

/* -----------------6/8/98 12:37PM-------------------
Sara stuff
 --------------------------------------------------*/
#define SARA_TENT_POS    18902

/* -----------------6/8/98 1:37PM--------------------
Zeke stuff
 --------------------------------------------------*/
#define KEY_CARD_PID PID_V15_KEYCARD

/* -----------------6/8/98 6:09PM--------------------
Crissy stuff
 --------------------------------------------------*/
#define CRISSY_EXIT_TILE 19115
#define CRISSY_HOME_TILE 20893

/* -----------------6/22/98 1:59PM-------------------
Phil and Karla define
 --------------------------------------------------*/
#define GUARDS_PER_CHECK 4
#define TIMER_UNLOCK     3


/* -----------------6/18/98 12:58PM------------------
Generic Khan Guard stuff
 --------------------------------------------------*/
#define KHAN_GUARD_PID1 PID_BOUNTY_MALE_7_12
#define KHAN_GUARD_PID2 PID_BOUNTY_FEMALE_7_12

/* -----------------6/23/98 2:05PM-------------------
Computer holodisk info
 --------------------------------------------------*/
#define SPY_HOLO_PID PID_SPY_HOLO

/* -----------------6/23/98 5:09PM-------------------
Force field information
 --------------------------------------------------*/
#define FIELD_ON        bit_1
#define FIELD_OFF       bit_2
#define FIELD_DELAY     bit_3
#define FIELD_DESTROYED bit_4
#define FIELD_FLICKER   bit_5

#define FIELD_DELAY_COUNT   15

#define FIELD_TIMER_CHECK_STATE 1
#define FIELD_TIMER_DELAY       2
#define FIELD_TIMER_DESTROY     3
#define FIELD_TIMER_FLICKER     4

///Functions
procedure getTimeBit begin
   variable time := 0;

   time := game_time_hour;
   if (time >= 100 and time <= 159) then return bit_1;
   if (time >= 200 and time <= 259) then return bit_2;
   if (time >= 300 and time <= 359) then return bit_3;
   if (time >= 400 and time <= 459) then return bit_4;
   if (time >= 500 and time <= 559) then return bit_5;
   if (time >= 600 and time <= 659) then return bit_6;
   if (time >= 700 and time <= 759) then return bit_7;
   if (time >= 800 and time <= 859) then return bit_8;
   if (time >= 900 and time <= 959) then return bit_9;
   if (time >= 1000 and time <= 1059) then return bit_10;
   if (time >= 1100 and time <= 1159) then return bit_11;
   if (time >= 1200 and time <= 1259) then return bit_12;
   if (time >= 1300 and time <= 1359) then return bit_13;
   if (time >= 1400 and time <= 1459) then return bit_14;
   if (time >= 1500 and time <= 1559) then return bit_15;
   if (time >= 1600 and time <= 1659) then return bit_16;
   if (time >= 1700 and time <= 1759) then return bit_17;
   if (time >= 1800 and time <= 1859) then return bit_18;
   if (time >= 1900 and time <= 1959) then return bit_19;
   if (time >= 2000 and time <= 2059) then return bit_20;
   if (time >= 2100 and time <= 2159) then return bit_21;
   if (time >= 2200 and time <= 2259) then return bit_22;
   if (time >= 2300 and time <= 2359) then return bit_23;
   if (time >= 2400 and time <= 2459) then return bit_24;
end

// Used for warping to the level where NCR helps out
#define CHECK_LEVEL \
    if not is_loading_game and (elevation(self_obj) != elevation(dude_obj)) then \
        move_to(self_obj, self_tile, elevation(dude_obj));

#define CHECK_SQUATTERS_RUN                                    \
    if (combat_is_initialized) then begin                      \
       critter_set_flee_state(self_obj, 1);                    \
    end

#endif // V15_H
