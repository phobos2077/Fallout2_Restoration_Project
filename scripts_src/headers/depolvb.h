/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef DEPOLVB_H
#define DEPOLVB_H

// Header file for Map vars for Depolvb

#define MVAR_Made_Dobbs                 (131)
#define MVAR_Eyeball_Used_4             (132)
#define MVAR_Security_Level_4           (133)
#define MVAR_Field_4a                   (134)
#define MVAR_Field_4b                   (135)
#define MVAR_Field_4c                   (136)

#define MVAR_Level4_Tough_Bots      (210)
#define MVAR_Level4_Robobrain       (211)
#define MVAR_Level4_Eyeball         (212)
#define MVAR_Last_Spot_3            (213)

#define BOT_TILE_E4T0               (21930)
#define BOT_TILE_E4T1               (21926)
#define BOT_TILE_E4T2               (21922)
#define BOT_TILE_E4T3               (20688)
#define BOT_TILE_E4T4               (20684)
#define BOT_TILE_E4T5               (20680)
#define BOT_TILE_E4T6               (20676)
#define BOT_TILE_E4T7               (17510)
#define BOT_TILE_E4T8               (17269)



#define Next_Hex_4                      if (map_var(MVAR_Last_Spot_3) == 0) then                    \
                                            set_map_var(MVAR_Last_Spot_3,BOT_TILE_E4T0);            \
                                        else if (map_var(MVAR_Last_Spot_3) == BOT_TILE_E4T0) then   \
                                            set_map_var(MVAR_Last_Spot_3,BOT_TILE_E4T1);            \
                                        else if (map_var(MVAR_Last_Spot_3) == BOT_TILE_E4T1) then   \
                                            set_map_var(MVAR_Last_Spot_3,BOT_TILE_E4T2);            \
                                        else if (map_var(MVAR_Last_Spot_3) == BOT_TILE_E4T2) then   \
                                            set_map_var(MVAR_Last_Spot_3,BOT_TILE_E4T3);            \
                                        else if (map_var(MVAR_Last_Spot_3) == BOT_TILE_E4T3) then   \
                                            set_map_var(MVAR_Last_Spot_3,BOT_TILE_E4T4);            \
                                        else if (map_var(MVAR_Last_Spot_3) == BOT_TILE_E4T4) then   \
                                            set_map_var(MVAR_Last_Spot_3,BOT_TILE_E4T5);            \
                                        else if (map_var(MVAR_Last_Spot_3) == BOT_TILE_E4T5) then   \
                                        	set_map_var(MVAR_Last_Spot_3,BOT_TILE_E4T6);            \
                                        else if (map_var(MVAR_Last_Spot_3) == BOT_TILE_E4T6) then   \
                                        	set_map_var(MVAR_Last_Spot_3,BOT_TILE_E4T7);            \
                                        else if (map_var(MVAR_Last_Spot_3) == BOT_TILE_E4T7) then   \
                                        	set_map_var(MVAR_Last_Spot_3,BOT_TILE_E4T8);            \
                                        else if (map_var(MVAR_Last_Spot_3) == BOT_TILE_E4T8) then   \
                                            set_map_var(MVAR_Last_Spot_3,BOT_TILE_E4T0)

#endif // DEPOLVB_H
