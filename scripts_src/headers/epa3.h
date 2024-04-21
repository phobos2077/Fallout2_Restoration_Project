/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef epa3_H
#define epa3_H


#define Do_Attacking_DOCTOR(x,y)                if (obj_is_visible_flag(self_obj)) then begin            \
                                                   if (obj_can_see_obj(self_obj, DOCTOR_obj)) then begin \
                                                      attack(DOCTOR_obj);                                \
                                                   end else begin                                        \
                                                      Follow_Dude(x,y)                                   \
                                                   end                                                   \
                                                end

#endif // MODOC_H
