## Fallout 2 Restoration Project, updated

[![Build Status](https://travis-ci.org/BGforgeNet/Fallout2_Restoration_Project.svg?branch=master)](https://travis-ci.org/BGforgeNet/Fallout2_Restoration_Project)
[![Translation status](https://tra.bgforge.net/widgets/fallout/-/rp/svg-badge.svg)](https://tra.bgforge.net/projects/fallout/rp/)

* [Download](https://github.com/BGforgeNet/Fallout2_Restoration_Project/releases/latest)
* [Installation](#installation)
* [Reporting issues](#reporting-issues)
* [Translations](#translations)
* [Discord](https://discord.gg/4Yqfggm)
* [Changelog](docs/changelog.md)
* [Credits](docs/credits.md)
* [Walkthrough](http://hem.bredband.net/darek1/f2rp_wt.htm)

This is an updated version of [killap's Restoration Project](http://killap.net/) for Fallout 2.

### Installation
1. Start with a clean humongous installation of the game.
1. Download the latest RPU [release](https://github.com/BGforgeNet/Fallout2_Restoration_Project/releases/latest).
1. Extract the archive into the main game directory, overwriting files when asked.
1. Launch `rpu-install.bat` (or `rpu-install.sh`, if you're on Linux/MacOS).
1. See `mods/rpu.ini` for various settings that can be configured.

**Notes:**
1. RPU can be installed on top of RP 2.3.3. That does not _require_ starting a new game. However, if you continue with a save from an older version, you won't see some of the fixes in the areas that you've already visited.
1. If you made any changes to `ddraw.ini`, these changes will be lost when you overwrite that file. If you want to preserve them, make sure to make a backup copy and then transfer the settings manually to the new `ddraw.ini`.
1. [Party Orders](https://github.com/BGforgeNet/fallout2-party-orders) mod can be downloaded separately.

### Translations
If you want to play a localized version, grab the corresponding language file from the latest release. Extract it into `mods` subdirectory inside game root.

Most translations are incomplete, they are provided as is. **You** can [help with completion](https://tra.bgforge.net/projects/fallout/rp/). Some details are [here](docs/translations.md).

### Reporting issues
If you've found an issue:

1. Make sure it's in RP's content. Vanilla bugs should be reported to [UP](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch). Bugs in other mods - to the corresponding authors.
1. Keep in mind that RP's scope is only to restore cut content. Not to add "nice to to have" things.
1. Check [known issues](docs/known.md).
1. Follow the [instruction](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch/blob/master/docs/reporting.md).
