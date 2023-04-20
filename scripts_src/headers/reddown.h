/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef REDDOWN_H
#define REDDOWN_H

#define MVAR_Fannie_Mae             (0)
#define MVAR_Widow_Rooney           (1)
#define MVAR_Attecked_Cashier       (3)
#define MVAR_Using_Locked_Door      (4)
#define MVAR_Rehab_Time             (5)  // Seraph's Code

#define FANNIE_NONE                 (0)
#define FANNIE_CUSTOMER             (1)
#define FANNIE_MONEY_ASKED          (2)
#define FANNIE_MONEY_GIVEN          (3)
#define FANNIE_SICK                 (4)
#define FANNIE_SICKER               (5)
#define FANNIE_DEAD                 (6)
#define FANNIE_CURED_DUDE           (7)  // Seraph's Code
#define FANNIE_CURED_DOC            (8)  // Seraph's Code
#define FANNIE_CURED_LOU            (9)  // Seraph's Code

#define WIDOW_NONE                  (0)
#define WIDOW_JOB_ACCEPTED          (1)
#define WIDOW_KICKED_OUT            (2)
#define WIDOW_PAID                  (3)
#define WIDOW_KILLED                (4)

// Begin Seraph's Code
#define set_rehab_time              if (map_var(MVAR_Rehab_Time) == 0) then begin                    \
                                       set_map_var(MVAR_Rehab_Time, game_time + ONE_GAME_DAY);       \
                                       if (map_var(MVAR_Fannie_Mae) != FANNIE_CURED_DOC) then begin  \
                                          give_xp(EXP_CURED_FANNIE);                                 \
                                          inc_general_rep(REP_BONUS_CURED_FANNIE);                   \
                                          inc_global_var_amt(GVAR_TOWN_REP_REDDING, 5);              \
                                       end                                                           \
                                    end
#define rehab_time                  map_var(MVAR_Rehab_Time)
#define rehab_done                  (map_var(MVAR_Rehab_Time) <= game_time)
#define rehab_set                   (map_var(MVAR_Rehab_Time) != 0)

#define set_fannie(x)               set_map_var(MVAR_Fannie_Mae,x)
#define fannie                      map_var(MVAR_Fannie_Mae)
#define fannie_cured                ((fannie == FANNIE_CURED_DUDE) or (fannie == FANNIE_CURED_DOC) or (fannie == FANNIE_CURED_LOU))
// End Seraph's Code

//added by killap - moved out of rcgenpes.int
#define assign_personality                                                                          \
   if (local_var(LVAR_Look_At) == 0) then begin                                                     \
      if ((Is_Child) and (get_critter_stat(self_obj,STAT_gender) == GENDER_MALE)) then begin        \
         set_local_var(LVAR_Look_At,random(205,212));                                               \
         set_local_var(LVAR_Personality,Personality_Child);                                         \
      end                                                                                           \
      else if (Is_Child) then begin                                                                 \
         set_local_var(LVAR_Personality,Personality_Child);                                         \
         set_local_var(LVAR_Look_At,random(207,214));                                               \
      end                                                                                           \
      else if ((In_Bar) and (get_critter_stat(self_obj,STAT_gender) == GENDER_MALE)) then begin     \
         set_local_var(LVAR_Look_At,random(123,127));                                               \
         set_local_var(LVAR_Personality,Personality_Bar);                                           \
      end                                                                                           \
      else if (In_Bar) then begin                                                                   \
         set_local_var(LVAR_Look_At,random(128,132));                                               \
         set_local_var(LVAR_Personality,Personality_Bar);                                           \
      end                                                                                           \
      else if ((In_Home) and (get_critter_stat(self_obj,STAT_gender) == GENDER_MALE)) then begin    \
         set_local_var(LVAR_Look_At,random(155,159));                                               \
         set_local_var(LVAR_Personality,Personality_Home);                                          \
      end                                                                                           \
      else if (In_Home) then begin                                                                  \
         set_local_var(LVAR_Personality,Personality_Home);                                          \
         set_local_var(LVAR_Look_At,random(160,164));                                               \
      end                                                                                           \
      else if (In_Mines) then begin                                                                 \
         set_local_var(LVAR_Look_At,random(171,176));                                               \
         set_local_var(LVAR_Personality,Personality_Mine);                                          \
      end                                                                                           \
      else if (In_Fights) then begin                                                                \
         set_local_var(LVAR_Look_At,random(183,188));                                               \
         set_local_var(LVAR_Personality,Personality_Fights);                                        \
      end                                                                                           \
      else if (get_critter_stat(self_obj,STAT_gender) == GENDER_MALE) then begin                    \
         set_local_var(LVAR_Look_At,random(100,104));                                               \
         set_local_var(LVAR_Personality,Personality_Town);                                          \
      end                                                                                           \
      else begin                                                                                    \
         set_local_var(LVAR_Look_At,random(105,109));                                               \
         set_local_var(LVAR_Personality,Personality_Town);                                          \
      end                                                                                           \
   end
//end added by killap

#endif // REDDOWN_H
