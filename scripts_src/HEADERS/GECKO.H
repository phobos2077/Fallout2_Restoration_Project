/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef GECKO_H
#define GECKO_H

 // Defines specific for Gecko

 // Comments

#define MAX_SCORPS                              6    //max scorps on graze map
#define MAX_BRAHMIN                             4    //max brahmin on graze map to be rustled
#define PWPL_ELEV                               0
#define GARDEN              18000  //allows dialogue to change once we determine where ghoul is hannging out
#define HERD                19000

//areas on settlement map
#ifndef TAVERN
   #define TAVERN           21080
#endif
#define BRAHMA_PEN_1        12088
#define GARDEN_1            11708
#define GARDEN_2            27898
//areas on junkyard map
#define BRAHMA_PEN_2        24351
#define BRAHMA_PEN_3        21509
#define GARDEN_3            28341
#define GC_REP_ADJUST(X)                        set_global_var(GVAR_TOWN_REP_GECKO, global_var(GVAR_TOWN_REP_GECKO) + X);


// generic use anywhere
#define temp_in_box(x, ul, ur, lr, ll)                ((tile_distance(x, ul) <= tile_distance(ul, lr)) and  \
                                                       (tile_distance(x, ur) <= tile_distance(ur, ll)) and  \
                                                       (tile_distance(x, lr) <= tile_distance(lr, ul)) and  \
                                                       (tile_distance(x, ll) <= tile_distance(ll, ur)))

#ifndef tile_in_box
#define tile_in_box(x, ul, ur, lr, ll)                tile_in_tile_rect(ul, ur, ll, lr, x)
#endif

#define obj_in_loc(obj, ul, ur, lr, ll, map, elev)    ((tile_in_box(tile_num(obj), ul, ur, lr, ll)) and (cur_map_index == map) and ((elevation(obj) == elev) or (-1 == elev)))

#endif // GECKO_H
