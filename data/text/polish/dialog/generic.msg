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
{100}{}{Zdobywasz }
{101}{}{ PD.}


#############################################################
#  The following lines are for what the player received     #
#  experience for (ie, picking a lock, disarming traps).    #
#############################################################
{102}{}{Rozbrajasz pu³apkê.}
{103}{}{Nie udaje ci siê rozbroiæ pu³apki.}
{104}{}{Przypadkowo uruchamiasz pu³apkê.}

# Prepend Lines with NPC name
{105}{}{ rozbraja pu³apkê.}
{106}{}{ nie daje rady rozbroiæ pu³apki.}
{107}{}{ przypadkowo uruchamia pu³apkê.}

{200}{}{Dziêkujê.}
{201}{}{Dzieñ dobry.}
{202}{}{Dziêki.}
{203}{}{Dziêki!}
{204}{}{Nie, dziêkujê.}
{205}{}{Nie, dziêki.}
{206}{}{Jasne.}
{207}{}{Tak.}
{208}{}{Nie.}
{209}{}{Dobra.}

#############################################################
#  The following lines are generic noises that the player   #
#  makes when he/she has a low i.q. level.                  #
#############################################################
{300}{}{Nie.}
{301}{}{Eeee.}
{302}{}{Nieee.}
{303}{}{Neee.}

#############################################################
#  The following lines are generic non-spoken dialogs       #
#############################################################
{350}{}{[KONIEC]}
{351}{}{[PA]}
{352}{}{[DALEJ]}
{353}{}{[KONTYNUUJ]}
{354}{}{[WALKA]}
{355}{}{[DAJ PIENI¥DZE]}

#############################################################
#  The following lines are generic departure dialogs        #
#############################################################
{375}{}{Na razie.}
{376}{}{Do widzenia.}

#############################################################
#  The following lines are for special events in the        #
#  dude_obj                                                 #
#############################################################
{400}{}{Umierasz na skutek œmiertelnego zastrzyku doktora Troya.}

{450}{}{Droga wolna. Ruszajmy!}

#############################################################
#  The following lines are for Miscelleous things needed    #
#  throughout the game.                                     #
#############################################################

{900}{}{Te stare, wyœwiechtane drzwi zapewne mo¿na zniszczyæ dobrze umiejscowionym ³adunkiem wybuchowym.}
{901}{}{Widzisz wóz na niewolników, któru ma ich zabraæ z powrotem do Nory.}

{905}{}{Hau! Hau!}

{910}{}{Pora¿a ciê pod³oga pod napiêciem.}
{911}{}{ ulega pora¿eniu przez pod³ogê pod napiêciem.}
{912}{}{Poziom zasilania spada do zera, po czym wraca na 50% w chwili, gdy w³¹cza siê generator zapasowy.}
{913}{}{Powrotowi zasilania do bazy towarzyszy cichy szum.}

{920}{}{Wpadasz na szcz¹tki Nagora, który przyp³aci³ ¿yciem próbê uratowania swojego psa.}
{921}{}{Nagor umar³ próbuj¹c przynieœæ cia³o psa z powrotem do wioski.}

{930}{}{Auuuuuu!}

{950}{}{Poœwiêcasz trochê czasu na trenowanie kilku ciosów. Twoja umiejêtnoœæ walki bez broni roœnie o 5%.}

{951}{}{Walcz¹cy kretoszczur zadaje œmiertelny cios.}
{952}{}{Pojedynek dobiega koñca.}


#############################################################
#  Quest Information. Mainly used for solving quests        #
#############################################################

{1000}{}{Test na obywatelstwo - Zd.}
{1001}{}{Doniesiono McClure'owi o uzale¿nieniu Redding od Jetu.}
{1002}{}{Handel z Redding zosta³ uwolniony.}
{1003}{}{Unieszkodliwiasz pola si³owe.}
{1004}{}{W³amujesz siê.}
{1005}{}{Naprawiasz studniê.}
{1006}{}{Hakeswill zosta³ postawiony przed obliczem sprawiedliwoœci.}
{1007}{}{Procesor wydobywczy zosta³ dostarczony.}
{1008}{}{Problem wdowy Rooney zosta³ rozwi¹zany.}
{1009}{}{Uda³o ci siê przejœæ próby w Arroyo.}
{1010}{}{Dr Troy otrzyma³ od ciebie przepis na antidotum.}
{1011}{}{Reaktor zosta³ zniszczony.}
{1012}{}{UWAGA! Ca³kowite ROZTOPIENIE rdzenia!}
{1013}{}{UWAGA! TOKSYNY w wentylacji.}
{1014}{}{Kopalnia Wannamigo zosta³a oczyszczona.}
{1015}{}{Uda³o ci siê przebrn¹æ przez pokój - zagadkê.}
{1016}{}{Uups, a co z GECKiem? Ciekawe, czy maj¹ tu jakiœ.}
{1017}{}{Twój kod GECK rozsadza drzwi.}
{1018}{}{To ju¿ koniec gangu Mortona.}
{1019}{}{Udaje ci siê rozbroiæ p³ytkê pora¿acza.}
{1020}{}{Udaje ci siê przerwaæ bójkê barow¹.}
{1021}{}{Udaje ci siê wy³¹czyæ Terminal Napraw Robotów.}

{1050}{}{Wytwarzasz antidotum z jadu radskorpiona.}
{1051}{}{Mieszaj¹c korzeñ xandrowy i kwiat broka uzyskujesz proszek leczniczy.}

{1099}{}{GECK jest zbyt cenny dla wioski, ¿eby go tu tak po prostu upuœciæ.}

#############################################################
#  These are for converting numeric values to number words. #
#  You want it to go further, add 'em yourself.             #
#############################################################
{2000}{}{zero}
{2001}{}{jeden}
{2002}{}{dwa}
{2003}{}{trzy}
{2004}{}{cztery}
{2005}{}{piêæ}
{2006}{}{szeœæ}
{2007}{}{siedem}
{2008}{}{osiem}
{2009}{}{dziewiêæ}
{2010}{}{dziesiêæ}
{2011}{}{jedenaœcie}
{2012}{}{dwanaœcie}
{2013}{}{trzynaœcie}
{2014}{}{czternaœcie}
{2015}{}{piêtnaœcie}
{2016}{}{szesnaœcie}
{2017}{}{siedemnaœcie}
{2018}{}{osiemnaœcie}
{2019}{}{dziewiêtnaœcie}
{21020}{}{dwadzieœcia}
{2021}{}{dwadzieœcia jeden}
{2022}{}{dwadzieœcia dwa}
{2023}{}{dwadzieœcia trzy}
{2024}{}{dwadzieœcia cztery}
{2025}{}{dwadzieœcia piêæ}
{2026}{}{dwadzieœcia szeœæ}
{2027}{}{dwadzieœcia siedem}
{2028}{}{dwadzieœcia osiem}
{2029}{}{dwadzieœcia dziewiêæ}
{2030}{}{trzydzieœci}
{2031}{}{trzydzieœci jeden}
{2032}{}{trzydzieœci dwa}
{2033}{}{trzydzieœci trzy}
{2034}{}{trzydzieœci cztery}
{2035}{}{trzydzieœci piêæ}
{2036}{}{trzydzieœci szeœæ}
{2037}{}{trzydzieœci siedem}
{2038}{}{trzydzieœci osiem}
{2039}{}{trzydzieœci dziewiêæ}
{2040}{}{czterdzieœci}
{2041}{}{czterdzieœci jeden}
{2042}{}{czterdzieœci dwa}
{2043}{}{czterdzieœci trzy}
{2044}{}{czterdzieœci cztery}
{2045}{}{czterdzieœci piêæ}
{2046}{}{czterdzieœci szeœæ}
{2047}{}{czterdzieœci siedem}
{2048}{}{czterdzieœci osiem}
{2049}{}{czterdzieœci dziewiêæ}
{2050}{}{piêædziesi¹t}
{2051}{}{piêædziesi¹t jeden}
{2052}{}{piêædziesi¹t dwa}
{2053}{}{piêædziesi¹t trzy}
{2054}{}{piêædziesi¹t cztery}
{2055}{}{piêædziesi¹t piêæ}
{2056}{}{piêædziesi¹t szeœæ}
{2057}{}{piêædziesi¹t siedem}
{2058}{}{piêædziesi¹t osiem}
{2059}{}{piêædziesi¹t dziewiêæ}
{2060}{}{szeœædziesi¹t}
{2061}{}{szeœædziesi¹t jeden}
{2062}{}{szeœædziesi¹t dwa}
{2063}{}{szeœædziesi¹t trzy}
{2064}{}{szeœædziesi¹t cztery}
{2065}{}{szeœædziesi¹t piêæ}
{2066}{}{szeœædziesi¹t szeœæ}
{2067}{}{szeœædziesi¹t siedem}
{2068}{}{szeœædziesi¹t osiem}
{2069}{}{szeœædziesi¹t dziewiêæ}
{2070}{}{siedemdziesi¹t}
{2071}{}{siedemdziesi¹t jeden}
{2072}{}{siedemdziesi¹t dwa}
{2073}{}{siedemdziesi¹t trzy}
{2074}{}{siedemdziesi¹t cztery}
{2075}{}{siedemdziesi¹t piêæ}
{2076}{}{siedemdziesi¹t szeœæ}
{2077}{}{siedemdziesi¹t siedem}
{2078}{}{siedemdziesi¹t osiem}
{2079}{}{siedemdziesi¹t dziewiêæ}
{2080}{}{osiemdziesi¹t}
{2081}{}{osiemdziesi¹t jeden}
{2082}{}{osiemdziesi¹t dwa}
{2083}{}{osiemdziesi¹t trzy}
{2084}{}{osiemdziesi¹t cztery}
{2085}{}{osiemdziesi¹t piêæ}
{2086}{}{osiemdziesi¹t szeœæ}
{2087}{}{osiemdziesi¹t siedem}
{2088}{}{osiemdziesi¹t osiem}
{2089}{}{osiemdziesi¹t dziewiêæ}
{2090}{}{dziewiêædziesi¹t}
{2091}{}{dziewiêædziesi¹t jeden}
{2092}{}{dziewiêædziesi¹t dwa}
{2093}{}{dziewiêædziesi¹t trzy}
{2094}{}{dziewiêædziesi¹t cztery}
{2095}{}{dziewiêædziesi¹t piêæ}
{2096}{}{dziewiêædziesi¹t szeœæ}
{2097}{}{dziewiêædziesi¹t siedem}
{2098}{}{dziewiêædziesi¹t osiem}
{2099}{}{dziewiêædziesi¹t dziewiêæ}
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
{3050}{}{Jeœli spróbujesz jeszcze raz, zabijê jak psa.}
{3051}{}{Pajacu, nie mam nic, co mo¿na by ukraœæ.}
{3052}{}{Nie s¹dzê, ¿eby nasza znajomoœæ by³a a¿ *tak* bliska.}
{3053}{}{Jeszcze raz tego dotniesz, a ka¿ê ci za to zap³aciæ.}
{3054}{}{Zabieraj te ³apy}
{3055}{}{Rób tak dalej, to ci urwê g³owê.}
{3056}{}{Rêce przy sobie!}
{3057}{}{Szukasz k³opotów?}
{3058}{}{Dotknij mnie jeszcze raz, to zginiesz.}
{3059}{}{Tylko k³opoty s¹ za darmo.}
{3060}{}{Hej! Odwal siê.}
{3061}{}{Pilnuj siê!}
{3062}{}{Chceta wykorkowaæ?}
{3063}{}{Spróbuj jeszcze raz, a rozwalê ci ³eb.}
{3064}{}{To moje, rêce precz!}

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
{3325}{}{A mo¿e jednak od³ó¿ wszystko tam, gdzie le¿a³o?}
{3326}{}{Wiesz, to nie³adnie zabieraæ cudze.}
{3327}{}{Zabieraj siê stamd¹d je³opo!}
{3328}{}{Nie wyskakuj mi tu z gadk¹, ¿e "szukasz swoich kluczy". Zabieraj siê st¹d!}
{3329}{}{Bez wzglêdu na to, czego szukasz, tu go nie ma. Zrozumiano?}

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
{3625}{}{Hej, ty! Co tak przy tym majdrujesz?}
{3626}{}{Jeœli nie masz w rêku klucza, lepiej siê odsuñ.}
{3627}{}{To nie jest zamkniête przypadkiem, je³opo.}
{3628}{}{Zostaw to zanim wpakujesz siê w k³opoty!}

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
{3925}{}{Hej ty! Co tu robisz?}
{3926}{}{Nie masz prawa tu przebywaæ!}
{3927}{}{Jeœli myœlisz, ¿e przejdziesz obok mnie tak po prostu, to siê rozczarujesz!}
{3928}{}{Lepiej nie planuj tego, co mi siê wydaje, ¿e planujesz.}
{3929}{}{Co? Niby myœlisz, ¿e ciê nie widzê? Spadaj st¹d!}

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
{5400}{}{Zabieraj siê od tego.}

# For Repair Bots
{9000}{}{Naprawy zakoñczone.}
{9001}{}{Prze³adowanie zakoñczone.}
{9002}{}{Trwa naprawa g³ównych uszkodzeñ.}

# default options for party members
{10000}{}{Powiedz mi coœ...}
{10001}{}{Myœlê, ¿e to dobra pora, ¿eby siê podleczyæ.}
{10002}{}{Poczekaj tu a¿ wrócê, dobrze?}
{10003}{}{Schowaj broñ.}
{10004}{}{B¹dŸ blisko mnie.}
{10005}{}{Nie odchodŸ za daleko.}
{10006}{}{Musimy siê trochê rozsun¹æ.}
{10007}{}{To tyle. Przynajmniej na razie.}
{10008}{}{Musimy zmieniæ odleg³oœæ miêdzy nami.}
{10009}{}{Muszê z tob¹ porozmawiaæ o walce.}
{10010}{}{Chocia¿... ten dystans jest odpowiedni.}
{10011}{}{W³aœciwie to nie musimy rozmawiaæ o walce.}
{10012}{}{Zdejmij swój pancerz.}
{10013}{}{Powiedz mi, jakiego rodzaju broni u¿ywasz.}

# default join me again message
{10100}{}{ChodŸmy.}

#added by killap - default msgs
{20000}{}{To niczego nie robi.}

#added by killap - default msgs
{20100}{}{Te drzwi nie maj¹ zamka.}

#added by killap
{30000}{}{Okradasz w³asne plemiê.}
#added by killap - New Perks
{40000}{}{Slot Jinxera} 
{40001}{}{Inteligentny toster zdradzi³ tobie sekretny sposób pozwalaj¹cy, na wydobycie z maszyn ca³ej gotówki jak¹ tylko posiadaj¹. Niestety, w trakcie w³amywania, maszyna ulega uszkodzeniu. Ups!}