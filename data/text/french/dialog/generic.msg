#############################################################
#  Message File: Generic.msg                                #
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
#  Created: October 1, 1997                                 #
#                                                           #
#  Updated:                                                 #
#############################################################

#############################################################
#  The following lines are for giving out experience points #
#  to the player.                                           #
#############################################################

# Player gains [x] of experience points
{100}{}{Tu reçois }
{101}{}{ points d'expérience.}


#############################################################
#  The following lines are for what the player received     #
#  experience for (ie, picking a lock, disarming traps).    #
#############################################################
{102}{}{Tu réussis à désarmer le piège.}
{103}{}{Tu ne parviens pas à désarmer le piège.}
{104}{}{Tu déclenches accidentellement le piège.}

# Prepend Lines with NPC name
{105}{}{ réussit à désarmer le piège.}
{106}{}{ ne parvient pas à désarmer le piège.}
{107}{}{ déclenche accidentellement le piège.}

{200}{}{Merci.}
{201}{}{Salut.}
{202}{}{Merci.}
{203}{}{Merci !}
{204}{}{Non merci.}
{205}{}{Non merci.}
{206}{}{Certainement.}
{207}{}{Oui.}
{208}{}{Non.}
{209}{}{Ok.}

#############################################################
#  The following lines are generic noises that the player   #
#  makes when he/she has a low i.q. level.                  #
#############################################################
{300}{}{Bouga.}
{301}{}{Ouga.}
{302}{}{Ouga.}
{303}{}{Ourg.}

#############################################################
#  The following lines are generic non-spoken dialogs       #
#############################################################
{350}{}{[Fin]}
{351}{}{[Au revoir]}
{352}{}{[Plus]}
{353}{}{[Continuer]}
{354}{}{[Combat]}
{355}{}{[Donner l'argent]}

#############################################################
#  The following lines are generic departure dialogs        #
#############################################################
{375}{}{Salut.}
{376}{}{Au revoir.}

#############################################################
#  The following lines are for special events in the        #
#  dude_obj                                                 #
#############################################################
{400}{}{Tu meurs suite à l'injection mortelle du Dr Troy.}

{450}{}{La zone est dégagée. Le secteur est pacifié. Beau travail. Allons-y !}

#############################################################
#  The following lines are for Miscelleous things needed    #
#  throughout the game.                                     #
#############################################################

{900}{}{On dirait qu'un explosif bien placé pourrait détruire cette très vieille porte.}
{901}{}{Tu vois la charrette à esclaves utilisée pour ramener les esclaves à la Fosse.}

{905}{}{Ouah ! Ouah !}

{910}{}{Tu reçois une décharge du sol électrifié.}
{911}{}{ reçoit une décharge du sol électrifié.}
{912}{}{Le niveau de puissance tombe à zéro, puis remonte à 50% lorsque les générateurs de secours se mettent en marche.}
{913}{}{Un léger bourdonnement se fait entendre alors que le flux d'électricité passe de nouveau dans la base.}

{920}{}{Tu trébuches sur ce qui reste de Nagor, qui est mort en essayant de sauver son chien.}
{921}{}{Nagor est mort en essayant de rapporter le corps de son chien au village.}

{930}{}{::Huuuuuurlement::}

{950}{}{Tu prends un peu de temps pour t'entraîner. Tes compétences de combat au Corps à Corps augmentent de 5%.}

{951}{}{Le rataupe attaque et essuie un coup fatal.}
{952}{}{Le match est terminé.}


#############################################################
#  Quest Information. Mainly used for solving quests        #
#############################################################

{1000}{}{Tu as réussi le test de citoyenneté.}
{1001}{}{Tu fais part à McClure de la dépendance au Jet de Redding.}
{1002}{}{Tu as libéré le commerce avec Redding.}
{1003}{}{Tu désactives les champs de force.}
{1004}{}{Tu pirates l'ordinateur.}
{1005}{}{Tu répares le puits.}
{1006}{}{Tu traînes Hakeswill en justice.}
{1007}{}{Tu livres la puce de l'excavatrice.}
{1008}{}{Tu as réglé le problème de la veuve Rooney.}
{1009}{}{Tu as réussi les épreuves d'Arroyo.}
{1010}{}{Tu as donné la formule de l'antidote au Dr Troy.}
{1011}{}{Tu as détruit le réacteur.}
{1012}{}{ALERTE ! FUSION COMPLETE DU REACTEUR !}
{1013}{}{ALERTE ! Toxines rejetées dans les conduits d'aération !}
{1014}{}{Tu as nettoyé la mine du Grand Wanamingo.}
{1015}{}{Tu as survécu à la salle des énigmes.}
{1016}{}{Oh là là, j'allais oublier le J.E.K. Peut-être qu'il y en aurait un dans les parages...}
{1017}{}{Avec ton code J.E.K, la porte explose.}
{1018}{}{Tu a éliminé la bande de Gâchette Morton.}
{1019}{}{Tu as désactivé le champ de force.}
{1020}{}{Tu as mis fin à la baston au bar.}
{1021}{}{Tu as désactivé le terminal du robot de réparation.}

{1050}{}{Tu broies la toxine de radscorpion en antidote.}
{1051}{}{Tu mélanges la racine de Xandre et la fleur de Broc pour obtenir une poudre de guérison.}

{1099}{}{Le J.E.K est trop précieux au village pour que tu le laisses ici.}

#############################################################
#  These are for converting numeric values to number words. #
#  You want it to go further, add 'em yourself.             #
#############################################################
{2000}{}{zéro}
{2001}{}{un}
{2002}{}{deux}
{2003}{}{trois}
{2004}{}{quatre}
{2005}{}{cinq}
{2006}{}{six}
{2007}{}{sept}
{2008}{}{huit}
{2009}{}{neuf}
{2010}{}{dix}
{2011}{}{onze}
{2012}{}{douze}
{2013}{}{treize}
{2014}{}{quatorze}
{2015}{}{quinze}
{2016}{}{seize}
{2017}{}{dix-sept}
{2018}{}{dix-huit}
{2019}{}{dix-neuf}
{21020}{}{vingt}
{2021}{}{vingt et un}
{2022}{}{vingt-deux}
{2023}{}{vingt-trois}
{2024}{}{vingt-quatre}
{2025}{}{vingt-cinq}
{2026}{}{vingt-six}
{2027}{}{vingt-sept}
{2028}{}{vingt-huit}
{2029}{}{vingt-neuf}
{2030}{}{trente}
{2031}{}{trente et un}
{2032}{}{trente-deux}
{2033}{}{trente-trois}
{2034}{}{trente-quatre}
{2035}{}{trente-cinq}
{2036}{}{trente-six}
{2037}{}{trente-sept}
{2038}{}{trente-huit}
{2039}{}{trente-neuf}
{2040}{}{quarante}
{2041}{}{quarante et un}
{2042}{}{quarante-deux}
{2043}{}{quarante-trois}
{2044}{}{quarante-quatre}
{2045}{}{quarante-cinq}
{2046}{}{quarante-six}
{2047}{}{quarante-sept}
{2048}{}{quarante-huit}
{2049}{}{quarante-neuf}
{2050}{}{cinquante}
{2051}{}{cinquante et un}
{2052}{}{cinquante-deux}
{2053}{}{cinquante-trois}
{2054}{}{cinquante-quatre}
{2055}{}{cinquante-cinq}
{2056}{}{cinquante-six}
{2057}{}{cinquante-sept}
{2058}{}{cinquante-huit}
{2059}{}{cinquante-neuf}
{2060}{}{soixante}
{2061}{}{soixante et un}
{2062}{}{soixante-deux}
{2063}{}{soixante-trois}
{2064}{}{soixante-quatre}
{2065}{}{soixante-cinq}
{2066}{}{soixante-six}
{2067}{}{soixante-sept}
{2068}{}{soixante-huit}
{2069}{}{soixante-neuf}
{2070}{}{soixante-dix}
{2071}{}{soixante et onze}
{2072}{}{soixante-douze}
{2073}{}{soixante-treize}
{2074}{}{soixante-quatorze}
{2075}{}{soixante-quinze}
{2076}{}{soixante-seize}
{2077}{}{soixante-dix-sept}
{2078}{}{soixante-dix-huit}
{2079}{}{soixante-dix-neuf}
{2080}{}{quatre-vingt}
{2081}{}{quatre-vingt-un}
{2082}{}{quatre-vingt-deux}
{2083}{}{quatre-vingt-trois}
{2084}{}{quatre-vingt-quatre}
{2085}{}{quatre-vingt-cinq}
{2086}{}{quatre-vingt-six}
{2087}{}{quatre-vingt-sept}
{2088}{}{quatre-vingt-huit}
{2089}{}{quatre-vingt-neuf}
{2090}{}{quatre-vingt-dix}
{2091}{}{quatre-vingt-onze}
{2092}{}{quatre-vingt-douze}
{2093}{}{quatre-vingt-treize}
{2094}{}{quatre-vingt-quatorze}
{2095}{}{quatre-vingt-quinze}
{2096}{}{quatre-vingt-seize}
{2097}{}{quatre-vingt-dix-sept}
{2098}{}{quatre-vingt-dix-huit}
{2099}{}{quatre-vingt-dix-neuf}
{2100}{}{cent}

#############################################################
#  These are generic Reactions to the player's actions in   #
#  the game to other NPC's. NPC's float these lines.        #
#############################################################

######
#  Caught Pickpocketing (Warning)  (3000-3299)
######

# Tough Guard (3000-3024)
{3000}{}{}

# Guard (3025-3049)
{3025}{}{}

# Tough Citizen (3050-3074)
{3050}{}{Si tu recommences, je devrai te tuer.}
{3051}{}{Je n'ai rien à voler, espèce d'imbécile.}
{3052}{}{Je ne crois pas qu'on se connaisse *si* bien que ça.}
{3053}{}{Si tu touches encore à ça, tu me le payeras.}
{3054}{}{Ne me touche pas.}
{3055}{}{Si jamais tu recommences, je te casserai la tête.}
{3056}{}{Bas les pattes !}
{3057}{}{Tu cherches les ennuis ?}
{3058}{}{Si jamais tu me touches encore, je te tuerai.}
{3059}{}{Les ennuis, y'a que ça qui est gratuit.}
{3060}{}{Hé ! Recule.}
{3061}{}{Attention !}
{3062}{}{T'as envie de mourir ?}
{3063}{}{Si tu recommences, je t'exploserai la tête.}
{3064}{}{C'est à moi, bas les pattes !}

# Citizen (3075-3099)
{3075}{}{}

# Custom (3100-3299)
{3100}{}{}

######
#  Caught Stealing from Something (Warning)   (3300-3599)
######

# Tough Guard (3300-3324)
{3300}{}{}

# Guard (3325-3349)
{3325}{}{Que dirais-tu de remettre tout ça là où tu l'as trouvé ?}
{3326}{}{Tu sais, c'est pas bien de prendre ce qui ne t'appartient pas.}
{3327}{}{Dégage de là, crapule !}
{3328}{}{Et ne viens pas me dire que tu *cherchais juste tes clés*. Dégage d'ici !}
{3329}{}{Quoi que tu cherches, tu ne le trouveras pas ici. Compris ?}

# Tough Citizen (3350-3374)
{3350}{}{}

# Citizen (3375-3399)
{3375}{}{}

# Custom (3400-3599)
{3400}{}{}

######
#  Caught Lockpicking Door (Warning)   (3600-3899)
######

# Tough Guard (3600-3624)
{3600}{}{}

# Guard (3625-3649)
{3625}{}{Hé, toi ! Pourquoi tournes-tu autour de ce truc ?}
{3626}{}{Si t'as pas une clé dans la main, tu ferais mieux de t'en aller.}
{3627}{}{Si c'est fermé à clé, c'est qu'il y a une raison !}
{3628}{}{Laisse tomber avant que ça tourne au vinaigre !}

# Tough Citizen (3650-3674)
{3650}{}{}

# Citizen (3675-3699)
{3675}{}{}

# Custom (3700-3899)
{3700}{}{}

######
#  Caught Sneaking (Warning)    (3900-4199)
######

# Tough Guard (3900-3925)
{3900}{}{}

# Guard (3925-3949)
{3925}{}{Hé toi ! Que fais-tu là ?}
{3926}{}{Tu ne devrais pas être là !}
{3927}{}{Si tu crois que tu vas te débarrasser de moi comme ça, tu te trompes !}
{3928}{}{J'espère que t'es pas en train de manigancer ce à quoi je pense.}
{3929}{}{Quoi ? Tu croyais que j'allais pas te voir ? Sors d'ici !}

# Tough Citizen (3950-3974)
{3950}{}{}

# Citizen (3975-3999)
{3975}{}{}

# Custom (4000-4199)
{4000}{}{}

######
#  Being Attacked by the player (Warning)    (4200-4499)
######

# Tough Guard (4200-4225)
{4200}{}{}

# Guard (4225-4249)
{4225}{}{}

# Tough Citizen (4250-4274)
{4250}{}{}

# Citizen (4275-4299)
{4275}{}{}

# Custom (4300-4499)
{4300}{}{}

######
#  Call for Help Guards  (4500-4799)
######

# Tough Guard (4500-4525)
{4500}{}{}

# Guard (4525-4549)
{4525}{}{}

# Tough Citizen (4550-4574)
{4550}{}{}

# Citizen (4575-4599)
{4575}{}{}

# Custom (4600-4799)
{4600}{}{}

######
# Call for Help Others    (4800-5099)
######

# Tough Guard (4800-4825)
{4800}{}{}

# Guard (4825-4849)
{4825}{}{}

# Tough Citizen (4850-4874)
{4850}{}{}

# Citizen (4875-4899)
{4875}{}{}

# Custom (4900-5099)
{4900}{}{}

######
#  Attack Player  [War Cries]   (5100-5399)
######

# Tough Guard (5100-5125)
{5100}{}{}

# Guard (5125-5149)
{5125}{}{}

# Tough Citizen (5150-5174)
{5150}{}{}

# Citizen (5175-5199)
{5175}{}{}

# Custom (5200-5399)
{5200}{}{}

# Watched Comments(5400-5599)
{5400}{}{Ne touche pas à ça.}

# For Repair Bots
{9000}{}{Réparations terminées.}
{9001}{}{Réarmement terminé.}
{9002}{}{Réparation des dégâts structurels.}

# default options for party members
{10000}{}{Dis-moi quelque chose.}
{10001}{}{Tu devrais aller te faire soigner, maintenant.}
{10002}{}{Je voudrais que tu attendes ici jusqu'à ce que je revienne.}
{10003}{}{Pose ton arme.}
{10004}{}{Reste à côté de moi.}
{10005}{}{Ne t'éloigne pas trop.}
{10006}{}{On devrait se disperser un peu.}
{10007}{}{Ca suffit pour l'instant.}
{10008}{}{Il faut changer la distance entre nous.}
{10009}{}{Il faut que je te parle de ton équipement.}
{10010}{}{Après réflexion, je pense que cette distance convient pour l'instant.}
{10011}{}{Finalement, je crois qu'il n'y a rien que j'aie vraiment besoin de savoir sur ton équipement.}
{10012}{}{Il faut que tu enlèves ton armure.}
{10013}{}{Il faut que je sache quelle sorte d'armes tu sais manier.}

# default join me again message
{10100}{}{Allons-y.}

#added by killap - default msgs
{20000}{}{Cela ne fait rien.}

#added by killap - default msgs
{20100}{}{Il n'y a pas de verrou sur cette porte.}

#added by killap
{30000}{}{Tu as volé ta propre tribu.}

#added by killap - New Perks
{40000}{}{Porte-poisse des machines à sous} 
{40001}{}{Merci à un petit appareil ménager, toujours courageux, grâce à qui tu connais un moyen secret de faire cracher tout leur argent aux machines à sous. Dommage que le processus casse la machine. Oops.}