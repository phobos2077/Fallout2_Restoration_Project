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

#define MVAR_Free_Bots              (137)
#define MVAR_Repair_Request1        (138)
#define MVAR_Repair_Request2        (139)
#define MVAR_Repair_Request3        (140)
#define MVAR_Repair_Request4        (141)
#define MVAR_Repair_Request5        (142)
#define MVAR_Repair_Request6        (143)
#define MVAR_Repair_Request7        (144)
#define MVAR_Repair_Request8        (145)
#define MVAR_Repair_Request9        (146)
#define MVAR_Repair_Request10       (147)
#define MVAR_Repair_Request11       (148)
#define MVAR_Repair_Request12       (149)

#define MVAR_Elevation_Request1     (150)
#define MVAR_Elevation_Request2     (151)
#define MVAR_Elevation_Request3     (152)
#define MVAR_Elevation_Request4     (153)
#define MVAR_Elevation_Request5     (154)
#define MVAR_Elevation_Request6     (155)
#define MVAR_Elevation_Request7     (156)
#define MVAR_Elevation_Request8     (157)
#define MVAR_Elevation_Request9     (158)
#define MVAR_Elevation_Request10    (159)
#define MVAR_Elevation_Request11    (160)
#define MVAR_Elevation_Request12    (161)

#define MVAR_Tile_Request1          (162)
#define MVAR_Tile_Request2          (163)
#define MVAR_Tile_Request3          (164)
#define MVAR_Tile_Request4          (165)
#define MVAR_Tile_Request5          (166)
#define MVAR_Tile_Request6          (167)
#define MVAR_Tile_Request7          (168)
#define MVAR_Tile_Request8          (169)
#define MVAR_Tile_Request9          (170)
#define MVAR_Tile_Request10         (171)
#define MVAR_Tile_Request11         (172)
#define MVAR_Tile_Request12         (173)

#define MVAR_Pid_Request1           (174)
#define MVAR_Pid_Request2           (175)
#define MVAR_Pid_Request3           (176)
#define MVAR_Pid_Request4           (177)
#define MVAR_Pid_Request5           (178)
#define MVAR_Pid_Request6           (179)
#define MVAR_Pid_Request7           (180)
#define MVAR_Pid_Request8           (181)
#define MVAR_Pid_Request9           (182)
#define MVAR_Pid_Request10          (183)
#define MVAR_Pid_Request11          (184)
#define MVAR_Pid_Request12          (185)

#define MVAR_Ammo_Request_1a        (186)
#define MVAR_Ammo_Request_1b        (187)
#define MVAR_Ammo_Request_2a        (188)
#define MVAR_Ammo_Request_2b        (189)
#define MVAR_Ammo_Request_3a        (190)
#define MVAR_Ammo_Request_3b        (191)
#define MVAR_Ammo_Request_4a        (192)
#define MVAR_Ammo_Request_4b        (193)
#define MVAR_Ammo_Request_5a        (194)
#define MVAR_Ammo_Request_5b        (195)
#define MVAR_Ammo_Request_6a        (196)
#define MVAR_Ammo_Request_6b        (197)
#define MVAR_Ammo_Request_7a        (198)
#define MVAR_Ammo_Request_7b        (199)
#define MVAR_Ammo_Request_8a        (200)
#define MVAR_Ammo_Request_8b        (201)
#define MVAR_Ammo_Request_9a        (202)
#define MVAR_Ammo_Request_9b        (203)
#define MVAR_Ammo_Request_10a       (204)
#define MVAR_Ammo_Request_10b       (205)
#define MVAR_Ammo_Request_11a       (206)
#define MVAR_Ammo_Request_11b       (207)
#define MVAR_Ammo_Request_12a       (208)
#define MVAR_Ammo_Request_12b       (209)
#define MVAR_Level4_Tough_Bots      (210)
#define MVAR_Level4_Robobrain       (211)
#define MVAR_Level4_Eyeball         (212)
#define MVAR_Last_Spot_3            (213)

//#define MVAR_Made_Dobbs                 (0)
//#define MVAR_Eyeball_Used_4             (1)
//#define MVAR_Security_Level_4           (2)
//#define MVAR_Field_4a                   (3)
//#define MVAR_Field_4b                   (4)
//#define MVAR_Field_4c                   (5)

#define FIELD_ENABLED               (0)
#define FIELD_DISABLED              (1)
#define FIELD_DAMAGED               (2)
#define FIELD_DESTROYED             (3)

#define REPAIR_NONE					(0)

#define tile_in_box(x, ul, ur, lr, ll) tile_in_tile_rect(ul, ur, ll, lr, x)


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
