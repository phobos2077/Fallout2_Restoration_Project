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
{102}{}{Du siehst eine stabile Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte) und einer hochexplosiven
 Sprengfalle am Türrahmen, welche du vielleicht aufbrechen könntest.}
{103}{}{Du siehst eine stabile Tür mit einem Schloss und einer hochexplosiven
 Sprengfalle am Türrahmen, welche du vielleicht aufbrechen könntest.}
{104}{}{Du siehst eine stabile Tür ohne einen sichtbaren Schließmechanismus
 und einer hochexplosiven Sprengfalle am Türrahmen, welche du vielleicht
 aufbrechen könntest.}
{105}{}{Du siehst eine stabile Tür mit einem alten, rostigem Schloss
 und einer hochexplosiven Sprengfalle am Türrahmen, welche du vielleicht
 aufbrechen könntest.}


{106}{}{Du siehst eine stabile Tür mit einem Schloss (Das mit ein
 paar Dietrichen geknackt werden könnte) und einer Falle
 am Türrahmen, die du vielleicht aufbrechen könntest.}
{107}{}{Du siehst eine stabile Tür mit einem Schloss und einer Falle
 am Türrahmen, welche du vielleicht aufbrechen könntest.}
{108}{}{Du siehst eine stabile Tür ohne einen sichtbaren Schließmechanismus
 und einer Falle am Türrahmen, welche du vielleicht
 aufbrechen könntest.}
{109}{}{Du siehst eine stabile Tür mit einem alten, rostigem Schloss
 und einer Falle am Türrahmen, welche du vielleicht
 aufbrechen könntest.}

{110}{}{Du siehst eine stabile Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte) und einem Drahtkorn am Türrahmen,
 welche du vielleicht aufbrechen könntest.}
{111}{}{Du siehst eine stabile Tür mit einem Schloss und einem 
 abgeschnittenem Stück Draht am Türrahmen, welche du vielleicht
 aufbrechen könntest.}
{112}{}{Du siehst eine stabile Tür ohne einen sichtbaren Schließmechanismus
 und einem  abgeschnittenem Stück Draht am Türrahmen, welche du vielleicht
 aufbrechen könntest.}
{113}{}{Du siehst eine stabile Tür mit einem alten, rostigem Schloss
 und einem Drahtkorn am Türrahmen, welche du vielleicht aufbrechen könntest.}

{114}{}{Du siehst eine stabile Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte), welche du vielleicht aufbrechen 
 könntest.}
{115}{}{Du siehst eine stabile Tür mit einem Schloss, welche du vielleicht
 aufbrechen könntest.}
{116}{}{Du siehst eine stabile Tür ohne einen sichtbaren Schließmechanismus,
 welche du vielleicht aufbrechen könntest.}
{117}{}{Du siehst eine stabile Tür mit einem alten, rostigem Schloss, welche
 du vielleicht aufbrechen könntest.}

# Perception Check Success

{118}{}{Du siehst eine stabile Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte) und einer hochexplosiven Sprengfalle
 am Türrahmen.}
{119}{}{Du siehst eine stabile Tür mit einem Schloss und einer hochexplosiven
 Sprengfalle am Türrahmen.}
{120}{}{Du siehst eine stabile Tür ohne einen sichtbaren Schließmechanismus
 und einer hochexplosiven Sprengfalle am Türrahmen.}
{121}{}{Du siehst eine stabile Tür mit einem alten, rostigem Schloss
 und einer hochexplosiven Sprengfalle am Türrahmen.}

{122}{}{Du siehst eine stabile Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte) und einer Falle am Türrahmen.}
{123}{}{Du siehst eine stabile Tür mit einem Schloss und einer Falle
 am Türrahmen.}
{124}{}{Du siehst eine stabile Tür ohne einen sichtbaren Schließmechanismus
 und einer Falle am Türrahmen.}
{125}{}{Du siehst eine stabile Tür mit einem alten, rostigem Schloss
 und einer Falle am Türrahmen.}

{126}{}{Du siehst eine stabile Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte) und einem Drahtkorn am Türrahmen.
{127}{}{Du siehst eine stabile Tür mit einem Schloss und einem 
 abgeschnittenem Stück Draht am Türrahmen.}
{128}{}{Du siehst eine stabile Tür ohne einen sichtbaren Schließmechanismus
 und einem abgeschnittenem Stück Draht am Türrahmen.}
{129}{}{Du siehst eine stabile Tür mit einem alten, rostigem Schloss
 und einem Drahtkorn am Türrahmen.}

{130}{}{Du siehst eine stabile Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte).}
{131}{}{Du siehst eine stabile Tür mit einem Schloss.}
{132}{}{Du siehst eine stabile Tür ohne einen sichtbaren Schließmechanismus.}
{133}{}{Du siehst eine stabile Tür mit einem alten, rostigem Schloss.}

# Perception Check Critical Failure

{134}{}{Du siehst eine beschädigte Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte) und einer hochexplosiven
 Sprengfalle am Türrahmen.}
{135}{}{Du siehst eine beschädigte Tür mit einem Schloss und einer
 hochexplosiven Sprengfalle am Türrahmen.}
{136}{}{Du siehst eine beschädigte Tür ohne einen sichtbaren Schließmechanismus
 und einer hochexplosiven Sprengfalle am Türrahmen.}
{137}{}{Du siehst eine beschädigte Tür mit einem alten, rostigem Schloss
 und einer hochexplosiven Sprengfalle am Türrahmen.}

{138}{}{Du siehst eine beschädigte Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte) und einer Falle am Türrahmen.}
{139}{}{Du siehst eine beschädigte Tür mit einem Schloss und einer Falle
 am Türrahmen.}
{140}{}{Du siehst eine beschädigte Tür ohne einen sichtbaren Schließmechanismus
 und einer Falle am Türrahmen.}
{141}{}{Du siehst eine beschädigte Tür mit einem alten, rostigem Schloss
 und einer Falle am Türrahmen.}

{142}{}{Du siehst eine beschädigte Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte) und einem Drahtkorn am Türrahmen.}
{143}{}{Du siehst eine beschädigte Tür mit einem Schloss aund einem 
 abgeschnittenem Stück Draht am Türrahmen.}
{144}{}{Du siehst eine beschädigte Tür ohne einen sichtbaren Schließmechanismus
 und einem abgeschnittenem Stück Draht am Türrahmen.}
{145}{}{Du siehst eine beschädigte Tür mit einem alten, rostigem Schloss
 und einem Drahtkorn am Türrahmen.}

{146}{}Du siehst eine beschädigte Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte).}
{147}{}{Du siehst eine beschädigte Tür mit einem Schloss.}
{148}{}{Du siehst eine beschädigte Tür ohne einen sichtbaren Schließmechanismus.}
{149}{}{Du siehst eine beschädigte Tür mit einem alten, rostigem Schloss.}

# Perception Check Failure

{150}{}{Du siehst eine alte Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte) und einer hochexplosiven
 Sprengfalle am Türrahmen.}
{151}{}{Du siehst eine alte Tür mit einem Schloss und einer hochexplosiven
 Sprengfalle am Türrahmen.}
{152}{}{Du siehst eine alte Tür ohne einen sichtbaren Schließmechanismus
 und einer hochexplosiven Sprengfalle am Türrahmen.}
{153}{}{Du siehst eine alte Tür mit einem alten, rostigem Schloss
 und einer hochexplosiven Sprengfalle am Türrahmen.}

{154}{}{Du siehst eine alte Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte) und einer Falle am Türrahmen.}
{155}{}{Du siehst eine alte Tür mit einem Schloss und einer Falle
 am Türrahmen.}
{156}{}{Du siehst eine alte Tür ohne einen sichtbaren Schließmechanismus
 und einer Falle am Türrahmen.}
{157}{}{Du siehst eine alte Tür mit einem alten, rostigem Schloss
 und einer Falle am Türrahmen.}

{158}{}{Du siehst eine alte Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte) und einem Drahtkorn am Türrahmen.
{159}{}{Du siehst eine alte Tür mit einem Schloss und einem 
 abgeschnittenem Stück Draht am Türrahmen.}
{160}{}{Du siehst eine alte Tür ohne einen sichtbaren Schließmechanismus
 und einem abgeschnittenem Stück Draht am Türrahmen.}
{161}{}{Du siehst eine alte Tür mit einem alten, rostigem Schloss
 und einem Drahtkorn am Türrahmen.}

{162}{}Du siehst eine alte Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte).}
{163}{}{Du siehst eine alte Tür mit einem Schloss.}
{164}{}{Du siehst eine alte Tür ohne einen sichtbaren Schließmechanismus.}
{165}{}{Du siehst eine alte Tür mit einem alten, rostigem Schloss.}

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
{170}{}{Geschickt knackst du das Schloss.}
{171}{}{Deine mangelnde Erfahrung verklemmt das Schloss.}
{172}{}{Du scheiterst daran das Schloss zu knacken.}

# Lock Door
{189}{}{Geschickt verschließt du die Tür.}
{190}{}{Du scheiterst daran die Tür abzuschließen.}

# Find Trap on the Door
{194}{}{Du findest eine Falle an der Tür.}
{195}{}{Du findest keinerlei Fallen an der Tür.}

# Disarm the Trap on the Door
{196}{}{Geschickt entschärfst du die Falle.}
{198}{}{Du scheiterst daran die Falle zu Entschärfen.}

# NPC uses a skill on the door
# The following lines are prepended by the NPC's name

# Unlock Door
{173}{}{ knackt geschickt das Schloss.}
{174}{}{'s mangelnde Erfahrung verklemmt das Schloss.}
{175}{}{ scheitert daran das Schloss zu knacken.}

# Lock Door
{191}{}{ verschließt geschicht die Tür.}
{192}{}{ scheitert daran die Tür abzuschließen.}

# Find Trap on the Door
{199}{}{ findet eine Falle an der Tür.}
{200}{}{ findet keinerlei Fallen an der Tür.}

# Disarm the Trap on the Door
{201}{}{ entschärfst geschickt die Falle.}
{202}{}{ scheiterst daran die Falle zu Entschärfen.}

#############################################################
#  The following lines are for when the player tries to     #
#  use items on the door which are not lockpicks.           #
#############################################################

# Player uses an item on the door
{176}{}{Du brichst das Schloss auf.}
{177}{}{Die Anstrengung beim Aufbrechen des Schlosses kostet
 dich einen Trefferpunkt.}

# The following set of lines is to be translated as:
# You strain your back while trying to bust the lock and
# take [x] points of damage.

{178}{}{Die Anstrengung beim aufbrechen des Schlosses kostet
 dich }
{179}{}{ Trefferpunkte.}
{180}{}{Du bist zu schwach um die Tür aufzubrechen.}

# NPC uses an item on the door
# The following lines are prepended by the NPC's name
{181}{}{ bricht das Schloss auf.}
{182}{}{ Anstrengung beim aufbrechen des Schlosses kostet
 ihn einen Trefferpunkt.}

# The following line set of lines is to be translated as:
# NPC strains his back while trying to bust the lock and
# takes [x] points of damage

{183}{}{ Anstrengung beim Aufbrechen des Schlosses kostet
 ihn }
{184}{}{ Trefferpunkte.}

{185}{}{ ist zu schwach um die Tür aufzubrechen.}
{186}{}{ Anstrengung beim Aufbrechen des Schlosses kostet
 sie einen Trefferpunkt.}

# The following line set of lines is to be translated as:
# NPC strains her back while trying to bust the lock and
# takes [x] points of damage

{187}{}{ Anstrengung beim Aufbrechen des Schlosses kostet
 sie }
{188}{}{ Trefferpunkte.}

#############################################################
#  Damage done to the door due to explosives.               #
#############################################################

{193}{}{Das verpasste der Tür nichtmal nen Kratzer.}

#############################################################
#  Reporting Door Status should it be used.                 #
#############################################################

{203}{}{Die Tür scheint verschlossen zu sein.}
{204}{}{Dir fällt eine Falle am Türrahmen auf.}

# NPC finds trap
# The following line is to be translated as:
# NPC notices a trap in the door jam.

{205}{}{ findet eine Falle am Türrahmen.}

#############################################################
#  Setting traps on a door and whether the door is open or  #
#  closed to set the trap.                                  #
#############################################################

# Player tries to set a trap on an open door
{206}{}{Du kannst die Tür nicht verdrahten solange sie offen ist.}

# NPC tries to set a trap on an open door
{207}{}{ kann die Tür nicht verdrahten solange sie offen ist.}

# Player tries to set a trap on a closed door
{208}{}{geschickt verdrahtest du die Tür.}
{209}{}{Du schaffst es nicht die Falle am Türrahmen richtig anzubringen.}

# NPC tries to set a trap on a closed door
{210}{}{ verdrahtet geschickt die Tür.}
{211}{}{ schafft es nicht die Falle am Türrahmen richtig anzubringen.}

{300}{}{Du schließt die Tür auf.}
{301}{}{Du schließt die Tür ab.}
{302}{}{Du kannst die Tür nicht abschließen solange sie offen ist.}
{303}{}{Dieser Schlüssel passt nicht.}

# for broken doors
{320}{}{Es gibt keine Möglichkeit diese Tür noch abzusperren.}
{330}{}{Diese Tür ist verklemmt.}

# Using a key on the door. (YES THIS IS A DUPLICATE BUT PLEASE DO NOT REMOVE..
# IT MOST LIKELY IS BEING USED BY A DOOR SCRIPT SOMEWHERE)
{400}{}{Du schließt die Tür auf.}

{414}{}{Du siehst eine stabile Tür mit einem Schloss (Welches mit ein
 paar Dietrichen geknackt werden könnte), welche du vielleicht aufbrechen 
 könntest.}
{415}{}{Du siehst eine stabile Tür mit einem Schloss, welche du vielleicht
 aufbrechen könntest.}
{116}{}{Du siehst eine stabile Tür ohne einen sichtbaren Schließmechanismus,
 welche du vielleicht aufbrechen könntest.}
{417}{}{Du siehst eine stabile Tür mit einem alten, rostigem Schloss, welche
 du vielleicht aufbrechen könntest.}

{500}{}{Diese Tür ist zu massiv um sie aufzubrechen.}
{501}{}{Sieht so aus als müsste der Generator erstmal laufen.}
{502}{}{Du siehst: Fahrstuhltür.}
{503}{}{Anscheinend brauchst du was elektrisches um das Schloss zu öffnen.}
