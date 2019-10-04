/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef KLAMATH_H
#define KLAMATH_H

 // Defines specific for Klamath

 // Comments

#define MAX_SCORPS                              6    //max scorps on graze map
#define MAX_BRAHMIN                             4    //max brahmin on graze map to be rustled
#define KC_REP_ADJUST(X)                        set_global_var(GVAR_TOWN_REP_KLAMATH, global_var(GVAR_TOWN_REP_KLAMATH) + X);
#define COUNT_A_SCORP                           set_map_var(MVAR_Total_Scorps, map_var(MVAR_Total_Scorps)+1);
#define ADJUST_SCORPS_KILLED                    set_map_var(MVAR_Scorps_Killed, map_var(MVAR_Scorps_Killed)+1);
#define KILLED_ALL_SCORPS                       (map_var(MVAR_Scorps_Killed) >= map_var(MVAR_Total_Scorps))
#define A_SCORP_SURVIVES                        (map_var(MVAR_Scorps_Killed) < map_var(MVAR_Total_Scorps))

#endif // KLAMATH_H
