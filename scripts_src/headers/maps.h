/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef MAPS_H
#define MAPS_H

/*****************************************************************
   Filename: Maps.h

   Purpose: This file is used to store the defines pertaining
            to the maps. All defines from define.h have been
            placed in here for ease of reading and finding
            the the proper defines.

   Contents: The file is broken down in the following manner:
            I.      Map name Defines.
            II.     Map Entrance Points
            III.    Elevator Defines
            IV.     Random Encounter Defines
*****************************************************************/

/*****************************************************************
********************       Area Names       ***********************
*****************************************************************/

#define AREA_ARROYO                 (0)
#define AREA_DEN                    (1)
#define AREA_KLAMATH                (2)
#define AREA_MODOC                  (3)
#define AREA_VAULT_CITY             (4)
#define AREA_GECKO                  (5)
#define AREA_BROKEN_HILLS           (6)
#define AREA_NEW_RENO               (7)
#define AREA_SIERRA_ARMY_BASE       (8)
#define AREA_VAULT_15               (9)
#define AREA_NCR                    (10)
#define AREA_VAULT_13               (11)
#define AREA_MILITARY_BASE          (12)
#define AREA_REDDING                (13)
#define AREA_SAN_FRANCISCO          (14)
#define AREA_NAVARRO                (15)
#define AREA_THE_ENCLAVE            (16)
#define AREA_ABBEY                  (17)
#define AREA_PRIMITIVE_TRIBE        (18)
#define AREA_EPA                    (19)
#define AREA_GHOST_TOWN             (20)
#define AREA_CAR_OUTTA_GAS          (21)
#define AREA_ARROYO_DESTROYED       (22)
#define AREA_KLAMATH_TOXIC_CAVES    (23)
#define AREA_DEN_SLAVE_RUN          (24)
#define AREA_RAIDERS                (25)
#define AREA_RND_DESERT             (26)
#define AREA_RND_MOUNTAIN           (27)
#define AREA_RND_CITY               (28)
#define AREA_RND_COAST              (29)
#define AREA_GOLGATHA               (30)
#define AREA_SPECIAL_RND_WHALE      (31)
#define AREA_SPECIAL_RND_WOODSMAN   (32)
#define AREA_SPECIAL_RND_HEAD       (33)
#define AREA_SPECIAL_RND_SHUTTLE    (34)
#define AREA_SPECIAL_RND_UNWASHED   (35)
#define AREA_SPECIAL_RND_BRIDGE     (36)
#define AREA_SPECIAL_RND_CAFE       (37)
#define AREA_SPECIAL_RND_HOLY1      (38)
#define AREA_SPECIAL_RND_HOLY2      (39)
#define AREA_SPECIAL_RND_GUARDIAN   (40)
#define AREA_SPECIAL_RND_TOXIC      (41)
#define AREA_SPECIAL_RND_PARIAH     (42)
#define AREA_SPECIAL_RND_MAD_COW    (43)
#define AREA_CARAVAN_ENCOUNTER      (44)
#define AREA_FAKE_VAULT_13A         (45)
#define AREA_FAKE_VAULT_13B         (46)
#define AREA_SHADOW_MAPS            (47)
#define AREA_RENO_STABLES           (48)
#define AREA_VAULT_VILLAGE          (49)
#define AREA_SLAVER_CAMP            (50)
#define AREA_HUBOLOGIST_STASH       (51)
#define AREA_RANGER_SAFE1           (52)
#define AREA_RANGER_SAFE2           (53)
#define AREA_RANGER_SAFE3           (54)
#define AREA_RP_EASTER_EGG          (55)
#define AREA_MERCHANT               (56)
#define AREA_VAULT_MERCHANT         (57)
#define AREA_SAN_FRAN_SUB           (58)
#define AREA_SAN_FRAN_DR_SHENG      (59)

/*****************************************************************
********************       Map Names       ***********************
*****************************************************************/

#define MAP_RND_DESERT_1            (0)
#define MAP_RND_DESERT_2            (1)
#define MAP_RND_DESERT_3            (2)
#define MAP_ARROYO_CAVES            (3)
#define MAP_ARROYO_VILLAGE          (4)
#define MAP_ARROYO_BRIDGE           (5)
#define MAP_DEN_ENTRANCE            (6)
#define MAP_DEN_BUSINESS            (7)
#define MAP_DEN_RESIDENTIAL         (8)
#define MAP_KLAMATH_1               (9)
#define MAP_KLAMATH_MALL            (10)
#define MAP_KLAMATH_RATCAVES        (11)
#define MAP_KLAMATH_TOXICCAVES      (12)
#define MAP_KLAMATH_TRAPCAVES       (13)
#define MAP_KLAMATH_GRAZE           (14)
#define MAP_VAULTCITY_COURTYARD     (15)
#define MAP_VAULTCITY_DOWNTOWN      (16)
#define MAP_VAULTCITY_COUNCIL       (17)
#define MAP_MODOC_MAINSTREET        (18)
#define MAP_MODOC_BEDNBREAKFAST     (19)
#define MAP_MODOC_BRAHMINPASTURES   (20)
#define MAP_MODOC_GARDEN            (21)
#define MAP_MODOC_DOWNTHESHITTER    (22)
#define MAP_MODOC_WELL              (23)
#define MAP_GHOST_FARM              (24)
#define MAP_GHOST_CAVERN            (25)
#define MAP_GHOST_LAKE              (26)
#define MAP_SIERRA_BATTLE           (27)
#define MAP_SIERRA_123              (28)
#define MAP_SIERRA_4                (29)
#define MAP_VAULT_CITY_VAULT        (30)
#define MAP_GECKO_SETTLEMENT        (31)
#define MAP_GECKO_POWER_PLANT       (32)
#define MAP_GECKO_JUNKYARD          (33)
#define MAP_GECKO_ACCESS_TUNNELS    (34)
#define MAP_ARROYO_WILDERNESS       (35)
#define MAP_VAULT_15                (36)
#define MAP_THE_SQUAT_A             (37)
#define MAP_THE_SQUAT_B             (38)
#define MAP_VAULT_15_EAST_ENTRANCE  (39)
#define MAP_VAULT_13                (40)
#define MAP_VAULT_13_ENTRANCE       (41)
#define MAP_NCR_DOWNTOWN            (42)
#define MAP_NCR_COUNCIL             (43)
#define MAP_NCR_WESTIN_RANCH        (44)
#define MAP_NCR_GRAZING_LANDS       (45)
#define MAP_NCR_BAZAAR              (46)
//#define MAP_NCR_COUNCIL             (47)
#define MAP_KLAMATH_CANYON          (48)
#define MAP_MILITARY_BASE_12        (49)
#define MAP_MILITARY_BASE_34        (50)
#define MAP_MILITARY_BASE_ENTRANCE  (51)
#define MAP_DEN_SLAVE_RUN           (52)
#define MAP_CAR_DESERT              (53)
#define MAP_NEW_RENO_1              (54)
#define MAP_NEW_RENO_2              (55)
#define MAP_NEW_RENO_3              (56)
#define MAP_NEW_RENO_4              (57)
#define MAP_NEW_RENO_CHOP_SHOP      (58)
#define MAP_NEW_RENO_GOLGATHA       (59)
#define MAP_NEW_RENO_STABLES        (60)
#define MAP_NEW_RENO_BOXING         (61)
#define MAP_REDDING_WANAMINGO_ENT   (62)
#define MAP_REDDING_WANAMINGO_12    (63)
#define MAP_REDDING_DOWNTOWN        (64)
#define MAP_REDDING_MINE_ENT        (65)
#define MAP_REDDING_DTOWN_TUNNEL    (66)
#define MAP_REDDING_MINE_TUNNEL     (67)
#define MAP_RND_CITY1               (68)
#define MAP_RND_CAVERN0             (69)
#define MAP_RND_CAVERN1             (70)
#define MAP_RND_CAVERN2             (71)
#define MAP_RND_CAVERN3             (72)
#define MAP_RND_CAVERN4             (73)
#define MAP_RND_MOUNTAIN1           (74)
#define MAP_RND_MOUNTAIN2           (75)
#define MAP_RND_COAST1              (76)
#define MAP_RND_COAST2              (77)
#define MAP_BROKEN_HILLS1           (78)
#define MAP_BROKEN_HILLS2           (79)
#define MAP_RND_CAVERN5             (80)
#define MAP_RND_DESERT4             (81)
#define MAP_RND_DESERT5             (82)
#define MAP_RND_DESERT6             (83)
#define MAP_RND_DESERT7             (84)
#define MAP_RND_COAST3              (85)
#define MAP_RND_COAST4              (86)
#define MAP_RND_COAST5              (87)
#define MAP_RND_COAST6              (88)
#define MAP_RND_COAST7              (89)
#define MAP_RND_COAST8              (90)
#define MAP_RND_COAST9              (91)
#define MAP_RAIDERS_CAMP1           (92)
#define MAP_RAIDERS_CAMP2           (93)
#define MAP_BH_RND_DESERT           (94)
#define MAP_BH_RND_MOUNTAIN         (95)
#define MAP_SPECIAL_RND_WHALE       (96)
#define MAP_SPECIAL_RND_WOODSMAN    (97)
#define MAP_SPECIAL_RND_HEAD        (98)
#define MAP_SPECIAL_RND_SHUTTLE     (99)
#define MAP_SPECIAL_RND_UNWASHED    (100)
#define MAP_SPECIAL_RND_BRIDGE      (101)
#define MAP_SPECIAL_RND_CAFE        (102)
#define MAP_SPECIAL_RND_HOLY1       (103)
#define MAP_SPECIAL_RND_HOLY2       (104)
#define MAP_SPECIAL_RND_GUARDIAN    (105)
#define MAP_SPECIAL_RND_TOXIC       (106)
#define MAP_SPECIAL_RND_PARIAH      (107)
#define MAP_SPECIAL_RND_MAD_COW     (108)
#define MAP_NAVARRO_ENTRANCE        (109)
#define MAP_RND_COAST_10            (110)
#define MAP_RND_COAST_11            (111)
#define MAP_RND_COAST_12            (112)
#define MAP_RND_DESERT_8            (113)
#define MAP_RND_DESERT_9            (114)
#define MAP_RND_DESERT_10           (115)
#define MAP_RND_DESERT_11           (116)
#define MAP_RND_DESERT_12           (117)
#define MAP_RND_DESERT_13           (118)
#define MAP_RND_CAVERN_6            (119)
#define MAP_RND_CAVERN_7            (120)
#define MAP_RND_MOUNTAIN_3          (121)
#define MAP_RND_MOUNTAIN_4          (122)
#define MAP_RND_MOUNTAIN_5          (123)
#define MAP_RND_MOUNTAIN_6          (124)
#define MAP_RND_CITY_2              (125)
#define MAP_ARROYO_TEMPLE           (126)
#define MAP_DESTROYED_ARROYO_BRIDGE (127)
#define MAP_ENCLAVE_DETENTION       (128)
#define MAP_ENCLAVE_DOCK            (129)
#define MAP_ENCLAVE_END_FIGHT       (130)
#define MAP_ENCLAVE_BARRACKS        (131)
#define MAP_ENCLAVE_PRESIDENT       (132)
#define MAP_ENCLAVE_REACTOR         (133)
#define MAP_ENCLAVE_TRAP_ROOM       (134)
#define MAP_SAN_FRAN_TANKER         (135)
#define MAP_SAN_FRAN_DOCK           (136)
#define MAP_SAN_FRAN_CHINATOWN      (137)
#define MAP_SHUTTLE_EXTERIOR        (138)
#define MAP_SHUTTLE_INTERIOR        (139)
#define MAP_ELRONOLOGIST_BASE       (140)
#define MAP_RND_CITY_3              (141)
#define MAP_RND_CITY_4              (142)
#define MAP_RND_CITY_5              (143)
#define MAP_RND_CITY_6              (144)
#define MAP_RND_CITY_7              (145)
#define MAP_RND_CITY_8              (146)
#define MAP_NEW_RENO_VB             (147)
#define MAP_SHI_TEMPLE              (148)
#define MAP_IN_GAME_MOVIE1          (149)
#define MAP_BESS_DEAD               (150)
#define MAP_ABBEY_OUTSIDE           (151)
#define MAP_ABBEY_BASEMENT          (152)
#define MAP_ABBEY_CAVE              (153)
#define MAP_VAULT_VILLAGE           (154)
#define MAP_PRIMITIVE_TRIBE1        (155)
#define MAP_PRIMITIVE_TRIBE2        (156)
#define MAP_EPA                     (157)
#define MAP_EPA_SUBLEVELS           (158)
#define MAP_EPA_SECRET              (159)
#define MAP_SLAVER_CAMP             (160)
#define MAP_GECKO_ENCLAVE_PATROL    (161)
#define MAP_HUBOLOGIST_STASH        (162)
#define MAP_RANGER_SAFE_HOUSE1      (163)
#define MAP_RANGER_SAFE_HOUSE2      (164)
#define MAP_RANGER_SAFE_HOUSE3      (165)
#define MAP_EASTER                  (166)
#define MAP_MERCHANT                (167)
#define MAP_VILMERCH                (168)
#define MAP_SAN_FRAN_SUB            (169)
#define MAP_EPA_SUBLEVELS_1         (170)
#define MAP_EPA_SUBLEVELS_2         (171)
#define MAP_SHENG_HIDEOUT           (172)

/*****************************************************************
********************   Map String Defines  ***********************
*****************************************************************/
#define MAPSTR_ARBRDIGE             "arbridge.map"
#define MAPSTR_ARCAVES              "arcaves.map"
#define MAPSTR_ARGARDEN             "ARGARDEN.MAP"
#define MAPSTR_ARVILLAG             "arvillag.map"
#define MAPSTR_CARDSERT             "cardesrt.map"
#define MAPSTR_DEBBUS1              "denbus1.map"
#define MAPSTR_DENBUS2              "denbus2.map"
#define MAPSTR_DENRES1              "denres1.map"
#define MAPSTR_DEPOLV1              "depolv1.map"
#define MAPSTR_DEPOLVA              "depolvA.map"
#define MAPSTR_DEPOLVB              "depolvB.map"
#define MAPSTR_DNSLVRUN             "DNSlvRun.map"
#define MAPSTR_GECKPWPL             "GECKPWPL.map"
#define MAPSTR_GECKSETL             "GECKSETL.map"
#define MAPSTR_GSTCAV1              "gstcav1.map"
#define MAPSTR_GSTCAV2              "gstcav2.map"
#define MAPSTR_GSTFARM              "gstfarm.map"
#define MAPSTR_KLADWTWN             "kladwtwn.map"
#define MAPSTR_KLAGRAZ              "klagraz.map"
#define MAPSTR_KLAMALL              "KLAMALL.map"
#define MAPSTR_KLARATCV             "KLARATCV.map"
#define MAPSTR_KLATOXCV             "klatoxcv.map"
#define MAPSTR_KLATRAP              "klatrap.map"
#define MAPSTR_MODBRAH              "modbrah.map"
#define MAPSTR_MODGARD              "modgard.map"
#define MAPSTR_MODINN               "modinn.map"
#define MAPSTR_MODMAIN              "modmain.map"
#define MAPSTR_MODSHIT              "modshit.map"
#define MAPSTR_MODWELL              "modwell.map"
#define MAPSTR_NCR1                 "NCR1.MAP"
#define MAPSTR_NCR2                 "NCR2.MAP"
#define MAPSTR_NCR3                 "NCR3.MAP"
#define MAPSTR_NCR4                 "NCR4.MAP"
#define MAPSTR_NCRENT               "NCRENT.MAP"
#define MAPSTR_NCREX                "NCREX.MAP"
#define MAPSTR_V13ENT               "V13ENT.MAP"
#define MAPSTR_V13_ORIG             "V13_ORIG.map"
#define MAPSTR_V15ENTA              "V15ENTA.MAP"
#define MAPSTR_V15ENTB              "V15ENTB.MAP"
#define MAPSTR_V15SENT              "V15SENT.MAP"
#define MAPSTR_V15_ORIG             "V15_ORIG.map"
#define MAPSTR_VAULT13              "VAULT13.MAP"
#define MAPSTR_VAULT15              "VAULT15.MAP"
#define MAPSTR_VCTYCOCL             "VCTYCOCL.map"
#define MAPSTR_VCTYCTYD             "VCTYCTYD.map"
#define MAPSTR_VCTYDWTN             "VCTYDWTN.map"
#define MAPSTR_VCTYVLT              "VCTYVLT.map"
#define MAPSTR_NEWRBA               "NEWRBA.map"
#define MAPSTR_NEWR1                "newr1.map"
#define MAPSTR_REDWAME              "REDWAME.map"
#define MAPSTR_REDWAN1              "REDWAN1.map"
#define MAPSTR_REDDOWN              "REDDOWN.map"
#define MAPSTR_REDMENT              "REDMENT.map"
#define MAPSTR_REDDTUN              "REDDTUN.map"
#define MAPSTR_REDMTUN              "REDMTUN.map"
#define MAPSTR_CITY1                "CITY1.map"
#define MAPSTR_CAVE0                "CAVE0.map"
#define MAPSTR_CAVE1                "CAVE1.map"
#define MAPSTR_CAVE2                "CAVE2.map"
#define MAPSTR_CAVE3                "CAVE3.map"
#define MAPSTR_CAVE4                "CAVE4.map"
#define MAPSTR_MOUNTN1              "MOUNTN1.map"
#define MAPSTR_MOUNTN2              "MOUNTN2.map"
#define MAPSTR_COAST1               "COAST1.MAP"
#define MAPSTR_COAST2               "COAST2.MAP"
#define MAPSTR_BROKEN1              "BROKEN1.MAP"
#define MAPSTR_BROKEN2              "BROKEN2.MAP"
#define MAPSTR_CAVE5                "CAVE5.MAP"
#define MAPSTR_DESERT4              "DESERT4.MAP"
#define MAPSTR_DESERT5              "DESERT5.MAP"
#define MAPSTR_DESERT6              "DESERT6.MAP"
#define MAPSTR_DESERT7              "DESERT7.MAP"
#define MAPSTR_COAST3               "COAST3.MAP"
#define MAPSTR_COAST4               "COAST4.MAP"
#define MAPSTR_COAST5               "COAST5.MAP"
#define MAPSTR_COAST6               "COAST6.MAP"
#define MAPSTR_COAST7               "COAST7.MAP"
#define MAPSTR_COAST8               "COAST8.MAP"
#define MAPSTR_COAST9               "COAST9.MAP"
#define MAPSTR_RAIDERS1             "RAIDERS1.MAP"
#define MAPSTR_RAIDERS2             "RAIDERS2.MAP"
#define MAPSTR_BHRNDDST             "BHRNDDST.MAP"
#define MAPSTR_BHRNDMNT             "BHRNDMNT.MAP"
#define MAPSTR_RNDWHALE             "RNDWHALE.MAP"
#define MAPSTR_RNDTINWD             "RNDTINWD.MAP"
#define MAPSTR_RNDBHEAD             "RNDBHEAD.MAP"
#define MAPSTR_RNDSHUTL             "RNDSHUTL.MAP"
#define MAPSTR_RNDUWILG             "RNDUWILG.MAP"
#define MAPSTR_RNDBRIDG             "RNDBRIDG.MAP"
#define MAPSTR_RNDCAFE              "RNDCAFE.MAP"
#define MAPSTR_RNDHOLY1             "RNDHOLY1.MAP"
#define MAPSTR_RNDHOLY2             "RNDHOLY2.MAP"
#define MAPSTR_RNDFORVR             "RNDFORVR.MAP"
#define MAPSTR_RNDTOXIC             "RNDTOXIC.MAP"
#define MAPSTR_RNDPARIH             "RNDPARIH.MAP"
#define MAPSTR_RNDEXCOW             "RNDEXCOW.MAP"
#define MAPSTR_NAVARRO              "NAVARRO.MAP"

/*****************************************************************
********************    Map Entrance Points  *********************
*****************************************************************/

#define override_map_start_hex(x,y,z)   override_map_start(x%200,x/200,y,z)

#define DEN_SLAVE_RUN_SUCCESS       (10)

/*****************************************************************
********************       Elevators       ***********************
*****************************************************************/


/*****************************************************************
********************    Random Encounters  ***********************
*****************************************************************/

/* The following define is to force critter X to face critter Y */
#define Face_Critter(Y,X)           anim(X,ANIMATE_ROTATION,rotation_to_tile(tile_num(X),tile_num(Y)))

/* The following define will set a rotation arc for placement
   of critters. */
#define FixRotationArc(X)           while (X < 0) do begin      \
                                        X += 6;                 \
                                    end                         \
                                    if (X > 5) then             \
                                        X := X%6


/* The following define will give you the inverse (Y) of a
   rotation (X) */
#define InvertRotation(X,Y)         X+=3;                       \
                                    FixRotationArc(X)

#endif // MAPS_H
