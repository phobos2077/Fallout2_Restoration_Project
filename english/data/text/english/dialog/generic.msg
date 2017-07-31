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
{100}{}{You gain }
{101}{}{ experience points.}


#############################################################
#  The following lines are for what the player received     #
#  experience for (ie, picking a lock, disarming traps).    #
#############################################################
{102}{}{You successfully disarm the trap.}
{103}{}{You fail to disarm the trap.}
{104}{}{You accidentally set off the trap.}

# Prepend Lines with NPC name
{105}{}{ successfully disarms the trap.}
{106}{}{ fail to disarms the trap.}
{107}{}{ accidentally sets off the trap.}

{200}{}{Thank you.}
{201}{}{Good Day.}
{202}{}{Thanks.}
{203}{}{Thanks!}
{204}{}{No thank you.}
{205}{}{No thanks.}
{206}{}{Sure.}
{207}{}{Yes.}
{208}{}{No.}
{209}{}{OK.}

#############################################################
#  The following lines are generic noises that the player   #
#  makes when he/she has a low i.q. level.                  #
#############################################################
{300}{}{Ug.}
{301}{}{Og.}
{302}{}{Ooga.}
{303}{}{Urg.}

#############################################################
#  The following lines are generic non-spoken dialogs       #
#############################################################
{350}{}{[END]}
{351}{}{[BYE]}
{352}{}{[MORE]}
{353}{}{[CONTINUE]}
{354}{}{[COMBAT]}
{355}{}{[GIVE MONEY]}

#############################################################
#  The following lines are generic departure dialogs        #
#############################################################
{375}{}{Bye.}
{376}{}{Goodbye.}

#############################################################
#  The following lines are for special events in the        #
#  dude_obj                                                 #
#############################################################
{400}{}{You die due to the lethal injection from Dr. Troy.}

{450}{}{The coast is clear. Let's move out!}

#############################################################
#  The following lines are for Miscelleous things needed    #
#  throughout the game.                                     #
#############################################################

{900}{}{The old, worn door looks like it could be destroyed
 with a well-placed explosive.}
{901}{}{You see the slave cart to take the slaves back to the Den.}

{905}{}{Woof! Woof!}

{910}{}{You are shocked by the electrified floor.}
{911}{}{ is shocked by the electrified floor.}
{912}{}{The power level drops to zero and then goes back to 50% as the
 backup generators kick in.}
{913}{}{A slight humming is heard as the power once more flows through the base.}

{920}{}{You stumble across the remains of Nagor, who died trying to save his dog.}
{921}{}{Nagor died trying to drag his dog's body back to the village.}

{930}{}{Hoooooowl!}

{950}{}{You take some time out to practice some moves. Your unarmed combat skills increase by 5%.}

{951}{}{The fighting molerat goes in for the death blow.}
{952}{}{The match is over.}


#############################################################
#  Quest Information. Mainly used for solving quests        #
#############################################################

{1000}{}{You passed the Citizenship Test.}
{1001}{}{You reported the Jet addiction of Redding to McClure.}
{1002}{}{You freed up trade with Redding.}
{1003}{}{You disable the force fields.}
{1004}{}{You hack into the computer.}
{1005}{}{You repair the well.}
{1006}{}{You bring Hakeswill to justice.}
{1007}{}{You deliver the excavator chip.}
{1008}{}{You took care of the Widow Rooney problem.}
{1009}{}{You passed the trials of Arroyo.}
{1010}{}{You have given Dr. Troy the formula for the antidote.}
{1011}{}{You have destroyed the reactor.}
{1012}{}{WARNING! Complete Reactor MELTDOWN!}
{1013}{}{WARNING! TOXINS released into air ducts.}
{1014}{}{You clear out the Wanamingo Mine.}
{1015}{}{You lived through the puzzle room.}
{1016}{}{Oops, I nearly forgot the GECK. I wonder if one might be somewhere around here.}
{1017}{}{The door blasts open from your GECK code.}
{1018}{}{You wiped out Frog Morton's Gang.}
{1019}{}{You disable the shock plates.}
{1020}{}{You broke up the bar brawl.}
{1021}{}{You disabled the Robot Repair Terminal.}

{1050}{}{You grind the scorpion toxin into antidote.}
{1051}{}{You mix the xander root and broc flower into healing powder.}

{1099}{}{The GECK is too valuable to the village for you to just drop it here.}

#############################################################
#  These are for converting numeric values to number words. #
#  You want it to go further, add 'em yourself.             #
#############################################################
{2000}{}{zero}
{2001}{}{one}
{2002}{}{two}
{2003}{}{three}
{2004}{}{four}
{2005}{}{five}
{2006}{}{six}
{2007}{}{seven}
{2008}{}{eight}
{2009}{}{nine}
{2010}{}{ten}
{2011}{}{eleven}
{2012}{}{twelve}
{2013}{}{thirteen}
{2014}{}{fourteen}
{2015}{}{fifteen}
{2016}{}{sixteen}
{2017}{}{seventeen}
{2018}{}{eighteen}
{2019}{}{nineteen}
{21020}{}{twenty}
{2021}{}{twenty-one}
{2022}{}{twenty-two}
{2023}{}{twenty-three}
{2024}{}{twenty-four}
{2025}{}{twenty-five}
{2026}{}{twenty-six}
{2027}{}{twenty-seven}
{2028}{}{twenty-eight}
{2029}{}{twenty-nine}
{2030}{}{thirty}
{2031}{}{thirty-one}
{2032}{}{thirty-two}
{2033}{}{thirty-three}
{2034}{}{thirty-four}
{2035}{}{thirty-five}
{2036}{}{thirty-six}
{2037}{}{thirty-seven}
{2038}{}{thirty-eight}
{2039}{}{thirty-nine}
{2040}{}{forty}
{2041}{}{forty-one}
{2042}{}{forty-two}
{2043}{}{forty-three}
{2044}{}{forty-four}
{2045}{}{forty-five}
{2046}{}{forty-six}
{2047}{}{forty-seven}
{2048}{}{forty-eight}
{2049}{}{forty-nine}
{2050}{}{fifty}
{2051}{}{fifty-one}
{2052}{}{fifty-two}
{2053}{}{fifty-three}
{2054}{}{fifty-four}
{2055}{}{fifty-five}
{2056}{}{fifty-six}
{2057}{}{fifty-seven}
{2058}{}{fifty-eight}
{2059}{}{fifty-nine}
{2060}{}{sixty}
{2061}{}{sixty-one}
{2062}{}{sixty-two}
{2063}{}{sixty-three}
{2064}{}{sixty-four}
{2065}{}{sixty-five}
{2066}{}{sixty-six}
{2067}{}{sixty-seven}
{2068}{}{sixty-eight}
{2069}{}{sixty-nine}
{2070}{}{seventy}
{2071}{}{seventy-one}
{2072}{}{seventy-two}
{2073}{}{seventy-three}
{2074}{}{seventy-four}
{2075}{}{seventy-five}
{2076}{}{seventy-six}
{2077}{}{seventy-seven}
{2078}{}{seventy-eight}
{2079}{}{seventy-nine}
{2080}{}{eighty}
{2081}{}{eighty-one}
{2082}{}{eighty-two}
{2083}{}{eighty-three}
{2084}{}{eighty-four}
{2085}{}{eighty-five}
{2086}{}{eighty-six}
{2087}{}{eighty-seven}
{2088}{}{eighty-eight}
{2089}{}{eighty-nine}
{2090}{}{ninety}
{2091}{}{ninety-one}
{2092}{}{ninety-two}
{2093}{}{ninety-three}
{2094}{}{ninety-four}
{2095}{}{ninety-five}
{2096}{}{ninety-six}
{2097}{}{ninety-seven}
{2098}{}{ninety-eight}
{2099}{}{ninety-nine}
{2100}{}{one-hundred}

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
{3050}{}{If you try that again, I'll have to kill you.}
{3051}{}{I don't have anything to steal, you idiot.}
{3052}{}{I don't think we know each other *that* well.}
{3053}{}{Touch that again and you'll have to pay for it.}
{3054}{}{Get your hands off of me.}
{3055}{}{Do that again and I'll rip you head off.}
{3056}{}{Hands off!}
{3057}{}{You looking for trouble?}
{3058}{}{Touch me again and die.}
{3059}{}{Only trouble is for free.}
{3060}{}{Hey! Back off.}
{3061}{}{Watch it!}
{3062}{}{You look'n ta die?}
{3063}{}{You try that again, and I'll bust your head.}
{3064}{}{That's mine; hands off!}

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
{3325}{}{Why don't you put everything right back where you found it?}
{3326}{}{You know, it ain't nice to take what's not yours.}
{3327}{}{Get away from there, punk!}
{3328}{}{Now don't go telling me you're "just looking for your keys." Get outta here!}
{3329}{}{Whatever you're looking for, it ain't there. Understand?}

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
{3625}{}{Hey, you! What're you poking around that for?}
{3626}{}{If you ain't got a key in you hand, you'd better be stepping away.}
{3627}{}{It's locked for a reason, punk.}
{3628}{}{Knock it off before there's trouble!}

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
{3925}{}{Hey you! What're you doing there?}
{3926}{}{You're not supposed to be here!}
{3927}{}{If you think you're just walking by me, you can forget that!}
{3928}{}{You better not be planning what I think you're planning, stranger.}
{3929}{}{What? Like you think I don't notice you? Get outta here!}

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
{5400}{}{Stay away from there.}

# For Repair Bots
{9000}{}{Repairs Complete.}
{9001}{}{Rearming Complete.}
{9002}{}{Repairing Structural Damage.}

# default options for party members
{10000}{}{Tell me something.}
{10001}{}{You should heal yourself now.}
{10002}{}{I need you to wait here until I come back.}
{10003}{}{Put your weapon away.}
{10004}{}{Stay close to me.}
{10005}{}{Don't get too far away.}
{10006}{}{We should spread out a bit.}
{10007}{}{That's it for now.}
{10008}{}{We need to change our distance from one another.}
{10009}{}{I need to talk to you about your gear.}
{10010}{}{On second thought, I think this distance is OK for now.}
{10011}{}{Actually, I guess there's nothing I need to really know right about your gear.}
{10012}{}{I need you to remove the armor that you're wearing.}
{10013}{}{I need to know what kind of weapons you can use.}

# default join me again message
{10100}{}{Let's go.}

#added by killap - default msgs
{20000}{}{That does nothing.}

#added by killap - default msgs
{20100}{}{There is no lock on this door.}

#added by killap
{30000}{}{You have stolen from your own tribe.}