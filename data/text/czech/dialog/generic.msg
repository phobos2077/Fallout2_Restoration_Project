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
{100}{}{Získáváš }
{101}{}{ zkušenostních bodù.}


#############################################################
#  The following lines are for what the player received     #
#  experience for (ie, picking a lock, disarming traps).    #
#############################################################
{102}{}{Úspìšnì zneškodòuješ past.}
{103}{}{Nepovedlo se ti zneškodnit past.}
{104}{}{Náhodnì spouštíš past.}

# Prepend Lines with NPC name
{105}{}{ úspìšnì zneškodòuje past.}
{106}{}{ nedokáe zneškodnit past.}
{107}{}{ náhodnì spouští past.}

{200}{}{Díky.}
{201}{}{Hezkı den.}
{202}{}{Díky.}
{203}{}{Díky!}
{204}{}{Ne, díky.}
{205}{}{Ne, díky.}
{206}{}{Jasnì.}
{207}{}{Ano.}
{208}{}{Ne.}
{209}{}{Dobøe.}

#############################################################
#  The following lines are generic noises that the player   #
#  makes when he/she has a low i.q. level.                  #
#############################################################
{300}{}{Blaa.}
{301}{}{Eee.}
{302}{}{Hééé.}
{303}{}{Uhmm.}

#############################################################
#  The following lines are generic non-spoken dialogs       #
#############################################################
{350}{}{[KONEC]}
{351}{}{[NASHLE]}
{352}{}{[Více]}
{353}{}{Pokraèovat.}
{354}{}{[BOJ]}
{355}{}{[Dát peníze]}

#############################################################
#  The following lines are generic departure dialogs        #
#############################################################
{375}{}{Nashle.}
{376}{}{Sbohem.}

#############################################################
#  The following lines are for special events in the        #
#  dude_obj                                                 #
#############################################################
{400}{}{Umíráš díky smrtelné injekci doktora Troye.}

{450}{}{Vzduch je èistı. Pojïme odsud!}

#############################################################
#  The following lines are for Miscelleous things needed    #
#  throughout the game.                                     #
#############################################################

{900}{}{Tyto staré opotøebované dveøe vypadají, e by se daly znièit dobøe umístìnou vıbušninou.}
{901}{}{Vidíš povoz, kterım mùeš odvézt otroky zpìt do Denu.}

{905}{}{Haf! Haf!}

{910}{}{Dostáváš ránu od elektrické podlahy.}
{911}{}{ dostává ránu od elektrické podlahy.}
{912}{}{Energie klesla na nulu a kdy naskoèily záloní generátory, vrátila se zpìt na 50%.}
{913}{}{Je slyšet nepatrné bzuèení, jak elektrická energie opìt prochází základnou.}

{920}{}{Naráíš na pozùstatky Nagora, kterı zemøel pøi pokusu zachránit svého psa.}
{921}{}{Nagor zemøel pøi pokusu odtáhnout tìlo svého psa zpátky do vesnice.}

{930}{}{Voooooouuuuu!}

{950}{}{Bereš si trochu èasu na vyzkoušení nìkterıch pohybù. Tvoje dovednost Boj beze zbranì se zlepšila o 5%.}

{951}{}{Bojující krtèí potkan jde zasadit koneènı úder.}
{952}{}{Zápas skonèil.}


#############################################################
#  Quest Information. Mainly used for solving quests        #
#############################################################

{1000}{}{Podaøilo se ti úspìšnì sloit test Obèanství.}
{1001}{}{McClure byl informován o závislosti obyvatel Reddingu na Jetu.}
{1002}{}{Podaøilo se ti obnovit obchodování z Reddingem.}
{1003}{}{Podaøilo se ti vypnout silová pole.}
{1004}{}{Podaøilo se ti hacknout do poèítaèe.}
{1005}{}{Podaøilo se ti opravit studnu.}
{1006}{}{Podaøilo se ti pøedvést Hakeswilla pøed spravedlnost.}
{1007}{}{Podaøilo se ti doruèit èip pro dùlní rypadlo.}
{1008}{}{Podaøilo se ti vyøešit problém s vdovou Rooneyovou.}
{1009}{}{Podaøilo se ti projít zkouškami Arroya.}
{1010}{}{Dáváš Dr. Troyovi recept na protijed.}
{1011}{}{Podaøilo se ti znièit reaktor.}
{1012}{}{VAROVÁNÍ! Hrozí kompletní roztavení reaktoru!}
{1013}{}{VAROVÁNÍ! TOXINY vypuštìny do ventilaèních šachet.}
{1014}{}{Podaøilo se ti vyèistit dùl Wanamingo.}
{1015}{}{Podaøilo se ti dostat skrz místnost plnou pastí.}
{1016}{}{Jejda, málem bych zapomnìl na GECK. Zajímalo by mì, jestli se tu nìjakı nachází.}
{1017}{}{Dveøe se rozletìly po naukání GECK kódu.}
{1018}{}{Podaøilo se ti vyhladit gang abáka Mortona.}
{1019}{}{Vypínáš energetické pláty.}
{1020}{}{Podaøilo se ti ukonèit hádku v baru.}
{1021}{}{Podaøilo se ti vypnout terminál opravárenskıch robotù.}

{1050}{}{Z toxinu škorpiona získáváš protijed.}
{1051}{}{Smíchal jsi koøen Xanderu s kvìtinou Broc a tím tak vytvoøil léèivı prášek.}

{1099}{}{GECK je pro vesnici pøíliš cennı, ne abys ho tady jen tak nechal leet.}


#############################################################
#  These are for converting numeric values to number words. #
#  You want it to go further, add 'em yourself.             #
#############################################################
{2000}{}{nula}
{2001}{}{jedna}
{2002}{}{dva}
{2003}{}{tøi}
{2004}{}{ètyøi}
{2005}{}{pìt}
{2006}{}{šest}
{2007}{}{sedm}
{2008}{}{osm}
{2009}{}{devìt}
{2010}{}{deset}
{2011}{}{jedenáct}
{2012}{}{dvanáct}
{2013}{}{tøináct}
{2014}{}{ètrnáct}
{2015}{}{patnáct}
{2016}{}{šestnáct}
{2017}{}{sedmnáct}
{2018}{}{osmnáct}
{2019}{}{devatenáct}
{21020}{}{dvacet}
{2021}{}{dvacet-jedna}
{2022}{}{dvacet-dva}
{2023}{}{dvacet-tøi}
{2024}{}{dvacet-ètyøi}
{2025}{}{dvacet-pìt}
{2026}{}{dvacet-šest}
{2027}{}{dvacet-sedm}
{2028}{}{dvacet-osm}
{2029}{}{dvacet-devìt}
{2030}{}{tøicet}
{2031}{}{tøicet-jedna}
{2032}{}{tøicet-dva}
{2033}{}{tøicet-tøi}
{2034}{}{tøicet-ètyøi}
{2035}{}{tøicet-pìt}
{2036}{}{tøicet-šest}
{2037}{}{tøicet-sedm}
{2038}{}{tøicet-osm}
{2039}{}{tøicet-devìt}
{2040}{}{ètyøicet}
{2041}{}{ètyøicet-jedna}
{2042}{}{ètyøicet-dva}
{2043}{}{ètyøicet-tøi}
{2044}{}{ètyøicet-ètyøi}
{2045}{}{ètyøicet-pìt}
{2046}{}{ètyøicet-šest}
{2047}{}{ètyøicet-sedm}
{2048}{}{ètyøicet-osm}
{2049}{}{ètyøicet-devìt}
{2050}{}{padesát}
{2051}{}{padesát-jedna}
{2052}{}{padesát-dva}
{2053}{}{padesát-tøi}
{2054}{}{padesát-ètyøi}
{2055}{}{padesát-pìt}
{2056}{}{padesát-šest}
{2057}{}{padesát-sedm}
{2058}{}{padesát-osm}
{2059}{}{padesát-devìt}
{2060}{}{šedesát}
{2061}{}{šedesát-jedna}
{2062}{}{šedesát-dva}
{2063}{}{šedesát-tøi}
{2064}{}{šedesát-ètyøi}
{2065}{}{šedesát-pìt}
{2066}{}{šedesát-šest}
{2067}{}{šedesát-sedm}
{2068}{}{šedesát-osm}
{2069}{}{šedesát-devìt}
{2070}{}{sedmdesát}
{2071}{}{sedmdesát-jedna}
{2072}{}{sedmdesát-dva}
{2073}{}{sedmdesát-tøi}
{2074}{}{sedmdesát-ètyøi}
{2075}{}{sedmdesát-pìt}
{2076}{}{sedmdesát-šest}
{2077}{}{sedmdesát-sedm}
{2078}{}{sedmdesát-osm}
{2079}{}{sedmdesát-devìt}
{2080}{}{osmdesát}
{2081}{}{osmdesát-jedna}
{2082}{}{osmdesát-dva}
{2083}{}{osmdesát-tøi}
{2084}{}{osmdesát-ètyøi}
{2085}{}{osmdesát-pìt}
{2086}{}{osmdesát-šest}
{2087}{}{osmdesát-sedm}
{2088}{}{osmdesát-osm}
{2089}{}{osmdesát-devìt}
{2090}{}{devadesát}
{2091}{}{devadesát-jedna}
{2092}{}{devadesát-dva}
{2093}{}{devadesát-tøi}
{2094}{}{devadesát-ètyøi}
{2095}{}{devadesát-pìt}
{2096}{}{devadesát-šest}
{2097}{}{devadesát-sedm}
{2098}{}{devadesát-osm}
{2099}{}{devadesát-devìt}
{2100}{}{sto}

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
{3050}{}{Jestli se o to ještì jednou pokusíš, budu tì muset zabít.}
{3051}{}{Nemám nic, co mi mùeš ukrást, idiote.}
{3052}{}{Myslím, e my dva se neznáme *tak* dobøe.}
{3053}{}{Dotkni se toho ještì jednou a zaplatíš za to.}
{3054}{}{Dej ty pracky pryè.}
{3055}{}{Udìlej to ještì jednou a utrhnu ti hlavu.}
{3056}{}{Ruce pryè!}
{3057}{}{Hledáš problémy?}
{3058}{}{Dotkni se mì ještì jednou a zemøeš.}
{3059}{}{Koleduješ si o malér.}
{3060}{}{Hej! Ruce pryè.}
{3061}{}{Dávej bacha!}
{3062}{}{Chceš chcípnout?}
{3063}{}{Zkus to ještì jednou a rozbiju ti hlavu.}
{3064}{}{To je moje, ruce pryè!}

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
{3325}{}{Vra všechno tam, kam to patøí.}
{3326}{}{Víš, není hezké brát nìco, co ti nepatøí.}
{3327}{}{Vypadni odsud, hajzle!}
{3328}{}{Hlavnì mi neøíkej, e "hledáš klíèe." Vypadni odsud!}
{3329}{}{A u hledáš cokoliv, tak tam to není. Rozumíš?}

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
{3625}{}{Hej ty! Co se kolem toho ochomejtáš?}
{3626}{}{Jestli nemáš v ruce klíè, tak radši odejdi.}
{3627}{}{Je to zamèenı z nìjakıho dùvodu, hajzle.}
{3628}{}{Nech toho, nebo budeš mít problémy!}

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
{3925}{}{Hej ty! Co to tam dìláš?}
{3926}{}{Tady nemáš co dìlat!}
{3927}{}{Jestli si myslíš, e kolem mì jen tak projdeš, tak na to mùeš zapomenout!}
{3928}{}{Doufám, e nechceš udìlat to, co si myslím, e chceš udìlat, cizinèe.}
{3929}{}{Co? Ty si myslíš, e tì nevidím? Vypadni odsud!}

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
{5400}{}{Tam nemùeš.}

# For Repair Bots
{9000}{}{Opravy ukonèeny.}
{9001}{}{Pøezbrojení ukonèeno.}
{9002}{}{Opravuji fyzické poškození.}

# default options for party members
{10000}{}{Povìz mi nìco.}
{10001}{}{Vyleè se.}
{10002}{}{Poèkej tu, dokud se nevrátím.}
{10003}{}{Schovej svoji zbraò.}
{10004}{}{Dr se poblí mì.}
{10005}{}{Nechoï pøíliš daleko.}
{10006}{}{Mìli bychom dret vìtší rozestup.}
{10007}{}{To bude prozatím všechno.}
{10008}{}{Mìli bychom zmìnit náš rozestup.}
{10009}{}{Potøebuju si s tebou promluvit o tvé vıstroji.}
{10010}{}{Kdy o tom tak pøemıšlím, tak je tahle vzdálenost v poøádku.}
{10011}{}{Ve skuteènosti zrovna teï nepotøebuju o tvé vıstroji nic vìdìt.}
{10012}{}{Potøebuju od tebe tu zbroj, co máš zrovna na sobì.}
{10013}{}{Potøebuju vìdìt, jaké druhy zbraní umíš pouívat.}

# default join me again message
{10100}{}{Tak pojï.}

#added by killap - default msgs
{20000}{}{Nic to nedìlá.}

#added by killap - default msgs
{20100}{}{Tyto dveøe nemají zámek.}

#added by killap
{30000}{}{Okrádáš svùj vlastní kmen.}

#added by killap - New Perks
{40000}{}{Finta na automaty} 
{40001}{}{Díky malému, ale odvánému kuchyòskému zaøízení víš o tajném zpùsobu, jak vytøískat všechny peníze z jakéhokoliv hracího automatu. Jen škoda, e se pøi tom rozbije. Ups!}