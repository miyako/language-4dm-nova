# builtins generator

`src/builtins.h` is generated data: the 4D command names from `Command name()`
plus the constant names from `4D_ConstantsEN.xlf`. It is never hand-edited.

It is also load-bearing, not decorative. `src/scanner.c` includes it and the
lookup is a **binary search**, so the table's ordering is a correctness
property: an unsorted table does not fail, it just stops finding names. The
table committed for 21 R4 left 401 of its own 3944 rows unreachable, which is
why multi-word builtins such as `ABORT PROCESS BY ID` and the whole `_o_…`
family never matched in the scanner.

## The two halves

| | owns | lives in |
|---|---|---|
| **4D** | which names exist | `tools/Sources/Methods/generate_builtins_dump.4dm` |
| **Python** | how they are written | `tools/generate_builtins.py` |

The 4D side only enumerates and writes JSON. It never decides order, escaping
or `#define` values, so a change in presentation can never masquerade as a
change in the 4D language.

`generate_builtins.py` refuses to guess. A duplicate name, a command and
constant sharing a name, a name that would not fit the scanner buffer, or a dump
smaller than the table it replaces are all hard errors: each one means 4D
produced something unexpected, and a silent fix would hide it.

## Running it

Automatic, which is the normal path: run the **Update builtins.h** workflow with
a version such as `21 R5` or `21.2`, or leave it empty for the newest published
release. It opens a pull request only when the table changed. A weekly schedule
runs the empty form.

**The dylib is not rebuilt by that workflow.** `src/scanner.o`,
`src/parser.o` and `libtree-sitter-nova.dylib` are committed build artefacts, and
`compile_parser.sh` needs macOS with Xcode and a Developer ID signature. After a
builtins PR lands, run

    ./compile_parser.sh . /Applications/Nova.app

on a Mac before releasing, or the shipped dylib keeps the old table.

Manual, if you want to see the data first:

```bash
# macOS layout; on Linux the same archive unpacks to bin/tool4d
tool4d --project tools/Builtins.4DProject \
       --startup-method generate_builtins_dump \
       --user-param /tmp/builtins.json --dataless

python3 tools/generate_builtins.py --dump /tmp/builtins.json --header src/builtins.h          # preview
python3 tools/generate_builtins.py --dump /tmp/builtins.json --header src/builtins.h --write  # apply
python3 tools/generate_builtins.py --dump /tmp/builtins.json --header src/builtins.h --check  # exit 3 if stale
```

`--build` stamps the build number (`21R4.100186`); the workflow passes the one
`tool4d --version` reports, which also catches a download that quietly resolved
to another build.

## Checking the table

    cc -std=c11 -Wno-unused-function -Isrc -o /tmp/check tools/check_builtins.c
    /tmp/check

Exits 0 when every row is ordered by `fourd_stricmp` and findable by the binary
search. The workflow runs this after rendering, so a broken table can never
reach a pull request.

## The pasteboard tools

`generate_command_list.4dm` and `generate_constant_list.4dm` are untouched and
still work as before: they put the lists on the clipboard for the regex grammar
helpers. They differ from the CI path on purpose -- they uppercase and strip
spaces, because `command_to_regex.4dm` wants normalized names, while
`builtins.h` stores `ARRAY INTEGER` and `Attribute published SQL` verbatim.

## Versions

4D publishes two trains, and a branch only pairs with its own train:

```
LTS        branch 21.x    version 21.2
R-release  branch 21 Rx   version 21 R5     (the space is URL-encoded)
```

There is no index to query -- a directory path answers 200 with an 87-byte HTML
stub -- so `resolve_version.py` treats only a real archive as evidence that a
version is published. Newer R-releases 404 until 4D publishes them; that is a
beta, not a wrong URL.
