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
{100}{}{Vidíš døevìné dveøe.}
{101}{}{Vidíš elezné dveøe.}

# description_proc

# Perception Check Critical Success
{102}{}{Vidíš pevné dveøe se zámkem odemykatelnım pomocí paklíèù a s vysoce vıbušnou pastí umístìnou na zárubni dveøí, kterou se mùeš pokusit odstranit.}
{103}{}{Vidíš pevné dveøe se zámkem a vysoce vıbušnou pastí umístìnou na zárubni dveøí, kterou se mùeš pokusit odstranit.}
{104}{}{Vidíš pevné dveøe bez zjevného odemykacího zaøízení a vysoce vıbušnou pastí umístìnou na zárubni dveøí, kterou se mùeš pokusit odstranit.}
{105}{}{Vidíš pevné dveøe se starım, rezavım zámkem a vysoce vıbušnou pastí umístìnou na zárubni dveøí, kterou se mùeš pokusit odstranit.}

{106}{}{Vidíš pevné dveøe se zámkem odemykatelnım pomocí paklíèù a pastí umístìnou na zárubni dveøí, kterou se mùeš pokusit odstranit.}
{107}{}{Vidíš pevné dveøe se zámkem a pastí umístìnou na zárubni dveøí, kterou se mùeš pokusit odstranit.}
{108}{}{Vidíš pevné dveøe bez zjevného odemykacího zaøízení a pastí umístìnou na zárubni dveøí, kterou se mùeš pokusit odstranit.}
{109}{}{Vidíš pevné dveøe se starım, rezavım zámkem a pastí umístìnou na zárubni dveøí, kterou se mùeš pokusit odstranit.}

{110}{}{Vidíš pevné dveøe se zámkem odemykatelnım sadou paklíèù a kousek drátku, kterı èouhá ze zárubnì dveøí. Mùeš se je pokusit vypáèit.}
{111}{}{Vidíš pevné dveøe se zámkem a kousek drátku, kterı èouhá ze zárubnì dveøí. Mùeš se je pokusit vypáèit.}
{112}{}{Vidíš pevné dveøe bez zjevného odemykacího zaøízení a kousek drátku, kterı èouhá ze zárubnì dveøí. Mùeš se je pokusit vypáèit.}
{113}{}{Vidíš pevné dveøe se starım, rezavım zámkem a kousek drátku, kterı èouhá ze zárubnì dveøí. Mùeš se je pokusit vypáèit.}

{114}{}{Vidíš pevné dveøe se zámkem odemykatelnım pomocí paklíèù, které se mùeš pokusit vypáèit.}
{115}{}{Vidíš pevné dveøe se zámkem, které se mùeš pokusit vypáèit.}
{116}{}{Vidíš pevné dveøe bez zjevného odemykacího zaøízení, které se mùeš pokusit vypáèit.}
{117}{}{Vidíš pevné dveøe se starım, rezavım zámkem, které se mùeš pokusit vypáèit.}

# Perception Check Success

{118}{}{Vidíš pevné dveøe se zámkem odemykatelnım pomocí paklíèù a vysoce vıbušnou pastí umístìnou na zárubni dveøí.}
{119}{}{Vidíš pevné dveøe se zámkem a vysoce vıbušnou pastí umístìnou na zárubni dveøí.}
{120}{}{Vidíš pevné dveøe bez zjevného odemykacího zaøízení a vysoce vıbušnou pastí umístìnou na zárubni dveøí.}
{121}{}{Vidíš pevné dveøe se starım, rezavım zámkem a vysoce vıbušnou pastí umístìnou na zárubni dveøí.}

{122}{}{Vidíš pevné dveøe se zámkem odemykatelnım pomocí paklíèù a pastí umístìnou na zárubni dveøí.}
{123}{}{Vidíš pevné dveøe se zámkem a pastí umístìnou na zárubni dveøí.}
{124}{}{Vidíš pevné dveøe bez zjevného odemykacího zaøízení a pastí umístìnou na zárubni dveøí.}
{125}{}{Vidíš pevné dveøe se starım a rezavım zámkem a pastí umístìnou na zárubni dveøí.}

{126}{}{Vidíš pevné dveøe se zámkem odemykatelnım pomocí paklíèù a kousek drátku, kterı èouhá ze zárubnì dveøí.}
{127}{}{Vidíš pevné dveøe se zámkem a kousek drátku, kterı èouhá ze zárubnì dveøí.}
{128}{}{Vidíš pevné dveøe bez zjevného odemykacího zaøízení a kousek drátku, kterı èouhá ze zárubnì dveøí.}
{129}{}{Vidíš pevné dveøe se starım, rezavım zámkem a kousek drátku, kterı èouhá ze zárubnì dveøí.}

{130}{}{Vidíš pevné dveøe se zámkem, které mùeš odemknout pomocí paklíèù.}
{131}{}{Vidíš pevné dveøe se zámkem.}
{132}{}{Vidíš pevné dveøe bez zjevného odemykacího zaøízení.}
{133}{}{Vidíš pevné dveøe se starım, rezavım zámkem.}

# Perception Check Critical Failure

{134}{}{Vidíš ponièené dveøe se zámkem, které mùeš odemknout pomocí paklíèù, a vysoce vıbušnou pastí umístìnou na zárubni dveøí.}
{135}{}{Vidíš ponièené dveøe se zámkem a vysoce vıbušnou pastí umístìnou na zárubni dveøí.}
{136}{}{Vidíš ponièené dveøe bez zjevného odemykacího zaøízení a vysoce vıbušnou pastí umístìnou na zárubni dveøí.}
{137}{}{Vidíš ponièené dveøe se starım, rezavım zámkem a vysoce vıbušnou pastí umístìnou na zárubni dveøí.}

{138}{}{Vidíš ponièené dveøe se zámkem, které mùeš odemknout pomocí paklíèù, a pastí umístìnou na zárubni dveøí.}
{139}{}{Vidíš ponièené dveøe se zámkem a pastí umístìnou na zárubni dveøí.}
{140}{}{Vidíš ponièené dveøe bez zjevného odemykacího zaøízení a pastí umístìnou na zárubni dveøí.}
{141}{}{Vidíš ponièené dveøe se starım, rezavım zámkem a pastí umístìnou na zárubni dveøí.}

{142}{}{Vidíš ponièené dveøe se zámkem, které mùeš odemknout pomocí paklíèù, a kousek drátku, kterı èouhá ze zárubnì dveøí.}
{143}{}{Vidíš ponièené dveøe se zámkem a kousek drátku, kterı èouhá ze zárubnì dveøí.}
{144}{}{Vidíš ponièené dveøe bez zjevného odemykacího zaøízení a kousek drátku, kterı èouhá ze zárubnì dveøí.}
{145}{}{Vidíš ponièené dveøe se starım, rezavım zámkem a kousek drátku, kterı èouhá ze zárubnì dveøí.}

{146}{}{Vidíš ponièené dveøe se zámkem, které mùeš odemknout pomocí paklíèù.}
{147}{}{Vidíš ponièené dveøe se zámkem.}
{148}{}{Vidíš ponièené dveøe bez zjevného odemykacího zaøízení.}
{149}{}{Vidíš ponièené dveøe se starım, rezavım zámkem.}

# Perception Check Failure

{150}{}{Vidíš staré dveøe se zámkem, které mùeš odemknout pomocí paklíèù, a vysoce vıbušnou pastí umístìnou na zárubni dveøí.}
{151}{}{Vidíš staré dveøe se zámkem a vysoce vıbušnou pastí umístìnou na zárubni dveøí.}
{152}{}{Vidíš staré dveøe bez zjevného odemykacího zaøízení a vysoce vıbušnou pastí umístìnou na zárubni dveøí.}
{153}{}{Vidíš staré dveøe se starım, rezavım zámkem a vysoce vıbušnou pastí umístìnou na zárubni dveøí.}

{154}{}{Vidíš staré dveøe se zámkem, které mùeš odemknout pomocí paklíèù, a pastí umístìnou na zárubni dveøí.}
{155}{}{Vidíš staré dveøe se zámkem a pastí umístìnou na zárubni dveøí.}
{156}{}{Vidíš staré dveøe bez zjevného odemykacího zaøízení a pastí umístìnou na zárubni dveøí.}
{157}{}{Vidíš staré dveøe se starım, rezavım zámkem a pastí umístìnou na zárubni dveøí.}

{158}{}{Vidíš staré dveøe se zámkem, které mùeš odemknout pomocí paklíèù, a kousek drátku, kterı èouhá ze zárubnì dveøí.}
{159}{}{Vidíš staré dveøe se zámkem a kousek drátku, kterı èouhá ze zárubnì dveøí.}
{160}{}{Vidíš staré dveøe bez zjevného odemykacího zaøízení a kousek drátku, kterı èouhá ze zárubnì dveøí.}
{161}{}{Vidíš staré dveøe se starım, rezavım zámkem a kousek drátku, kterı èouhá ze zárubnì dveøí.}

{162}{}{Vidíš staré dveøe se zámkem, které mùeš odemknout pomocí paklíèù.}
{163}{}{Vidíš staré dveøe se zámkem.}
{164}{}{Vidíš staré dveøe bez zjevného odemykacího zaøízení.}
{165}{}{Vidíš staré dveøe se starım, rezavım zámkem.}

#############################################################
#  The following lines are for damage done to the player or #
#  critter who tried to open the door, or failed a traps    #
#  roll.                                                    #
#############################################################

# The following sets of lines are to be translated as:
# You set off the trap and were hit for [x] points of damage.
# NPC sets of the trap and was hit for [x] points of damage.

# Player sets off the trap
{166}{}{Aktivuješ past a ta tì zasáhla za }
{167}{}{ bodù poškození.}

# NPC sets off the trap
{168}{}{ aktivuje past a byl zasaen za }
{169}{}{ bodù poškození.}

#############################################################
#  The following lines are for when the player uses skills  #
#  on the door.                                             #
#############################################################

# Player uses a skill on the door
# Unlock Door
{170}{}{Úspìšnì odemykáš zámek na dveøích.}
{171}{}{Díky své nešikovnosti se zámek dveøí zasekl.}
{172}{}{Nepodaøilo se ti dveøe odemknout.}

# Lock Door
{189}{}{Úspìšnì zamykáš dveøe.}
{190}{}{Nepodaøilo se ti dveøe zamknout.}

# Find Trap on the Door
{194}{}{Nacházíš na dveøích past.}
{195}{}{Nepodaøilo se ti na dveøích najít past.}

# Disarm the Trap on the Door
{196}{}{Zkušenì zneškodòuješ past na dveøích.}
{198}{}{Nepodaøilo se ti zneškodnit past na dveøích.}

# NPC uses a skill on the door
# The following lines are appended with the NPC's name

# Unlock Door
{173}{}{ úspìšnì odemyká zámek dveøí.}
{174}{}{ nezkušenost zpùsobila zaseknutí zámku dveøí.}
{175}{}{ se nepodaøilo dveøe zamknout.}

# Lock Door
{191}{}{ úspìšnì zamyká dveøe.}
{192}{}{ se nepodaøilo dveøe zamknout.}

# Find Trap on the Door
{199}{}{ nachází na dveøích past.}
{200}{}{ se nepodaøilo najít na dveøích past.}

# Disarm the Trap on the Door
{201}{}{ zkušenì zneškodòuje past na dveøích.}
{202}{}{ se nepodaøilo zneškodnit past na dveøích.}

# Using a key on the door.
{400}{}{Odemykáš dveøe.}

#############################################################
#  The following lines are for when the player tries to     #
#  use items on the door which are not lockpicks.           #
#############################################################

# Player uses an item on the door
{176}{}{Podaøilo se ti vypáèit zámek u dveøí.}
{177}{}{Pøi páèení zámku sis poranil záda a to ti zpùsobilo jeden bod poškození.}

# The following set of lines is to be translated as:
# While trying to bust the lock, you strain your back and
# take [x] points of damage.

{178}{}{Pøi páèení zámku sis poranil záda a to ti zpùsobilo poškození za }
{179}{}{ bodù.}
{180}{}{Na vypáèení tohoto zámku nemáš dostateènou sílu.}

# NPC uses an item on the door
# The following lines are prepended by the NPC's name
{181}{}{ se podaøilo vypáèit zámek u dveøí.}
{182}{}{ si poranil záda, kdy se pokoušel vypáèit zámek, co mu zpùsobilo jeden bod poškození.}

# The following line set of lines is to be translated as:
# NPC strains his back while trying to bust the lock and
# takes [x] points of damage

{183}{}{ si poranil záda, kdy se pokoušel vypáèit zámek, co mu zpùsobilo poškození za }
{184}{}{ bodù.}

{185}{}{ nemá na vypáèení zámku dostateènou sílu.}
{186}{}{ si poranila záda, kdy se pokoušela vypáèit zámek, co jí zpùsobilo jeden bod poškození.}

# The following line set of lines is to be translated as:
# NPC strains her back while trying to bust the lock and
# takes [x] points of damage

{187}{}{ si poranila záda, kdy se pokoušela vypáèit zámek, co jí zpùsobilo poškození za }
{188}{}{ bodù.}

#############################################################
#  Damage done to the door due to explosives.               #
#############################################################

{193}{}{Vıbuch na tìchto dveøích nezanechal ani škrábnutí.}

#############################################################
#  Reporting Door Status should it be used.                 #
#############################################################

{203}{}{Tyto dveøe se zdají bıt zamèené. Vypadá to, e místo klíèe vyadují nìjakou tenkou kartu.}
{204}{}{Slyšíš praskání elektrickıch vıbojù ve dveøích.}

# NPC finds trap
# The following line is to be translated as:
# NPC notices a trap in the door jamb.

{205}{}{ si všímá praskání elektrickıch vıbojù ve dveøích.}

#############################################################
#  Setting traps on a door and whether the door is open or  #
#  closed to set the trap.                                  #
#############################################################

# Player tries to set a trap on an open door
{206}{}{Na tyto dveøe nemùeš umístit past, protoe jsou otevøené.}

# NPC tries to set a trap on an open door
{207}{}{ nemùe na tyto dveøe umístit past, protoe jsou otevøené.}

# Player tries to set a trap on a closed door
{208}{}{Zkušenì umisuješ past na rám dveøí.}
{209}{}{Nepodaøilo se ti umístit past na rám dveøí.}

# NPC tries to set a trap on a closed door
{210}{}{ zkušenì umisuje past na rám dveøí.}
{211}{}{ se nepodaøilo umístit past na rám dveøí.}

{300}{}{Odemykáš dveøe.}
{301}{}{Zamykáš dveøe.}
{302}{}{Nemùeš tyto dveøe zamknout, dokud jsou otevøené.}
{303}{}{Tento klíè do zámku nepasuje.}

# for broken doors
{320}{}{Tyto dveøe nelze nijak zamknout.}

{500}{}{Neexistuje ádnı zpùsob, jak zneškodnit past na tìchto dveøích.}