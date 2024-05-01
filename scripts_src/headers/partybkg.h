/*
    Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef PARTYBKG_H
#define PARTYBKG_H

/*****************************************
 Header File for Party Member Backgrounds
*****************************************/

variable PartyMemberBackground := -1;

procedure Check_Next_Third_Of_Areas;
procedure Check_Second_Third_Of_Areas;
procedure Check_Final_Third_Of_Areas;

#define find_party_background       if (cur_town == AREA_ARROYO) then begin                                                    \
                                       if (cur_map_index == MAP_ARROYO_CAVES) then                                             \
                                          PartyMemberBackground := BACKGROUND_CAVE;                                            \
                                       else if (cur_map_index == MAP_ARROYO_WILDERNESS) then begin                             \
                                          if ((game_time_hour >= 2000) or (game_time_hour < 600)) then                         \
                                             PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;                              \
                                          else                                                                                 \
                                             PartyMemberBackground := BACKGROUND_WASTELAND;                                    \
                                       end else                                                                                \
                                          PartyMemberBackground := BACKGROUND_RAIDERS;                                         \
                                    end                                                                                        \
                                    else if (cur_town == AREA_KLAMATH) then begin                                              \
                                       if (cur_map_index == MAP_KLAMATH_RATCAVES) then                                         \
                                          PartyMemberBackground := BACKGROUND_CAVE;                                            \
                                       else if ((cur_map_index == MAP_KLAMATH_GRAZE) or                                        \
                                                (cur_map_index == MAP_KLAMATH_TRAPCAVES)) then begin                           \
                                          if ((game_time_hour >= 2000) or (game_time_hour < 600)) then                         \
                                             PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;                              \
                                          else                                                                                 \
                                             PartyMemberBackground := BACKGROUND_WASTELAND;                                    \
                                       end else                                                                                \
                                          PartyMemberBackground := BACKGROUND1;                                                \
                                    end                                                                                        \
                                    else if (cur_town == AREA_DEN) then begin                                                  \
                                       PartyMemberBackground := BACKGROUND_HUB;                                                \
                                    end                                                                                        \
                                    else if (cur_town == AREA_MODOC) then begin                                                \
                                       if ((cur_map_index == MAP_MODOC_BRAHMINPASTURES) or                                     \
                                           (cur_map_index == MAP_MODOC_GARDEN) or                                              \
                                           (cur_map_index == MAP_GHOST_FARM)) then begin                                       \
                                          if ((game_time_hour >= 2000) or (game_time_hour < 600)) then                         \
                                             PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;                              \
                                          else                                                                                 \
                                             PartyMemberBackground := BACKGROUND_WASTELAND;                                    \
                                       end else if ((cur_map_index == MAP_MODOC_DOWNTHESHITTER) or                             \
                                                    (cur_map_index == MAP_MODOC_WELL)) then                                    \
                                          PartyMemberBackground := BACKGROUND_CAVE;                                            \
                                       else                                                                                    \
                                          PartyMemberBackground := BACKGROUND_HUB;                                             \
                                    end                                                                                        \
                                    else if (cur_town == AREA_VAULT_CITY) then begin                                           \
                                       if (cur_map_index == MAP_VAULT_CITY_VAULT) then                                         \
                                          PartyMemberBackground := BACKGROUND_VAULT;                                           \
                                       else                                                                                    \
                                          PartyMemberBackground := BACKGROUND_ADOBE;                                           \
                                    end                                                                                        \
                                    else if (cur_town == AREA_GECKO) then begin                                                \
                                       if (cur_map_index == MAP_GECKO_POWER_PLANT) then                                        \
                                          PartyMemberBackground := BACKGROUND_MILITARYBS;                                      \
                                       else if (cur_map_index == MAP_GECKO_ACCESS_TUNNELS) then                                \
                                          PartyMemberBackground := BACKGROUND_CAVE;                                            \
                                       else                                                                                    \
                                          PartyMemberBackground := BACKGROUND_HUB;                                             \
                                    end                                                                                        \
                                    else if (cur_town == AREA_BROKEN_HILLS) then begin                                         \
                                       if (cur_map_index == MAP_BROKEN_HILLS2) then begin                                      \
                                          if ((elevation(self_obj) == 1) or (elevation(self_obj) == 2)) then                   \
                                             PartyMemberBackground := BACKGROUND_CAVE;                                         \
                                       end else                                                                                \
                                          PartyMemberBackground := BACKGROUND_JUNKTOWN;                                        \
                                    end                                                                                        \
                                    else if (cur_town == AREA_NEW_RENO) then begin                                             \
                                       if (cur_town == AREA_RENO_STABLES) then begin                                           \
                                          if (elevation(self_obj) == 1) then                                                   \
                                             PartyMemberBackground := BACKGROUND_MILITARYBS;                                   \
                                          else                                                                                 \
                                             PartyMemberBackground := BACKGROUND_FOLLOWER;                                     \
                                       end else                                                                                \
                                          PartyMemberBackground := BACKGROUND_FOLLOWER;                                        \
                                    end                                                                                        \
                                    else if (cur_town == AREA_SIERRA_ARMY_BASE) then begin                                     \
                                       if (cur_map_index == MAP_SIERRA_BATTLE) then begin                                      \
                                          if ((game_time_hour >= 2000) or (game_time_hour < 600)) then                         \
                                             PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;                              \
                                          else                                                                                 \
                                             PartyMemberBackground := BACKGROUND_WASTELAND;                                    \
                                       end else                                                                                \
                                          PartyMemberBackground := BACKGROUND_MILITARYBS;                                      \
                                    end                                                                                        \
                                    else if (cur_town == AREA_VAULT_15) then begin                                             \
                                       if (cur_map_index == MAP_VAULT_15) then                                                 \
                                          PartyMemberBackground := BACKGROUND_VAULT;                                           \
                                       else begin                                                                              \
                                          if ((game_time_hour >= 2000) or (game_time_hour < 600)) then                         \
                                             PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;                              \
                                          else                                                                                 \
                                             PartyMemberBackground := BACKGROUND_WASTELAND;                                    \
                                       end                                                                                     \
                                    end                                                                                        \
                                    else if (cur_town == AREA_NCR) then begin                                                  \
                                       if (cur_map_index == MAP_NCR_GRAZING_LANDS) then begin                                  \
                                          if ((game_time_hour >= 2000) or (game_time_hour < 600)) then                         \
                                             PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;                              \
                                          else                                                                                 \
                                             PartyMemberBackground := BACKGROUND_WASTELAND;                                    \
                                       end else                                                                                \
                                          PartyMemberBackground := BACKGROUND_ADOBE;                                           \
                                    end                                                                                        \
                                    else if (cur_town == AREA_VAULT_13) then begin                                             \
                                       if (cur_map_index == MAP_VAULT_13) then                                                 \
                                          PartyMemberBackground := BACKGROUND_VAULT;                                           \
                                       else                                                                                    \
                                          PartyMemberBackground := BACKGROUND_CAVE;                                            \
                                    end                                                                                        \
                                    else if (cur_town == AREA_MILITARY_BASE) then begin                                        \
                                       if (cur_map_index == MAP_MILITARY_BASE_ENTRANCE) then begin                             \
                                          if ((game_time_hour >= 2000) or (game_time_hour < 600)) then                         \
                                             PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;                              \
                                          else                                                                                 \
                                             PartyMemberBackground := BACKGROUND_WASTELAND;                                    \
                                       end else                                                                                \
                                          PartyMemberBackground := BACKGROUND_CAVE;                                            \
                                    end                                                                                        \
                                    else if (cur_town == AREA_REDDING) then begin                                              \
                                       if ((cur_map_index == MAP_REDDING_DTOWN_TUNNEL) or                                      \
                                           (cur_map_index == MAP_REDDING_MINE_TUNNEL) or                                       \
                                           (cur_map_index == MAP_REDDING_WANAMINGO_12)) then                                   \
                                          PartyMemberBackground := BACKGROUND_CAVE;                                            \
                                       else                                                                                    \
                                          PartyMemberBackground := BACKGROUND_HUB;                                             \
                                    end                                                                                        \
                                    else if (cur_town == AREA_SAN_FRANCISCO) then begin                                        \
                                       PartyMemberBackground := BACKGROUND_FOLLOWER;                                           \
                                    end                                                                                        \
                                    else if (cur_town == AREA_NAVARRO) then begin                                              \
                                       if (elevation(self_obj) == 0) then                                                      \
                                          PartyMemberBackground := BACKGROUND_JUNKTOWN;                                        \
                                       else if (elevation(self_obj) == 1) then                                                 \
                                          PartyMemberBackground := BACKGROUND_MILITARYBS;                                      \
                                       else begin                                                                              \
                                          if ((game_time_hour >= 2000) or (game_time_hour < 600)) then                         \
                                             PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;                              \
                                          else                                                                                 \
                                             PartyMemberBackground := BACKGROUND_WASTELAND;                                    \
                                       end                                                                                     \
                                    end                                                                                        \
                                    else                                                                                       \
                                       Call Check_Next_Third_Of_Areas

procedure Check_Next_Third_Of_Areas begin
   if (cur_town == AREA_THE_ENCLAVE) then begin
      PartyMemberBackground := BACKGROUND_ENCLAVE;
   end

   else if (cur_town == AREA_ABBEY) then begin
      if (cur_map_index == MAP_ABBEY_CAVE) then begin
         PartyMemberBackground := BACKGROUND_CAVE;
      /*end else if (cur_map_index == MAP_ABBEY_OUTSIDE) then begin
         if (elevation(self_obj) == 0) then begin
            if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
               PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
            else
               PartyMemberBackground := BACKGROUND_WASTELAND;
         end else begin
            PartyMemberBackground := BACKGROUND_FOLLOWER;
         end*/
      end else begin
         PartyMemberBackground := BACKGROUND_FOLLOWER;
      end
   end

   else if (cur_town == AREA_PRIMITIVE_TRIBE) then begin
      if ((cur_map_index == MAP_PRIMITIVE_TRIBE2) and (dude_elevation == 1)) then
         PartyMemberBackground := BACKGROUND_CAVE;
      else begin
         if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
            PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
         else
            PartyMemberBackground := BACKGROUND_WASTELAND;
      end
   end

   else if (cur_town == AREA_EPA) then begin
      if ((cur_map_index == MAP_EPA_SUBLEVELS_1) or (cur_map_index == MAP_EPA_SUBLEVELS_2) or (cur_map_index == MAP_EPA_SECRET)) then begin
         PartyMemberBackground := BACKGROUND_VAULT2;
      end else begin
         if ((dude_elevation == 1) or (dude_elevation == 2)) then
            PartyMemberBackground := BACKGROUND_MAINTENANCE;
         else if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
            PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
         else
            PartyMemberBackground := BACKGROUND_WASTELAND;
      end
   end

   else if (cur_town == AREA_SAN_FRAN_SUB) then begin
       if (dude_elevation == 0) then begin
          if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
             PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
          else
             PartyMemberBackground := BACKGROUND_WASTELAND;
       end else begin
          PartyMemberBackground := BACKGROUND_SAN_FRAN_SUB;
       end
   end

   else if (cur_town == AREA_GHOST_TOWN) then begin
      if ((cur_map_index == MAP_GHOST_CAVERN) or (cur_map_index == MAP_GHOST_LAKE)) then
         PartyMemberBackground := BACKGROUND_CAVE;
   end

   else if (cur_town == AREA_CAR_OUTTA_GAS) then begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_ARROYO_DESTROYED) then begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_KLAMATH_TOXIC_CAVES) then begin
      if (elevation(self_obj) == 2) then
         PartyMemberBackground := BACKGROUND_MILITARYBS;
      else
         PartyMemberBackground := BACKGROUND_CAVE;
   end

   else if (cur_town == AREA_DEN_SLAVE_RUN) then begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_RAIDERS) then begin
      if (cur_map_index == MAP_RAIDERS_CAMP1) then begin
         if (elevation(self_obj) == 0) then begin
            if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
               PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
            else
               PartyMemberBackground := BACKGROUND_WASTELAND;
         end else
            PartyMemberBackground := BACKGROUND_NECROPOLIS;
      end
      else
         PartyMemberBackground := BACKGROUND_CAVE;
   end

   else if (cur_town == AREA_RND_DESERT) then begin
       if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
          PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
       else
          PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_RND_MOUNTAIN) then begin
      if (elevation(self_obj) == 1) then
         PartyMemberBackground := BACKGROUND_CAVE;
      else begin
         if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
            PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
         else
            PartyMemberBackground := BACKGROUND_WASTELAND;
      end
   end

   else if (cur_town == AREA_RND_CITY) then begin
      PartyMemberBackground := BACKGROUND_NECROPOLIS;
   end

   else if (cur_town == AREA_RND_COAST) then begin
      if (elevation(self_obj) == 1) then
         PartyMemberBackground := BACKGROUND_CAVE;
      else begin
         if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
            PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
         else
            PartyMemberBackground := BACKGROUND_WASTELAND;
      end
   end

   else if (cur_town == AREA_GOLGATHA) then begin
      if (elevation(self_obj) == 1) then
         PartyMemberBackground := BACKGROUND_CAVE;
      else begin
         if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
            PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
         else
            PartyMemberBackground := BACKGROUND_WASTELAND;
      end
   end

   else
      call Check_Second_Third_Of_Areas;
end

procedure Check_Second_Third_Of_Areas begin
   if (cur_town == AREA_SPECIAL_RND_WHALE) then begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_WOODSMAN) then begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_HEAD) then begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_SHUTTLE) then begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_UNWASHED) then begin
      PartyMemberBackground := BACKGROUND_NECROPOLIS;
   end

   else if (cur_town == AREA_SPECIAL_RND_BRIDGE) then begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_CAFE) then begin
      PartyMemberBackground := BACKGROUND_NECROPOLIS;
   end

   else if (cur_town == AREA_SPECIAL_RND_HOLY1) then begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_HOLY2) then begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_GUARDIAN) then begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_TOXIC) then begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_PARIAH) then begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_MAD_COW) then begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_CARAVAN_ENCOUNTER) then begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end

   else
      call Check_Final_Third_Of_Areas;
end

procedure Check_Final_Third_Of_Areas begin
   if (cur_town == AREA_FAKE_VAULT_13A) then begin
      if (elevation(self_obj) == 1) then
         PartyMemberBackground := BACKGROUND_CAVE;
      else begin
         if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
            PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
       else
            PartyMemberBackground := BACKGROUND_WASTELAND;
      end
   end

   else if (cur_town == AREA_FAKE_VAULT_13B) then begin
      if (elevation(self_obj) == 1) then
         PartyMemberBackground := BACKGROUND_CAVE;
      else begin
         if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
            PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
         else
            PartyMemberBackground := BACKGROUND_WASTELAND;
      end
   end

   else if (cur_town == AREA_SHADOW_MAPS) then begin
      if (elevation(self_obj) == 1) then
         PartyMemberBackground := BACKGROUND_CAVE;
      else begin
         if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
            PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
         else
            PartyMemberBackground := BACKGROUND_WASTELAND;
      end
   end

   else if (cur_town == AREA_RENO_STABLES) then begin
      if (elevation(self_obj) == 1) then
         PartyMemberBackground := BACKGROUND_MILITARYBS;
      else
         PartyMemberBackground := BACKGROUND_HUB;
   end

   else if (cur_town == AREA_HUBOLOGIST_STASH) then begin
      if ( (elevation(self_obj) == 1) or (elevation(self_obj) == 2) ) then
         PartyMemberBackground := BACKGROUND_MILITARYBS;
      else begin
         if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
            PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
         else
            PartyMemberBackground := BACKGROUND_WASTELAND;
      end
   end
   else begin
      if ((game_time_hour >= 2000) or (game_time_hour < 600)) then
         PartyMemberBackground := BACKGROUND_WASTELAND_NIGHT;
      else
         PartyMemberBackground := BACKGROUND_WASTELAND;
   end
end

#endif // PARTYBKG_H
