NOTA: ESTE PATCH HA SIDO MODIFICADO PARA LA TRADUCCION DE CLAN DLAN





                =============== FINAL PATCH ================

                FALLOUT 2: A Post-Nuclear Role-Playing Game
                     Readme File 1.3 - 11 December 1998
                               Patch Version 1.02d

                =============== FINAL PATCH ================



       TABLE OF CONTENTS

       1.0 Patch
       2.0 Installation
       3.0 Manual Errata
       4.0 Troubleshooting
       5.0 Contacting Interplay
       6.0 Product License



-----------
(1.0) Patch
-----------
The patch will invalidate saved games from version 1.0. To transfer
your character from 1.0 to the final patch version use the save
game character transfer utility found on the Fallout 2 Web Page in
the Files section.
www.Interplay.com/Fallout2

If you have saved game from a previous patch, the Final patch IS 
compatible with those saved games. The Beta patch was just that, a
Beta, so if you were having problems with your saved games with the
Beta patch, we recommend that you completely start over.

Be sure to check (1.4) README CHANGES for a list of modified sections
of this readme from version 1.0 to 1.3.


(1.1) PATCH INSTALLATION
------------------------
This is the Patch for the 1.0 *US* Version only. The US version is
also sold in many other countries: Germany, Australia, France, etc.
If it's the English version from the US, as opposed to the UK or
foreign language version, then this is the proper patch for it.

The patch is self extracting. Simply copy it to your system and run
the patch.exe from any directory.

It will ask you for the path that you originally installed
Fallout 2 to unzip the patch files to. The path when installing the
patch will default to the original Fallout 2 installation default
directory. If you installed in somewhere else, change the directory
to the appropriate path.

After the F2patch.exe uncompresses, there is nothing else that needs
to be done. Do not delete the patch000.dat or any other file that it
created.

If you get a "Can not find/load text fonts" error message, then you
it could be one of three things:

1. Your Fallout2.cfg file has been modified and is no longer
referencing the Master.dat and the Critter.dat as being in the
correct place. These two files should be in the main folder where
you installed Fallout 2. Change the path in the Fallout2.cfg to
reflect the proper path for these files. 

2. You need to have the CD in CD Rom drive. Even if you have a huge
install, try inserting the CD.

3. Your Fallout2.exe or Readme.txt might have become read only. Right
click on each of them and select properties. Check the attributes
section to be sure that Read Only does NOT have a check mark next to
it.


(1.3) PATCH FIXES
-----------------
This is NOT a complete list. It's a list of the more important or
more commonly asked about bugs.

-Boxing in New Reno will no longer lock up the computer.

-The Dice Game will give you winnings.

-The Lloyd quest in New Reno will not lock the computer.

-Talking to Tandi about the Vault 15 quest will not lock the
 computer.

-Loading and Saving of Save Games have been sped up, for other ways
to improve load times check the trouble shooting section of the
readme.txt.

-Party members will not turn hostile (under most circumstances) any
 longer, so you will be able to talk to them all the time.

-Ghouls in Gecko will not randomly shoot at you.

-Harold will give you the right information when you are trying to
 optimize the power plant.

-Shopkeepers will get money more often - this is more of a tweak
 then a bug fix.

-Endless stopwatch in combat should be fixed.

-The car and the trunk will no longer become separated.

-Francis has been fixed.

-Hakunin movies will not appear after the GECK has been returned.

-Dragon and LoPan challenges should no longer cause Endless Stop
 Watch.

-Goris will no longer join if you are over your Party Member limit.

-Slave Overseer in NCR will no longer lock the computer up.

-PIP boy will no longer crash when you get too many Maps in your
 Automap.

-Here and Now perk will work correctly.

-NPC's max carry weight.

-NPC's runaway settings.

-The .44 does the proper amount of damage.

-NPC's who have to many dialog responses have been fixed.

-Radiation warning pops up sooner = 66 rads.

-Barter has been slightly modified.

-The bug with the Geck and the elder has been fixed.

-The problem where game wouldn't run properly on some NT/NTFS/large
 hard-drive setups has been fixed.

-Smitty will properly sell the car.


NEW FIXES TO THE 1.02d PATCH: Again this is NOT a complete list, but a list
of the more commonly asked about problems.

-Fixed T-Ray not taking money for getting car back

-Fixed Stuart Little boxing so that he only gives you one chance to repeat.

-Also, he wasn't setting the names properly for the STUPID character, this
should be fixed.

-All boxing problems have been addressed. Critical failures count as a
knockdown, this is not going to be changed.

-Fixed Valerie where to go when done upgrading weapons.

-Fixed Slim Picket not taking/checking for money for the Outdoorsman Skill
upgrade. Also, there should be no way to get him to give you the upgrade more
than once, code put in as a safety.

-When Vegeir was sending you home with Jonny, he was trying to send the car
with you too. I found out this is bad and the car isn't set up to do so. He no
longer touches your car in this situation.

-Car should be compatible with patch, it also will fix some of the car
problems that might occur if the car doesn't show up in correct spots.

-In related news, the trunk should be working better in conjunction with the
car as the code is all new since we shipped and now knows where the car is at
all times.

-One of the Engine bugs we fixed will fix the problem of the trunk showing up
without the car, since the trunk script was becoming "junked"(to speak
technically).

-The car leaves with you when you leave random encounter maps, but only if the
car is on that map and it has fuel. Before, if you used the out of gas car, it
-would keep following you around, this is fixed.

-Slavers die and now STAY DEAD when killed by the slaves you are hunting!
Amazing, bastards just didn't want to go down easily.

-Get Car part quest should be clearing now.

-Fixed the leaving maps with party member crash. This could potentially fix
lots and lots of thing out there since it was killing memory at this
point(this is what helps fix the cars).

-Miria should no longer follow after she is dead.

-Fixed party members going up levels with Power Armor bug.

-Fixed Tyler door bug where he would sometimes give you permission to use the
door, but would attack you if you tried to use the door.

-Fixed Joey not taking money for Jet.

-Fixed problem with when the player comes out the back entrance of the
raiders(secret entrance) and the car not being there.

-Fixed Saving game on "Holy Knights" encounter do that you can finish the
whole thing even after saving.

-No longer pre-maturely ends "Murder" quest when you tell Mr. Wright that his
son was poisoned.

-Fixed inability to use the dresser in New Reno map 2 where Mrs. Bishop is.

-Cody gives you exp now when he leads you to the chop shop.

-Mason will let you use the door if he tells you it's O.K.

-Myron now takes all the stuff to make drugs even if it's in his inventory. So
if you tell him you want to make 3 radscorpion antidotes and switch the tails
to his inventory, he'll delete them from his inventory as well.

-There no longer is any way to get $2000 from Dr. Troy for selling him jet.

-Fixed "offcier" spelling to "officer" with Randal.

-Fixed it so you can't get stuck on level 4 by entering from the world map
before the player extracts the organ. This fix is simply due to the fact that
you should only be able to enter Sierra Army Depot from the ground floor from
the town map.

-You now get xp for giving the non-working brainbot a brain.

-Buster now replenishes his supplies more often.

-Cannot enter any map but the entrance map from the town map.

-Player can complete the spleen seed even if he is a Hubologist.

-Talking Bette out of fighting should set the "Stop-the-bar-brawl" quest to
complete.

-Fixed bug with saving during lopan/dragon fights.

-Made it so there is only the Battle Field area to enter the Sierra Army Depot

-Changed it so that Melchior only lets 4 of his pets out at once. This should
reduce pathing problems with multi-hex critters.

-You now get 1000 experience for getting Brian more power for his AC.

-Fixed error with using the bulletin board during combat.

-Fixed kids not being able to be pushed when they're not on their home tile.

-Fixed bulletin board error like that in the Den.

-Fixed problem with car not showing up first time with high outdoorsman.

-Fixed endless loop for not having power armor with door guard.

-Fixed bug regarding re-entrance to vault 15 squat area.

-Fixed problem with sometimes ending a fight and becoming stuck inside the
ring.

-Fixed bug causing some Melchior crashes related to fire geckos not being able
to hit their target.

-Fixed craps dealer bug allowing setting odds bet to 0 dollars in order to
take odds money back.

-Fixed problem with party members dying on map exits, causing Miria or any
party member dying in the toilet explosion and then following you around the
game forever.


(1.3) NOT BUGS
--------------
Here's a list of things that have been mistaken as bugs.

-If you have stuff disappearing out of your Inventory and the last
 time you had it was in the Den - then the kids in the Den probably
 stole it. They then go sell it to one of the shopkeepers.

-One of the kids in the Den does have a Frag Grenade.

-You need to get a Special Perk to be able to Skin Geckos, you can
 not just do it. You'll find the quest in the first few areas of the
 game.

-Jet is currently a permanent addiction that you can get rid of by
 solving a certain quest.

-The way ammo weight is determined is a little weird, so it will
 look like (in certain circumstances) that when you load your weapon
 you will gain weight. It should only be about 1kg, and the error
 does not accumulate.

-To refuel the car you need to use a Small Energy Cell or Micro
 Fusion Pack from your inventory (not your hands) on the car. See the
 Manual Errata section (3.6) below for details.

-Extremely long range weapons are supposed to have negative numbers
 if you are close to your target. The negative will increase the
 closer you get. This negative number is just a representation of how
 far below zero you are to hitting your target.

-Here and now: This perk is supposed to be available at level 3. See
 section (3.3) of the readme.txt.


(1.4) README CHANGES
--------------------
The following sections of the readme.txt have been modified since 1.0.

1.1   PATCH INSTALLTION
	New section.

1.2   PATCH FIXES
	New section.

1.3   NOT BUGS
	New section.

3.1   SKILL PROGRESSION CHART
	Tag skills clarified.

3.3   PERKS
	Here and now clarified.
	Hand-to-hand Evade (HtH Evade) clarified.

3.10  PUSH COMMAND
	New section.

3.11  HP FORMULA
	New section

4.5   GENERAL SLOWNESS UNDER Win95/Win98
	Modified.

4.6   Crash or lock up problems.
	New section.

5.1   INTERPLAY U.S. CUSTOMER SUPPORT INFORMATION
	New phone numbers and other information.


------------------
(2.0) INSTALLATION
------------------
The manual contains all the installation instructions necessary to
get you up and running. For installation instructions for the patch
see the first section.

The Fallout 2 website will contain the latest patches and fixes.  We
recommend that you check there before installing the game for the
absolute latest updates.
                                 http://www.interplay.com/fallout2


(2.1) SYSTEM REQUIREMENTS
-------------------------
Required
     Windows(R) 95/98 CD-ROM
     Pentium(TM) 90 or faster
     16 MB RAM
     30 MB available hard drive space
     Direct X - certified SVGA card
     Direct X - certified sound card
     4X or faster CD-ROM drive
     Windows(R) 95/98/NT 4.0 SP3 Only
     100% Microsoft-compatible mouse

Recommended
     Pentium(TM) 120 or faster
     32 MB RAM
     150 MB hard disk space
     DOES NOT WORK IN DOS

The various installation levels will install larger versions of the
game to your hard drive:

* Small     (2 megs: executable, config and support files)
* Medium    (87 megs: adds music)
* Large     (276 megs: adds creature graphics and animations)
* Humongous (681 megs: installs everything!)

It is recommended that you use the largest possible installation
option for your hard drive.  The more room Fallout 2 has on your hard
drive, the faster the game will play.

In addition, when you run Fallout 2, you will need around 20 megs of
free hard drive space for files that are created when playing and for
save games. Save games take up more space the longer you have
been playing. Each save game slot starts around 80K in size,
and will get larger the more areas you have explored.



-------------------
(3.0) MANUAL ERRATA
-------------------
After the manual went to print, we found the following errors
or made the following changes to Fallout 2 (See 3.7 for a note
about the end game):


(3.1) SKILL PROGRESSION CHART
---------------------------
Each skill can be increased using skill points. Skill points are
acquired after each level advancement. The number of skill points
you acquire per level is determined by your Intelligence. See the
manual for details.

Each skill increment from 1-100 costs 1 skill point.
Each skill increment from 101-125 costs 2 skill point.
Each skill increment from 126-150 costs 3 skill point.
Each skill increment from 151-175 costs 4 skill point.
Each skill increment from 176-200 costs 5 skill point.
Each skill increment above 200 costs 6 skill point.

Note: Max skill is 300, instead of 200.

Tagged skills still cost the above amount of skill points but instead
of increasing 1 level, the tagged skill will increase by 2.

(3.2) PREFERENCES
---------------------------
COMBAT LOOKS: With this preference on, the combat cursor will perform
the 'examine' look when a critter is targeted. This will give you a
detailed description as well as its current level of health. The
examination will be displayed in the text box in the bottom left
corner of the game screen. This preference defaults to "off." 


(3.3) PERKS
---------------------------
The following changes have been made to the Perks:

Here and Now:
Available at level 3.

Hand To Hand: Jab
Jab was +5 Melee Damage, +5% Critical, Armor Piercing, Costing 6 Action
Points.
Jab is now +3 Melee Damage, +10% Critical, Not Armor Piercing, Costing
3 Action Points.

Demolition Expert:
Traps requirement changed from 90 to 75.

Weapon Handling:
Maximum Strength requirement of 6 was added. A character with a
strength greater than 6 would not benefit from this perk so it is
no longer available to those with a strength above 6.

Hand-to-hand Evade (HtH Evade):
If both item slots are empty, each unused action point gives you a
+2 instead of +1 towards your armor class at the end of your turn,
plus 1/12 of your unarmed skill.
Note: You can still have items or hand-to-hand weapons in your hands,
just not other weapons. Hand-to-hand weapons being: Spiked Knuckles,
Brass Knuckles, Power Fist, etc.

This Perk gives you (2 * Free AP's) + (Unarmed Skill / 12) = Bonus to
your armor class. 

Perks increasing skills:
Perks that increase one or more of your skills no longer apply "skill
points" towards the skill(s), instead the increase that skill by a
certain percentage. As skills get higher, the cost more "skill points"
to increase that skill. You skill will increase by a percentage
instead of applying the points towards the skill (which could vary
how much it increased the skill by depending no what skill level you
have it at.)

Gambler: Was +40 SP to Gambling; Now +20% to Gambling.
Harmless: Was +40 SP to Steal; Now +20% to Steal.
Living Anatomy: Was +20 SP to Doctor; Now +10% to Doctor.
Master Thief: Was +20 SP to Lockpick and Steal; Now +15% to Lockpick
 and Steal.
Medic: Was +20 SP to First Aid and Doctor; Now +10% to First Aid and
 Doctor.
Mr. Fixit: Was +20 SP to Repair and Science; Now +10% to Repair and
 Science.
Negotiator: Was +20 SP to Speech and Barter; Now +10% to Speech and
 Barter.
Ranger: Was +20 SP to Outdoorsman; Now +15% to Outdoorsman.
Salesman: Was +40 SP to Barter; Now +20% to Barter.
Speaker: Was +40 SP to Speech; Now +20% to Speech.
Survivalist: Was +40 SP to Outdoorsman; Now +25% to Outdoorsman.
Thief: Was +10 SP to Sneak, Lockpick, Steal and Traps; Now +10% to
 Sneak, Lockpick, Steal and Traps.

Note: SP = Skill Points. The skill increase is not the only bonus
to Living Anatomy & Ranger.

General note on perks: Cautious Nature, Explorer, Ranger, Scout, and
Sharpshooter will still give you a bonus even if your statistic is at
10.


(3.4) TRAPS
---------------------------
You can not use explosives to trap doors, etc. You can destroy most
doors by placing explosives in front of the door, but they can not be
rigged with explosives.


(3.5) REST UNTIL *PARTY* HEALED
-------------------------------
On Page 58 of "The Clock and Calendar" section of the PIPBOY2000,
you also have the option to rest until your entire party is healed.
If a party member is injured, this will be displayed at the very
bottom.


(3.6) The Car
-------------
The car in the game runs on Micro Fusion Cells, which is also a type
of ammunition for energy weapons. To refuel the car, use the action
icon "Use Inventory Item On" on the front end of the car (see Page
38 of the manual for detailed instructions.) This will open your
inventory. Use the Micro Fusion Cells to refuel the car. Two Cells
will completely refuel the car.

If the car runs out of fuel in the world map, it's location will be
marked so you can return to it later if you do not have any more
fuel. If you have Micro Fusion Cells, enter the map and follow the
instructions above.

The car also has a trunk. It works just like normal containers. left
click on the trunk of the car to open.


(3.7) END GAME NOTE
-------------------
When you finish the game (after the end game movie, the end game
slide show and the credits) you will be returned to the game
automatically. This will allow you to continue playing. Be warned
that the game is over, and some areas in the game do not take this
into account. We would rather let those who wish to continue playing
have this ability, rather then forcing the game to end for everyone.

(3.8) REFERENCE TABLES
----------------------
The reference tables on the inside of the cover are not to be taken
seriously.

(3.9) ONLINE MANUAL
-------------------
There is an online manual on the Fallout 2 CD-ROM.  The online manual
is an Adobe Acrobat 3.0 file.  You must have a reader installed to
view the manual.  We have included a Win95 version of the reader.

Installing the Reader - Win95
  To install the Win95 version of the Adobe Acrobat reader, open
the Fallout 2 CD-ROM.  Open the Manual directory.  Open the Adobe
directory.  Double-click on AR32E30.EXE file.

To View the Manual - Win95
  Open the CD.  Open the Manual directory.  Double-click on the
MANUAL.PDF icon.

(3.10) PUSH COMMAND
-------------------
You target the NPC you want to push, not your character. This will
option will only appear if that NPC can be pushed and only that NPC
will moved.

(3.11) HIT POINT FORMULA
------------------------
The Hit Point Formula referenced in the Fallout 2 manual should be:
2+(1/2 Endurance)



---------------------
(4.0) TROUBLESHOOTING
---------------------
These are tips to help improve the performance of Fallout 2 on your
machine.  Also be sure to read the Interplay Productions Reference
and Troubleshooting Guide pamphlet that came in your Fallout 2 box.


(4.1) DIRECTX 5.0
-----------------
We have also provided DirectX 5.0 on the Fallout 2 CD-ROM for users
who wish to install it.  If you are having driver-related problems,
you might want to try installing DirectX 5.0.

To install DirectX 5.0, go into the DirectX5\directx folder on the
CD-ROM and run DXSETUP.EXE.


(4.2) S3 ViRGE VIDEO CARDS (SLOW GAMEPLAY)
------------------------------------------
Video cards with the S3 ViRGE chipset, such as the Stealth 64 3D 2000,
may perform poorly under Fallout 2.  You should attempt two things:

 * Install the most recent drivers available from your video card
   manufacturer.  Often, updated drivers will fix many of the older
   incompatibilities.  Contact your manufacturer, or check their
   website, for more information about their drivers.

 * Use the default S3 drivers (S3 PCI VIRGE) from the Win95 CD.


(4.3) WINDOWS NT
----------------
Currently, Fallout 2 will not install to a Windows NT 2 platform.

While Fallout 2 does not officially support Windows NT, it will run
as long as you have Service Pack 3.  This is required since the
Win95 version of Fallout 2 requires DirectX 5 or higher.  You can
get Service Pack 3 from Microsoft.

In the Fallout 2 config file, under the systems section set:
free_space=0
If this line is not there, add it.


(4.4) DIAMOND STEALTH 3000 & MONSTER 3D CARDS
---------------------------------------------
If your system has both a Diamond Stealth 3000 and a Monster 3D
video card installed, then Fallout 2 will not install if you run
the Win95 setup program.  You can try these tips:

 * Download the latest manufacturer drivers from Diamond.
   This has been tested, and seems to fix the problem.

 * Disable the Monster 3D video card.


(4.5) GENERAL SLOWNESS UNDER Win95/Win98
----------------------------------------
If you are playing the Win95 version, and find the game to
be running slowly, you can try these tips:

 * Adjust your Read Ahead cache for your CD-ROM drive.
   You may experience glitches with movies depending on your
   particular CD-ROM drive.

 * Reinstall the Win95 version, but use a larger installation
   size.  Slow gameplay with a small installation version is
   probably the result of slow CD-ROM access.

 * On some systems a Large installation is Faster than the
   Humongous installation.

 * Be absolutely sure you are not running any other programs in
   the background, especially virus scanning software or IRQ,
   even if it's not active.


(4.6) Crash or lock up problems.
--------------------------------

 * As stated above, be absolutely sure you are not running any
   other programs in the background, especially virus scanning
   software, IRC, or IRQ, even if the program is not active.

 * Be sure you have the absolute latest drivers for your video
   and sound cards. It's especially important that these are
   direct x certified drivers. This alone is the main cause for
   most problems.


--------------------------
(5.0) CONTACTING INTERPLAY
--------------------------

(5.1) INTERPLAY U.S. CUSTOMER SUPPORT INFORMATION
-------------------------------------------------

TECHNICAL SUPPORT
TROUBLESHOOTING DOCUMENTS ONLINE!
Interplay Productions Technical Support now offers troubleshooting
guides with complete installation and setup instructions as well as
information that will help you overcome the most common difficulties.
If you have access to the World Wide Web, you can find these at

http://www.interplay.com/support/index.html

Here you will find troubleshooting information on as well as
information on regular system maintenance and performance.

DirectX           http://www.interplay.com/support/directx/index.html
Joysticks         http://www.interplay.com/support/joystick/index.html
Modems and Networks  http://www.interplay.com/support/modem/index.html

(For game-specific information and additional troubleshooting, visit
our main page at http://www.interplay.com)

If you have questions about the program, our Technical Support
Department can help. Our web site contains up-to-date information on
the most common difficulties with our products, and this information
is the same as that used by our product support technicians. We keep
the product support pages updated on a regular basis, so please check
here first for no-wait solutions:

http://www.interplay.com/support/index.html

If you are unable to find the information you need on our web site,
please feel free to contact Technical Support via e-mail, phone, fax,
or letter. Please be sure to include the following information in your
e-mail message, fax, or letter:

-Title of Game
-Computer manufacturer
-Operating system (Windows 95, DOS 6.22, etc.)
-CPU type and speed in MHz
-Amount of RAM
-Sound card type and settings (address, IRQ, DMA)
-Video card
-CD-ROM
-Mouse driver and version
-Joystick and game card (if any)
-A copy of the CONFIG.SYS and AUTOEXEC.BAT files from your hard drive
-A description of the problem you're having

If you need to talk to someone immediately, call us at (949) 553-6678 
Monday through Friday between 8:00AM-5:45PM, Pacific Standard Time with
24 hours, 7 days a week support available through the use of our 
automated wizard.   Please have the above information ready when you 
call. This will help us answer your question in the shortest possible 
time. When you call you will initially be connected with our automated 
wizard.  For information pertaining to your specific title, press "1" 
on the main menu and listen carefully to all prompts.  All titles are 
listed alphabetically.  After you have selected your title, the most 
common difficulties will be listed.  If the difficulty you are having 
is not listed or you need additional assistance, you may press "0" on 
your games main menu, and you will be transferred to a Technical 
Support Representative.  No hints or codes are available from this 
line.  You must call Interplay's HINT Line for hints, tips, or codes at
1-900-370-PLAY (1-900-451-6869 $1.25 in Canada only). You must be 18 
years +, have a touch-tone phone, and the cost is $0.95 per minute.

Hints are available for this title via the hint line. You can
visit the Fallout 2 Web Page and posts your questions in the Feedback
section. Interplay/Black Isle Studios employees will sometimes answer
questions. The Feedback area is mainly used for gamers to help each
other.

Fallout 2 Web Page: http://www.interplay.com/fallout2

Interplay Productions Support Phone:(949) 553-6678
Interplay Productions Support Fax: (949) 252-2820
Interplay Productions Technical Support
16815 Von Karman Avenue
Irvine, CA  92606
HOW TO REACH US ONLINE
INTERNET E-MAIL: support@interplay.com
WORLD WIDE WEB: Access our Web Site at http://www.interplay.com
FTP:    Access our FTP Site at ftp.interplay.com

Mail:
Interplay Customer Service
16815 Von Karman
Irvine, CA 92606


(5.2) INTERPLAY U.K. CUSTOMER SUPPORT INFORMATION
-------------------------------------------------

Interplay Productions, Ltd.
Harleyford Manor
Harleyford
Henley Road
Marlow
Buckinghamshire
SL7 2DX
ENGLAND
Tel: +44 (0) 1628 423723
Fax: +44 (0) 1628 423777
Email: Europe@interplay-uk.com

Limited Warranty
----------------
If within the first ninety days of purchase you have any problems with
the product please return it to the retailer.

After ninety (90) days , you may return the software program to
Interplay Productions, provided the fault is not due to normal wear
and tear and Interplay will mail a replacement to you.

To receive a replacement, you should enclose the defective medium
(including the original product label) in protective packaging
accompanied by:

1) A cheque or postal order for £10 sterling (to cover postage and
packaging).
2) A brief statement describing the defect.
3) The original receipt or address of the retailer
4) Your return address

Registered mail is recommended for returns.

Please send to:

Warranty Replacements, Interplay Productions Ltd., Harleyford Manor,
Harleyford, Henley Road, Marlow, Buckinghamshire SL7 2DX, ENGLAND 

---------------------
(6.0) PRODUCT LICENSE
---------------------
This copy of FALLOUT 2 (the Software) is intended solely for your
personal noncommercial home entertainment use. You may not decompile,
reverse engineer, or disassemble the Software, except as permitted by
law. Interplay Productions retain[s] all right, title and interest in
the Software including all intellectual property rights embodied
therein and derivatives thereof. The Software, including, without
limitation, all code, data structures, characters, images, sounds,
text, screens, game play, derivative works and all other elements of
the Software may not be copied, resold, rented, leased, distributed
(electronically or otherwise), used on pay-per-play, coin-op or other
for-charge basis, or for any commercial purpose. Any permissions
granted herein are provided on a temporary basis and can be withdrawn
by Interplay Productions at any time. All rights not expressly granted
are reserved.

By acquiring and retaining this Software, you assent to the terms and
restrictions of this limited license. If you do not accept the terms
of this limited license, you must return the Software together with
all packaging, manuals, and other material contained therein to the
store where you acquired the Software for a full refund.


Copyright 1998 Interplay Productions.  All rights reserved.
Fallout 2 is a trademark of Interplay Productions.

Win95, Windows 95, Windows NT, DirectX are copyrights of
Microsoft Corporation.
