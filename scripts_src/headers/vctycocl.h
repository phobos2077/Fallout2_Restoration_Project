/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef VCTYCOCL_H
#define VCTYCOCL_H

 // Map vars for Vault City Council Area

 // Comments

//MAP_GLOBAL_VARS:

//GLOBAL                                        NUMBER

// All Map Vars need to start w/ MVAR_

#define MVAR_Bribe                      (0)

#define set_watcher(the_var)                 if (obj_is_visible_flag(self_obj)) then begin                                                              \
                                                if (the_var == 0) then begin                                                                            \
                                                   the_var := self_obj;                                                                                 \
                                                 end else if ((obj_can_see_obj(the_var, dude_obj) == false) or (is_critter_dead(the_var))) then begin   \
                                                   the_var := self_obj;                                                                                 \
                                                end                                                                                                     \
                                             end
#endif // VCTYCOCL_H
