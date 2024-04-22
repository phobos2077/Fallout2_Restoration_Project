//      *** Created by Fallout Script Editor. ***

#ifndef slvcamp_H
#define slvcamp_H


// Map vars for tribe02.map Map.

//MAP_GLOBAL_VARS:

//GLOBAL                                        NUMBER

// All Map Vars need to start w/ MVAR_

#define MVAR_Slaver_Count                       (0)
#define MVAR_Attack_Slavers                     (1)
#define MVAR_Slaves_Flee                        (2)
#define MVAR_Take_Slaves                        (3)
#define MVAR_Can_Check_Slaves                   (4)
#define MVAR_Guide_Sister                       (5)

#define slaves_in_big_pen(x)     tile_in_tile_rect(15936, 15922, 18536, 18322, x)
#define slaves_in_small_pen(x)   tile_in_tile_rect(12670, 12658, 13470, 13458, x)

#endif // slvcamp_H
