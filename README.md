## Fallout 2 Restoration Project, updated

[![Build Status](https://travis-ci.org/BGforgeNet/Fallout2_Restoration_Project.svg?branch=master)](https://travis-ci.org/BGforgeNet/Fallout2_Restoration_Project)
[![Translation status](https://tra.bgforge.net/widgets/fallout/-/rp/svg-badge.svg)](https://tra.bgforge.net/projects/fallout/rp/)
[![Discord chat](https://img.shields.io/discord/420268540700917760?logo=discord)](https://discord.gg/4Yqfggm)

[__Download__](https://github.com/BGforgeNet/Fallout2_Restoration_Project/releases/latest)
| [__Install__](#installation)
| [__Report issues__](#reporting-issues)
| [__Translate__](#translations)

This is an updated version of [killap's Restoration Project](http://killap.net/) for Fallout 2.

Docs: [changelog](docs/changelog.md), [original readme](docs/rp-readme.txt), [new content description](docs/rp-new_content.txt) (spoilers), [walkthrough](http://hem.bredband.net/darek1/f2rp_wt.htm) (more spoilers), [credits](docs/credits.md).

### Installation
1. Start with a clean humongous installation of the game.
1. Download the latest RPU [release](https://github.com/BGforgeNet/Fallout2_Restoration_Project/releases/latest).
1. Extract the archive into the main game directory, overwriting files when asked.
1. **Launch** `rpu-install.bat` (or `rpu-install.sh / rpu-install.command`, if you're on Linux/MacOS).
1. See `mods/rpu.ini` for various settings that can be configured.

**Notes:**
1. RPU can be installed on top of RP 2.3.3. That does not _require_ starting a new game. However, if you continue with a save from an older version, you won't see some of the fixes in the areas that you've already visited.
1. If you made any changes to `ddraw.ini`, these changes will be lost when you overwrite that file. If you want to preserve them, make sure to make a backup copy and then transfer the settings manually to the new `ddraw.ini`.

### Translations
If you want to play a localized version:
1. Grab the corresponding language file from the [latest release page](https://github.com/BGforgeNet/Fallout2_Restoration_Project/releases/latest). Drop it into `mods` subdirectory.
1. Change `language=english` in `fallout2.cfg` to your selected language.

Most translations are incomplete, they are provided as is. You can [help with completion](https://tra.bgforge.net/projects/fallout/rp/). Details are [here](docs/translations.md).

### Reporting issues
If you've found an issue:

1. Make sure it's in RP's content. Vanilla bugs should be reported to [UP](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch). Bugs in other mods - to the corresponding authors.
1. Keep in mind that RP's scope is only to restore cut content. Not to add "nice to to have" things.
1. Check [known issues](docs/known.md).
1. Follow the [instruction](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch/blob/master/docs/reporting.md) (note that this link leads to UPU repo, don't confuse them).
