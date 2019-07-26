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
#       April 19,1998 nbk: added message line to be used    #
#                          for doors opened with keys.      #
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
{102}{}{Du siehst eine stabile Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann) und einem hochexplosiven Sprengsatz im Türrahmen. Vielleicht schaffst du es, die Tür aufzukriegen.}
{103}{}{Du siehst eine stabile Tür mit einem Schloß und einem hochexplosiven Sprengsatz im Türrahmen. Vielleicht schaffst du es, die Tür aufzukriegen.}
{104}{}{Du siehst eine stabile Tür, scheinbar ohne Schloß, mit einem hochexplosiven Sprengsatz im Türrahmen. Vielleicht schaffst du es, die Tür aufzukriegen.}
{105}{}{Du siehst eine stabile Tür mit einem alten, rostigen Schloß und einem hochexplosiven Sprengsatz im Türrahmen. Vielleicht schaffst du es, die Tür aufzukriegen.}

{106}{}{Du siehst eine stabile Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann) und einer Falle im Türrahmen. Vielleicht schaffst du es, die Tür aufzukriegen.}
{107}{}{Du siehst eine stabile Tür mit einem Schloß und einer Falle im Türrahmen. Vielleicht schaffst du es, die Tür aufzukriegen.}
{108}{}{Du siehst eine stabile Tür, scheinbar ohne Schloß, mit einer Falle im Türrahmen. Vielleicht schaffst du es, die Tür aufzukriegen.}
{109}{}{Du siehst eine stabile Tür mit einem alten, rostigen Schloß und einer Falle im Türrahmen. Vielleicht schaffst du es, die Tür aufzukriegen.}

{110}{}{Du siehst eine stabile Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann) und einem durchgeschnittenen Kabel im Türrahmen. Vielleicht schaffst du es, die Tür aufzukriegen.}
{111}{}{Du siehst eine stabile Tür mit einem Schloß und einem durchtrennten Kabel im Türrahmen. Vielleicht schaffst du es, die Tür aufzukriegen.}
{112}{}{Du siehst eine stabile Tür, scheinbar ohne Schloß, mit einem durchtrennten Kabel im Türrahmen. Vielleicht schaffst du es, die Tür aufzukriegen.}
{113}{}{Du siehst eine stabile Tür mit einem alten, rostigen Schloß und einem durchgeschnittenen Kabel im Türrahmen. Vielleicht schaffst du es, die Tür aufzukriegen.}

{114}{}{Du siehst eine stabile Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann). Vielleicht schaffst du es, die Tür aufzukriegen.}
{115}{}{Du siehst eine stabile Tür mit einem Schloß. Vielleicht schaffst du es, die Tür aufzukriegen.}
{116}{}{Du siehst eine stabile Tür, scheinbar ohne Schloß. Vielleicht schaffst du es, die Tür aufzukriegen.}
{117}{}{Du siehst eine stabile Tür mit einem alten, rostigen Schloß. Vielleicht schaffst du es, die Tür aufzukriegen.}

# Perception Check Success

{118}{}{Du siehst eine stabile Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann) und einer hochexplosiven Sprengladung im Türrahmen.}
{119}{}{Du siehst eine stabile Tür mit einem Schloß und einer hochexplosiven Sprengladung im Türrahmen.}
{120}{}{Du siehst eine stabile Tür, scheinbar ohne Schloß, mit einer hochexplosiven Sprengladung im Türrahmen.}
{121}{}{Du siehst eine stabile Tür mit einem alten, rostigen Schloß und einer hochexplosiven Sprengladung im Türrahmen.}

{122}{}{Du siehst eine stabile Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann) und einer Falle im Türrahmen.}
{123}{}{Du siehst eine stabile Tür mit einem Schloß und einem Zünder im Türrahmen.}
{124}{}{Du siehst eine stabile Tür, scheinbar ohne Schloß, mit einer Falle im Türrahmen.}
{125}{}{Du siehst eine stabile Tür mit einem alten, rostigen Schloß und einer Falle im Türrahmen.}

{126}{}{Du siehst eine stabile Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann) und einem durchgeschnittenen Kabel im Türrahmen.}
{127}{}{Du siehst eine stabile Tür mit einem Schloß und einem durchtrennten Kabel im Türrahmen.}
{128}{}{Du siehst eine stabile Tür, scheinbar ohne Schloß, mit einem durchtrennten Kabel im Türrahmen.}
{129}{}{Du siehst eine stabile Tür mit einem alten, rostigen Schloß und einem durchtrennten Kabel im Türrahmen.}

{130}{}{Du siehst eine stabile Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann).}
{131}{}{Du siehst eine stabile Tür mit einem Schloß.}
{132}{}{Du siehst eine stabile Tür, scheinbar ohne Schloß.}
{133}{}{Du siehst eine stabile Tür mit einem alten, rostigen Schloß.}

# Perception Check Critical Failure

{134}{}{Du siehst eine beschädigte Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann) und einer hochexplosiven Sprengladung im Türrahmen.}
{135}{}{Du siehst eine beschädigte Tür mit einem Schloß und einer hochexplosiven Sprengladung im Türrahmen.}
{136}{}{Du siehst eine beschädigte Tür, scheinbar ohne Schloß, mit einer hochexplosiven Sprengladung im Türrahmen.}
{137}{}{Du siehst eine beschädigte Tür mit einem alten, rostigen Schloß und einer hochexplosiven Sprengladung im Türrahmen.}

{138}{}{Du siehst eine beschädigte Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann) und einer Falle im Türrahmen.}
{139}{}{Du siehst eine beschädigte Tür mit einem Schloß und einer Falle im Türrahmen.}
{140}{}{Du siehst eine beschädigte Tür, scheinbar ohne Schloß und mit einer Falle im Türrahmen.}
{141}{}{Du siehst eine beschädigte Tür mit einem alten, rostigen Schloß und einer Falle im Türrahmen.}

{142}{}{Du siehst eine beschädigte Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann) und einem durchgeschnittenen Kabel im Türrahmen.}
{143}{}{Du siehst eine beschädigte Tür mit einem Schloß und einem durchtrennten Kabel im Türrahmen.}
{144}{}{Du siehst eine beschädigte Tür, scheinbar ohne Schloß, mit einem durchtrennten Kabel im Türrahmen.}
{145}{}{Du siehst eine beschädigte Tür mit einem alten, rostigen Schloß und einem durchgeschnittenen Kabel im Türrahmen.}

{146}{}{Du siehst eine beschädigte Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann).}
{147}{}{Du siehst eine beschädigte Tür mit einem Schloß.}
{148}{}{Du siehst eine beschädigte Tür, scheinbar ohne Schloß.}
{149}{}{Du siehst eine beschädigte Tür mit einem alten, rostigen Schloß.}

# Perception Check Failure

{150}{}{Du siehst eine alte Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann) und einer hochexplosiven Sprengladung im Türrahmen.}
{151}{}{Du siehst eine alte Tür mit einem Schloß und einer hochexplosiven Sprengladung im Türrahmen.}
{152}{}{Du siehst eine alte Tür, scheinbar ohne Schloß, mit einer hochexplosiven Sprengladung im Türrahmen.}
{153}{}{Du siehst eine alte Tür mit einem alten, rostigen Schloß und einer hochexplosiven Sprengladung im Türrahmen.}

{154}{}{Du siehst eine alte Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann) und einer Falle im Türrahmen.}
{155}{}{Du siehst eine alte Tür mit einem Schloß und einer Falle im Türrahmen.}
{156}{}{Du siehst eine alte Tür, scheinbar ohne Schloß, mit einer Falle im Türrahmen.}
{157}{}{Du siehst eine alte Tür mit einem alten, rostigen Schloß und einer Falle im Türrahmen.}

{158}{}{Du siehst eine alte Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann) und einem durchgeschnittenen Kabel im Türrahmen.}
{159}{}{Du siehst eine alte Tür mit einem Schloß und einem durchtrennten Kabel im Türrahmen.}
{160}{}{Du siehst eine alte Tür, scheinbar ohne Schloß, mit einem durchtrennten Kabel im Türrahmen.}
{161}{}{Du siehst eine alte Tür mit einem alten, rostigen Schloß und einem durchtrennten Kabel im Türrahmen.}

{162}{}{Du siehst eine alte Tür mit einem Schloß (das mit einem Dietrich geöffnet werden kann).}
{163}{}{Du siehst eine alte Tür mit einem Schloß.}
{164}{}{Du siehst eine alte Tür, scheinbar ohne Schloß.}
{165}{}{Du siehst eine alte Tür mit einem alten, rostigen Schloß.}

#############################################################
#  The following lines are for damage done to the player or #
#  critter who tried to open the door, or failed a traps    #
#  roll.                                                    #
#############################################################

# The following sets of lines are to be translated as:
# You set off the trap and were hit for [x] points of damage.
# NPC sets of the trap and was hit for [x] points of damage.

# Player sets off the trap
{166}{}{Du hast die Falle ausgelöst und verlierst }
{167}{}{ Trefferpunkte.}

# NPC sets off the trap
{168}{}{ löst den Zünder aus und verliert }
{169}{}{ Trefferpunkte.}

#############################################################
#  The following lines are for when the player uses skills  #
#  on the door.                                             #
#############################################################

# Player uses a skill on the door
# Unlock Door
{170}{}{Geschickt öffnest du das Schloß an der Tür.}
{171}{}{Du bist nicht besonders geschickt. Deshalb verklemmt sich das Schloß an der Tür.}
{172}{}{Du schaffst es nicht, das Schloß dieser Tür zu öffnen.}

# Lock Door
{189}{}{Du sperrst die Tür geschickt ab.}
{190}{}{Du schaffst es nicht, die Tür abzusperren.}

# Find Trap on the Door
{194}{}{Du findest eine Falle an der Tür.}
{195}{}{Du findest keine Fallen an der Tür.}

# Disarm the Trap on the Door
{196}{}{Geschickt schaffst du es, die Falle zu entschärfen.}
{198}{}{Du hast die Falle nicht entschärft.}

# NPC uses a skill on the door
# The following lines are prepended by the NPC's name

# Unlock Door
{173}{}{ öffnet geschickt das Schloß an der Tür.}
{174}{}{ist nicht besonders geschickt. Deshalb verklemmt sich das Schloß an der Tür.}
{175}{}{ schafft es nicht, das Schloß an der Tür zu öffnen.}

# Lock Door
{191}{}{ sperrt die Tür geschickt ab.}
{192}{}{ hat es nicht geschafft, die Tür abzusperren.}

# Find Trap on the Door
{199}{}{ findet eine Falle an der Tür.}
{200}{}{ findet keine Fallen an der Tür.}

# Disarm the Trap on the Door
{201}{}{ entschärft die Falle geschickt.}
{202}{}{ schafft es nicht, die Falle zu entschärfen.}

# Using a key on the door.
{400}{}{Du sperrst die Tür auf.}

#############################################################
#  The following lines are for when the player tries to     #
#  use items on the door which are not lockpicks.           #
#############################################################

# Player uses an item on the door
{176}{}{Du sprengst das Schloß von der Tür.}
{177}{}{Beim Sprengen des Schlosses verrenkst du dir den Rücken und wirst mit einem Trefferpunkt bestraft.}

# The following set of lines is to be translated as:
# You strain your back while trying to bust the lock and
# take [x] points of damage.

{178}{}{Beim Sprengen des Schlosses verrenkst du dir den Rücken und erhältst }
{179}{}{ Trefferpunkte.}
{180}{}{Du bist zu schwach, das Schloß zu sprengen.}

# NPC uses an item on the door
# The following lines are prepended by the NPC's name
{181}{}{ sprengt das Schloß von der Tür.}
{182}{}{ verrenkt sich den Rücken, während er versucht, das Schloß zu sprengen und wird mit einem Trefferpunkt bestraft.}

# The following line set of lines is to be translated as:
# NPC strains his back while trying to bust the lock and
# takes [x] points of damage

{183}{}{ verrenkt sich den Rücken, während er versucht, das Schloß zu sprengen und erhält}
{184}{}{ Trefferpunkte.}

{185}{}{ ist zu schwach, um das Schloß zu sprengen.}
{186}{}{ verrenkt sich den Rücken, während sie versucht, das Schloß zu sprengen und wird mit einem Trefferpunkt bestraft.}

# The following line set of lines is to be translated as:
# NPC strains her back while trying to bust the lock and
# takes [x] points of damage

{187}{}{ verrenkt sich den Rücken, während sie versucht, das Schloß zu sprengen und erhält}
{188}{}{ Trefferpunkte.}

#############################################################
#  Damage done to the door due to explosives.               #
#############################################################

{193}{}{Der Sprengsatz hinterläßt nicht mal einen Kratzer an der Tür.}

#############################################################
#  Reporting Door Status should it be used.                 #
#############################################################

{203}{}{Die Tür scheint abgesperrt zu sein. Sieht aus, als ob eine dünne Karte als Schlüssel verwendet wird.}
{204}{}{Du hörst das Knacken von Elektrizität, die durch die Tür fließt.}

# NPC finds trap
# The following line is to be translated as:
# NPC notices a trap in the door jam.

{205}{}{ bemerkt das Knacken von Elektrizität, die durch die Tür fließt.}

#############################################################
#  Setting traps on a door and whether the door is open or  #
#  closed to set the trap.                                  #
#############################################################

# Player tries to set a trap on an open door
{206}{}{Du kannst keine Falle an der Tür anbringen, weil die Tür offen ist.}

# NPC tries to set a trap on an open door
{207}{}{ kann keine Falle an der Tür anbringen, weil die Tür offen ist.}

# Player tries to set a trap on a closed door
{208}{}{Du bringst geschickt eine Falle am Türrahmen an.}
{209}{}{Du schaffst es nicht, die Falle richtig am Türrahmen anzubringen.}

# NPC tries to set a trap on a closed door
{210}{}{ bringt geschickt eine Falle am Türrahmen an.}
{211}{}{ schafft es nicht, die Falle richtig am Türrahmen anzubringen.}

{300}{}{Du sperrst die Tür auf.}
{301}{}{Du verriegelst die Tür.}
{302}{}{Du kannst die Tür nicht verriegeln, während sie offen ist.}
{303}{}{Dieser Schlüssel paßt nicht in dieses Schloß.}

# for broken doors
{320}{}{Es ist unmöglich, die Tür zu verriegeln.}

{500}{}{Es ist unmöglich, die Falle von der Tür zu entfernen.}
