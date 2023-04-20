/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef CVGENENC_H
#define CVGENENC_H
/*
    This file contains generic information for the cave random encounters
*/

variable begin
   encounter_pid1 := 0;
   encounter_pid2 := 0;
   encounter_pid3 := 0;
   encounter_pid4 := 0;
   encounter_pid5 := 0;
   encounter_pid6 := 0;

   encounter_sid1 := 0;
   encounter_sid2 := 0;
   encounter_sid3 := 0;
   encounter_sid4 := 0;
   encounter_sid5 := 0;
   encounter_sid6 := 0;

   active_encounter_pids := 0;
   total_encounter_mobs := 0; //Per area in map


   special_theif_encounter := 0;

   choose_enc_pid := 0;
   choose_enc_sid := 0;
end

procedure Choose_Encounter begin
    variable val;

    special_theif_encounter := 0;
    val := Random(1, 13);
    if (val == 1) then begin
        active_encounter_pids := 1;
        if (dude_level < 6) then begin
            encounter_pid1 := PID_GECKO_SMALL;
            encounter_sid1 := SCRIPT_ECGECKO;
            total_encounter_mobs := Random(3, 5);
        end else if (dude_level < 12) then begin
            encounter_pid1 := PID_TOUGH_GECKO_SMALL;
            encounter_sid1 := SCRIPT_ECGECKO;
            total_encounter_mobs := Random(3, 5);
        end else if (dude_level < 13) then begin
            encounter_pid1 := PID_FIRE_GECKO;
            encounter_sid1 := SCRIPT_ECGECKO;
            total_encounter_mobs := Random(3, 5);
        end else begin
            encounter_pid1 := PID_TOUGH_FIRE_GECKO;
            encounter_sid1 := SCRIPT_ECGECKO;
            total_encounter_mobs := Random(3, 5);
        end
    end else if (val == 2) then begin
        active_encounter_pids := 1;
        if (dude_level < 5) then begin
            encounter_pid1 := PID_GOLDEN_GECKO;
            encounter_sid1 := SCRIPT_ECGECKO;
            total_encounter_mobs := Random(3, 5);
        end else if (dude_level < 12) then begin
            encounter_pid1 := PID_TOUGH_GOLDEN_GECKO;
            encounter_sid1 := SCRIPT_ECGECKO;
            total_encounter_mobs := Random(3, 5);
        end else if (dude_level < 13) then begin
            encounter_pid1 := PID_FIRE_GECKO;
            encounter_sid1 := SCRIPT_ECGECKO;
            total_encounter_mobs := Random(3, 5);
        end else begin
            encounter_pid1 := PID_TOUGH_FIRE_GECKO;
            encounter_sid1 := SCRIPT_ECGECKO;
            total_encounter_mobs := Random(3, 5);
        end
    end else if (val == 3) then begin
        active_encounter_pids := 1;
        encounter_pid1 := PID_SMALL_RADSCORPION;
        encounter_sid1 := SCRIPT_ECSCORP;
        total_encounter_mobs := Random(3, 5);
    end else if (val == 4) then begin
        active_encounter_pids := 1;
        encounter_pid1 := PID_LARGE_RADSCORPION;
        encounter_sid1 := SCRIPT_ECSCORP;
        total_encounter_mobs := Random(3, 5);
    end else if (val == 5) then begin
        active_encounter_pids := 1;
        encounter_pid1 := PID_SMALL_DEATHCLAW;
        encounter_sid1 := SCRIPT_ZCLDTHCL;
        total_encounter_mobs := Random(3, 5);
    end else if (val == 6) then begin
        active_encounter_pids := 1;
        encounter_pid1 := PID_LARGE_DEATHCLAW;
        encounter_sid1 := SCRIPT_ZCLDTHCL;
        total_encounter_mobs := 5;
    end else if (val == 7) then begin
        active_encounter_pids := 1;
        encounter_pid1 := PID_MUTATED_MOLE_RAT;
        encounter_sid1 := SCRIPT_ECRAT;
        total_encounter_mobs := Random(3, 5);
    end else if (val == 8) then begin
        active_encounter_pids := 1;
        encounter_pid1 := PID_MUTATED_PIG_RAT;
        encounter_sid1 := SCRIPT_ECRAT;
        total_encounter_mobs := Random(4, 5);
    end else if (val == 9) then begin
        active_encounter_pids := 2;
        if (dude_level < 5) then begin
            encounter_pid1 := PID_GECKO_SMALL;
            encounter_pid2 := PID_GOLDEN_GECKO;
            encounter_sid1 := SCRIPT_ECGECKO;
            encounter_sid2 := SCRIPT_ECGECKO;
            total_encounter_mobs := Random(3, 5);
        end else begin
            encounter_pid1 := PID_TOUGH_GECKO_SMALL;
            encounter_pid2 := PID_TOUGH_GOLDEN_GECKO;
            encounter_sid1 := SCRIPT_ECGECKO;
            encounter_sid2 := SCRIPT_ECGECKO;
            if (dude_level > 12) then begin
                active_encounter_pids := 3;
                encounter_pid3 := PID_FIRE_GECKO;
                encounter_sid3 := SCRIPT_ECGECKO;
            end else if (dude_level > 15) then begin
                active_encounter_pids := 3;
                encounter_pid3 := PID_TOUGH_FIRE_GECKO;
                encounter_sid3 := SCRIPT_ECGECKO;
            end
            total_encounter_mobs := 5;
        end
    end else if (val == 10) then begin
        active_encounter_pids := 2;
        encounter_pid1 := PID_SMALL_RADSCORPION;
        encounter_pid2 := PID_LARGE_RADSCORPION;
        encounter_sid1 := SCRIPT_ECSCORP;
        encounter_sid2 := SCRIPT_ECSCORP;
        total_encounter_mobs := Random(3, 5);
    end else if (val == 11) then begin
        active_encounter_pids := 2;
        encounter_pid1 := PID_SMALL_DEATHCLAW;
        encounter_pid2 := PID_LARGE_DEATHCLAW;
        encounter_sid1 := SCRIPT_ZCLDTHCL;
        encounter_sid2 := SCRIPT_ZCLDTHCL;
        total_encounter_mobs := 5;
    end else if (val == 12) then begin
        active_encounter_pids := 2;
        encounter_pid1 := PID_MUTATED_MOLE_RAT;
        encounter_pid1 := PID_MUTATED_PIG_RAT;
        encounter_sid1 := SCRIPT_ECRAT;
        encounter_sid2 := SCRIPT_ECRAT;
        total_encounter_mobs := 5;
    end else if (val == 13) then begin
        if (stat_success(dude_obj, STAT_lu, 0)) then begin
            special_theif_encounter := 1;
            active_encounter_pids := 2;
            if (dude_level < 5) then begin
                encounter_pid1 := PID_MYSTERIOUS_STRANGER_MALE;
                encounter_pid2 := PID_MYSTERIOUS_STRANGER_FEMALE;
                encounter_sid1 := SCRIPT_ECROBBER;
                encounter_sid2 := SCRIPT_ECROBBER;
                total_encounter_mobs := Random(2, 3);
            end else if (dude_level < 11) then begin
                encounter_pid1 := PID_BOUNTY_MALE_7_12;
                encounter_pid2 := PID_BOUNTY_FEMALE_7_12;
                encounter_sid1 := SCRIPT_ECROBBER;
                encounter_sid2 := SCRIPT_ECROBBER;
                total_encounter_mobs := Random(3, 4);
            end else begin
                encounter_pid1 := PID_BOUNTY_MALE_13_18;
                encounter_pid2 := PID_BOUNTY_FEMALE_13_18;
                encounter_sid1 := SCRIPT_ECROBBER;
                encounter_sid2 := SCRIPT_ECROBBER;
                total_encounter_mobs := Random(3, 4);
            end
        end
    end
end

procedure Choose_Pid begin
    variable val;

    val := Random(1, active_encounter_pids);
    if (val == 1) then begin
        choose_enc_pid := encounter_pid1;
        choose_enc_sid := encounter_sid1;
    end else if (val == 2) then begin
        choose_enc_pid := encounter_pid2;
        choose_enc_sid := encounter_sid2;
    end else if (val == 3) then begin
        choose_enc_pid := encounter_pid3;
        choose_enc_sid := encounter_sid3;
    end else if (val == 4) then begin
        choose_enc_pid := encounter_pid4;
        choose_enc_sid := encounter_sid4;
    end else if (val == 5) then begin
        choose_enc_pid := encounter_pid5;
        choose_enc_sid := encounter_sid5;
    end else if (val == 6) then begin
        choose_enc_pid := encounter_pid6;
        choose_enc_sid := encounter_sid6;
    end
    else begin
        choose_enc_pid := encounter_pid6;
        choose_enc_sid := encounter_sid6;
    end
end

procedure placeCritter(variable pid, variable sid, variable baseTile) begin
    variable tile;
    variable obj;
    variable i;

    if (pid >= 1) then begin
        tile := tile_num_in_direction(baseTile, Random(0, 5), Random(1, 3));

        obj := create_object_sid(pid, 0, 0, sid);
        if (cur_map_index != MAP_RND_CAVERN5) then
            critter_attempt_placement(obj, tile, 1);
        else
            critter_attempt_placement(obj, tile, 2);

        while ((tile_distance(tile_num(obj),baseTile) > 5) and (i < 4)) do begin
           tile := tile_num_in_direction(baseTile, Random(0, 5), Random(1, 2));
           ndebug("tile_num == "+tile);
           i+=1;
        end

        if ((i >= 4) and (tile > 0)) then begin
           if (cur_map_index != MAP_RND_CAVERN5) then
               critter_attempt_placement(obj,baseTile,1);
           else
               critter_attempt_placement(obj,baseTile,2);
        end

        if (tile_distance(tile_num(obj),baseTile) > 5) then begin
           destroy_object(obj);
           ndebug("Couldn't find Safe spot. Destroying Ptr.");
        end
    end
    else begin
        ndebug("Pid < 1. Pid == "+pid+".");
    end
end

#endif // CVGENENC_H
