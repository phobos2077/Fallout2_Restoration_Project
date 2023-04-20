/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef NAVARRO_H
#define NAVARRO_H

 // Map vars for Navarro Map

 // Comments

//MAP_GLOBAL_VARS:

//GLOBAL                                        NUMBER

// All Map Vars need to start w/ MVAR_

#define MVAR_Replace                            (0)
#define MVAR_Plans                              (1)
#define MVAR_Snookie                            (2)
#define MVAR_See_Me                             (3)
#define MVAR_Exterminate                        (4)
#define MVAR_Clean                              (5)
#define MVAR_Secure                             (6)
#define MVAR_Open_Sesame                        (8)
#define MVAR_Touched                            (9)
#define MVAR_Exit                              (10)
#define MVAR_Doctor_Dead                       (11)
#define MVAR_Door                              (12)
#define MVAR_Pass                              (13)
#define MVAR_Gate                              (14)
#define MVAR_Xarn_Door                         (15)
#define MVAR_Fight                             (16)
#define MVAR_Argument                          (17)
#define MVAR_Take_It                           (18)
#define MVAR_Quincy_Allows_Plans               (19)
#define MVAR_Get_Armor                         (20)
#define MVAR_Deathclaw_Allowed                 (21)
#define MVAR_Xarn_In_Party                     (22)
#define MVAR_Med_Guard_Dead                    (23)
#define MVAR_Guard_Shift                       (24)
#define MVAR_Verti_Satellite_Alignment         (25)
#define MVAR_Verti_Status                      (26)

#define looking_for_navarro           ( f2_flag_any == f2_state_tribe_kidnapped ) or \
                                      ( shi_whirly( SH_WH_ACCEPTED ) ) or            \
                                      ( elron_whirly( EL_WH_ACCEPTED ) ) or          \
                                      ( san_fran_flag(SF_BROTHER_PLANS) )

#define brotherhood_wants_plans       san_fran_flag(SF_BROTHER_PLANS)

#define been_to_base                  (town_known(AREA_MILITARY_BASE) == MARK_STATE_VISITED)

#define took_plans_quest              ( shi_whirly( SH_WH_ACCEPTED ) ) or   \
                                      ( elron_whirly( EL_WH_ACCEPTED ) ) or \
                                      ( san_fran_flag(SF_BROTHER_PLANS) )

#define took_shi_quest                shi_whirly( SH_WH_ACCEPTED )

#define took_elron_quest              elron_whirly( EL_WH_ACCEPTED )

#define took_brotherhood_quest        san_fran_flag(SF_BROTHER_PLANS)

#ifndef not_alone
   #define not_alone                      ( ( true_party_size - K9_In_Party ) >= 1 )
#endif

#define not_wearing_power_armor       ( (obj_pid(critter_inven_obj(dude_obj,INVEN_TYPE_WORN)) != PID_POWERED_ARMOR) and          \
                                        (obj_pid(critter_inven_obj(dude_obj,INVEN_TYPE_WORN)) != PID_HARDENED_POWER_ARMOR) and   \
                                        (obj_pid(critter_inven_obj(dude_obj,INVEN_TYPE_WORN)) != PID_ADVANCED_POWER_ARMOR) and   \
                                        (obj_pid(critter_inven_obj(dude_obj,INVEN_TYPE_WORN)) != PID_ADVANCED_POWER_ARMOR_MK2) )

#endif // NAVARRO_H
