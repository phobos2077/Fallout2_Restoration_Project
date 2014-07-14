/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef SPECENC_H
#define SPECENC_H

//Cowbomb encounter defines
#define NUM_COWS     6
#define COW_PID      PID_BRAHMIN
#define COW_SID      SCRIPT_ECCOWBMB
#define LOAD_TILE    20301
#define CHUNCK_COUNT 40

//Cowbmb defines
#define COW_BLOW_DAMAGE 150
#define COW_BLOW_DISTANCE 2

//Arthur and the Holy hand grenade quest
#define TIMER_SPEAK      1
#define TIMER_MOVE_POS_A 2
#define TIMER_MOVE_EXIT  3

#define ARTHUR_TILE_ONE       19713
#define ARTHUR_TILE_ONE_A     20307
#define ARTHUR_TILE_ONE_EXIT  21494

#define ARTHUR_ENCOUNTER_ONE (not and_spec_flag(ENC_ARTHUR_TWO))
#define ARTHUR_ENCOUNTER_TWO (and_spec_flag(ENC_ARTHUR_TWO))

#define BIT_LEAVE        bit_1
#define ARTHUR_IN_POS    bit_3
#define ROBIN_IN_POS     bit_4
#define GALAHAD_IN_POS   bit_5
#define BEDEMIR_IN_POS   bit_6
#define LAUNCELOT_IN_POS bit_7

#define ALL_LEAVE_BIT    bit_8

#define ALL_IN_POS      (ARTHUR_IN_POS bwor ROBIN_IN_POS bwor GALAHAD_IN_POS bwor BEDEMIR_IN_POS bwor LAUNCELOT_IN_POS)

//Big head stuff
#define STANDTILE 22318

//Global var tracking

#define ENC_ARTHUR_ONE bit_1
#define ENC_ARTHUR_TWO bit_2

#define set_spec_flag(x)   set_gvar_bit_on(GVAR_SPECIAL_ENCOUNTER_FLAGS, x)
#define unset_spec_flag(x) set_gvar_bit_off(GVAR_SPECIAL_ENCOUNTER_FLAGS, x)
#define and_spec_flag(x)   gvar_bit(GVAR_SPECIAL_ENCOUNTER_FLAGS, x)

#define ENDSTRING              (g_mstr(350))
#define ENDOPTION              NOption(ENDSTRING, Node999, 0)

#define lang_filter_on     language_filter_is_on

#define HOMESTEAD_NONE        bit_1
#define HOMESTEAD_FAIL        bit_2
#define HOMESTEAD_SAVED       bit_3
#define HOMESTEAD_REWARDED    bit_4

#define set_rnd_enc_flag(x)  set_gvar_bit_on(GVAR_RND_ENCOUNTER_FLAGS, x)
#define unset_rnd_flag(x)    set_gvar_bit_off(GVAR_RND_ENCOUNTER_FLAGS, x)
#define rnd_enc_flag(x)      gvar_bit(GVAR_RND_ENCOUNTER_FLAGS, x)

#endif // SPECENC_H
