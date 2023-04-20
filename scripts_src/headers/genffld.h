/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef GENFFLD_H
#define GENFFLD_H

//Used for emitters that control force fields
#define TIMER_SET_STATE_ON        1
#define TIMER_SET_STATE_DELAY     2
#define TIMER_SET_STATE_DESTROYED 3
#define TIMER_SET_STATE_FLICKER   4
#define TIMER_DO_FLICKER          5
#define TIMER_CHECK_POWER         6
#define TIMER_CONTROL             7
#define TIMER_CLEAR_CONTROL       8

#define OBJ_VIS   0
#define OBJ_INVIS 1

#define F_ON        bit_1
#define F_DELAY     bit_2
#define F_DESTROYED bit_3
#define F_FLICKER   bit_4

#define FIELD_ON         (local_var(LVAR_Field_State) == F_ON)
#define FIELD_DELAY      (local_var(LVAR_Field_State) == F_DELAY)
#define FIELD_DESTROYED  (local_var(LVAR_Field_State) == F_DESTROYED)
#define FIELD_FLICKER    (local_var(LVAR_Field_State) == F_FLICKER)

#ifdef CONTROL_MAC
#define SET_FIELD_ON        CONTROL_MAC_SET(EMITTER_CONTROL_ON)
#define SET_FIELD_DELAY     CONTROL_MAC_SET(EMITTER_CONTROL_DELAY)
#define SET_FIELD_DESTROYED CONTROL_MAC_SET(EMITTER_CONTROL_DESTROYED)
#define SET_FIELD_FLICKER   CONTROL_MAC_SET(EMITTER_CONTROL_FLICKER)
#endif

#ifndef CONTROL_MAC
#define SET_FIELD_ON        add_timer_event(self_obj, 0, TIMER_SET_STATE_ON)
#define SET_FIELD_DELAY     add_timer_event(self_obj, 0, TIMER_SET_STATE_DELAY)
#define SET_FIELD_DESTROYED add_timer_event(self_obj, 0, TIMER_SET_STATE_DESTROYED)
#define SET_FIELD_FLICKER   add_timer_event(self_obj, 0, TIMER_SET_STATE_FLICKER)
#endif

//Emitter control flags for using a controling macro in a force field
#define EMITTER_CONTROL_ON         1
#define EMITTER_CONTROL_DELAY      2
#define EMITTER_CONTROL_DESTROYED  3
#define EMITTER_CONTROL_FLICKER    4

#endif // GENFFLD_H
