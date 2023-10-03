/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef DEPOLVA_H
#define DEPOLVA_H

// General Information
#define MAX_BOTS                    (6)
#define ELEVATOR_1                  (19922)//(20517)
#define ELEVATOR_2                  (19924)
#define ELEVATOR_3                  (20740)//(21135)
#define ELEVATOR_4                  (22340)

/*#define BOT_TILE_E0T0               (21697)
#define BOT_TILE_E0T1               (17505)
#define BOT_TILE_E0T2               (17088)
#define BOT_TILE_E0T3               (13113)
#define BOT_TILE_E0T4               (16514)
#define BOT_TILE_E0T5               (20514)*/

#define BOT_TILE_E0T0               (20900)
#define BOT_TILE_E0T1               (20898)
#define BOT_TILE_E0T2               (20896)
#define BOT_TILE_E0T3               (20894)
#define BOT_TILE_E0T4               (18706) //begin eyebots
#define BOT_TILE_E0T5               (18306)
#define BOT_TILE_E0T6               (18694)
#define BOT_TILE_E0T7               (18294)

/*#define BOT_TILE_E1T0               (18911)
#define BOT_TILE_E1T1               (21712)
#define BOT_TILE_E1T2               (19688)
#define BOT_TILE_E1T3               (21489)
#define BOT_TILE_E1T4               (23890)
#define BOT_TILE_E1T5               (26516)*/

#define BOT_TILE_E1T0               (18516)
#define BOT_TILE_E1T1               (21716)
#define BOT_TILE_E1T2               (19685)
#define BOT_TILE_E1T3               (22085)
#define BOT_TILE_E1T4               (26293)
#define BOT_TILE_E1T5               (26910)
#define BOT_TILE_E1T6               (27108)
#define BOT_TILE_E1T7               (26906)
#define BOT_TILE_E1T8               (27104)
#define BOT_TILE_E1T9               (26902)
#define BOT_TILE_E1T10              (27100)
#define BOT_TILE_E1T11              (28510)
#define BOT_TILE_E1T12              (28308)
#define BOT_TILE_E1T13              (28506)
#define BOT_TILE_E1T14              (28304)
#define BOT_TILE_E1T15              (28502)
#define BOT_TILE_E1T16              (28300)
#define BOT_TILE_E1T17              (19316) //begin robobots
#define BOT_TILE_E1T18              (20716)
#define BOT_TILE_E1T19              (20485)
#define BOT_TILE_E1T20              (21285)
#define BOT_TILE_E1T21              (17705) //begin eybots
#define BOT_TILE_E1T22              (17697)
#define BOT_TILE_E1T23              (27123)
#define BOT_TILE_E1T24              (27121)
#define BOT_TILE_E1T25              (27119)
#define BOT_TILE_E1T26              (27117)
#define BOT_TILE_E1T27              (27115)
#define BOT_TILE_E1T28              (27723)
#define BOT_TILE_E1T29              (27721)
#define BOT_TILE_E1T30              (27719)
#define BOT_TILE_E1T31              (27717)
#define BOT_TILE_E1T32              (27715)

/*#define BOT_TILE_E2T0               (24317)
#define BOT_TILE_E2T1               (22929)
#define BOT_TILE_E2T2               (18884)
#define BOT_TILE_E2T3               (20329)
#define BOT_TILE_E2T4               (17283)
#define BOT_TILE_E2T5               (17102)*/

#define BOT_TILE_E2T0               (19329)
#define BOT_TILE_E2T1               (23920)
#define BOT_TILE_E2T2               (23914)
#define BOT_TILE_E2T3               (15470)
#define BOT_TILE_E2T4               (16676)
#define BOT_TILE_E2T5               (17476)
#define BOT_TILE_E2T6               (18276)
#define BOT_TILE_E2T7               (19076)
#define BOT_TILE_E2T8               (19133) //begin robobot
#define BOT_TILE_E2T9               (19125)
#define BOT_TILE_E2T10              (14502) //begin eyebot



#define Robot_Missile_Bot(Robot)            ((Robot == PID_MISSILE_BOT) or (Robot == PID_TOUGH_MISSILE_BOT))
#define Robot_Robobrain(Robot)              (Robot == PID_ROBOBRAIN)

#define Move_Elevator_Obj(Who,Elevation)    if (Elevation == 0) then                          \
                                                critter_attempt_placement(Who,ELEVATOR_1,0);  \
                                            else if (Elevation == 1) then                     \
                                                critter_attempt_placement(Who,ELEVATOR_2,1);  \
                                            else                                              \
                                                critter_attempt_placement(Who,ELEVATOR_3,2)

#define Move_Elevator(Elevation)            Move_Elevator_Obj(self_obj,Elevation)

#define tile_in_box(x, ul, ur, lr, ll) tile_in_tile_rect(ul, ur, ll, lr, x)

// Map Vars
#define MVAR_Free_Bots              (0)
#define MVAR_Repair_Request1        (1)
#define MVAR_Repair_Request2        (2)
#define MVAR_Repair_Request3        (3)
#define MVAR_Repair_Request4        (4)
#define MVAR_Repair_Request5        (5)
#define MVAR_Repair_Request6        (6)
#define MVAR_Repair_Request7        (7)
#define MVAR_Repair_Request8        (8)
#define MVAR_Repair_Request9        (9)
#define MVAR_Repair_Request10       (10)
#define MVAR_Repair_Request11       (11)
#define MVAR_Repair_Request12       (12)

#define MVAR_Elevation_Request1     (13)
#define MVAR_Elevation_Request2     (14)
#define MVAR_Elevation_Request3     (15)
#define MVAR_Elevation_Request4     (16)
#define MVAR_Elevation_Request5     (17)
#define MVAR_Elevation_Request6     (18)
#define MVAR_Elevation_Request7     (19)
#define MVAR_Elevation_Request8     (20)
#define MVAR_Elevation_Request9     (21)
#define MVAR_Elevation_Request10    (22)
#define MVAR_Elevation_Request11    (23)
#define MVAR_Elevation_Request12    (24)

#define MVAR_Tile_Request1          (25)
#define MVAR_Tile_Request2          (26)
#define MVAR_Tile_Request3          (27)
#define MVAR_Tile_Request4          (28)
#define MVAR_Tile_Request5          (29)
#define MVAR_Tile_Request6          (30)
#define MVAR_Tile_Request7          (31)
#define MVAR_Tile_Request8          (32)
#define MVAR_Tile_Request9          (33)
#define MVAR_Tile_Request10         (34)
#define MVAR_Tile_Request11         (35)
#define MVAR_Tile_Request12         (36)

#define MVAR_Pid_Request1           (37)
#define MVAR_Pid_Request2           (38)
#define MVAR_Pid_Request3           (39)
#define MVAR_Pid_Request4           (40)
#define MVAR_Pid_Request5           (41)
#define MVAR_Pid_Request6           (42)
#define MVAR_Pid_Request7           (43)
#define MVAR_Pid_Request8           (44)
#define MVAR_Pid_Request9           (45)
#define MVAR_Pid_Request10          (46)
#define MVAR_Pid_Request11          (47)
#define MVAR_Pid_Request12          (48)

#define MVAR_Security_Level_1       (49)
#define MVAR_Security_Level_2       (50)
#define MVAR_Security_Level_3       (51)

#define MVAR_Ammo_Request_1a        (52)
#define MVAR_Ammo_Request_1b        (53)
#define MVAR_Ammo_Request_2a        (54)
#define MVAR_Ammo_Request_2b        (55)
#define MVAR_Ammo_Request_3a        (56)
#define MVAR_Ammo_Request_3b        (57)
#define MVAR_Ammo_Request_4a        (58)
#define MVAR_Ammo_Request_4b        (59)
#define MVAR_Ammo_Request_5a        (60)
#define MVAR_Ammo_Request_5b        (61)
#define MVAR_Ammo_Request_6a        (62)
#define MVAR_Ammo_Request_6b        (63)
#define MVAR_Ammo_Request_7a        (64)
#define MVAR_Ammo_Request_7b        (65)
#define MVAR_Ammo_Request_8a        (66)
#define MVAR_Ammo_Request_8b        (67)
#define MVAR_Ammo_Request_9a        (68)
#define MVAR_Ammo_Request_9b        (69)
#define MVAR_Ammo_Request_10a       (70)
#define MVAR_Ammo_Request_10b       (71)
#define MVAR_Ammo_Request_11a       (72)
#define MVAR_Ammo_Request_11b       (73)
#define MVAR_Ammo_Request_12a       (74)
#define MVAR_Ammo_Request_12b       (75)

#define MVAR_Level1_Fields          (76)
#define MVAR_Level2_Fields          (77)
#define MVAR_Level3_Fields          (78)

#define MVAR_Field_1a               (79)
#define MVAR_Field_1b               (80)
#define MVAR_Field_1c               (81)
#define MVAR_Field_1d               (82)
#define MVAR_Field_1e               (83)

#define MVAR_Eyeball_Level          (84)
#define MVAR_Eyeball_Used           (85)

#define MVAR_Field_2a               (86)
#define MVAR_Field_2b               (87)
#define MVAR_Field_2c               (88)
#define MVAR_Field_2d               (89)

#define MVAR_Field_3a               (90)
#define MVAR_Field_3b               (91)

#define MVAR_Electric_Floor_2       (92)

#define MVAR_Plasma_Trap_L3_00      (93)
#define MVAR_Plasma_Trap_L3_01      (94)

#define MVAR_Level1_Tough_Bots      (95)
#define MVAR_Level1_Robobrain       (96)
#define MVAR_Level1_Eyeball         (97)

#define MVAR_Level2_Tough_Bots      (98)
#define MVAR_Level2_Robobrain       (99)
#define MVAR_Level2_Eyeball         (100)

#define MVAR_Level3_Tough_Bots      (101)
#define MVAR_Level3_Robobrain       (102)
#define MVAR_Level3_Eyeball         (103)

#define MVAR_Last_Restock           (104)
#define MVAR_Last_Spot_0            (105)
#define MVAR_Last_Spot_1            (106)
#define MVAR_Last_Spot_2            (107)

#define MVAR_Bio_Brain              (108)
#define MVAR_Bio_Motivator          (109)
#define MVAR_Bio_Gel                (110)
#define MVAR_Explode_Robot          (111)

#define MVAR_Skynet_Defeat          (112)
#define MVAR_Skynet_Battle_3        (113)

#define MVAR_Plasma_Trap_L2_00      (114)
#define MVAR_Plasma_Trap_L2_01      (115)
#define MVAR_Plasma_Trap_L2_02      (116)
#define MVAR_Plasma_Trap_L2_03      (117)
#define MVAR_Plasma_Trap_L2_04      (118)
#define MVAR_Plasma_Trap_L2_05      (119)
#define MVAR_Plasma_Trap_L2_06      (120)
#define MVAR_Plasma_Trap_L2_07      (121)
#define MVAR_Plasma_Trap_L2_08      (122)
#define MVAR_Plasma_Trap_L2_09      (123)
#define MVAR_Plasma_Trap_L2_10      (124)
#define MVAR_Plasma_Trap_L2_11      (125)
#define MVAR_Plasma_Trap_L2_12      (126)
#define MVAR_Plasma_Trap_L2_13      (127)
#define MVAR_Robot_Activation       (128)
#define MVAR_Wire_Tripped           (129)
#define MVAR_Wire_Found             (130)

// Map Var States
#define REPAIR_NONE                 (0)
#define REPAIR_REQUEST              (1)
#define REPAIR_ANSWERED             (2)
#define REPAIR_PICKUP               (3)
#define REPAIR_PICKUP_ANSWER        (4)
#define REPAIR_DESTROYED            (5)
#define REPAIR_PICKUP_COMPLETE      (6)
#define REPAIR_COMPLETE             (0)

#define LEVEL_NONE                  (-1)
#define LEVEL_ONE                   (0)
#define LEVEL_TWO                   (1)
#define LEVEL_THREE                 (2)

#define FIELD_ENABLED               (0)
#define FIELD_DISABLED              (1)
#define FIELD_DAMAGED               (2)
#define FIELD_DESTROYED             (3)

#define EYEBALL_NONE                (0)
#define EYEBALL_DIXON               (1)
#define EYEBALL_CLIFTON             (2)

#define REPAIR_BOT1_DEAD            bit_1
#define REPAIR_BOT2_DEAD            bit_2
#define REPAIR_BOT3_DEAD            bit_3
#define REPAIR_BAY_DISABLED         bit_4

// commands
#define Inc_Bot(Robot,Elevation)            if (cur_map_index == MAP_SIERRA_4) then begin       \
                                                if (Robot_Missile_Bot(Robot)) then begin        \
                                                    inc_map_var(MVAR_Level4_Tough_Bots);        \
                                                end else if (Robot_Robobrain(Robot)) then begin \
                                                    inc_map_var(MVAR_Level4_Robobrain);         \
                                                end else  begin                                 \
                                                    inc_map_var(MVAR_Level4_Eyeball);           \
                                                end                                             \
                                            end                                                 \
                                            else if (Elevation == 0) then begin                 \
                                                if (Robot_Missile_Bot(Robot)) then              \
                                                    inc_map_var(MVAR_Level1_Tough_Bots);        \
                                                else if (Robot_Robobrain(Robot)) then           \
                                                    inc_map_var(MVAR_Level1_Robobrain);         \
                                                else                                            \
                                                    inc_map_var(MVAR_Level1_Eyeball);           \
                                            end                                                 \
                                            else if (Elevation == 1) then begin                 \
                                                if (Robot_Missile_Bot(Robot)) then              \
                                                    inc_map_var(MVAR_Level2_Tough_Bots);        \
                                                else if (Robot_Robobrain(Robot)) then           \
                                                    inc_map_var(MVAR_Level2_Robobrain);         \
                                                else                                            \
                                                    inc_map_var(MVAR_Level2_Eyeball);           \
                                            end                                                 \
                                            else begin                                          \
                                                if (Robot_Missile_Bot(Robot)) then              \
                                                    inc_map_var(MVAR_Level3_Tough_Bots);        \
                                                else if (Robot_Robobrain(Robot)) then           \
                                                    inc_map_var(MVAR_Level3_Robobrain);         \
                                                else                                            \
                                                    inc_map_var(MVAR_Level3_Eyeball);           \
                                            end                                                 \
                                            ndebug("Add Robot to Queue")

#define Next_Hex_0                      if (map_var(MVAR_Last_Spot_0) == 0) then                    \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T0);            \
                                        else if (map_var(MVAR_Last_Spot_0) == BOT_TILE_E0T0) then   \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T1);            \
                                        else if (map_var(MVAR_Last_Spot_0) == BOT_TILE_E0T1) then   \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T2);            \
                                        else if (map_var(MVAR_Last_Spot_0) == BOT_TILE_E0T2) then   \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T3);            \
                                        else if (map_var(MVAR_Last_Spot_0) == BOT_TILE_E0T3) then   \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T4);            \
                                        else if (map_var(MVAR_Last_Spot_0) == BOT_TILE_E0T4) then   \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T5);            \
                                        else if (map_var(MVAR_Last_Spot_0) == BOT_TILE_E0T5) then   \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T6);            \
                                        else if (map_var(MVAR_Last_Spot_0) == BOT_TILE_E0T6) then   \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T7);            \
                                        else if (map_var(MVAR_Last_Spot_0) == BOT_TILE_E0T7) then   \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T0)

#define Next_Hex_1                      if (map_var(MVAR_Last_Spot_1) == 0) then                    \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T0);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T0) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T1);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T1) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T2);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T2) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T3);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T3) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T4);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T4) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T5);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T5) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T6);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T6) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T7);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T7) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T8);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T8) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T9);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T9) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T10);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T10) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T11);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T11) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T12);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T12) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T13);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T13) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T14);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T14) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T15);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T15) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T16);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T16) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T17);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T17) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T18);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T18) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T19);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T19) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T20);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T20) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T21);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T21) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T22);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T22) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T23);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T23) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T24);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T24) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T25);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T25) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T26);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T26) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T27);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T27) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T28);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T28) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T29);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T29) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T30);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T30) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T31);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T31) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T32);           \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T32) then  \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T0)

#define Next_Hex_2                      if (map_var(MVAR_Last_Spot_2) == 0) then                    \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T0);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T0) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T1);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T1) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T2);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T2) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T3);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T3) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T4);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T4) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T5);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T5) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T6);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T6) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T7);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T7) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T8);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T8) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T9);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T9) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T10);           \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T10) then  \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T0)

#endif // DEPOLVA_H
