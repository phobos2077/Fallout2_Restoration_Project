/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef BASE_H
#define BASE_H

#ifndef tile_in_box
#define tile_in_box(x, ul, ur, lr, ll)                tile_in_tile_rect(ul, ur, ll, lr, x)
#endif

#define PET_1_PID                   PID_TOUGH_DEATHCLAW
#define PET_2_PID                   PID_TOUGH_FIRE_GECKO
#define PET_3_PID                   PID_NASTY_FLOATER
#define PET_4_PID                   PID_MUTATED_MOLE_RAT

#define PET_1_AI                    AI_GECKO
#define PET_2_AI                    AI_FIRE_GECKOS
#define PET_3_AI                    AI_FLOATER
#define PET_4_AI                    AI_MUTATED_RAT

#define pid_is_poisoning_pid(x)     ((x) == PID_MUTATED_MOLE_RAT)
#define pid_is_radiating_pid(x)     ((x) == PID_MUTATED_MOLE_RAT)

#define pets_released               (4)
#define last_pet_mvar               (MVAR_MELCHIOR_PET_NUM_4)
#define Portal_Hex_1                (13928) // throw tile 1
#define Portal_Hex_2                (13132)
#define Portal_Hex_3                (14120) // throw tile 2
#define Portal_Hex_4                (13319)
#define number_to_throw_tile(x)     ((Portal_Hex_1 * (((x) % 4) <= 1)) +     \
                                     (Portal_Hex_3 * (((x) % 4) >= 2)))
#define number_to_portal_tile(x)    ((Portal_Hex_1 * ((x) == 0)) +     \
                                     (Portal_Hex_2 * ((x) == 1)) +     \
                                     (Portal_Hex_3 * ((x) == 2)) +     \
                                     (Portal_Hex_4 * ((x) == 3)))
#define number_to_portal_num(x)     ((x) % pets_released)
#define number_to_portal(x)         number_to_portal_tile(number_to_portal_num(x))
#define pid_no_goo_effect(x)        (((x) == PET_1_PID) or     \
                                     ((x) == PET_2_PID) or     \
                                     ((x) == PET_3_PID) or     \
                                     ((x) == PET_4_PID) or     \
                                     ((x) == PID_MELCHOIR))
#define obj_no_goo_effect(x)        (has_trait(TRAIT_OBJECT,(x),OBJECT_TEAM_NUM) == TEAM_SUPER_MUTANT)
#define tile_has_rad_goo(x,elev)    ((tile_contains_pid_obj((x), elev, PID_RAD_GOO_1) != 0) or   \
                                     (tile_contains_pid_obj((x), elev, PID_RAD_GOO_2) != 0) or   \
                                     (tile_contains_pid_obj((x), elev, PID_RAD_GOO_3) != 0) or   \
                                     (tile_contains_pid_obj((x), elev, PID_RAD_GOO_4) != 0))
#define portal_has_pet(x)           ((tile_contains_pid_obj((x), self_elevation, PET_1_PID) != 0) or     \
                                     (tile_contains_pid_obj((x), self_elevation, PET_2_PID) != 0) or     \
                                     (tile_contains_pid_obj((x), self_elevation, PET_3_PID) != 0) or     \
                                     (tile_contains_pid_obj((x), self_elevation, PET_4_PID) != 0) or     \
                                     (tile_contains_pid_obj((x), self_elevation, PID_MELCHOIR) != 0))
#define pid_to_mvar_num(x)          ((MVAR_MELCHIOR_PET_NUM_1 * ((x) == PET_1_PID)) +     \
                                     (MVAR_MELCHIOR_PET_NUM_2 * ((x) == PET_2_PID)) +     \
                                     (MVAR_MELCHIOR_PET_NUM_3 * ((x) == PET_3_PID)) +     \
                                     (MVAR_MELCHIOR_PET_NUM_4 * ((x) == PET_4_PID)))
#define pid_to_ai(x)                ((((x) == PET_1_PID) * PET_1_AI) +       \
                                     (((x) == PET_2_PID) * PET_2_AI) +       \
                                     (((x) == PET_3_PID) * PET_3_AI) +       \
                                     (((x) == PET_4_PID) * PET_4_AI))
#define current_portal_num          (map_var(MVAR_PORTAL_TILE_NUM) % 4)
#define current_portal_tile         (number_to_portal_tile(current_portal_num))
#define inc_portal_num              inc_map_var(MVAR_PORTAL_TILE_NUM)

#define Generator_Fixed             (base_power)

#define base_lighting               if (Generator_Fixed) then begin  \
                                       Military_Base_Lighting;       \
                                    end else                         \
                                       Cavern_Lighting
#define self_in_portal_area         (tile_in_box(self_tile, 12937, 12929, 14929, 14937) or   \
                                     tile_in_box(self_tile, 12722, 12716, 14716, 14722))
#define clump_is_free(the_tile)     ((tile_is_blocked(the_tile, self_elevation) == false) and (tile_is_blocked(tile_num_in_direction(the_tile, 0, 1), self_elevation) == false) and (tile_is_blocked(tile_num_in_direction(the_tile, 1, 1), self_elevation) == false) and (tile_is_blocked(tile_num_in_direction(the_tile, 2, 1), self_elevation) == false) and (tile_is_blocked(tile_num_in_direction(the_tile, 3, 1), self_elevation) == false) and (tile_is_blocked(tile_num_in_direction(the_tile, 4, 1), self_elevation) == false) and (tile_is_blocked(tile_num_in_direction(the_tile, 5, 1), self_elevation) == false))

// base flags
#define base_power_bit              bit_1
#define base_opened_bit             bit_2

#define base_power                  (gvar_bit(GVAR_MILITARY_BASE_FLAGS, base_power_bit))
#define set_base_power              set_gvar_bit_on(GVAR_MILITARY_BASE_FLAGS, base_power_bit)

#define base_opened                 (gvar_bit(GVAR_MILITARY_BASE_FLAGS, base_opened_bit))
#define set_base_opened             set_gvar_bit_on(GVAR_MILITARY_BASE_FLAGS, base_opened_bit)

#endif // BASE_H
