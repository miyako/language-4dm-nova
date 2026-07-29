"use strict";

const EXTENSION_IDENTIFIER = "org.fourd.tree-sitter-four";
const LANGUAGE_SERVER_IDENTIFIER = `${EXTENSION_IDENTIFIER}.tool4d`;
const LANGUAGE_SERVER_NAME = "tool4d Language Server";

/*
 * This must exactly match the identifier declared by Syntaxes/4D.xml.
 * Change it if the existing syntax extension uses another identifier,
 * such as "4d" or "4dm".
 */
const SYNTAX_IDENTIFIER = "fourd";

const CONFIG = {
    toolPath: `${EXTENSION_IDENTIFIER}.toolPath`,
    projectPath: `${EXTENSION_IDENTIFIER}.projectPath`,
    startupTimeout: `${EXTENSION_IDENTIFIER}.startupTimeout`,
    shutdownTimeout: `${EXTENSION_IDENTIFIER}.shutdownTimeout`,
    skipOnStartup: `${EXTENSION_IDENTIFIER}.skipOnStartup`,
    dataless: `${EXTENSION_IDENTIFIER}.dataless`,
    logLevel: `${EXTENSION_IDENTIFIER}.logLevel`
};

let languageClient = null;
let restartGeneration = 0;
let restartTimer = null;

exports.activate = function () {
    observeConfiguration();
    scheduleRestart();
};

exports.deactivate = function () {
    restartGeneration += 1;

    if (restartTimer !== null) {
        clearTimeout(restartTimer);
        restartTimer = null;
    }

    const client = languageClient;
    languageClient = null;

    if (client !== null) {
        return client.stop();
    }
};

function observeConfiguration() {
    for (const key of Object.values(CONFIG)) {
        nova.subscriptions.add(
            nova.workspace.config.onDidChange(key, scheduleRestart)
        );

        nova.subscriptions.add(
            nova.config.onDidChange(key, scheduleRestart)
        );
    }
}

function scheduleRestart() {
    if (restartTimer !== null) {
        clearTimeout(restartTimer);
    }

    restartTimer = setTimeout(() => {
        restartTimer = null;

        restartLanguageClient().catch((error) => {
            console.error(
                `Unable to restart the tool4d language server: ${formatError(error)}`
            );
        });
    }, 250);
}

async function restartLanguageClient() {
    const generation = ++restartGeneration;

    if (languageClient !== null) {
        const oldClient = languageClient;
        languageClient = null;

        try {
            await oldClient.stop();
        } catch (error) {
            console.warn(
                `Error while stopping the previous tool4d language server: ` +
                formatError(error)
            );
        }
    }

    if (generation !== restartGeneration) {
        return;
    }

    const workspacePath = nova.workspace.path;

    if (!workspacePath) {
        console.warn(
            "tool4d requires a Nova workspace containing a 4D project."
        );
        return;
    }

    const bridgePath = nova.path.join(
        nova.extension.path,
        "bin",
        "tool4d-lsp-stdio"
    );

    const args = makeBridgeArguments(workspacePath);

    const serverOptions = {
        path: bridgePath,
        args: args
    };

    const clientOptions = {
        syntaxes: [SYNTAX_IDENTIFIER]
    };

    const client = new LanguageClient(
        LANGUAGE_SERVER_IDENTIFIER,
        LANGUAGE_SERVER_NAME,
        serverOptions,
        clientOptions
    );

    languageClient = client;

    console.log(
        `Starting tool4d language server adapter: ` +
        `${bridgePath} ${args.map(quoteArgument).join(" ")}`
    );

    try {
        await client.start();
    } catch (error) {
        if (languageClient === client) {
            languageClient = null;
        }

        console.error(
            `Unable to start the tool4d language server: ${formatError(error)}`
        );

        nova.workspace.showErrorMessage(
            "The tool4d language server could not be started. " +
            "See Extension Console for details."
        );
    }
}

function makeBridgeArguments(workspacePath) {
    const args = [
        "launch",
        "--workspace",
        workspacePath,
        `--startup-timeout=${getInteger(CONFIG.startupTimeout, 30)}`,
        `--shutdown-timeout=${getInteger(CONFIG.shutdownTimeout, 5)}`,
        `--skip-onstartup=${getBoolean(CONFIG.skipOnStartup, true)}`,
        `--dataless=${getBoolean(CONFIG.dataless, true)}`
    ];

    const toolPath = getOptionalString(CONFIG.toolPath);

    if (toolPath !== null) {
        args.push("--tool", toolPath);
    }

    const projectPath = getOptionalString(CONFIG.projectPath);

    if (projectPath !== null) {
        args.push("--project", projectPath);
    }

    const logLevel = getOptionalString(CONFIG.logLevel);

    if (logLevel !== null) {
        args.push("--log-level", logLevel);
    }

    return args;
}

function getConfiguredValue(key) {
    const workspaceValue = nova.workspace.config.get(key);

    if (workspaceValue !== null && workspaceValue !== undefined) {
        return workspaceValue;
    }

    return nova.config.get(key);
}

function getOptionalString(key) {
    const value = getConfiguredValue(key);

    if (typeof value !== "string") {
        return null;
    }

    const trimmed = value.trim();
    return trimmed.length === 0 ? null : trimmed;
}

function getBoolean(key, fallback) {
    const value = getConfiguredValue(key);
    return typeof value === "boolean" ? value : fallback;
}

function getInteger(key, fallback) {
    const value = getConfiguredValue(key);

    if (
        typeof value === "number" &&
        Number.isFinite(value) &&
        Number.isInteger(value) &&
        value >= 0
    ) {
        return value;
    }

    return fallback;
}

function quoteArgument(value) {
    if (/^[A-Za-z0-9_./:=+-]+$/.test(value)) {
        return value;
    }

    return JSON.stringify(value);
}

function formatError(error) {
    if (error instanceof Error) {
        return error.stack || error.message;
    }

    return String(error);
}