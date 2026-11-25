# Changelog

All notable changes to this project are documented here. The format follows
[Keep a Changelog](https://keepachangelog.com/en/1.1.0/), and the version
number tracks the 4D release this extension targets: `21.5.1` is the second
release against 4D 21.5, `21.6.0` would claim 4D 21.6.

Entries are generated from the commit history by `tools/changelog.py`. The
conventional-commit prefix picks the section (`feat:` → Added, `fix:` → Fixed,
`docs:` → Documentation, `build:` and `ci:` → Build, …); a subject without one
is read for its verb, and the files it touches decide in the end. Releases
before 21.5.1 predate this file and are not listed.

## [21.5.2](https://github.com/miyako/language-4dm-nova/compare/21.5.1...21.5.2) - 2026-11-25

### Added

- generate CHANGELOG.md from the commits in each release (#52) ([`fdbb48d`](https://github.com/miyako/language-4dm-nova/commit/fdbb48d))

## [21.5.1](https://github.com/miyako/language-4dm-nova/compare/21.5.0...21.5.1) - 2026-11-24

### Added

- Add a CI generator for src/builtins.h (#47) ([`956e316`](https://github.com/miyako/language-4dm-nova/commit/956e316))
- Add a manual release workflow (X.Y.Z, signed and notarized) (#49) ([`891507a`](https://github.com/miyako/language-4dm-nova/commit/891507a))

### Changed

- Update .gitignore ([`59af5b7`](https://github.com/miyako/language-4dm-nova/commit/59af5b7))
- Fetch the branch before leasing the push, and keep the dump ([`81d7d8c`](https://github.com/miyako/language-4dm-nova/commit/81d7d8c))
- Expand the ARRAY and C_ wildcards ([`129e3a7`](https://github.com/miyako/language-4dm-nova/commit/129e3a7))
- Update builtins.h for 4D 21 R4 (#48) ([`aee5d5a`](https://github.com/miyako/language-4dm-nova/commit/aee5d5a))

### Removed

- Drop the step-by-step traces ([`8b50104`](https://github.com/miyako/language-4dm-nova/commit/8b50104))

### Fixed

- Show why the libc++ packages refuse to install ([`6ee9816`](https://github.com/miyako/language-4dm-nova/commit/6ee9816))
- Stop asking 4D where its own resources are ([`0b9b1fa`](https://github.com/miyako/language-4dm-nova/commit/0b9b1fa))

### Build

- Install the shared libraries tool4d needs on Linux ([`f88ab8b`](https://github.com/miyako/language-4dm-nova/commit/f88ab8b))
- Find tool4d's Linux libraries instead of naming them ([`3070b3e`](https://github.com/miyako/language-4dm-nova/commit/3070b3e))
- Report why tool4d's libraries do not install ([`7da4630`](https://github.com/miyako/language-4dm-nova/commit/7da4630))
- Find tool4d's sonames instead of trusting ldconfig ([`be34cac`](https://github.com/miyako/language-4dm-nova/commit/be34cac))
- Reinstall the libc++ packages whose files the image pruned ([`041f3e7`](https://github.com/miyako/language-4dm-nova/commit/041f3e7))
- Run on ubuntu-24.04 instead of ubuntu-latest ([`fa4afd5`](https://github.com/miyako/language-4dm-nova/commit/fa4afd5))
- Run the generator on Windows, where tool4d is self-contained ([`22ef739`](https://github.com/miyako/language-4dm-nova/commit/22ef739))
- Give the generator project 4D's canonical shape ([`9e267c1`](https://github.com/miyako/language-4dm-nova/commit/9e267c1))
- --project is the folder, not the .4DProject file ([`3507be1`](https://github.com/miyako/language-4dm-nova/commit/3507be1))
- Hand 4D the .4DProject file and a backslash path ([`3053c8d`](https://github.com/miyako/language-4dm-nova/commit/3053c8d))
- Trace the dump method step by step ([`a9f9dbd`](https://github.com/miyako/language-4dm-nova/commit/a9f9dbd))
- Give File() forward slashes and --project backslashes ([`5f475e0`](https://github.com/miyako/language-4dm-nova/commit/5f475e0))
- Run the release job on macos-15 (#50) ([`b74fff4`](https://github.com/miyako/language-4dm-nova/commit/b74fff4))
- Make the release pipeline pass Apple's checks: notary preflight, DMG signature (#51) ([`6203df3`](https://github.com/miyako/language-4dm-nova/commit/6203df3))
