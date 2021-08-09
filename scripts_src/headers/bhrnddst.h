/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef BHRNDDST_H
#define BHRNDDST_H

#define MVAR_Hostile_Total                      (1)


variable Finding_New_Tile;

#define set_caravan_pos(x,y) call set_caravan_pos_rnd(x,y)
procedure set_caravan_pos_rnd(variable x, variable y) begin
    variable xrnd = x + random(-25, 25);
    variable yrnd = y + random(-25, 25);
    wm_area_set_pos(AREA_CARAVAN_ENCOUNTER, xrnd, yrnd);
    set_world_map_pos(xrnd,yrnd);
end

#define Create_Enemy(who,weapon,script)         Critter_Counter+=1;                                                             \
                                                Critter:=create_object_sid(who,0,0,script);                                     \
                                                Critter_Tile:=tile_num_in_direction(Critter_Tile,random(0,5),random(2,5));      \
                                                Finding_New_Tile:=0;                                                            \
                                                while ((not(tile_in_tile_rect(8709,15638,24963,31892,Critter_Tile))) and (Finding_New_Tile < 5)) do begin           \
                                                    Finding_New_Tile+=1;                                                        \
                                                    Critter_Tile:=tile_num_in_direction(tile_num(dude_obj),Encounter_Rotation,dude_perception*2);  \
                                                end                                                                             \
                                                critter_attempt_placement(Critter,Critter_Tile,elevation(dude_obj));            \
                                                if (weapon > 0) then begin                                                      \
                                                    item:=create_object(weapon,0,0);                                            \
                                                    add_obj_to_inven(Critter,item);                                             \
                                                    wield_obj_critter(Critter,item);                                            \
                                                end                                                                             \
                                                anim(Critter,ANIMATE_ROTATION,rotation_to_tile(tile_num(Critter),tile_num(dude_obj)))

#define WM_In_EPA(x,y)                          ((x >= 400) and (x <= 750) and (y >= 800) and (y <= 1150))

#define WM_In_New_Reno(x,y)                     (((x >= 750) and (x <= 1050) and (y >= 800) and (y <= 1100)) or      \
                                                 ((x >= 850) and (x <= 1000) and (y >= 700) and (y <= 800)))

#define WM_In_SRNRRN(x,y)                       ((x >= 550) and (x <= 800) and (y >= 700) and (y <= 800))

#define WM_In_Brok(x,y)                         (((x >= 1050) and (x <= 1100) and (y >= 750) and (y <= 800)) or      \
                                                 ((x >= 1100) and (x <= 1400) and (y >= 750) and (y <= 1050)))

#define WM_In_NCR(x,y)                          ((x >= 1000) and (x <= 1200) and (y >= 1350) and (y <= 1500))

#define WM_In_Band(x,y)                         (((x >= 650) and (x <= 800) and (y >= 0) and (y <= 100)) or          \
                                                 ((x >= 650) and (x <= 800) and (y >= 150) and (y <= 400)))

#define WM_In_Redding(x,y)                      (((x >= 500) and (x <= 850) and (y >= 400) and (y <= 700)) and       \
                                                 (not((x >= 500) and (x <= 550) and (y >= 500) and (y <= 600))) and  \
                                                 (not((x >= 800) and (x <= 850) and (y >= 650) and (y <= 700))))

#define WM_In_VPat(x,y)                         (((x >= 1050) and (x <= 1400) and (y >= 250) and (y <= 450)) and        \
                                                 (not((x >= 1150) and (x <= 1400) and (y >= 250) and (y <= 300))) and   \
                                                 (not((x >= 1050) and (x <= 1100) and (y >= 400) and (y <= 450))))

#define WM_In_NRNR(x,y)                         (((x >= 700) and (x <= 800) and (y >= 1150) and (y <= 1300)) or     \
                                                 ((x >= 750) and (x <= 950) and (y >= 1300) and (y <= 1350)) or     \
                                                 ((x >= 850) and (x <= 1000) and (y >= 1350) and (y <= 1400)))

#define WM_In_DNRV(x,y)                         (((x >= 400) and (x <= 450) and (y >= 400) and (y <= 500)) or       \
                                                 ((x >= 450) and (x <= 500) and (y >= 300) and (y <= 550)) or       \
                                                 ((x >= 500) and (x <= 550) and (y >= 500) and (y <= 600)))

#define WM_In_DVMV(x,y)                         (((x >= 950) and (x <= 1200) and (y >= 200) and (y <= 250)) or      \
                                                 ((x >= 1150) and (x <= 1300) and (y >= 250) and (y <= 300)))

#define WM_In_VNNB(x,y)                         (((x >= 1100) and (x <= 1200) and (y >= 1000) and (y <= 1400)) or   \
                                                 ((x >= 1050) and (x <= 1100) and (y >= 1200) and (y <= 1250)) or   \
                                                 ((x >= 1100) and (x <= 1150) and (y >= 1400) and (y <= 1450)))

#define WM_In_RDRC(x,y)                         (((x >= 1200) and (x <= 1450) and (y >= 450) and (y <= 650)) or     \
                                                 ((x >= 1150) and (x <= 1300) and (y >= 650) and (y <= 750)))

#define WM_In_DMRV(x,y)                         (((x >= 500) and (x <= 600) and (y >= 150) and (y <= 250)) or       \
                                                 ((x >= 550) and (x <= 950) and (y >= 100) and (y <= 150)) or       \
                                                 ((x >= 900) and (x <= 1050) and (y >= 200) and (y <= 250)))

// Caravan Encounter World Coordinates.
// Start City, Destination City, Number of Encounters, Encounter Subclass, x/y position

// Redding <--> Vault City, 1 Encounter only
#define Red_VC_1_1_x                            (700)
#define Red_VC_1_1_y                            (125)

// Redding <--> Vault City, 2 Encounters
#define Red_VC_2_1_x                            (475)
#define Red_VC_2_1_y                            (300)
#define Red_VC_2_2_x                            (975)
#define Red_VC_2_2_y                            (175)

// Redding <--> Vault City, 3 Encounters
#define Red_VC_3_1_x                            (475)
#define Red_VC_3_1_y                            (525)
#define Red_VC_3_2_x                            (675)
#define Red_VC_3_2_y                            (125)
#define Red_VC_3_3_x                            (1025)
#define Red_VC_3_3_y                            (225)

// Redding <--> Vault City, 4 Encounters
#define Red_VC_4_1_x                            (475)
#define Red_VC_4_1_y                            (575)
#define Red_VC_4_2_x                            (575)
#define Red_VC_4_2_y                            (175)
#define Red_VC_4_3_x                            (775)
#define Red_VC_4_3_y                            (125)
#define Red_VC_4_4_x                            (1075)
#define Red_VC_4_4_y                            (225)


// Redding <--> New Reno, 1 Encounter only
#define Red_Reno_1_1_x                          (775)
#define Red_Reno_1_1_y                          (775)

// Redding <--> New Reno, 2 Encounters
#define Red_Reno_2_1_x                          (700)
#define Red_Reno_2_1_y                          (700)
#define Red_Reno_2_2_x                          (750)
#define Red_Reno_2_2_y                          (925)

// Redding <--> New Reno, 3 Encounters
#define Red_Reno_3_1_x                          (675)
#define Red_Reno_3_1_y                          (675)
#define Red_Reno_3_2_x                          (725)
#define Red_Reno_3_2_y                          (875)
#define Red_Reno_3_3_x                          (925)
#define Red_Reno_3_3_y                          (925)

// Redding <--> New Reno, 4 Encounters
#define Red_Reno_4_1_x                          (650)
#define Red_Reno_4_1_y                          (600)
#define Red_Reno_4_2_x                          (725)
#define Red_Reno_4_2_y                          (800)
#define Red_Reno_4_3_x                          (750)
#define Red_Reno_4_3_y                          (925)
#define Red_Reno_4_4_x                          (975)
#define Red_Reno_4_4_y                          (925)


// Redding <--> NCR, 1 Encounter Only
#define Red_NCR_1_1_x                           (700)
#define Red_NCR_1_1_y                           (1000)

// Redding <--> NCR, 2 Encounters
#define Red_NCR_2_1_x                           (675)
#define Red_NCR_2_1_y                           (925)
#define Red_NCR_2_2_x                           (800)
#define Red_NCR_2_2_y                           (1200)

// Redding <--> NCR, 3 Encounters
#define Red_NCR_3_1_x                           (675)
#define Red_NCR_3_1_y                           (825)
#define Red_NCR_3_2_x                           (725)
#define Red_NCR_3_2_y                           (1100)
#define Red_NCR_3_3_x                           (900)
#define Red_NCR_3_3_y                           (1350)

// Redding <--> NCR, 4 Encounters
#define Red_NCR_4_1_x                           (675)
#define Red_NCR_4_1_y                           (675)
#define Red_NCR_4_2_x                           (675)
#define Red_NCR_4_2_y                           (825)
#define Red_NCR_4_3_x                           (725)
#define Red_NCR_4_3_y                           (1175)
#define Red_NCR_4_4_x                           (1050)
#define Red_NCR_4_4_y                           (1400)


// Broken Hills --> Gecko, 1 Encounter Only
#define Broken_Gecko_1_1_x                      (1375)
#define Broken_Gecko_1_1_y                      (600)

// Broken Hills --> Gecko, 2 Encounters
#define Broken_Gecko_2_1_x                      (1275)
#define Broken_Gecko_2_1_y                      (750)
#define Broken_Gecko_2_2_x                      (1325)
#define Broken_Gecko_2_2_y                      (475)

// Broken Hills --> Gecko, 3 Encounters
#define Broken_Gecko_3_1_x                      (1250)
#define Broken_Gecko_3_1_y                      (800)
#define Broken_Gecko_3_2_x                      (1300)
#define Broken_Gecko_3_2_y                      (600)
#define Broken_Gecko_3_3_x                      (1350)
#define Broken_Gecko_3_3_y                      (350)

// Broken Hills --> Geckos, 4 Encounters
#define Broken_Gecko_4_1_x                      (1275)
#define Broken_Gecko_4_1_y                      (800)
#define Broken_Gecko_4_2_x                      (1250)
#define Broken_Gecko_4_2_y                      (700)
#define Broken_Gecko_4_3_x                      (1300)
#define Broken_Gecko_4_3_y                      (500)
#define Broken_Gecko_4_4_x                      (1275)
#define Broken_Gecko_4_4_y                      (300)


// Broken Hills --> Vault City, 1 Encounter Only
#define Broken_VC_1_1_x                         (1325)
#define Broken_VC_1_1_y                         (600)

// Broken Hills --> Vault City, 2 Encounters
#define Broken_VC_2_1_x                         (1225)
#define Broken_VC_2_1_y                         (750)
#define Broken_VC_2_2_x                         (1300)
#define Broken_VC_2_2_y                         (400)

// Broken Hills --> Vault City, 3 Encounters
#define Broken_VC_3_1_x                         (1200)
#define Broken_VC_3_1_y                         (800)
#define Broken_VC_3_2_x                         (1250)
#define Broken_VC_3_2_y                         (625)
#define Broken_VC_3_3_x                         (1300)
#define Broken_VC_3_3_y                         (400)

// Broken Hills --> Vault City, 4 Encounters
#define Broken_VC_4_1_x                         (1200)
#define Broken_VC_4_1_y                         (825)
#define Broken_VC_4_2_x                         (1250)
#define Broken_VC_4_2_y                         (700)
#define Broken_VC_4_3_x                         (1300)
#define Broken_VC_4_3_y                         (500)
#define Broken_VC_4_4_x                         (1300)
#define Broken_VC_4_4_y                         (375)


// Broken Hills --> NCR, 1 Encounter Only
#define Broken_NCR_1_1_x                        (1125)
#define Broken_NCR_1_1_y                        (1200)

// Broken Hills --> NCR, 2 Encounters
#define Broken_NCR_2_1_x                        (1125)
#define Broken_NCR_2_1_y                        (1075)
#define Broken_NCR_2_2_x                        (1125)
#define Broken_NCR_2_2_y                        (1275)

// Broken Hills --> NCR, 3 Encounters
#define Broken_NCR_3_1_x                        (1150)
#define Broken_NCR_3_1_y                        (975)
#define Broken_NCR_3_2_x                        (1125)
#define Broken_NCR_3_2_y                        (1100)
#define Broken_NCR_3_3_x                        (1125)
#define Broken_NCR_3_3_y                        (1250)

// Broken Hills --> NCR, 4 Encounters
#define Broken_NCR_4_1_x                        (1175)
#define Broken_NCR_4_1_y                        (950)
#define Broken_NCR_4_2_x                        (1150)
#define Broken_NCR_4_2_y                        (1100)
#define Broken_NCR_4_3_x                        (1125)
#define Broken_NCR_4_3_y                        (1225)
#define Broken_NCR_4_4_x                        (1125)
#define Broken_NCR_4_4_y                        (1375)

#endif // BHRNDDST_H
