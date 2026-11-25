#!/bin/zsh

set -euxo pipefail

BASEDIR=$1
APPBUNDLE=$2
FRAMEWORKS_PATH="${APPBUNDLE}/Contents/Frameworks/"
WORKINGDIR=$(pwd)

# The parser sources are the `tree-sitter-fourd` submodule: the grammar and its
# generated src/ live there, and this repository's copy of them is gone. Only
# parser.c and scanner.c are compiled -- there is no C++ and no Makefile.
SRC_DIR="${BASEDIR}/tree-sitter-fourd/src"
if [[ ! -f "${SRC_DIR}/parser.c" ]]; then
    echo "Missing ${SRC_DIR}/parser.c -- run: git submodule update --init" >&2
    exit 1
fi

# - Build both arm64 (Apple Silicon) and x86_64 (Intel)
# - Require a minimum of macOS 11.0
# - Include the src/ directory for headers (for `tree_sitter/parser.h`)
FLAGS=(
    -arch arm64
    -arch x86_64
    -mmacosx-version-min=11.0
    -O3
    -I"${SRC_DIR}"
    -F"${FRAMEWORKS_PATH}"
    -framework SyntaxKit
    -rpath @loader_path/../Frameworks
)

# Build in a `build/` directory.
PRODUCT_DIR=$WORKINGDIR/build/lib
PRODUCT_NAME=libtree-sitter-fourd.dylib
PRODUCT_PATH=$PRODUCT_DIR/$PRODUCT_NAME
DEVELOPER_ID="Developer ID Application: keisuke miyako (Y69CWUC25B)"

mkdir -p $PRODUCT_DIR

xcrun clang -dynamiclib -o "$PRODUCT_PATH" "${FLAGS[@]}" \
    "${SRC_DIR}/parser.c" "${SRC_DIR}/scanner.c"

install_name_tool -id $PRODUCT_NAME $PRODUCT_PATH

# sign
codesign --verbose --deep --timestamp --force --sign "$DEVELOPER_ID" --options=runtime "$PRODUCT_PATH"

rm -f $WORKINGDIR/language-4d.novaextension/Syntaxes/$PRODUCT_NAME
cp $PRODUCT_PATH $WORKINGDIR/language-4d.novaextension/Syntaxes/$PRODUCT_NAME
