#ifndef CONTAINERS_H
#define CONTAINERS_H

#include "scripts.h"
#include "define.h"
#ifndef NAME
  #define NAME                    SCRIPT_CONTAINR
#endif
#include "../headers/command.h"

/* Defines and Macros */

/* States */
#define STATE_ACTIVE                    (0)
#define STATE_INACTIVE                  (1)
#define STATE_WOOD                      (0)
#define STATE_METAL                     (1)
#define STATE_FRIDGE                    (2)
#define STATE_OTHER                     (3)
#define STATE_NON_DESTROY               (2)
#define STATE_STANDARD_LOCK             (0)
#define STATE_ELECTRIC_LOCK             (1)

#define box_mstr(x) (message_str(SCRIPT_CONTAINR,x))
#ifdef custom_mstr
  #define my_mstr(x) (message_str(custom_mstr,x))
#else
  #define my_mstr box_mstr
#endif

/* Penalties for Lock difficulty based on whether or not you are using lockpicks. */
#ifndef Lock_Bonus
  #define Lock_Bonus                      (-20)
#endif

/* Penalties for disarming the trap */
#ifndef Trap_Bonus
  #define Trap_Bonus                      (0)
#endif

/* How many blasts can the door take before destorying */
#ifndef DOOR_STRENGTH
  #define DOOR_STRENGTH                   (1)
#endif

procedure start; // just keeping the same order
procedure use_p_proc;
#ifndef no_pickup
  procedure pickup_p_proc;
#endif
#include "doors_containers.h"

#ifndef no_pickup
  #ifndef custom_pickup_p_proc
    procedure pickup_p_proc begin
      call use_p_proc;
    end
  #endif
#endif

/***************************************************************************
This is cursory glance description that the player will receive should
he just pass the Action Cursor over. Examines which give more information
need to be in the description_p_proc procedure.
***************************************************************************/
#ifndef custom_look_at_p_proc
  procedure look_at_p_proc begin
    script_overrides;
    if (DOOR_STATUS == STATE_WOOD) then begin
      display_msg(my_mstr(100));
    end
    else if (DOOR_STATUS == STATE_FRIDGE) then begin
      display_msg(my_mstr(212));
    end
    else begin
      display_msg(my_mstr(101));
    end
  end
#endif

/******************************************************************************************
Should the door sustain damage from anything (ie, dynamite, plastic explosives, rockets,
or any other forms of damage), this procedure will be called to destroy the door and
free up the space.
******************************************************************************************/
#ifndef custom_damage_p_proc
  procedure damage_p_proc begin
    variable Trap_Damage;
    /************ Wood Door ****************/
    
    if (weapon_dmg_type(target_obj) == DMG_explosion) then begin
      if (DOOR_STATUS == STATE_WOOD) then begin
        if (local_var(LVAR_Trapped) == STATE_ACTIVE) then begin
          set_local_var(LVAR_Trapped, STATE_INACTIVE);
          set_local_var(LVAR_Locked, STATE_INACTIVE);
          Trap_Damage:=random(MIN_DAMAGE,MAX_DAMAGE);
          explosion(self_tile, self_elevation, Trap_Damage);
          destroy_object(self_obj);
        end
        
        else begin
          set_local_var(LVAR_Trapped, STATE_INACTIVE);
          set_local_var(LVAR_Locked, STATE_INACTIVE);
          destroy_object(self_obj);
        end
      end
      
      /************ Metal Door ****************/
      
      else if ((DOOR_STATUS == STATE_METAL) or (DOOR_STATUS == STATE_FRIDGE)) then begin
        set_local_var(LVAR_Explosion_Attempts,local_var(LVAR_Explosion_Attempts)+1);
        if (local_var(LVAR_Trapped) == STATE_ACTIVE) then begin
          set_local_var(LVAR_Locked, STATE_INACTIVE);
          Trap_Damage:=random(MIN_DAMAGE,MAX_DAMAGE);
          explosion(self_tile, self_elevation, Trap_Damage);
        end
        
        else if (local_var(LVAR_Explosion_Attempts) > DOOR_STRENGTH) then begin
          set_local_var(LVAR_Trapped, STATE_INACTIVE);
          set_local_var(LVAR_Locked,STATE_INACTIVE);
          destroy_object(self_obj);
        end
      end
    end
    else begin
      display_msg(my_mstr(193));
    end
  end
#endif

/**********************************************************************************
Should the player examine the door closely, then he should be allowed a lockpick
roll, a traps roll and a perception roll. Depending on which rolls are made will
determine how much information about the door will be given.
**********************************************************************************/
#ifndef custom_description_p_proc
  procedure description_p_proc begin
    script_overrides;
    if ((local_var(LVAR_Locked) == STATE_ACTIVE) and (local_var(LVAR_Trapped) == STATE_ACTIVE)) then begin
      call Look_Traps_And_Locks;
    end
    else if (local_var(LVAR_Trapped) == STATE_ACTIVE) then begin
      call Look_Traps;
    end
    else if (local_var(LVAR_Locked) == STATE_ACTIVE) then begin
      call Look_Locks;
    end
    else if (DOOR_STATUS == STATE_WOOD) then begin
      display_msg(my_mstr(100));
    end
    else if (DOOR_STATUS == STATE_FRIDGE) then begin
      display_msg(my_mstr(212));
    end
    else begin
      display_msg(my_mstr(101));
    end
  end
#endif

/********************************************************************
Any time that a critter tries to use this door will call this
procedure. it will check to see if the door is trapped and locked.
********************************************************************/
#ifndef custom_use_p_proc
  procedure use_p_proc begin
    /* Trap_Roll is a global variable to this script, defined at the beginning
    of the script. */
    
    Traps_Roll:=roll_vs_skill(source_obj,SKILL_TRAPS,Trap_Bonus);
    
    if (local_var(LVAR_Trapped) == STATE_ACTIVE) then begin
      if (is_success(Traps_Roll)) then begin
        script_overrides;
        set_local_var(LVAR_Found_Trap,1);
        reg_anim_clear(source_obj);
        
        if (source_obj == dude_obj) then begin
          display_msg(my_mstr(204));
        end
        else begin
          display_msg(my_mstr(205));
        end
      end
      
      else begin
        if (obj_is_locked(self_obj)) then begin
          script_overrides;
          display_msg(my_mstr(203));
          call Damage_Critter;
        end
        else begin
          call Damage_Critter;
        end
      end
    end
    
    else if (obj_is_locked(self_obj)) then begin
      script_overrides;
      display_msg(my_mstr(203));
    end
  end
#endif
  
#endif // CONTAINERS_H
