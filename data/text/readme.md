# Translation details

Translation patch is necessary for separating similar strings in the [translation system](https://hive.bgforge.net).

[PO file format](https://www.gnu.org/software/gettext/manual/html_node/PO-Files.html) groups the strings by the source, thus ensuring that identical strings are translated all at once, and have the same translation.

However, a few strings do not fit game interface in some languages. Thus, they have a PO "context" applied, allowing to enter a different translation for them. The context uses "sound" field in `msg` format. Do not delete it.

`translation.patch` is for tracking changes from original in diff format. It's not used anywhere.

File `game/pipboy.msg` is excluded from translation system because it needs special formatting (holodisk paragraphs split into strings, strings have length limit), so any updates to it are manual. That also applies to `credits.txt` and `quotes.txt`. Feel free to submit pull requests for these files.
