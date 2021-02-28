/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef MODREACT_H
#define MODREACT_H

/* This set of procedures will find out what the reaction level is. Additionally,
it will find out what the reaction level is in terms of Good, Neutral, or Bad.
It will also write in how to modify the reaction level by a level. */

variable Static_Reaction:=0;            // This adds in Reputations, Perks, Karma, and such
variable Evil_Critter:=0;               // 0 == Good Critter, 1 == Bad Critter
variable Slavery_Tolerant:=2;           // 0 == very intolerant, 1 == intolerant, 2 == tolerant, 3 == Happy
variable Karma_Perception:=0;           // see defines for values
variable reaction_bonus_town_rep:=0;
variable reaction_bonus_karma:=0;

/* Slave Tolerance */
#define SLAVE_VERY_INTOLERANT           (0)
#define SLAVE_INTOLERANT                (1)
#define SLAVE_TOLERANT                  (2)
#define SLAVE_PROUD                     (3)

/* Karma Perception (in 0.x%) */
#define KARMA_PERCEPTION0               (1)
#define KARMA_PERCEPTION1               (10)
#define KARMA_PERCEPTION2               (20)
#define KARMA_PERCEPTION3               (30)
#define KARMA_PERCEPTION4               (40)
#define KARMA_PERCEPTION5               (50)
#define KARMA_PERCEPTION6               (60)
#define KARMA_PERCEPTION7               (70)
#define KARMA_PERCEPTION8               (80)
#define KARMA_PERCEPTION9               (90)
#define KARMA_PERCEPTION10              (100)

/* Misc. Defines */
#define KARMA_MODIFIER                  (1000)
#define TOWN_REP_MODIFIER               (2)
#define CHARISMA_MODIFIER               (5)
#define AVERAGE_CHARISMA                (5)
#define CRITTER_CHARISMA                (get_critter_stat(self_obj,STAT_ch))
#define SAME_SEX_APPEAL                 (-20)
#define OPPOSITE_SEX_APPEAL             (20)

#define has_sex_appeal                  has_trait(TRAIT_TRAIT,dude_obj,TRAIT_sex_appeal)

/* Reaction Level */
#define REACTION_LEVEL_ABYSMAL          (-4)
#define REACTION_LEVEL_HORRIBLE         (-3)
#define REACTION_LEVEL_BAD              (-2)
#define REACTION_LEVEL_POOR             (-1)
#define REACTION_LEVEL_NEUTRAL          (0)
#define REACTION_LEVEL_DECENT           (1)
#define REACTION_LEVEL_GOOD             (2)
#define REACTION_LEVEL_GREAT            (3)
#define REACTION_LEVEL_EXCELLENT        (4)

/* Reaction Value Min */
#define REACTION_BOTTOM                 (-100)
#define REACTION_ABYSMAL                (-75)
#define REACTION_HORRIBLE               (-50)
#define REACTION_BAD                    (-25)
#define REACTION_POOR                   (-10)
#define REACTION_NEUTRAL                (0)
#define REACTION_DECENT                 (10)
#define REACTION_GOOD                   (25)
#define REACTION_GREAT                  (50)
#define REACTION_EXCELLENT              (75)
#define REACTION_TOP                    (100)

/* Reaction Bonus */
#define REACTION_BONUS_CHARISMA         ((get_critter_stat(dude_obj,STAT_ch) - CRITTER_CHARISMA) * CHARISMA_MODIFIER)

#ifndef TOWN_REPUTATION
   #define TOWN_REPUTATION              global_var(TOWN_REP_VAR)
#endif

#define REACTION_BONUS_COMP_KARMA       (check_general_rep * Karma_Perception * (has_trait(TRAIT_PERK,dude_obj,PERK_karma_beacon_perk) + 1))
#define REACTION_BONUS_BERSERKER        (-20)
#define REACTION_BONUS_CHAMPION         (20)
#define REACTION_BONUS_CHILDKILLER      (-30)
#define REACTION_BONUS_SLAVER           (-25)
#define REACTION_BONUS_SLAVE_OWNER      (-20)
#define REACTION_BONUS_PRESENCE         (10 * dude_presence)

#define REACTION_BONUS_HOLY             (20)
#define REACTION_BONUS_GUARDIAN         (15)
#define REACTION_BONUS_SHIELD           (10)
#define REACTION_BONUS_DEFENDER         (5)
#define REACTION_BONUS_WANDERER         (0)
#define REACTION_BONUS_BETRAYER         (-5)
#define REACTION_BONUS_SWORD            (-10)
#define REACTION_BONUS_SCOURGE          (-15)
#define REACTION_BONUS_DEMON            (-20)

#define TINY_DROP                       (-5)
#define MINOR_DROP                      (-10)
#define MODERATE_DROP                   (-20)
#define MAJOR_DROP                      (-30)
#define HUGE_DROP                       (-50)

#define TINY_BOOST                      (5)
#define MINOR_BOOST                     (10)
#define MODERATE_BOOST                  (20)
#define MAJOR_BOOST                     (30)
#define HUGE_BOOST                      (50)


// LOCAL VARS WHICH WILL BE SAVED FOR EACH CRITTER

#define LVAR_reaction                   (0)             // Holds reaction number value.
#define LVAR_reaction_level             (1)             // Holds reaction level: BAD, NEUTRAL, GOOD.
#define LVAR_got_reaction               (2)             // Makes sure to modify reaction only once.
#define LVAR_base_reaction              (3)


// Manipulation of Reaction Levels

// Checks the reaction_levels from a critter
#define horrible_critter_reaction       (local_var(LVAR_reaction_level) <= REACTION_LEVEL_HORRIBLE)

#define bad_critter_reaction            (local_var(LVAR_reaction_level) <= REACTION_LEVEL_BAD)

#define neutral_critter_reaction        ((local_var(LVAR_reaction_level) <= REACTION_LEVEL_DECENT and local_var(LVAR_reaction_level) >= REACTION_LEVEL_POOR))

#define good_critter_reaction           (local_var(LVAR_reaction_level) >= REACTION_LEVEL_GOOD)

// Takes the reaction value and translates it into a level.
#define ReactToLevel                    if (local_var(LVAR_reaction) <= REACTION_ABYSMAL) then                          \
                                            set_local_var(LVAR_reaction_level,REACTION_LEVEL_ABYSMAL);                  \
                                        else if (local_var(LVAR_reaction) <= REACTION_HORRIBLE) then                    \
                                            set_local_var(LVAR_reaction_level,REACTION_LEVEL_HORRIBLE);                 \
                                        else if (local_var(LVAR_reaction) <= REACTION_BAD) then                         \
                                            set_local_var(LVAR_reaction_level,REACTION_LEVEL_BAD);                      \
                                        else if (local_var(LVAR_reaction) <= REACTION_POOR) then                        \
                                            set_local_var(LVAR_reaction_level,REACTION_LEVEL_POOR);                     \
                                        else if (local_var(LVAR_reaction) <= REACTION_DECENT) then                      \
                                            set_local_var(LVAR_reaction_level,REACTION_LEVEL_NEUTRAL);                  \
                                        else if (local_var(LVAR_reaction) <= REACTION_GOOD) then                        \
                                            set_local_var(LVAR_reaction_level,REACTION_LEVEL_DECENT);                   \
                                        else if (local_var(LVAR_reaction) <= REACTION_GREAT) then                       \
                                            set_local_var(LVAR_reaction_level,REACTION_LEVEL_GOOD);                     \
                                        else if (local_var(LVAR_reaction) <= REACTION_EXCELLENT) then                   \
                                            set_local_var(LVAR_reaction_level,REACTION_LEVEL_GREAT);                    \
                                        else                                                                            \
                                            set_local_var(LVAR_reaction_level,REACTION_LEVEL_EXCELLENT)

// Takes a reaction level and generates a random reaction value.
#define LevelToReact                    if (local_var(LVAR_reaction_level) == REACTION_LEVEL_ABYSMAL) then                      \
                                            set_local_var(LVAR_base_reaction,random(REACTION_BOTTOM,REACTION_ABYSMAL));         \
                                        else if (local_var(LVAR_reaction_level) == REACTION_LEVEL_HORRIBLE) then                \
                                            set_local_var(LVAR_base_reaction,random(REACTION_ABYSMAL,REACTION_HORRIBLE));       \
                                        else if (local_var(LVAR_reaction_level) == REACTION_LEVEL_BAD) then                     \
                                            set_local_var(LVAR_base_reaction,random(REACTION_HORRIBLE,REACTION_BAD));           \
                                        else if (local_var(LVAR_reaction_level) == REACTION_LEVEL_POOR) then                    \
                                            set_local_var(LVAR_base_reaction,random(REACTION_BAD,REACTION_POOR));               \
                                        else if (local_var(LVAR_reaction_level) == REACTION_LEVEL_NEUTRAL)) then                \
                                            set_local_var(LVAR_base_reaction,random(REACTION_POOR,REACTION_DECENT));            \
                                        else if (local_var(LVAR_reaction_level) == REACTION_LEVEL_DECENT) then                  \
                                            set_local_var(LVAR_base_reaction,random(REACTION_DECENT,REACTION_GOOD));            \
                                        else if (local_var(LVAR_reaction_level) == REACTION_LEVEL_GOOD) then                    \
                                            set_local_var(LVAR_base_reaction,random(REACTION_GOOD,REACTION_GREAT));             \
                                        else if (local_var(LVAR_reaction_level) == REACTION_LEVEL_GREAT) then                   \
                                            set_local_var(LVAR_base_reaction,random(REACTION_GREAT,REACTION_EXCELLENT));        \
                                        else                                                                                    \
                                            set_local_var(LVAR_base_reaction,random(REACTION_EXCELLENT,REACTION_TOP))


#define set_bad_critter_reaction        set_local_var(LVAR_reaction_level, REACTION_LEVEL_BAD);             \
                                        ReactToLevel

#define set_neutral_critter_reaction    set_local_var(LVAR_reaction_level, REACTION_LEVEL_NEUTRAL);         \
                                        ReactToLevel

#define set_good_critter_reaction       set_local_var(LVAR_reaction_level, REACTION_LEVEL_GOOD);            \
                                        ReactToLevel

#define ReactionAdjust(X)               set_local_var(LVAR_base_reaction,(local_var(LVAR_base_reaction) + X));                  \
                                        set_local_var(LVAR_reaction,(local_var(LVAR_reaction) + X));                            \
                                        ReactToLevel

/* Raise Reaction */
#define UpReactTiny                     ReactionAdjust(TINY_BOOST)
#define UpReactMinor                    ReactionAdjust(MINOR_BOOST)
#define UpReactModerate                 ReactionAdjust(MODERATE_BOOST)
#define UpReactMajor                    ReactionAdjust(MAJOR_BOOST)
#define UpReactHuge                     ReactionAdjust(HUGE_BOOST)

#define UpReact                         UpReactMinor
#define BigUpReact                      UpReactModerate

// Places reaction at maximum value.
#define TopReact                        set_local_var(LVAR_base_reaction,REACTION_TOP);                                  \
                                        set_local_var(LVAR_reaction_level,REACTION_LEVEL_EXCELLENT)

#define UpReactLevel                    set_local_var(LVAR_reaction_level,(local_var(LVAR_reaction_level)+1));      \
                                        if (local_var(LVAR_reaction_level) > REACTION_LEVEL_EXCELLENT) then         \
                                            set_local_var(LVAR_reaction_level,REACTION_LEVEL_EXCELLENT);            \
                                        LevelToReact

/* Lowering Reaction */
#define DownReactTiny                   ReactionAdjust(TINY_DROP)
#define DownReactMinor                  ReactionAdjust(MINOR_DROP)
#define DownReactModerate               ReactionAdjust(MODERATE_DROP)
#define DownReactMajor                  ReactionAdjust(MAJOR_DROP)
#define DownReactHuge                   ReactionAdjust(HUGE_DROP)

#define DownReact                       DownReactMinor
#define BigDownReact                    DownReactModerate

// Places reaction at minimum value.
#define BottomReact                     set_local_var(LVAR_reaction_level,REACTION_LEVEL_ABYSMAL);                  \
                                        set_local_var(LVAR_base_reaction,REACTION_BOTTOM)

// Lowers reaction one level.
#define DownReactLevel                  set_local_var(LVAR_reaction_level,(local_var(LVAR_reaction_level)-1));      \
                                        if (local_var(LVAR_reaction_level) < REACTION_LEVEL_ABYSMAL) then           \
                                            set_local_var(LVAR_reaction_level,REACTION_LEVEL_ABYSMAL);              \
                                        LevelToReact

// Generates initial reaction.
#define GetReaction                     if (local_var(LVAR_got_reaction) == 0) then begin                                       \
                                            set_local_var(LVAR_got_reaction,1);                                                 \
                                            set_local_var(LVAR_base_reaction,REACTION_BONUS_CHARISMA);                          \
                                            ndebug("Base Reaction == "+local_var(LVAR_base_reaction));                          \
                                        end                                                                                     \
                                        Static_Reaction:=0;                                                                     \
                                        set_local_var(LVAR_reaction,0);                                                         \
                                        ndebug("Start Reaction == "+local_var(LVAR_reaction));                                  \
                                        reaction_bonus_karma:=(REACTION_BONUS_COMP_KARMA/KARMA_MODIFIER);                       \
                                        reaction_bonus_town_rep:=(TOWN_REPUTATION/TOWN_REP_MODIFIER);                           \
                                        if (has_sex_appeal) then begin                                                          \
                                            if (get_critter_stat(dude_obj,STAT_gender) == get_critter_stat(self_obj,STAT_gender)) then    \
                                                Static_Reaction:=Static_Reaction + SAME_SEX_APPEAL;                             \
                                            else                                                                                \
                                                Static_Reaction:=Static_Reaction + OPPOSITE_SEX_APPEAL;                         \
                                            ndebug("Sex Appeal Bonus == "+Static_Reaction);                                     \
                                        end                                                                                     \
                                        else                                                                                    \
                                            ndebug("Sex Appeal Bonus == 0");                                                    \
                                        if (Evil_Critter == 1) then begin                                                       \
                                            if (reaction_bonus_karma >= 0) then                                                 \
                                                Static_Reaction:=Static_Reaction - reaction_bonus_karma;                        \
                                            else                                                                                \
                                                Static_Reaction:=Static_Reaction + reaction_bonus_karma;                        \
                                            ndebug("Karma Reaction Bonus == "+Static_Reaction);                                 \
                                            if (reaction_bonus_town_rep >= 0) then                                              \
                                                Static_Reaction:=Static_Reaction - reaction_bonus_town_rep;                     \
                                            else                                                                                \
                                                Static_Reaction:=Static_Reaction + reaction_bonus_town_rep;                     \
                                            ndebug("Town Rep Bonus == "+Static_Reaction);                                       \
                                            CheckKarma;                                                                         \
                                            if (has_rep_holy_warrior) then                                                      \
                                                Static_Reaction:=Static_Reaction - REACTION_BONUS_HOLY;                         \
                                            else if (has_rep_guardian) then                                                     \
                                                Static_Reaction:=Static_Reaction - REACTION_BONUS_GUARDIAN;                     \
                                            else if (has_rep_shield) then                                                       \
                                                Static_Reaction:=Static_Reaction - REACTION_BONUS_SHIELD;                       \
                                            else if (has_rep_defender) then                                                     \
                                                Static_Reaction:=Static_Reaction - REACTION_BONUS_DEFENDER;                     \
                                            else if (has_rep_wanderer) then                                                     \
                                                Static_Reaction:=Static_Reaction - REACTION_BONUS_WANDERER;                     \
                                            else if (has_rep_betrayer) then                                                     \
                                                Static_Reaction:=Static_Reaction + REACTION_BONUS_BETRAYER;                     \
                                            else if (has_rep_sword) then                                                        \
                                                Static_Reaction:=Static_Reaction + REACTION_BONUS_SWORD;                        \
                                            else if (has_rep_scourge) then                                                      \
                                                Static_Reaction:=Static_Reaction + REACTION_BONUS_SCOURGE;                      \
                                            else                                                                                \
                                                Static_Reaction:=Static_Reaction + REACTION_BONUS_DEMON;                        \
                                            ndebug("Bad Person Reaction Bonus == "+Static_Reaction);                         \
                                        end                                                                                     \
                                        else begin                                                                              \
                                            Static_Reaction:=Static_Reaction + reaction_bonus_karma;                            \
                                            ndebug("Karma Reaction Bonus == "+Static_Reaction);                              \
                                            Static_Reaction:=Static_Reaction + reaction_bonus_town_rep;                         \
                                            ndebug("Town Rep Bonus == "+Static_Reaction);                                    \
                                            CheckKarma;                                                                         \
                                            if (has_rep_holy_warrior) then                                                      \
                                                Static_Reaction:=Static_Reaction + REACTION_BONUS_HOLY;                         \
                                            else if (has_rep_guardian) then                                                     \
                                                Static_Reaction:=Static_Reaction + REACTION_BONUS_GUARDIAN;                     \
                                            else if (has_rep_shield) then                                                       \
                                                Static_Reaction:=Static_Reaction + REACTION_BONUS_SHIELD;                       \
                                            else if (has_rep_defender) then                                                     \
                                                Static_Reaction:=Static_Reaction + REACTION_BONUS_DEFENDER;                     \
                                            else if (has_rep_wanderer) then                                                     \
                                                Static_Reaction:=Static_Reaction + REACTION_BONUS_WANDERER;                     \
                                            else if (has_rep_betrayer) then                                                     \
                                                Static_Reaction:=Static_Reaction + REACTION_BONUS_BETRAYER;                     \
                                            else if (has_rep_sword) then                                                        \
                                                Static_Reaction:=Static_Reaction + REACTION_BONUS_SWORD;                        \
                                            else if (has_rep_scourge) then                                                      \
                                                Static_Reaction:=Static_Reaction + REACTION_BONUS_SCOURGE;                      \
                                            else                                                                                \
                                                Static_Reaction:=Static_Reaction + REACTION_BONUS_DEMON;                        \
                                            ndebug("Good Person Reaction Bonus == "+Static_Reaction);                        \
                                        end                                                                                     \
                                        if (Slavery_Tolerant == SLAVE_VERY_INTOLERANT) then begin                               \
                                            if (has_rep_slaver) then                                                            \
                                                Static_Reaction:=Static_Reaction + (2*REACTION_BONUS_SLAVER);                   \
                                        end                                                                                     \
                                        else if (Slavery_Tolerant == SLAVE_INTOLERANT) then begin                               \
                                            if (has_rep_slaver) then                                                            \
                                                Static_Reaction:=Static_Reaction + REACTION_BONUS_SLAVER;                       \
                                        end                                                                                     \
                                        else if (Slavery_Tolerant == SLAVE_PROUD) then begin                                    \
                                            if (has_rep_slaver) then                                                            \
                                                Static_Reaction:=Static_Reaction - REACTION_BONUS_SLAVER;                       \
                                        end                                                                                     \
                                        ndebug("Slaver + Aligned Reaction == " + Static_Reaction);                              \
                                        Static_Reaction:=Static_Reaction + REACTION_BONUS_PRESENCE;                             \
                                        ndebug("Presence Reaction == " + Static_Reaction);                                      \
                                        if (has_rep_childkiller) then                                                           \
                                            Static_Reaction:=Static_Reaction + REACTION_BONUS_CHILDKILLER;                      \
                                        ndebug("Childkiller Reaction == " + Static_Reaction);                                   \
                                        if dude_has_cult then Static_Reaction = abs(Static_Reaction);                           \
                                        set_local_var(LVAR_reaction,(local_var(LVAR_base_reaction) + Static_Reaction));         \
                                        ndebug("Initial Reaction == " + local_var(LVAR_reaction))

#undef check_barterable
#define check_barterable

#undef check_barterable_float
// trust me, this needs to be this way
#define check_barterable_float         if (false) then begin   \
                                       end

#endif // MODREACT_H
