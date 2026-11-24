#!/bin/zsh

# Builds the extension's two native products -- the universal tree-sitter dylib
# and the universal tool4d stdio bridge -- signs both with a Developer ID
# Application identity, and packages the extension bundle into a DMG that is
# notarized and stapled.
#
#   ./compile_parser.sh BASEDIR [/Applications/Nova.app]
#
# BASEDIR is the repository root. The Nova bundle is optional: it supplies
# SyntaxKit.framework for the link step, and hosted runners have no Nova. The
# built dylib references no SyntaxKit symbol (only libSystem and itself -- check
# `otool -L` and `nm -u`), so linking without the framework changes nothing at
# load time; Nova provides SyntaxKit either way.
#
# Environment:
#   DEVELOPER_ID    signing identity; default is the single Developer ID
#                   Application identity in the keychain
#   NOTARY_PROFILE  notarytool keychain profile, used for notarization when set
#   NOTARYTOOL_APPLE_ID / NOTARYTOOL_TEAM_ID / NOTARYTOOL_PASSWORD
#                   credentials used when NOTARY_PROFILE is not set
#   SKIP_NOTARIZATION=1
#                   build and sign only; no DMG, no notarization
#
# Signing credentials are never echoed: this script does not run with `set -x`.

set -euo pipefail

usage() {
    echo "Usage: $0 BASEDIR [/Applications/Nova.app]" >&2
    echo "" >&2
    echo "  The Nova bundle only supplies SyntaxKit.framework for the link step and" >&2
    echo "  may be omitted when Nova is not installed, e.g. on a hosted CI runner." >&2
    exit 64
}

if [[ $# -lt 1 || $# -gt 2 ]]; then
    usage
fi

BASEDIR="${1:A}"
APPBUNDLE=""
if [[ $# -eq 2 && -n "$2" ]]; then
    APPBUNDLE="${2:A}"
fi

EXTENSION_DIR="${EXTENSION_DIR:-${BASEDIR}/language-4d.novaextension}"
BRIDGE_DIR="${BRIDGE_DIR:-${BASEDIR}/tool4d-lsp-stdio}"
BRIDGE_BIN_NAME="${BRIDGE_BIN_NAME:-tool4d-lsp-stdio}"

SYNTAX_LIBRARY_NAME="libtree-sitter-fourd.dylib"

PRODUCT_DMG_PATH="${BASEDIR}/language-4d.novaextension.dmg"

MACOS_DEPLOYMENT_TARGET="11.0"
ARM_TARGET="aarch64-apple-darwin"
INTEL_TARGET="x86_64-apple-darwin"

# Temporary build output is removed automatically.
TMP_BUILD_DIR="$(mktemp -d "${TMPDIR:-/tmp}/language-4d-build.XXXXXX")"

cleanup() {
    rm -rf "${TMP_BUILD_DIR}"
}
trap cleanup EXIT

require_file() {
    if [[ ! -f "$1" ]]; then
        echo "Required file not found: $1" >&2
        exit 1
    fi
}

require_directory() {
    if [[ ! -d "$1" ]]; then
        echo "Required directory not found: $1" >&2
        exit 1
    fi
}

require_command() {
    if ! command -v "$1" >/dev/null 2>&1; then
        echo "Required command not found: $1" >&2
        exit 1
    fi
}

# `lipo -verify_arch` accepts exactly one architecture per call: passing two
# fails with "-verify_arch requires exactly one input file", which reads like a
# file-count error and is not one.
verify_architectures() {
    local binary="$1"
    shift
    local architecture
    for architecture in "$@"; do
        if ! lipo "${binary}" -verify_arch "${architecture}"; then
            echo "${binary} is missing the ${architecture} slice" >&2
            exit 1
        fi
    done
}

require_command cargo
require_command rustup
require_command lipo
require_command codesign
require_command install_name_tool
require_command security
require_command xcrun

require_directory "${EXTENSION_DIR}"
require_directory "${BRIDGE_DIR}"
require_file "${EXTENSION_DIR}/extension.json"
require_file "${EXTENSION_DIR}/Scripts/main.js"
require_file "${BRIDGE_DIR}/Cargo.toml"

###############################################################################
# Signing identity and notarization credentials
###############################################################################

if [[ -z "${DEVELOPER_ID:-}" ]]; then
    IDENTITIES=(${(f)"$(security find-identity -v -p codesigning \
        | sed -n 's/.*"\(Developer ID Application: .*\)"/\1/p')"})
    if [[ ${#IDENTITIES} -ne 1 ]]; then
        echo "Expected exactly one Developer ID Application identity in the" >&2
        echo "keychain, found ${#IDENTITIES}. Set DEVELOPER_ID to choose one." >&2
        security find-identity -v -p codesigning >&2 || true
        exit 1
    fi
    DEVELOPER_ID="${IDENTITIES[1]}"
fi

NOTARY_ARGS=()
NOTARIZE=1
if [[ -n "${NOTARY_PROFILE:-}" ]]; then
    NOTARY_ARGS=(--keychain-profile "${NOTARY_PROFILE}")
elif [[ -n "${NOTARYTOOL_APPLE_ID:-}" && -n "${NOTARYTOOL_TEAM_ID:-}" \
        && -n "${NOTARYTOOL_PASSWORD:-}" ]]; then
    NOTARY_ARGS=(
        --apple-id "${NOTARYTOOL_APPLE_ID}"
        --team-id "${NOTARYTOOL_TEAM_ID}"
        --password "${NOTARYTOOL_PASSWORD}"
    )
elif [[ "${SKIP_NOTARIZATION:-0}" == "1" ]]; then
    NOTARIZE=0
else
    echo "No notarization credentials: set NOTARY_PROFILE, or" >&2
    echo "NOTARYTOOL_APPLE_ID + NOTARYTOOL_TEAM_ID + NOTARYTOOL_PASSWORD, or" >&2
    echo "SKIP_NOTARIZATION=1." >&2
    exit 1
fi

echo "Signing identity: ${DEVELOPER_ID}"

###############################################################################
# Build the Tree-sitter syntax library
###############################################################################

TREE_SITTER_BUILD_DIR="${TMP_BUILD_DIR}/tree-sitter"
mkdir -p "${TREE_SITTER_BUILD_DIR}/src"

# Build from a copy of src/ and Makefile, never in place: the repository tracks
# a prebuilt libtree-sitter-nova.dylib and object files, so `make install` in
# the checkout can decide there is nothing to do and install an old dylib as if
# it had just been built.
cp -R "${BASEDIR}/src/." "${TREE_SITTER_BUILD_DIR}/src/"
# src/ tracks its own object files; a copied .o would be linked as-is.
rm -f "${TREE_SITTER_BUILD_DIR}/src/"*.o
cp "${BASEDIR}/Makefile" "${TREE_SITTER_BUILD_DIR}/Makefile"

# Build both arm64 and x86_64 and require macOS 11. The Nova bundle contributes
# SyntaxKit only; without it the link is a plain tree-sitter dylib.
BUILD_FLAGS=(
    -arch arm64
    -arch x86_64
    -mmacosx-version-min="${MACOS_DEPLOYMENT_TARGET}"
    -I"${TREE_SITTER_BUILD_DIR}/src"
)

LINK_FLAGS=("${BUILD_FLAGS[@]}" -rpath @loader_path/../Frameworks)
if [[ -n "${APPBUNDLE}" ]]; then
    FRAMEWORKS_PATH="${APPBUNDLE}/Contents/Frameworks"
    require_directory "${APPBUNDLE}"
    require_directory "${FRAMEWORKS_PATH}"
    LINK_FLAGS+=(-F "${FRAMEWORKS_PATH}" -framework SyntaxKit)
    echo "SyntaxKit: ${FRAMEWORKS_PATH}"
else
    echo "SyntaxKit: not linked (no Nova bundle given)"
fi

CFLAGS="${BUILD_FLAGS[*]} -O3" \
CXXFLAGS="${BUILD_FLAGS[*]} -O3" \
LDFLAGS="${LINK_FLAGS[*]}" \
make -C "${TREE_SITTER_BUILD_DIR}" PARSER_NAME=fourd

TREE_SITTER_PRODUCT="${TREE_SITTER_BUILD_DIR}/${SYNTAX_LIBRARY_NAME}"
TREE_SITTER_DESTINATION="${EXTENSION_DIR}/Syntaxes/${SYNTAX_LIBRARY_NAME}"

require_file "${TREE_SITTER_PRODUCT}"

# Use @rpath-style lookup semantics rather than retaining a temporary path.
install_name_tool \
    -id "@rpath/${SYNTAX_LIBRARY_NAME}" \
    "${TREE_SITTER_PRODUCT}"

codesign \
    --timestamp \
    --force \
    --sign "${DEVELOPER_ID}" \
    --options runtime \
    "${TREE_SITTER_PRODUCT}"

codesign --verify --strict --verbose=2 "${TREE_SITTER_PRODUCT}"
verify_architectures "${TREE_SITTER_PRODUCT}" arm64 x86_64

mkdir -p "${EXTENSION_DIR}/Syntaxes"
rm -f "${TREE_SITTER_DESTINATION}"
install -m 755 "${TREE_SITTER_PRODUCT}" "${TREE_SITTER_DESTINATION}"

###############################################################################
# Build the Tool4D stdio/TCP bridge
###############################################################################

# Install the targets when they are not already available.
rustup target add "${ARM_TARGET}" "${INTEL_TARGET}"

pushd "${BRIDGE_DIR}" >/dev/null

MACOSX_DEPLOYMENT_TARGET="${MACOS_DEPLOYMENT_TARGET}" \
cargo build --release --locked --target "${ARM_TARGET}"

MACOSX_DEPLOYMENT_TARGET="${MACOS_DEPLOYMENT_TARGET}" \
cargo build --release --locked --target "${INTEL_TARGET}"

popd >/dev/null

BRIDGE_ARM_BINARY="${BRIDGE_DIR}/target/${ARM_TARGET}/release/${BRIDGE_BIN_NAME}"
BRIDGE_INTEL_BINARY="${BRIDGE_DIR}/target/${INTEL_TARGET}/release/${BRIDGE_BIN_NAME}"
BRIDGE_UNIVERSAL_BINARY="${TMP_BUILD_DIR}/${BRIDGE_BIN_NAME}"
BRIDGE_DESTINATION="${EXTENSION_DIR}/bin/${BRIDGE_BIN_NAME}"

require_file "${BRIDGE_ARM_BINARY}"
require_file "${BRIDGE_INTEL_BINARY}"

lipo -create \
    "${BRIDGE_ARM_BINARY}" \
    "${BRIDGE_INTEL_BINARY}" \
    -output "${BRIDGE_UNIVERSAL_BINARY}"

chmod 755 "${BRIDGE_UNIVERSAL_BINARY}"

# Confirm that the resulting binary contains both required architectures.
verify_architectures "${BRIDGE_UNIVERSAL_BINARY}" arm64 x86_64
echo "Bridge architectures: $(lipo -archs "${BRIDGE_UNIVERSAL_BINARY}")"

codesign \
    --timestamp \
    --force \
    --sign "${DEVELOPER_ID}" \
    --options runtime \
    "${BRIDGE_UNIVERSAL_BINARY}"

codesign --verify --strict --verbose=2 "${BRIDGE_UNIVERSAL_BINARY}"

mkdir -p "${EXTENSION_DIR}/bin"
rm -f "${BRIDGE_DESTINATION}"
install -m 755 "${BRIDGE_UNIVERSAL_BINARY}" "${BRIDGE_DESTINATION}"

###############################################################################
# Validate extension assets
###############################################################################

require_file "${EXTENSION_DIR}/extension.json"
require_file "${EXTENSION_DIR}/Scripts/main.js"
require_file "${EXTENSION_DIR}/Syntaxes/fourd.xml"
require_file "${TREE_SITTER_DESTINATION}"
require_file "${BRIDGE_DESTINATION}"

# Verify the copies placed in the extension, not only the build products.
codesign --verify --strict --verbose=2 "${TREE_SITTER_DESTINATION}"
codesign --verify --strict --verbose=2 "${BRIDGE_DESTINATION}"

file "${TREE_SITTER_DESTINATION}"
file "${BRIDGE_DESTINATION}"

if [[ ${NOTARIZE} -eq 0 ]]; then
    echo
    echo "Build completed without notarization:"
    echo "  Extension: ${EXTENSION_DIR}"
    echo "  Dylib:     ${TREE_SITTER_DESTINATION}"
    echo "  Bridge:    ${BRIDGE_DESTINATION}"
    exit 0
fi

###############################################################################
# Create, notarize, and staple the final extension DMG
###############################################################################

require_command hdiutil

rm -f "${PRODUCT_DMG_PATH}"

# Stage the bundle one level down so the mounted volume shows a single
# `language-4d.novaextension` to drag into Nova, not its contents spread over
# the volume root.
DMG_STAGING_DIR="${TMP_BUILD_DIR}/dmg"
mkdir -p "${DMG_STAGING_DIR}"
cp -R "${EXTENSION_DIR}" "${DMG_STAGING_DIR}/$(basename "${EXTENSION_DIR}")"

hdiutil create \
    -format UDBZ \
    -srcfolder "${DMG_STAGING_DIR}" \
    "${PRODUCT_DMG_PATH}"

echo "Submitting ${PRODUCT_DMG_PATH} for notarization"
xcrun notarytool submit \
    "${PRODUCT_DMG_PATH}" \
    "${NOTARY_ARGS[@]}" \
    --wait

xcrun stapler staple "${PRODUCT_DMG_PATH}"
xcrun stapler validate "${PRODUCT_DMG_PATH}"

echo
echo "Build completed successfully:"
echo "  Extension: ${EXTENSION_DIR}"
echo "  DMG:       ${PRODUCT_DMG_PATH}"
echo "  Dylib:     ${TREE_SITTER_DESTINATION}"
echo "  Bridge:    ${BRIDGE_DESTINATION}"
