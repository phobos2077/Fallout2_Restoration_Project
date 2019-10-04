/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef RAIDERS_H
#define RAIDERS_H

// raiders kick ass header file
#define inc_raiders_counter                              inc_global_var(GVAR_RAIDERS_COUNT)
#define dec_raiders_counter                              if (global_var(GVAR_RAIDERS_COUNT) <= 5) then begin      \
                                                            if (raiders_dead == false) then begin                 \
                                                               set_raiders_dead;                                  \
                                                               dec_family_counter_amt(family_bishop, 20);         \
                                                               set_global_var( GVAR_RAIDERS_DEAD, 1 );            \
                                                            end                                                   \
                                                         end else                                                 \
                                                            dec_global_var(GVAR_RAIDERS_COUNT)
#define check_kill_raider                                if (raiders_dead) then destroy_object(self_obj)

#define check_set_raider_party_flags                     if (Marcus_In_Party) then if (obj_can_see_obj(self_obj, Marcus_Ptr)) then set_raiders_marcus;        \
                                                         if (Robobrain_In_Party) then if (obj_can_see_obj(self_obj, Robobrain_Ptr)) then set_raiders_robobrain;  \
                                                         if (Sulik_In_Party) then if (obj_can_see_obj(self_obj, Sulik_Ptr)) then set_raiders_bonenose

#define safe_tile                                        (0)

#define dude_has_all_three_dog_tags                      ((obj_is_carrying_obj_pid(dude_obj, PID_BLONDIE_DOG_TAG) > 0) and       \
                                                          (obj_is_carrying_obj_pid(dude_obj, PID_ANGEL_EYES_DOG_TAG) > 0) and    \
                                                          (obj_is_carrying_obj_pid(dude_obj, PID_TUCO_DOG_TAG) > 0))

// floater related
#define float_param                                      (1)
#define patrol_param                                     (2)
#define raider_add_timer_event(obj, sec, param)          rm_fixed_timer_event(obj, param);               \
                                                         add_timer_event(obj, game_ticks(sec), param)
#define raider_add_timer_event_rand(obj, x, y, param)    raider_add_timer_event(obj, random(x, y), param)

#endif // RAIDERS_H
