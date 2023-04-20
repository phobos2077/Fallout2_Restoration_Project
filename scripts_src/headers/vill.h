/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef VILL_H
#define VILL_H

 // Map vars for Abbey entrance map

 // Comments

//MAP_GLOBAL_VARS:

//GLOBAL                                        NUMBER

// All Map Vars need to start w/ MVAR_

#define MVAR_Building_Time                        (0)
#define MVAR_Failed_Swindle                       (2)
#define MVAR_Stage_Message                        (3)

#define mole_rat_origin_info_bit                  bit_1
#define mole_rat_origin_amulet_bit                bit_2

#define mole_rat_origin_info                          gvar_bit(GVAR_VAULT_VILLAGE_FLAGS, mole_rat_origin_info_bit)
#define set_mole_rat_origin_info                      set_gvar_bit_on(GVAR_VAULT_VILLAGE_FLAGS, mole_rat_origin_info_bit)
#define mole_rat_origin_amulet                        gvar_bit(GVAR_VAULT_VILLAGE_FLAGS, mole_rat_origin_amulet_bit)
#define set_mole_rat_origin_amulet                    set_gvar_bit_on(GVAR_VAULT_VILLAGE_FLAGS, mole_rat_origin_amulet_bit)

#endif // VILL_H
