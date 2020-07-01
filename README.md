## Fallout 2 Restoration Project, updated

[![Build Status](https://travis-ci.org/BGforgeNet/Fallout2_Restoration_Project.svg?branch=master)](https://travis-ci.org/BGforgeNet/Fallout2_Restoration_Project)
[![Translation status](https://tra.bgforge.net/widgets/fallout/-/rp/svg-badge.svg)](https://tra.bgforge.net/projects/fallout/rp/)
[![Discord chat](https://img.shields.io/discord/420268540700917760?logo=discord)](https://discord.gg/4Yqfggm)

[__Download__](https://github.com/BGforgeNet/Fallout2_Restoration_Project/releases/latest)
| [__Install__](#installation)
| [__Included mods__](#included-mods)
| [__Report issues__](#reporting-issues)
| [__Translations__](#translations)

This is an updated version of [killap's Restoration Project](http://killap.net/) for Fallout 2.

Docs: [changelog](docs/changelog.md), [original readme](docs/rp-readme.txt), [new content description](docs/rp-new_content.txt) (spoilers), [walkthrough](http://hem.bredband.net/darek1/f2rp_wt.htm) (heavy spoilers), [credits](docs/credits.md).

### Installation
- RPU _requires_ starting a **new game**. (One exception is [updating](#update) from RP or a previous RPU version.)
- If you made any changes to `ddraw.ini`, these changes will be lost when you overwrite that file. If you want to preserve them, make a backup copy and then transfer the settings manually to the new `ddraw.ini`.

#### Windows
1. Download `rpu_v*.exe` from the [latest release](https://github.com/BGforgeNet/Fallout2_Restoration_Project/releases/latest) page.
1. Launch, point the installer to the game directory, select the desired language.

#### Linux / MacOS
- You can follow the procedure for Windows, launching the exe with wine.
- Alternatively, you can perform the installation manually:
  1. Download `rpu_v*.zip` from the [latest release](https://github.com/BGforgeNet/Fallout2_Restoration_Project/releases/latest) page.
  1. Extract the archive into the main game directory, overwriting files when asked.
  1. Launch `rpu-install.sh` (Linux) or `rpu-install.command` (MacOS).

**Notes:**
1. RPU can be installed on top of RP 2.3.3. That does not _require_ starting a new game. However, if you continue with a save from an older version, you won't see some of the fixes in the areas that you've already visited.
1. If you made any changes to `ddraw.ini` prior to RPU installation, these changes will be lost when you overwrite that file. If you want to preserve them, make sure to make a backup copy and then transfer the settings manually to new `ddraw.ini`.
1. [UPU](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch) is included into RPU. You don't need to install UPU separately.
1. See `mods/rpu.ini` for various settings that can be configured.

### Update
Make sure to **backup your saves** or better yet, the entire game directory **before** updating.

* You can update from an older RPU version.
* You can install RPU on top of RP 2.3.3 to make use of the fixes.

In both cases, you won't see some of the fixes on already visited maps. Other than that, savegames should be compatible, but **no guarantees**.

### Translations
Most translations are **incomplete**, they are provided as is. You can [help with completion](https://tra.bgforge.net/projects/fallout/rp/). Details are [here](docs/translations.md).

Translations are included in the [automatic installer](#windows). Only if you install _manually_ and want to play a localized version:
1. Download `rpu_v*_translations.zip` from the [latest release page](https://github.com/BGforgeNet/Fallout2_Restoration_Project/releases/latest). Extract the archive, copy _only_ the desired language `dat` file into `mods` subdirectory.
1. Change `language=english` in `fallout2.cfg` to your selected language. (Example: `language=spanish`).

### Included mods
RPU includes the following mods:
- [Unofficial Patch](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch)
- [High quality music](https://github.com/BGforgeNet/Fallout2-HQ-music)
- [Hero Appearance](https://github.com/BGforgeNet/Fallout2_Hero_Appearance)
- [NPC armor](https://github.com/BGforgeNet/Fallout2_NPC_Armor)
- [Party Orders](https://github.com/BGforgeNet/Fallout2_Party_Orders)
- Enhanced worldmap
- Additional rifle and wakizashi animations
- Improved Mysterious Stranger
- Voice for Cassidy
- High resolution patch.

For additional QoL options, check out:
- [Ultra HQ music](https://github.com/BGforgeNet/Fallout2-HQ-music)
- [FO2tweaks](https://github.com/BGforgeNet/FO2tweaks)

### Reporting issues
If you've found an issue:

1. Make sure it's in RP's content. Vanilla bugs should be reported to [UPU](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch). Bugs in other mods - to the corresponding authors.
1. Keep in mind that RP's scope is only to restore cut content. Not to add "nice to to have" things.
1. Check [known issues](docs/known.md).
1. Follow the [instruction](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch/blob/master/docs/reporting.md) (note that this link leads to UPU repo, don't confuse them).
