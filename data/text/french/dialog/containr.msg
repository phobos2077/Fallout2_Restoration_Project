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
{100}{}{Tu vois une caisse en bois.}
{101}{}{Tu vois un placard en métal.}
{212}{}{Tu vois un réfrigérateur.}

# description_proc

# Perception Check Critical Success
{102}{}{Tu vois un container solide avec un verrou (pouvant être ouvert avec un passe-partout) et un piège hautement explosif placé sur le rebord.}
{103}{}{Tu vois un container solide avec un verrou et un piège hautement explosif placé sur le rebord que tu pourrais réussir à ouvrir.}
{104}{}{Tu vois un container robuste sans dispositif de verrouillage apparent et un piège hautement explosif placé sur le rebord que tu pourrais réussir à ouvrir.}
{105}{}{Tu vois un container robuste avec un vieux verrou rouillé et un piège hautement explosif placé sur le rebord que tu pourrais réussir à ouvrir.}

{106}{}{Tu vois un container robuste avec un verrou (pouvant être ouvert avec un passe-partout) et un piège hautement explosif placé sur le rebord.}
{107}{}{Tu vois un container robuste avec un verrou et un piège placé sur le rebord que tu pourrais réussir à ouvrir.}
{108}{}{Tu vois un container robuste sans dispositif de verrouillage apparent et un piège placé sur le rebord que tu pourrais réussir à ouvrir.}
{109}{}{Tu vois un container robuste avec un vieux verrou rouillé et un piège placé sur le rebord que tu pourrais réussir à ouvrir.}

{110}{}{Tu vois un container robuste avec un verrou (pouvant être ouvert avec un passe-partout) et un fil sectionné dans le rebord.}
{111}{}{Tu vois un container robuste avec un verrou et un fil sectionné sur le rebord que tu pourrais essayer d'ouvrir.}
{112}{}{Tu vois un container robuste sans dispositif de verrouillage apparent et un fil sectionné sur le rebord que tu pourrais réussir à ouvrir.}
{113}{}{Tu vois un container robuste avec un vieux verrou rouillé et un fil sectionné sur le rebord que tu pourrais réussir à ouvrir.}

{114}{}{Tu vois un container robuste avec un verrou (pouvant être ouvert avec un passe-partout).}
{115}{}{Tu vois un container robuste avec un verrou que tu pourrais réussir à ouvrir.}
{116}{}{Tu vois un container robuste sans dispositif de verrouillage apparent que tu pourrais réussir à ouvrir.}
{117}{}{Tu vois un container robuste avec un vieux verrou rouillé que tu pourrais réussir à ouvrir.}

# Perception Check Success

{118}{}{Tu vois un container robuste avec un verrou (pouvant être ouvert avec un passe-partout) et un piège hautement explosif placé sur le rebord.}
{119}{}{Tu vois un container robuste avec un verrou et un piège hautement explosif placé sur le rebord.}
{120}{}{Tu vois un container robuste avec un verrou et un piège hautement explosif dans le rebord.}
{121}{}{Tu vois un container robuste avec un vieux verrou rouillé et un piège hautement explosif dans le rebord.}

{122}{}{Tu vois un container robuste avec un verrou (pouvant être ouvert avec un passe-partout) et un piège dans le rebord.}
{123}{}{Tu vois un container robuste avec un verrou et un piège dans le rebord.}
{124}{}{Tu vois un container robuste sans dispositif de verrouillage apparent et un piège placé sur le rebord.}
{125}{}{Tu vois un container robuste avec un vieux verrou rouillé et un piège placé sur le rebord.}

{126}{}{Tu vois un container robuste avec un verrou (pouvant être ouvert avec un passe-partout) et un fil sectionné sur le rebord.}
{127}{}{Tu vois un container robuste avec un verrou et un fil sectionné sur le rebord.}
{128}{}{Tu vois un container robuste sans dispositif de verrouillage apparent et un fil sectionné sur le rebord.}
{129}{}{Tu vois un container robuste avec un vieux verrou rouillé et un fil sectionné sur le rebord.}

{130}{}{Tu vois un container robuste avec un verrou (pouvant être ouvert avec un passe-partout.}
{131}{}{Tu vois un container robuste muni d'un verrou.}
{132}{}{Tu vois un container robuste sans dispositif de verrouillage apparent.}
{133}{}{Tu vois un container robuste muni d'un vieux verrou rouillé.}

# Perception Check Critical Failure

{134}{}{Tu vois un container abîmé avec un verrou (pouvant être ouvert avec un passe-partout) et un piège hautement explosif sur le rebord.}
{135}{}{Tu vois un container abîmé avec un verrou et un piège hautement explosif sur le rebord.}
{136}{}{Tu vois un container abîmé sans dispositif de verrouillage apparent et un piège hautement explosif sur le rebord.}
{137}{}{Tu vois un container abîmé avec un vieux verrou rouillé et un piège hautement explosif sur le rebord.}

{138}{}{Tu vois un container abîmé avec un verrou (pouvant être ouvert avec un passe-partout) et un piège sur le rebord.}
{139}{}{Tu vois un container abîmé avec un verrou et un piège sur le rebord.}
{140}{}{Tu vois un container abîmé sans dispositif de verrouillage apparent et un piège sur le rebord.}
{141}{}{Tu vois un container abîmé avec un vieux verrou rouillé et un piège sur le rebord.}

{142}{}{Tu vois un container abîmé avec un verrou (pouvant être ouvert avec un passe-partout) et un fil sectionné sur le rebord.}
{143}{}{Tu vois un container abîmé avec un verrou et un fil sectionné sur le rebord.}
{144}{}{Tu vois un container abîmé sans dispositif de verrouillage apparent et un fil sectionné sur le rebord.}
{145}{}{Tu vois un container abîmé avec un vieux verrou rouillé et un fil sectionné sur le rebord.}

{146}{}{Tu vois un container abîmé avec un verrou (pouvant être ouvert avec un passe-partout).}
{147}{}{Tu vois un container abîmé muni d'un verrou.}
{148}{}{Tu vois un container abîmé sans dispositif de verrouillage apparent.}
{149}{}{Tu vois un container abîmé muni d'un vieux verrou rouillé.}

# Perception Check Failure

{150}{}{Tu vois un vieux container avec un verrou (pouvant être ouvert avec un passe-partout) et un piège hautement explosif sur le rebord.}
{151}{}{Tu vois un vieux container avec un verrou et un piège hautement explosif sur le rebord.}
{152}{}{Tu vois un vieux container sans dispositif de verrouillage apparent et un piège hautement explosif sur le rebord.}
{153}{}{Tu vois un vieux container avec un vieux verrou rouillé et un piège hautement explosif sur le rebord.}

{154}{}{Tu vois un vieux container avec un verrou (pouvant être ouvert avec un passe-partout) et un piège sur le rebord.}
{155}{}{Tu vois un vieux container avec un verrou et un piège sur le rebord.}
{156}{}{Tu vois un vieux container sans dispositif de verrouillage apparent et un piège sur le rebord.}
{157}{}{Tu vois un vieux container avec un vieux verrou rouillé et un piège sur le rebord.}

{158}{}{Tu vois un vieux container avec un verrou (pouvant être ouvert avec un passe-partout) et un fil sectionné sur le rebord.}
{159}{}{Tu vois un vieux container avec un verrou et un fil sectionné sur le rebord.}
{160}{}{Tu vois un vieux container sans dispositif de verrouillage apparent et un fil sectionné sur le rebord.}
{161}{}{Tu vois un vieux container avec un vieux verrou rouillé et un fil sectionné sur le rebord.}

{162}{}{Tu vois un vieux container avec un verrou (pouvant être ouvert avec un passe-partout).}
{163}{}{Tu vois un vieux container avec un verrou.}
{164}{}{Tu vois un vieux container sans dispositif de verrouillage apparent.}
{165}{}{Tu vois un vieux container muni d'un vieux verrou rouillé.}

#############################################################
#  The following lines are for damage done to the player or #
#  critter who tried to open the door, or failed a traps    #
#  roll.                                                    #
#############################################################

# The following sets of lines are to be translated as:
# You set off the trap and were hit for [x] points of damage.
# NPC sets of the trap and was hit for [x] points of damage.

# Player sets off the trap
{166}{}{Tu as déclenché le piège et subis }
{167}{}{ points de dégâts.}

# NPC sets off the trap
{168}{}{ a déclenché le piège et subit }
{169}{}{ points de dégâts.}

#############################################################
#  The following lines are for when the player uses skills  #
#  on the door.                                             #
#############################################################

# Player uses a skill on the door
# Unlock Door
{170}{}{Tu crochètes adroitement le verrou du container.}
{171}{}{A cause de ton manque de dextérité, tu bloques le verrou du container.}
{172}{}{Tu n'as pas réussi à crocheter le verrou du container.}

# Lock Door
{189}{}{Tu verrouilles adroitement le container.}
{190}{}{Tu ne réussis pas à verrouiller le container.}

# Find Trap on the Door
{194}{}{Tu trouves un piège sur le container.}
{195}{}{Tu ne trouves aucun piège sur le container.}

# Disarm the Trap on the Door
{196}{}{Tu désamorces adroitement le piège.}
{198}{}{Tu ne réussis pas à désarmer le piège.}

# NPC uses a skill on the door
# The following lines are prepended by the NPC's name

# Unlock Door
{173}{}{ crochète adroitement le verrou du container.}
{174}{}{ bloque le verrou du container à cause de son manque de dextérité.}
{175}{}{ n'a pas réussi à crocheter le verrou du container.}

# Lock Door
{191}{}{ verrouille adroitement le container.}
{192}{}{ n'a pas réussi à verrouiller le container.}

# Find Trap on the Door
{199}{}{ trouve un piège sur le container.}
{200}{}{ ne réussit pas à trouver de piège sur le container.}

# Disarm the Trap on the Door
{201}{}{ désactive adroitement le piège.}
{202}{}{ ne réussit pas à désactiver le piège.}

# Using a key on the door.
{400}{}{Tu déverrouilles le container.}

#############################################################
#  The following lines are for when the player tries to     #
#  use items on the door which are not lockpicks.           #
#############################################################

# Player uses an item on the door
{176}{}{Tu fais sauter la serrure du container.}
{177}{}{Tu te fais un tour de reins en essayant de faire sauter la serrure et tu subis un point de dégâts.}

# The following set of lines is to be translated as:
# You strain your back while trying to bust the lock and
# take [x] points of damage.

{178}{}{Tu te fais un tour de reins en essayer de faire sauter la serrure et tu subis }
{179}{}{ points de dégâts.}
{180}{}{Tu es trop faible pour faire sauter la serrure.}

# NPC uses an item on the door
# The following lines are prepended by the NPC's name
{181}{}{ fait sauter la serrure du container.}
{182}{}{ se fait un tour de reins en essayant de faire sauter la serrure et subit un point de dégâts.}

# The following line set of lines is to be translated as:
# NPC strains his back while trying to bust the lock and
# takes [x] points of damage

{183}{}{ se fait un tour de reins en essayant de faire sauter la serrure et subit }
{184}{}{ points de dégâts.}

{185}{}{ est trop faible pour faire sauter la serrure.}
{186}{}{ se fait un tour de reins en essayant de faire sauter la serrure et subit un point de dégâts.}

# The following line set of lines is to be translated as:
# NPC strains her back while trying to bust the lock and
# takes [x] points of damage

{187}{}{ se fait un tour de reins en essayant de faire sauter la serrure et subit }
{188}{}{ points de dégâts.}

#############################################################
#  Damage done to the door due to explosives.               #
#############################################################

{193}{}{Les explosifs n'occasionnent même pas une égratignure au container.}

#############################################################
#  Reporting Door Status should it be used.                 #
#############################################################

{203}{}{Le container est verrouillé.}
{204}{}{Tu remarques un piège sur le container.}

# NPC finds trap
# The following line is to be translated as:
# NPC notices a trap in the door jam.

{205}{}{ remarque un piège sur le container.}

#############################################################
#  Setting traps on a door and whether the door is open or  #
#  closed to set the trap.                                  #
#############################################################

# Player tries to set a trap on an open door
{206}{}{Tu ne peux pas mettre de piège sur ce container car il est ouvert.}

# NPC tries to set a trap on an open door
{207}{}{ ne peut pas mettre de piège sur ce container car il est ouvert.}

# Player tries to set a trap on a closed door
{208}{}{Tu places adroitement un piège dans le container.}
{209}{}{Tu ne réussis pas à placer de piège dans le container.}

# NPC tries to set a trap on a closed door
{210}{}{ place adroitement un piège sur le container.}
{211}{}{ ne réussit pas à placer de piège dans le container.}