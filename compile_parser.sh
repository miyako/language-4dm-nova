#!/bin/zsh

set -euxo pipefail

if [[ $# -ne 2 ]]; then
    echo "Usage: $0 BASEDIR /Applications/Nova.app" >&2
    exit 64
fi

BASEDIR="${1:A}"
APPBUNDLE="${2:A}"

EXTENSION_DIR="${EXTENSION_DIR:-${BASEDIR}/language-4d.novaextension}"
BRIDGE_DIR="${BRIDGE_DIR:-${BASEDIR}/tool4d-lsp-stdio}"
BRIDGE_BIN_NAME="${BRIDGE_BIN_NAME:-tool4d-lsp-stdio}"

FRAMEWORKS_PATH="${APPBUNDLE}/Contents/Frameworks"
SYNTAX_LIBRARY_NAME="libtree-sitter-fourd.dylib"

DEVELOPER_ID="${DEVELOPER_ID:-Developer ID Application: keisuke miyako (Y69CWUC25B)}"
NOTARY_PROFILE="${NOTARY_PROFILE:-notarytool}"

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

require_command cargo
require_command rustup
require_command lipo
require_command codesign
require_command install_name_tool
require_command hdiutil
require_command xcrun

require_directory "${APPBUNDLE}"
require_directory "${FRAMEWORKS_PATH}"
require_directory "${EXTENSION_DIR}"
require_directory "${BRIDGE_DIR}"

require_file "${EXTENSION_DIR}/extension.json"
require_file "${EXTENSION_DIR}/Scripts/main.js"
require_file "${BRIDGE_DIR}/Cargo.toml"

mkdir -p "${EXTENSION_DIR}/Syntaxes"
mkdir -p "${EXTENSION_DIR}/bin"

###############################################################################
# Build the Tree-sitter syntax library
###############################################################################

TREE_SITTER_BUILD_DIR="${TMP_BUILD_DIR}/tree-sitter"
mkdir -p "${TREE_SITTER_BUILD_DIR}"

# Build both arm64 and x86_64, require macOS 11, and include parser headers.
BUILD_FLAGS=(
    -arch arm64
    -arch x86_64
    -mmacosx-version-min="${MACOS_DEPLOYMENT_TARGET}"
    -I"${BASEDIR}/src"
)

pushd "${BASEDIR}"

CFLAGS="${BUILD_FLAGS[*]} -O3" \
CXXFLAGS="${BUILD_FLAGS[*]} -O3" \
LDFLAGS="${BUILD_FLAGS[*]} -F${FRAMEWORKS_PATH} -framework SyntaxKit -rpath @loader_path/../Frameworks" \
PREFIX="${TREE_SITTER_BUILD_DIR}" \
make install

popd

TREE_SITTER_SOURCE="${TREE_SITTER_BUILD_DIR}/lib/libtree-sitter-nova.dylib"
TREE_SITTER_PRODUCT="${TREE_SITTER_BUILD_DIR}/lib/${SYNTAX_LIBRARY_NAME}"
TREE_SITTER_DESTINATION="${EXTENSION_DIR}/Syntaxes/${SYNTAX_LIBRARY_NAME}"

require_file "${TREE_SITTER_SOURCE}"

mv "${TREE_SITTER_SOURCE}" "${TREE_SITTER_PRODUCT}"

# Use @rpath-style lookup semantics rather than retaining a temporary path.
install_name_tool \
    -id "@rpath/${SYNTAX_LIBRARY_NAME}" \
    "${TREE_SITTER_PRODUCT}"

codesign \
    --verbose \
    --timestamp \
    --force \
    --sign "${DEVELOPER_ID}" \
    --options runtime \
    "${TREE_SITTER_PRODUCT}"

codesign --verify --strict --verbose=2 "${TREE_SITTER_PRODUCT}"

rm -f "${TREE_SITTER_DESTINATION}"
install -m 755 "${TREE_SITTER_PRODUCT}" "${TREE_SITTER_DESTINATION}"

###############################################################################
# Build the Tool4D stdio/TCP bridge
###############################################################################

# Install the targets when they are not already available.
rustup target add "${ARM_TARGET}" "${INTEL_TARGET}"

pushd "${BRIDGE_DIR}"

MACOSX_DEPLOYMENT_TARGET="${MACOS_DEPLOYMENT_TARGET}" \
cargo build --release --locked --target "${ARM_TARGET}"

MACOSX_DEPLOYMENT_TARGET="${MACOS_DEPLOYMENT_TARGET}" \
cargo build --release --locked --target "${INTEL_TARGET}"

popd

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
lipo "$BRIDGE_UNIVERSAL_BINARY" -verify_arch arm64 x86_64
echo "Bridge architectures: $(lipo "$BRIDGE_UNIVERSAL_BINARY" -archs)"

codesign \
    --verbose \
    --timestamp \
    --force \
    --sign "${DEVELOPER_ID}" \
    --options runtime \
    "${BRIDGE_UNIVERSAL_BINARY}"

codesign --verify --strict --verbose=2 "${BRIDGE_UNIVERSAL_BINARY}"

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

###############################################################################
# Create, notarize, and staple the final extension DMG
###############################################################################

rm -f "${PRODUCT_DMG_PATH}"

hdiutil create \
    -format UDBZ \
    -srcfolder "${EXTENSION_DIR}" \
    "${PRODUCT_DMG_PATH}"

xcrun notarytool submit \
    "${PRODUCT_DMG_PATH}" \
    --keychain-profile "${NOTARY_PROFILE}" \
    --wait

xcrun stapler staple "${PRODUCT_DMG_PATH}"
xcrun stapler validate "${PRODUCT_DMG_PATH}"

echo
echo "Build completed successfully:"
echo "  Extension: ${EXTENSION_DIR}"
echo "  DMG:       ${PRODUCT_DMG_PATH}"
