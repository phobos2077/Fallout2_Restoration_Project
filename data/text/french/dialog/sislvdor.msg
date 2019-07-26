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
{100}{}{Tu vois une porte en bois.}
{101}{}{Tu vois une porte en métal.}

# description_proc

# Perception Check Critical Success
{102}{}{Tu vois une porte massive munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout. Un explosif puissant est fixé au chambranle. Tu peux l'ouvrir pour observer.}
{103}{}{Tu vois une porte robuste fermée par une serrure. Elle est piégée par un explosif puissant. Tu peux peut-être forcer la porte.}
{104}{}{Tu vois une porte robuste sans mécanisme de verrouillage apparent. Elle est piégée par un explosif puissant. Tu peux peut-être forcer la porte.}
{105}{}{Tu vois une porte robuste avec une vieille serrure rouillée. Elle est piégée par un explosif puissant. Tu peux peut-être forcer la porte.}

{106}{}{Tu vois une porte massive munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout, et dont le chambranle est muni d'un piège. Tu peux l'ouvrir pour observer.}
{107}{}{Tu vois une porte robuste fermée par une serrure. Elle est piégée. Tu peux peut-être forcer la porte.}
{108}{}{Tu vois une porte robuste sans mécanisme de verrouillage apparent. Elle est piégée. Tu peux peut-être forcer la porte.}
{109}{}{Tu vois une porte robuste avec une vieille serrure rouillée. Elle est piégée. Tu peux peut-être forcer la porte.}

{110}{}{Tu vois une porte massive munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout. Un fil de fer coupé sort du chambranle. Tu peux l'ouvrir pour observer.}
{111}{}{Tu vois une porte robuste fermée par une serrure. Un câble tranché dépasse de l'encadrement. Tu peux peut-être forcer la porte.}
{112}{}{Tu vois une porte sans mécanisme de verrouillage apparent. Un câble tranché dépasse de l'encadrement. Tu peux peut-être forcer la porte.}
{113}{}{Tu vois une porte robuste avec une vieille serrure rouillée. Un câble coupé dépasse de l'encadrement. Tu peux peut-être forcer la porte.}

{114}{}{Tu vois une porte massive munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout. Tu peux l'ouvrir pour observer.}
{115}{}{Tu vois une porte robuste fermée par une serrure que tu peux peut-être forcer.}
{116}{}{Tu vois une porte robuste sans mécanisme de verrouillage apparent et que tu peux peut-être forcer.}
{117}{}{Tu vois une porte robuste avec une vieille serrure rouillée que tu peux peut-être forcer.}

# Perception Check Success

{118}{}{Tu vois une porte massive munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout. Un explosif puissant est fixé au chambranle.}
{119}{}{Tu vois une porte robuste fermée par une serrure. Elle est piégée par un explosif puissant.}
{120}{}{Tu vois une porte robuste sans mécanisme de verrouillage apparent. Elle est piégée par un explosif puissant.}
{121}{}{Tu vois une porte robuste avec une vieille serrure rouillée. Elle est piégée par un explosif puissant.}

{122}{}{Tu vois une porte massive munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout. Un piège est fixé au chambranle.}
{123}{}{Tu vois une porte robuste fermée par une serrure. Elle est piégée.}
{124}{}{Tu vois une porte robuste sans mécanisme de verrouillage apparent. Un piège est fixé au chambranle.}
{125}{}{Tu vois une porte robuste avec une vieille serrure rouillée. Un piège est fixé au chambranle.}

{126}{}{Tu vois une porte massive munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout. Un fil de fer coupé sort du chambranle.}
{127}{}{Tu vois une porte robuste fermée par une serrure. Un câble tranché dépasse de l'encadrement.}
{128}{}{Tu vois une porte robuste sans mécanisme de verrouillage apparent. Un câble tranché dépasse de l'encadrement.}
{129}{}{Tu vois une porte robuste fermée par une vieille serrure rouillée. Un câble coupé dépasse de l'encadrement.}

{130}{}{Tu vois une porte massive munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout.}
{131}{}{Tu vois une porte robuste fermée par une serrure.}
{132}{}{Tu vois une porte robuste sans mécanisme de verrouillage apparent.}
{133}{}{Tu vois une porte robuste avec une vieille serrure rouillée.}

# Perception Check Critical Failure

{134}{}{Tu vois une porte endommagée munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout. Un explosif puissant est fixé au chambranle.}
{135}{}{Tu vois une porte endommagée fermée par une serrure. Elle est piégée par un explosif puissant.}
{136}{}{Tu vois une porte endommagée sans mécanisme de verrouillage apparent. Elle est piégée par un explosif puissant.}
{137}{}{Tu vois une porte endommagée fermée par une vieille serrure rouillée. Elle est piégée par un explosif puissant.}

{138}{}{Tu vois une porte endommagée munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout. Un piège est fixé au chambranle.}
{139}{}{Tu vois une porte endommagée fermée par une serrure. Elle est piégée.}
{140}{}{Tu vois une porte endommagée sans mécanisme de verrouillage apparent. Elle est piégée.}
{141}{}{Tu vois une porte endommagée fermée par une vieille serrure rouillée. Elle est piégée.}

{142}{}{Tu vois une porte endommagée munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout. Un fil de fer coupé sort du chambranle.}
{143}{}{Tu vois une porte endommagée fermée par une serrure. Un câble tranché dépasse de l'encadrement.}
{144}{}{Tu vois une porte endommagée sans mécanisme de verrouillage apparent. Un câble tranché dépasse de l'encadrement.}
{145}{}{Tu vois une porte endommagée fermée par une vieille serrure rouillée. Un câble coupé dépasse de l'encadrement.}

{146}{}{Tu vois une porte endommagée munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout.}
{147}{}{Tu vois une porte endommagée fermée par une serrure.}
{148}{}{Tu vois une porte endommagée sans mécanisme de verrouillage apparent.}
{149}{}{Tu vois une porte endommagée fermée par une vieille serrure rouillée.}

# Perception Check Failure

{150}{}{Tu vois une vieille porte munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout. Un explosif puissant est fixé au chambranle.}
{151}{}{Tu vois une vieille porte fermée par une serrure. Elle est piégée par un explosif puissant.}
{152}{}{Tu vois une vieille porte sans mécanisme de verrouillage apparent. Elle est piégée par un explosif puissant.}
{153}{}{Tu vois une vieille porte fermée par une vieille serrure rouillée. Elle est piégée par un explosif puissant.}

{154}{}{Tu vois une vieille porte munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout. Un piège est fixé au chambranle.}
{155}{}{Tu vois une vieille porte fermée par une serrure. Elle est piégée.}
{156}{}{Tu vois une vieille porte sans mécanisme de verrouillage apparent. Elle est piégée.}
{157}{}{Tu vois une vieille porte fermée par une vieille serrure rouillée. Elle est piégée.}

{158}{}{Tu vois une vieille porte munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout. Un fil de fer coupé sort du chambranle.}
{159}{}{Tu vois une vieille porte fermée par une serrure. Un câble tranché dépasse de l'encadrement.}
{160}{}{Tu vois une vieille porte sans mécanisme de verrouillage apparent. Un câble tranché dépasse de l'encadrement.}
{161}{}{Tu vois une vieille porte fermée par une vieille serrure rouillée. Un câble coupé dépasse de l'encadrement.}

{162}{}{Tu vois une vieille porte munie d'un verrou qui peut être ouvert à l'aide d'un passe-partout.}
{163}{}{Tu vois une vieille porte fermée par une serrure.}
{164}{}{Tu vois une vieille porte sans mécanisme de verrouillage apparent.}
{165}{}{Tu vois une vieille porte fermée par une vieille serrure rouillée.}

#############################################################
#  The following lines are for damage done to the player or #
#  critter who tried to open the door, or failed a traps    #
#  roll.                                                    #
#############################################################

# The following sets of lines are to be translated as:
# You set off the trap and were hit for [x] points of damage.
# NPC sets of the trap and was hit for [x] points of damage.

# Player sets off the trap
{166}{}{Tu as déclenché l'explosif et tu as pris }
{167}{}{ points de dégâts.}

# NPC sets off the trap
{168}{}{ a déclenché l'explosif et prend }
{169}{}{ points de dégâts.}

#############################################################
#  The following lines are for when the player uses skills  #
#  on the door.                                             #
#############################################################

# Player uses a skill on the door
# Unlock Door
{170}{}{Tu as adroitement crocheté la serrure de la porte.}
{171}{}{A cause de ton manque d'adresse, tu as coincé la serrure de la porte.}
{172}{}{Tu ne réussis pas à crocheter la serrure de la porte.}

# Lock Door
{189}{}{Tu verrouilles adroitement la porte.}
{190}{}{Tu ne réussis pas à verrouiller la porte.}

# Find Trap on the Door
{194}{}{Tu trouves un piège sur la porte.}
{195}{}{Tu ne réussis pas à trouver de piège sur la porte.}

# Disarm the Trap on the Door
{196}{}{Tu désarmes adroitement le piège.}
{198}{}{Tu ne réussis pas à désarmer le piège.}

# NPC uses a skill on the door
# The following lines are prepended by the NPC's name

# Unlock Door
{173}{}{ crochète adroitement la serrure de la porte.}
{174}{}{ a fait preuve de maladresse et maintenant la serrure de la porte est coincée.}
{175}{}{ n'a pas réussi à crocheter la serrure de cette porte.}

# Lock Door
{191}{}{ a adroitement verrouillé la porte.}
{192}{}{ n'a pas réussi à verrouiller la porte.}

# Find Trap on the Door
{199}{}{ trouve un piège sur la porte.}
{200}{}{ ne réussit pas à trouver le piège sur la porte.}

# Disarm the Trap on the Door
{201}{}{ a adroitement désarmé le piège.}
{202}{}{ n'a pas réussi à désarmer le piège.}

#############################################################
#  The following lines are for when the player tries to     #
#  use items on the door which are not lockpicks.           #
#############################################################

# Player uses an item on the door
{176}{}{Tu fais sauter la serrure de la porte.}
{177}{}{Tu te fais un tour de reins en essayant de faire sauter la serrure et tu prends un point de dégâts.}

# The following set of lines is to be translated as:
# You strain your back while trying to bust the lock and
# take [x] points of damage.

{178}{}{Tu te fais un tour de reins en essayer de faire sauter la serrure et tu subis }
{179}{}{ points de dégâts.}
{180}{}{Tu es trop faible pour faire sauter la serrure.}

# NPC uses an item on the door
# The following lines are prepended by the NPC's name
{181}{}{ fait sauter la serrure de la porte.}
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

{193}{}{Les explosifs ne font même pas une égratignure à la porte.}

#############################################################
#  Reporting Door Status should it be used.                 #
#############################################################

{203}{}{La porte est verrouillée.}
{204}{}{Tu remarques un piège dans le montant de la porte.}

# NPC finds trap
# The following line is to be translated as:
# NPC notices a trap in the door jam.

{205}{}{ remarque un piège dans le montant de la porte.}

#############################################################
#  Setting traps on a door and whether the door is open or  #
#  closed to set the trap.                                  #
#############################################################

# Player tries to set a trap on an open door
{206}{}{Tu es incapable de placer un piège sur cette porte, parce qu'elle est ouverte.}

# NPC tries to set a trap on an open door
{207}{}{ est incapable de placer un piège sur cette porte, parce qu'elle est ouverte.}

# Player tries to set a trap on a closed door
{208}{}{Tu places adroitement un piège dans l'encadrement de la porte.}
{209}{}{Tu ne parviens pas à placer un piège dans l'encadrement de la porte.}

# NPC tries to set a trap on a closed door
{210}{}{ place adroitement un piège dans l'encadrement de la porte.}
{211}{}{ ne réussit pas à placer un piège dans l'encadrement de la porte.}

# This is used specificly for this door
{212}{}{Cette porte ne s'ouvre pas par ici.}
{213}{}{La porte refuse de céder.}
