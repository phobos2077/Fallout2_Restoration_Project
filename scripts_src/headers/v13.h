/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef V13_H
#define V13_H

/* -----------------5/25/98 4:46PM-------------------
    Header file for generic data in vault 13
 --------------------------------------------------*/

/* -----------------5/25/98 4:47PM-------------------
Generic Section
 --------------------------------------------------*/
//Macros
#define OBJ_VIS   0
#define OBJ_INVIS 1

#define lvar(x)                local_var(x)
#define slvar(x, y)            set_local_var(x, y)

#define bwandlvar(x, y)        (local_var(x) bwand y)
#define bworlvar(x, y)         set_local_var(x, local_var(x) bwor y)
#define bwxorlvar(x, y)        set_local_var(x, local_var(x) bwxor y)

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

#define checkMattAttack                                                       \
    if (i_matt_obj != -1) then begin                                          \
        if (obj_can_see_obj(self_obj, i_matt_obj)) then begin                 \
            if (elevation(i_matt_obj) == 0 and elevation(self_obj) == 0) then \
                attack(i_matt_obj);                                           \
        end                                                                   \
    end

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
   if (time >= 0 and time <= 100) then return bit_24;
end

/* -----------------5/25/98 4:47PM-------------------
Ariel Section
 --------------------------------------------------*/
    /* Walking between levels may get too complicated. I may just have her stay on the 3rd lvl */

#define ARIEL_TIME_ROOM     T16HRm(bit_16, bit_17, bit_18, bit_19, bit_20, bit_21, bit_22, bit_23, bit_24, bit_1, bit_2, bit_3, bit_4, bit_5, bit_6, bit_7)
#define ARIEL_TIME_COMMON   T4HRm(bit_8, bit_9, bit_10, bit_11)
#define ARIEL_TIME_LIBRARY  T4HRm(bit_12, bit_13, bit_14, bit_15)
#define ARIEL_ROOM_POS      17498
#define ARIEL_ROOM_ELE      2
#define ARIEL_COMMON_POS    18299
#define ARIEL_COMMON_ELE    3
#define ARIEL_LIB_POS       18536
#define ARIEL_LIB_ELE       3
#define ARIEL_ELE_2_POS     22104
#define ARIEL_ELE_3_POS     16911

/* -----------------5/25/98 4:47PM-------------------
Gruthar Section
 --------------------------------------------------*/
#define TIMER_DUDE_SEE      1


/* -----------------5/26/98 11:19AM------------------
Computer Terminal section
    Used map var MVAR_Computer_Status
 --------------------------------------------------*/
#define COMP_FIXED     1
#define COMP_DUMB_PART 2
#define COMP_PART      3

#define VOICE_CHIP_PID PID_COMPUTER_VOICE_MODULE

/* -----------------5/26/98 2:29PM-------------------
Dalia Vars, note she is on VAULT15 and VAULT13 Maps
    Using global var GVAR_V13_V15_DALIA_STATE
 --------------------------------------------------*/
#define DALIA_DEAD         1
#define DALIA_ON_15        2
#define DALIA_KNOWN        4

#define dalia_state(x)     (global_var(GVAR_V13_V15_DALIA_STATE) bwand x)
#define set_dalia_state(x) set_global_var(GVAR_V13_V15_DALIA_STATE, global_var(GVAR_V13_V15_DALIA_STATE) bwor x)

/* -----------------5/27/98 11:04AM------------------
Gordon Stuff

 --------------------------------------------------*/
#define GORDON_WARP_PLAYER_POS 22504

/* -----------------4/27/98 2:14PM-------------------
Jimmy Stuff
 --------------------------------------------------*/
#define JIM_TILE1 23265
#define JIM_TILE2 23059
#define JIM_TILE3 21058
#define JIM_TILE4 23258

/* -----------------5/2/98 10:46AM-------------------
Matt Stuff
 --------------------------------------------------*/
#define MATT_ESCAPE_POS 14305
#define DUDE_ESCAPE_POS 14303
#define MATT_RUN_POS    17094

/* -----------------6/1/98 2:45PM--------------------
Gruthar Stuff
 --------------------------------------------------*/
#define USEDUDENAME(x, x1) \
mstr(x) + " " + dude_name + mstr(x1)

#define SETDSTATUS(x) \
set_global_var(GVAR_GRUTHAR_DSTATUS, x)
#define GETDSTATUS \
global_var(GVAR_GRUTHAR_DSTATUS)

#define VOICEREPAIROBJ PID_COMPUTER_VOICE_MODULE
#define GECKOBJ        PID_GECK

#define GDPART      1
#define GDLOOK      2
#define GDFIXED     3
#define GDIDIOT     4
#define GDREFUSE    5
#define GDACCEPT    6
#define GDCOMPLETE  7
#define GDTRUEIDIOT 8

/* -----------------7/29/98 10:35AM------------------
Goris Stuff
 --------------------------------------------------*/
#define GORISSTANDTILE 20542
#define GORISELEVATION 2

/* -----------------8/12/98 5:04PM-------------------
Generic state stuff
 --------------------------------------------------*/
#define FLG_SABOTAGE             bit_1
#define FLG_GRUTHAR_DEAD         bit_2
#define FLG_TALKED_ABOUT_GORIS   bit_3
#define FLG_V13_ENEMY            bit_4

#define set_v13_status(x)   set_gvar_bit_on(GVAR_V13_STATUS_FLAGS, x)
#define unset_v13_status(x) set_gvar_bit_off(GVAR_V13_STATUS_FLAGS, x)
#define v13_status(x)       (gvar_bit(GVAR_V13_STATUS_FLAGS, x))

#define TALKED_ABOUT_GORIS      (v13_status(FLG_TALKED_ABOUT_GORIS))
#define SET_TALKED_ABOUT_GORIS  set_v13_status(FLG_TALKED_ABOUT_GORIS)
#define V13_ENEMY               (v13_status(FLG_V13_ENEMY))
#define SET_V13_ENEMY           set_v13_status(FLG_V13_ENEMY)


#define DO_KILL_SELF    \
   destroy_obj_inven(self_obj);     \
   kill_critter(self_obj, ANIM_fall_front_blood_sf);

#endif // V13_H
