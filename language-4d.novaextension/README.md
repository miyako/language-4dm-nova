# 4D Language

4D (`.4dm`) support for [Nova](https://nova.app): syntax highlighting, structure
folding, symbols, SQL injection and the tool4d language server, built on the
tree-sitter-fourd grammar.

- What changed in each release: [CHANGELOG.md](CHANGELOG.md)
- Licence: [LICENSE](LICENSE) (MIT)
- Source and issues: <https://github.com/miyako/language-4dm-nova>

## What it does

| Feature | Detail |
|---|---|
| Highlighting | 4D commands and constants (tokenized), variables and sigils (`$`, `<>`, `:`), literals including string, time, date and hex, multi-word plugin commands, operators including `??`, `?+`, `?-` and `^\|` |
| Folding | `If`, `Case of` and each branch, `For`, `For each`, `While`, `Repeat`, `Try`, `Begin SQL`, class functions and constructors; comment blocks fold too |
| Symbols | class functions with their arguments, properties, superclasses |
| SQL injection | 4D SQL inside `Begin SQL … End SQL` |
| Language server | `tool4d` through the bundled universal bridge: completion, signature help, document symbols |

## Requirements

Nova 10 or newer on macOS. Highlighting, folding and symbols work out of the
box; the language-server features also need a 4D installation that provides
`tool4d` (21 R4 or later).

## Settings

Nova → Settings → Extensions → 4D Language:

| Setting | Default | What it does |
|---|---|---|
| tool4d Executable | search | Explicit path to `tool4d`. Empty: `PATH`, the 4D Analyzer storage and the usual install locations are searched |
| 4D Project File | from workspace | Explicit `.4DProject` file; relative paths resolve against the workspace |
| Startup Timeout | 30 | Seconds to wait for `tool4d` to connect to the local bridge |
| Shutdown Timeout | 5 | Seconds before `tool4d` is terminated |
| Skip On Startup | on | Do not run the project's startup database methods |
| Open Without Data | on | Open the project without its data file |
| tool4d Log Level | none | Diagnostic log level passed to `tool4d` |

## Installing

From Nova: Extensions → Extensions Library → 4D Language → Install. Or download
`language-4d.novaextension.dmg` from
<https://github.com/miyako/language-4dm-nova/releases/latest> and open it; the
image and both binaries are signed with a Developer ID Application certificate
and notarized with Apple.
