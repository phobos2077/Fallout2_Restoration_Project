/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef ENC_H
#define ENC_H

#define met_vice_pres (false)

#define ENCLAVE_DESTRUCTION_TIME        (10*ONE_GAME_MINUTE)

variable Enclave_Countdown_Variable;
variable Enclave_Minute;
variable Enclave_Second;

#define Show_Time(x,y)          if (x == 1) then                                                                                \
                                    if (y == 1) then                                                                            \
                                        display_msg(x+message_str(SCRIPT_DEPOLV1,114)+y+message_str(SCRIPT_DEPOLV1,115));       \
                                    else                                                                                        \
                                        display_msg(x+message_str(SCRIPT_DEPOLV1,114)+y+message_str(SCRIPT_DEPOLV1,113));       \
                                else if (y == 1) then                                                                           \
                                    display_msg(x+message_str(SCRIPT_DEPOLV1,112)+y+message_str(SCRIPT_DEPOLV1,115));           \
                                else                                                                                            \
                                    display_msg(x+message_str(SCRIPT_DEPOLV1,112)+y+message_str(SCRIPT_DEPOLV1,113))

#define check_countdown         if (global_var(GVAR_ENCLAVE_COUNTDOWN) != 0) then begin                                         \
                                    Enclave_Countdown_Variable:=game_time - global_var(GVAR_ENCLAVE_COUNTDOWN);                 \
                                    if (Enclave_Countdown_Variable >= ENCLAVE_DESTRUCTION_TIME) then begin                      \
                                        play_gmovie(DERRICK_MOVIE);                                                             \
                                        signal_end_game;                                                                        \
                                    end                                                                                         \
                                    else begin                                                                                  \
                                        Enclave_Minute:=(ENCLAVE_DESTRUCTION_TIME - Enclave_Countdown_Variable)/ONE_GAME_MINUTE;\
                                        Enclave_Second:=((ENCLAVE_DESTRUCTION_TIME - Enclave_Countdown_Variable) % ONE_GAME_MINUTE)/ONE_GAME_SECOND;   \
                                        display_msg(g_mstr(1012));                                                              \
                                        Show_Time(Enclave_Minute,Enclave_Second);                                               \
                                    end                                                                                         \
                                end

#define check_poisoning         if (global_var(GVAR_ENCLAVE_ALARM) == ALARM_TOXIN) then display_msg(g_mstr(1013))


// Closes and locks all blast doors in the final fight. If Granite has joined, doesn't close the door between him and Frank.
procedure final_fight_lock_doors begin
    // door_pid > tile
    variable always_close, granite_close, pid, tile, door;
    always_close := {
        33556007: 22701, // down the stairs / to verti pad
        33556008: 19266 // between Granite and exit_grid
    };
    granite_close := {33556008: 19280}; // between Frank and Granite

    foreach (pid: tile in always_close) begin
        door := tile_contains_pid_obj(tile, elevation(self_obj), pid);
        obj_close(door);
        obj_lock(door);
    end
    if (GVAR_ENCLAVE_GRANITE_JOINED != 1) then begin
        foreach (pid: tile in granite_close) begin
            door := tile_contains_pid_obj(tile, elevation(self_obj), pid);
            obj_close(door);
            obj_lock(door);
        end
    end
end

#endif // ENC_H
