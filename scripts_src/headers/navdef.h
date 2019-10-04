/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef NAVDEF_H
#define NAVDEF_H

//Define's for Navarro

#define Tribe_Shi_Bos_Elron               ( Nav_Tribe or Nav_Shi or Nav_Bos or Nav_Elron )
#define Shi_Bos_Elron                     ( Nav_Shi or Nav_Bos or Nav_Elron )
#define Nav_Tribe                         ( tribe_kidnapped )
#define Nav_Shi                           ( shi_whirly( SH_WH_ACCEPTED ) )
#define Nav_Bos                           ( san_fran_flag(SF_BROTHER_PLANS) )
#define Nav_Elron                         ( elron_whirly( EL_WH_ACCEPTED ) )
#define Been_To_Base                      (town_known(AREA_MILITARY_BASE) == MARK_STATE_VISITED)
#define not_alone                         ( (party_member_count(DONT_LIST_HIDDEN_MEMBERS) > 2) or \
                                            ( (party_member_count(DONT_LIST_HIDDEN_MEMBERS) > 1) and \
                                              (K9_Ptr == 0) ) )
#define Do_I_Belong                       worn:=0;                           \
                                          if (critter_inven_obj(dude_obj,INVEN_TYPE_WORN) != 0) then \
                                             temp := obj_pid(critter_inven_obj(dude_obj,INVEN_TYPE_WORN)); \
                                          if ( temp == PID_POWERED_ARMOR) then  \
                                             worn:=temp; \
                                          if ( temp == PID_HARDENED_POWER_ARMOR) then  \
                                             worn:=temp; \
                                          if ( temp == PID_ADVANCED_POWER_ARMOR) then  \
                                             worn:=temp; \
                                          if ( temp == PID_ADVANCED_POWER_ARMOR_MK2) then  \
                                             worn:=temp;

#define I_See_You                         if (obj_can_see_obj(self_obj,dude_obj)) then begin \
                                             if (local_var(LVAR_Hostile) == 2) then begin    \
                                                set_local_var(LVAR_Hostile,1);               \
                                                attack(dude_obj);                            \
                                             end                                             \
                                             else if (global_var(GVAR_NAVARRO_BASE_ALERT) > 0) then begin  \
                                                if (said_intruder == 0) then                               \
                                                   call Node080;                                           \
                                                set_local_var(LVAR_Hostile,1);                             \
                                                attack(dude_obj);                                          \
                                             end                                                           \
                                          end \
                                          else if ( (i_am_a_warrior == 1) and \
                                                    (global_var(GVAR_NAVARRO_BASE_ALERT) > 0 ) and \
                                                    (elevation(self_obj) == elevation(dude_obj)) and \
                                                    (tile_distance(tile_num(self_obj), tile_num(dude_obj)) > 10) ) then begin \
                                             animate_run_to_tile(tile_num_in_direction(tile_num(dude_obj),random(0,5),random(3,7))); \
                                          end

#define Converge_On_Player                else if ( (global_var(GVAR_NAVARRO_BASE_ALERT) > 0 ) and \
                                                    (elevation(self_obj) == elevation(dude_obj)) and \
                                                    (tile_distance(tile_num(self_obj), tile_num(dude_obj)) > 10) ) then begin \
                                             animate_run_to_tile(tile_num_in_direction(tile_num(dude_obj),random(0,5),random(3,7))); \
                                          end

#endif // NAVDEF_H
