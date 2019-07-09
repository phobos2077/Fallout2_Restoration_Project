## Fallout 2 Restoration Project, updated

[![Build Status](https://travis-ci.org/BGforgeNet/Fallout2_Restoration_Project.svg?branch=master)](https://travis-ci.org/BGforgeNet/Fallout2_Restoration_Project)

[__Download__](https://github.com/BGforgeNet/Fallout2_Restoration_Project/releases/latest)
 | [__Installation__](#installation)
 | [__Reporting issues__](#reporting-issues)
 | [__Changelog__](docs/CHANGELOG.md)

This is an update for [killap's Restoration Project](http://killap.net/) for Fallout 2. This is _not_ an independent mod, it should be installed on top of RP 2.3.3.

### Installation
1. Start with a clean humongous installation of the game.
1. Download and install [RP 2.3.3](http://killap.net/) normally.
1. Download the latest RPU [release](https://github.com/BGforgeNet/Fallout2_Restoration_Project/releases/latest) (rpu_vX.7z).
1. Extract the archive into the main game directory, overwriting files when asked. That's it.

**Notes:**
1. RPU does not _require_ starting a new game. However, if you continue with a save from an older version, you won't see some of the fixes in the areas that you've already visited.
1. If you made any changes to `ddraw.ini`, these changes will be lost when you overwrite that file. If you want to preserve them, make sure to make a backup copy and then transfer the settings manually to the new `ddraw.ini`.

### Reporting issues
If you've found an issue:

1. Make sure it's in RP's content. Vanilla bugs should be reported to [UP](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch). Bugs in other mods - to the corresponding authors.
1. Keep in mind that RP's scope is only to restore cut content. Not to add "nice to to have" things.
1. Check [known issues](docs/KNOWN.md).
1. Before opening a new Github issue, check existing ones (both open and closed). Maybe it's already been reported.
1. Next, depending on the problem type:
    * **Typo**. Attach a screenshot, explain what's wrong in the wording and how it should be corrected. (Screenshot key is F12).
    * **Quest bug**. Explain the problem. Attach **two** savegames: one where the problem can be seen right away, another one _right before_ starting the quest. Indicate if any other mods are installed, and their versions.
    * **Crash**. See [reporting crashes](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch/blob/master/docs/CRASH.md).
    * **Something else**. Use your best judgement. Provide as much info as possible.

**Notes:**
- The best way to get the issue fixed is to submit a pull request.
- One issue per problem.
- Attach the files directly on Github, don't use external file sharing sites.
- Some bugs may be better illustrated with a gif or a video, you can do that.
