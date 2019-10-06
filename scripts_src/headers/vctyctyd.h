/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef VCTYCTYD_H
#define VCTYCTYD_H

 // Map vars for Arroyo Village Map

 // Comments

//MAP_GLOBAL_VARS:

//GLOBAL                                        NUMBER

// All Map Vars need to start w/ MVAR_

#define MVAR_Remove_Skeeve                      (0)
#define MVAR_Stealing_From_Harry                (2)
#define MVAR_Guard_Alert                        (3)
#define MVAR_Auto_Doc_Fixed                     (4)
#define MVAR_Wrench                             (5)
#define MVAR_Made_Payoff                        (6)
#define MVAR_Saw_Raiders                        (7)

#define set_watcher(the_var)                 if (obj_is_visible_flag(self_obj)) then begin                                                              \
                                                if (the_var == 0) then begin                                                                            \
                                                   the_var := self_obj;                                                                                 \
                                                end else if ((obj_can_see_obj(the_var, dude_obj) == false) or (is_critter_dead(the_var))) then begin    \
                                                   the_var := self_obj;                                                                                 \
                                                end                                                                                                     \
                                             end

#endif // VCTYCTYD_H
