## Changelog

This file lists changes for RPU only. See original RP changelog [here](rp-changelog.txt).

In addition to the below list, RPU releases contain all applicable fixes from the corresponding [UPU releases](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch/blob/master/docs/changelog.md).
Sometimes UPU or RPU may be updated independently, which is why you might see gaps in version numbers.

- [Version 14](#version-14)
- [Version 13](#version-13)
- [Version 12](#version-12)
- [Version 11](#version-11)
- [Version 10](#version-10)
- [Version 9](#version-9)
- [Version 8](#version-8)
- [Version 7](#version-7)
- [Version 6](#version-6)
- [Version 5](#version-5)
- [Version 4](#version-4)
- [Version 3](#version-3)
- [Version 2](#version-2)
- [Version 1](#version-1)

### Version 14
- Fixed auto installer not allowing to select a directory in some cases.
- Fixed `AllowSoundForFloats` placement in `ddraw.ini`
- Enabled more QoL options: `WorldMapTerrainInfo`, `ActionPointsBar`, increased `NumSoundBuffers` to 16.

### Version 13
- Multiple fixes and updates from [UPU](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch).
- Added [high quality music](https://github.com/BGforgeNet/Fallout2-HQ-music).

### Version 12
 - Fixed incorrect `WorldMapSlots` placement in `ddraw.ini`.
 - Fixed re-stocking Red 888 Guns (introduced in v11).
 - Fixed `rpu-install.command` being left out on cleanup.

### Version 11
 - [Fixed](https://github.com/BGforgeNet/Fallout2_Restoration_Project/issues/32) custom `ddraw.ini` configuration.
 - [Removed](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch/issues/35) old workarounds for 'too many items'.
 - Moved more ini files into `mods` directory.

### Version 10
- General
  - Disabled `AIBestWeaponFix` by default, as it's not much of a fix.
  - Fixed Goris de-robing script so that it'll actually enable `UseFileSystemOverride` when necessary.
  - Fixed sound path correction in the installation script.
  - Added a `.command` installation script for Mac OSX users.
- Arroyo
  - Plant/corn from EPA seeds gets placed on the correct elevation now.
- Den
  - The drug dealer and his bodyguard now receive/equip their weapons at the first time the player enters the Den Residential map.
- EPA
  - Planted seed will now properly grow in the green level.
- San Francisco
  - Fixed bug with being unable to disable force field to Shi emperor.
  - Added previously missing UP fixes:
    - AHS-7 will properly turn hostile upon pickpocket.
    - Emperor force field is disabled with Repair, not Science.
    - Blowing up Emperor field emitter will set Shi hostile.
    - Badger will stock Bozar and G11E.
    - Badger will keep re-stocking after 7 years.

### Version 9
- General
  - Allowed all Kaga versions to be knocked down, for consistency.
  - Added [Party Orders](https://github.com/BGforgeNet/Fallout2_Party_Orders) to release package.
  - Added missing "being hit" animation for Sulik in leather armor.
  - Fixed rifle animations preventing NPCs from equiping those rifles.
  - Fixed Kitsune being unable to equip weapons and not showing armor.
- Den
  - Fixed missing orphan floats.
- EPA
  - Fixed Depressed Mr. Handy causing slowdowns.
- Modoc
  - Fixed being unable to resque Jonny if talked to him before starting the quest.
  - Fixed shitty death narration being stuck.

### Version 8

Added missing item highlight and party control mods.

### Version 7
- Enabled some QoL features in sfall: `DontTurnOffSneakIfYouRun`, `NumbersInDialogue`, `WorldMapFontPatch`, `PartyMemberExtraInfo`.
- Removed files identical to their `master.dat` versions.
- Removed duplicate files from animations components.
- Fixed Russian character descriptions being shown when using English language.
- Fixed several worldmap markers being shown in Russian when using English language.

### Version 6

- Added npc armor frms and hopefully the last missing files from 2.3.3 auto installer.
- Fixed npc armor and ammo mod script installation on unixes.

### Version 5

Fixed more packaging artefacts.

### Version 4

Added missing `scripts.lst`.

### Version 3

- Created a complete package.
- Added localizations.
- Converted some options from install time into separate dat packages and/or ini settings.

### Version 2

Repacked into .dat file.

### Version 1

- General
    - Damage formula no longer erroneously defaults to YAAM.
    - Various under the hood changes and optimizations.
- Abbey
    - Computer desk in SW map corner gives a message when used.
    - Both deatchclaws have correct scripts now.
    - Fixed brother Paul not giving access to computers if the beast was killed, but the book wasn't retrieved.
- Broken Hills
    - Allowed to use lockpicks in Chad's quest.
- Den
    - Fixed dealer's bodyguard description.
    - Deleted 0-stack ammo pack from Metzger's desk.
    - Bobby's floats tweaked to reflect he's packing things.
- Enclave
    - Fixed RP NPC suffering no damage in the puzzle room.
    - Fixed vertibird pad area being immune to meltdown countdown and FEV poisoning.
- Klamath
    - Fixed Duntons offering the job on the pastures, then telling the PC off. Also, fixed CoP check in their script.
- Gecko
    - Lenny: moved ammo from hands to inventory.
- Hubologists' stash
    - Added proper messages for using skills and items on the top door.
