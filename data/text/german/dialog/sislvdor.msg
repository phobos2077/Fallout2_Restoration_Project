#############################################################
#  Message File: Door.msg                                   #
#                                                           #
#  Note: Characters within curly braces (like line 100)     #
#        will be read in as a message string. Caution       #
#        should be used when making comments. All comments  #
#        should be prepended with a pound symbol for        #
#        visual ease. This does not comment out the line    #
#        though.                                            #
#                                                           #
#  Purpose: This message file contains the information      #
#           concerning doors in a locked state, trapped     #
#           state, locked and trapped state.                #
#                                                           #
#  Log: Please note any changes that have been made to this #
#       file and comment which lines have changed.          #
#                                                           #
#  Created: September 26, 1997                              #
#                                                           #
#  Updated:                                                 #
#############################################################

#############################################################
#  The following lines are for description of the door. The #
#  first lines, line 100-1, are for the look_at_proc. The   #
#  remainder until the next block are for description_proc  #
#  based one skill and perception success.                  #
#############################################################

# look_at_proc
{100}{}{Du siehst eine Holztür.}
{101}{}{Du siehst eine Metalltür.}

# description_proc

# Perception Check Critical Success
{102}{}{Du siehst eine robuste Tür, deren Schloß
 sich mit dem Dietrich knacken läßt. Im Türstock siehst du eine hochexplosive Falle.
 Vielleicht schaffst du's, die Tür aufzukriegen.}
{103}{}{Du siehst eine robuste Tür, mit einem Schloß und einer hochexplosiven Falle im Türrahmen,
 die du eventuell aufbrechen könntest.}
{104}{}{Du siehst eine robuste Tür ohne Schloß und einer hochexplosiven Falle im Türrahmen,
 die du eventuell aufbrechen könntest.}
{105}{}{Du siehst eine robuste Tür, mit einem alten rostigen Schloß und einer hochexplosiven
 Falle im Türrahmen, die du eventuell aufbrechen könntest.}

{106}{}{Du siehst eine robuste Tür, deren Schloß sich mit dem Dietrich knacken läßt. Im Türstock
 siehst du einen Sprengsatz. Vielleicht schaffst du's, die Tür aufzukriegen.}
{107}{}{Du siehst eine robuste Tür, mit einem Schloß und einer Falle im Türrahmen,
 die du eventuell aufbrechen könntest.}
{108}{}{Du siehst eine robuste Tür, ohne Schloß und einer Falle im Türrahmen,
 die du eventuell aufbrechen könntest.}
{109}{}{Du siehst eine robuste Tür, mit einem alten rostigen Schloß und einer Falle im Türrahmen,
 die du eventuell aufbrechen könntest.}

{110}{}{Du siehst eine robuste Tür, deren Schloß
 sich mit dem Dietrich knacken läßt. Im Türstock siehst du einen durchgetrennten Draht.
 Vielleicht schaffst du's, die Tür aufzukriegen.}
{111}{}{Du siehst eine robuste Tür, mit einem Schloß und einen durchtrennten Draht im Türrahmen,
 die du eventuell aufstemmen könntest.}
{112}{}{Du siehst eine robuste Tür, ohne Schloß und einen durchtrennten Draht im Türrahmen,
 die du eventuell aufstemmen könntest.}
{113}{}{Du siehst eine robuste Tür, mit einem alten rostigen Schloß und einem durchtrennten Draht
 im Türrahmen, die du eventuell aufstemmen könntest.}

{114}{}{Du siehst eine robuste Tür, deren Schloß
 sich mit dem Dietrich knacken läßt. Vielleicht schaffst du's, die Tür aufzukriegen.}
{115}{}{Du siehst eine robuste Tür, mit einem Schloß dran, die du eventuell aufstemmen könntest.}
{116}{}{Du siehst eine robuste Tür, ohne Schloß dran, die du eventuell aufstemmen könntest.}
{117}{}{Du siehst eine robuste Tür, mit einem alten rostigen Schloß dran, die du eventuell
 aufstemmen könntest.}

# Perception Check Success

{118}{}{Du siehst eine robuste Tür, deren Schloß
 sich mit dem Dietrich knacken läßt. Im Türstock siehst du eine hochexplosive Falle.}
{119}{}{Du siehst eine robuste Tür, mit einem Schloß und einer hochexplosiven Falle im Türrahmen,
 die du eventuell aufbrechen könntest.}
{120}{}{Du siehst eine robuste Tür ohne Schloß und einer hochexplosiven Falle im Türrahmen,
 die du eventuell aufbrechen könntest.}
{121}{}{Du siehst eine robuste Tür, mit einem alten rostigen Schloß und einer hochexplosiven
 Falle im Türrahmen, die du eventuell aufbrechen könntest.}

{122}{}{Du siehst eine robuste Tür, deren Schloß
 sich mit dem Dietrich knacken läßt. Im Türstock siehst du einen Sprengsatz.}
{123}{}{Du siehst eine robuste Tür, mit einem Schloß und einer Falle im Türrahmen.}
{124}{}{Du siehst eine robuste Tür ohne Schloß und einer Falle im Türrahmen.}
{125}{}{Du siehst eine robuste Tür, mit einem alten rostigen Schloß und einer Falle im
 Türrahmen.}

{126}{}{Du siehst eine robuste Tür, deren Schloß
 sich mit dem Dietrich knacken läßt. Im Türstock siehst du einen durchgetrennten Draht.}
{127}{}{Du siehst eine robuste Tür, mit einem Schloß und einen durchtrennten Draht im Türrahmen.}
{128}{}{Du siehst eine robuste Tür, ohne Schloß und einen durchtrennten Draht im Türrahmen.}
{129}{}{Du siehst eine robuste Tür, mit einem alten, rostigen Schloß und einem durchtrennten Draht
 im Türrahmen.}

{130}{}{Du siehst eine robuste Tür, deren Schloß
 sich mit dem Dietrich knacken läßt.}
{131}{}{Du siehst eine robuste Tür, mit einem Schloß.}
{132}{}{Du siehst eine robuste Tür, ohne Schloß.}
{133}{}{Du siehst eine robuste Tür, mit einem alten, rostigen Schloß.}

# Perception Check Critical Failure

{134}{}{Du siehst eine beschädigte Tür, deren Schloß
 sich mit dem Dietrich knacken läßt. Im Türstock siehst du eine hochexplosive Falle.}
{135}{}{Du siehst eine beschädigte Tür, mit einem Schloß und einer hochexplosiven
 Falle im Türrahmen.}
{136}{}{Du siehst eine beschädigte Tür, ohne Schloß und einer hochexplosiven
 Falle im Türrahmen.}
{137}{}{Du siehst eine beschädigte Tür, mit einem alten, rostigen Schloß und einer hochexplosiven
 Falle im Türrahmen.}

{138}{}{Du siehst eine beschädigte Tür, deren Schloß
 sich mit dem Dietrich knacken läßt. Im Türstock siehst du einen Sprengsatz.}
{139}{}{Du siehst eine beschädigte Tür, mit einem Schloß und einer Falle im Türrahmen.}
{140}{}{Du siehst eine beschädigte Tür, ohne Schloß und einer Falle im Türrahmen.}
{141}{}{Du siehst eine beschädigte Tür, mit einem alten, rostigen Schloß und einer Falle im
 Türrahmen.}

{142}{}{Du siehst eine beschädigte Tür, deren Schloß
 sich mit dem Dietrich knacken läßt. Im Türstock siehst du einen durchgetrennten Draht.}
{143}{}{Du siehst eine beschädigte Tür, mit einem Schloß und einem durchtrennten Draht im
 Türrahmen.}
{144}{}{Du siehst eine beschädigte Tür, ohne Schloß und einem durchtrennten Draht im
 Türrahmen.}
{145}{}{Du siehst eine beschädigte Tür, mit einem alten, rostigen Schloß und einem durchtrennten
 Draht im Türrahmen.}

{146}{}{Du siehst eine beschädigte Tür, deren Schloß
 sich mit dem Dietrich knacken läßt.}
{147}{}{Du siehst eine beschädigte Tür, mit einem Schloß.}
{148}{}{Du siehst eine beschädigte Tür, ohne Schloß.}
{149}{}{Du siehst eine beschädigte Tür, mit einem alten, rostigen Schloß.}

# Perception Check Failure

{150}{}{Du siehst eine alte Tür, deren Schloß
 sich mit dem Dietrich knacken läßt. Im Türstock siehst du eine hochexplosive Falle.}
{151}{}{Du siehst eine alte Tür, mit einem Schloß und einer hochexplosiven Falle im Türrahmen.}
{152}{}{Du siehst eine alte Tür, ohne Schloß und einer hochexplosiven Falle im Türrahmen.}
{153}{}{Du siehst eine alte Tür, mit einem alten, rostigen Schloß und einer hochexplosiven Falle
 im Türrahmen.}

{154}{}{Du siehst eine alte Tür, deren Schloß
 sich mit dem Dietrich knacken läßt. Im Türstock siehst du einen Sprengsatz.}
{155}{}{Du siehst eine alte Tür, mit einem Schloß und einer Falle im Türrahmen.}
{156}{}{Du siehst eine alte Tür, ohne Schloß und einer Falle im Türrahmen.}
{157}{}{Du siehst eine alte Tür, mit einem alten, rostigen Schloß und einer Falle im Türrahmen.}

{158}{}{Du siehst eine alte Tür, deren Schloß
 sich mit dem Dietrich knacken läßt. Im Türstock siehst du einen durchgetrennten Draht.}
{159}{}{Du siehst eine alte Tür, mit einem Schloß und einem durchtrennten Draht im Türrahmen.}
{160}{}{Du siehst eine alte Tür, ohne Schloß und einem durchtrennten Draht im Türrahmen.}
{161}{}{Du siehst eine alte Tür, mit einem alten, rostigen Schloß und einem durchtrennten Draht
 im Türrahmen.}

{162}{}{Du siehst eine alte Tür, deren Schloß
 sich mit dem Dietrich knacken läßt.}
{163}{}{Du siehst eine alte Tür, mit einem Schloß.}
{164}{}{Du siehst eine alte Tür, ohne Schloß.}
{165}{}{Du siehst eine alte Tür, mit einem alten, rostigen Schloß.}

#############################################################
#  The following lines are for damage done to the player or #
#  critter who tried to open the door, or failed a traps    #
#  roll.                                                    #
#############################################################

# The following sets of lines are to be translated as:
# You set off the trap and were hit for [x] points of damage.
# NPC sets of the trap and was hit for [x] points of damage.

# Player sets off the trap
{166}{}{Du löst die Falle aus und wurdest für }
{167}{}{ Trefferpunkte getroffen.}

# NPC sets off the trap
{168}{}{ löst die Falle aus und wurde für }
{169}{}{ Trefferpunkte getroffen.}

#############################################################
#  The following lines are for when the player uses skills  #
#  on the door.                                             #
#############################################################

# Player uses a skill on the door
# Unlock Door
{170}{}{Geschickt hast du das Schloß geknackt.}
{171}{}{Mit deiner Unerfahrenheit, hast du jetzt das Schloß blockiert.}
{172}{}{Du konntest das Schloß nicht knacken.}

# Lock Door
{189}{}{Geschickt hast du die Tür verschlossen.}
{190}{}{Du konntest die Tür nicht verschliessen.}

# Find Trap on the Door
{194}{}{Du findest eine Falle an der Tür.}
{195}{}{Du konntest keine Fallen an der Tür finden.}

# Disarm the Trap on the Door
{196}{}{Erfahrungsgemäß hast du die Falle entschärft.}
{198}{}{Du konntest die Falle nicht entschärfen.}

# NPC uses a skill on the door
# The following lines are prepended by the NPC's name

# Unlock Door
{173}{}{ hat geschickt das Schloß geknackt.}
{174}{}{'s Unerfahrenheit hat jetzt das Schloß blockiert.}
{175}{}{ konnte das Schloß nicht knacken.}

# Lock Door
{191}{}{ hat geschickt die Tür verschlossen.}
{192}{}{ konnte die Tür nicht verschliessen.}

# Find Trap on the Door
{199}{}{ hat eine Falle an der Tür gefunden.}
{200}{}{ konnte keine Falle an der Tür finden.}

# Disarm the Trap on the Door
{201}{}{ hat Erfahrungsgemäß die Falle entschärft.}
{202}{}{ konnte die Falle nicht entschärfen.}

#############################################################
#  The following lines are for when the player tries to     #
#  use items on the door which are not lockpicks.           #
#############################################################

# Player uses an item on the door
{176}{}{Du brichst das Schloß aus der Tür.}
{177}{}{Du hast dir den Rücken beim Versuch, das Schloß aus der Tür zu brechen, verletzt und 
 verlierst einen Trefferpunkt.}

# The following set of lines is to be translated as:
# You strain your back while trying to bust the lock and
# take [x] points of damage.

{178}{}{Du hast dir den Rücken beim Versuch, das Schloß aus der Tür zu brechen, verletzt und
 verlierst }
{179}{}{ Trefferpunkte.}
{180}{}{Du bist zu schwach um ein Schloß aufzubrechen.}

# NPC uses an item on the door
# The following lines are prepended by the NPC's name
{181}{}{ bricht das Schloß aus der Tür.}
{182}{}{ verletzt sich den Rücken, beim Versuch, das Schloß aus der Tür zu brechen und verliert 
 einen Trefferpunkt.}

# The following line set of lines is to be translated as:
# NPC strains his back while trying to bust the lock and
# takes [x] points of damage

{183}{}{ verletzt sich den Rücken, beim Versuch, das Schloß aus der Tür zu brechen und verliert }
{184}{}{ Trefferpunkte.}

{185}{}{ ist zu schwach um das Schloß aufzubrechen.}
{186}{}{ verletzt sich den Rücken, beim Versuch, das Schloß aus der Tür zu brechen und verliert 
 einen Trefferpunkt.}

# The following line set of lines is to be translated as:
# NPC strains her back while trying to bust the lock and
# takes [x] points of damage

{187}{}{ verletzt sich den Rücken, beim Versuch, das Schloß aus der Tür zu brechen und verliert }
{188}{}{ Trefferpunkte.}

#############################################################
#  Damage done to the door due to explosives.               #
#############################################################

{193}{}{Der Sprengstoff hat der Tür noch nicht mal 'nen Kratzer verpaßt.}

#############################################################
#  Reporting Door Status should it be used.                 #
#############################################################

{203}{}{Die Tür ist verschlossen.}
{204}{}{Du bemerkst eine Falle die die Tür blockiert.}

# NPC finds trap
# The following line is to be translated as:
# NPC notices a trap in the door jam.

{205}{}{ bemerkt eine Falle die die Tür blockiert.}

#############################################################
#  Setting traps on a door and whether the door is open or  #
#  closed to set the trap.                                  #
#############################################################

# Player tries to set a trap on an open door
{206}{}{Du kannst an einer geöffneten Tür keine Falle anbringen.}

# NPC tries to set a trap on an open door
{207}{}{ kann an einer geöffneten Tür keine Falle anbringen.}

# Player tries to set a trap on a closed door
{208}{}{Du hast Erfahrungsgemäß eine Falle im Türrahmen angebracht.}
{209}{}{Du konntest die Falle leider nicht im Türrahmen anbringen.}

# NPC tries to set a trap on a closed door
{210}{}{ hat Erfahrungsgemäß eine Falle am Türrahmen angebracht.}
{211}{}{ konnte die Falle leider nicht im Türrahmen anbringen.}

# This is used specificly for this door
{212}{}{Diese Tür läßt sich hier nicht aufsperren.}
{213}{}{Die Tür läßt sich nicht bewegen.}
