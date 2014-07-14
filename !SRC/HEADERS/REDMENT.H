/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef REDMENT_H
#define REDMENT_H

#define MVAR_Molerat_Count                  (0)
#define MVAR_Deathclaw_Egg_Count            (1)
#define MVAR_Deathclaw_Count                (2)
#define MVAR_Rat_Fighter1                   (3)
#define MVAR_Rat_Fighter2                   (4)
#define MVAR_Bar_Brawl                      (5)
#define MVAR_Ferndown                       (8)
#define MVAR_Nording                        (9)
#define MVAR_Velani                         (10)


// States for Bar Brawl
#define BRAWL_NONE                          (0)
// Begin Seraph's Code
#ifndef BRAWL_JOB_ACCEPTED
   #define BRAWL_JOB_ACCEPTED               (1)
#endif
#ifndef BRAWL_TALKED_BETTE
   #define BRAWL_TALKED_BETTE               (2)
#endif
// End Seraph's Code
#ifndef BRAWL_TALKED_CAMINT
   #define BRAWL_TALKED_CAMINT              (3) // Seraph Fix: changed from (1) to (3)
#endif
#ifndef BRAWL_NEITHER_JAILED
   #define BRAWL_NEITHER_JAILED             (4) // Seraph Fix: changed from (2) to (4)
#endif
#ifndef BRAWL_MORNINGSTAR_JAILED
   #define BRAWL_MORNINGSTAR_JAILED         (5) // Seraph Fix: changed from (3) to (5)
#endif
#ifndef BRAWL_KOKOWEEF_JAILED
   #define BRAWL_KOKOWEEF_JAILED            (6) // Seraph Fix: changed from (4) to (6)
#endif
#ifndef BRAWL_BOTH_JAILED
   #define BRAWL_BOTH_JAILED                (7) // Seraph Fix: changed from (5) to (7)
#endif
#ifndef BRAWL_KILLED
   #define BRAWL_KILLED                     (8) // Seraph Fix: changed from (6) to (8)
#endif
// Begin Seraph's Code
#ifndef BRAWL_TALKED_BOTH
   #define BRAWL_TALKED_BOTH                (9)
#endif
// End Seraph's Code

#endif // REDMENT_H
