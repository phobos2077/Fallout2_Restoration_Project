/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef VCTYDWTN_H
#define VCTYDWTN_H

 // Map vars for Arroyo Village Map

 // Comments

//MAP_GLOBAL_VARS:

//GLOBAL                                        NUMBER

// All Map Vars need to start w/ MVAR_

#define MVAR_Picking_Front_Gate                 (0)
#define MVAR_Stealing_From_Darrow               (1)
#define MVAR_Stealing_From_Farrell              (2)
#define MVAR_Guard_Alert                        (3)
#define MVAR_Skeeve_Dead                        (4)
#define MVAR_Vault_Guard_Count                  (5)
#define MVAR_Gate_Guard_Count                   (6)
#define MVAR_Barkus_Dead                        (7)
#define MVAR_Player_As_Slave                    (8)

#define Front_Gate_None                         (0)
#define Front_Gate_Used                         (1)
#define Front_Gate_Lockpick                     (2)
#define Front_Gate_Explode                      (3)

variable DayPass_KickOutObj                     := 0;
variable DayPass_KickOutCount                   := 0;
variable CitizenPapers_KickOutObj               := 0;
variable CitizenPapers_KickOutCount             := 0;
variable KickOutTemp                            := 0;

// Generic function for kicking the player out of
// Vault City.  Sets flags and tried to get rid of
// day passes/citizenship papers.
// ***NOTE*** - This function only removes the items from the PC's
// inventory, not from the companion inventories.

#define kick_out_of_vault_city      set_global_var(GVAR_VAULT_CITIZEN,CITIZEN_KICKED_OUT);                                                     \
                                    set_global_var(GVAR_VAULT_CITIZENSHIP,0);                                                                  \
                                    set_global_var(GVAR_DAY_PASS_SHOWN, 0);                                                                    \
                                    DayPass_KickOutCount := obj_is_carrying_obj_pid(dude_obj, PID_DAY_PASS);                                   \
                                    if (DayPass_KickOutCount > 0) then begin                                                                   \
                                       DayPass_KickOutObj := obj_carrying_pid_obj(dude_obj, PID_DAY_PASS);                                     \
                                       KickOutTemp := rm_mult_objs_from_inven(dude_obj, DayPass_KickOutObj, DayPass_KickOutCount );            \
                                    end                                                                                                        \
                                    CitizenPapers_KickOutCount := obj_is_carrying_obj_pid(dude_obj, PID_FAKE_CITIZENSHIP);                     \
                                    if (CitizenPapers_KickOutCount > 0) then begin                                                             \
                                       CitizenPapers_KickOutObj := obj_carrying_pid_obj(dude_obj, PID_FAKE_CITIZENSHIP);                       \
                                       KickOutTemp := rm_mult_objs_from_inven(dude_obj, CitizenPapers_KickOutObj, CitizenPapers_KickOutCount); \
                                    end                                                                                                        \
                                    set_global_var(GVAR_TOWN_REP_VAULT_CITY, (global_var(GVAR_TOWN_REP_VAULT_CITY) + REP_TOWN_KICKED_OUT));    \
                                    load_map(MAPSTR_VCTYCTYD, 0);                                                                              \

#define set_watcher(the_var)                 if (obj_is_visible_flag(self_obj)) then begin                                                              \
                                                if (the_var == 0) then begin                                                                            \
                                                   the_var := self_obj;                                                                                 \
                                                end else if ((obj_can_see_obj(the_var, dude_obj) == false) or (is_critter_dead(the_var))) then begin    \
                                                   the_var := self_obj;                                                                                 \
                                                end                                                                                                     \
                                             end

#endif // VCTYDWTN_H
