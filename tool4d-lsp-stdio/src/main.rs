use std::{
    cmp::Ordering as CmpOrdering,
    env,
    ffi::OsStr,
    fs,
    io::{self, BufRead, BufReader, Read, Write},
    net::{Ipv4Addr, SocketAddr, TcpListener, TcpStream},
    path::{Path, PathBuf},
    process::{ChildStdout, Command, ExitCode, Stdio},
    sync::{
        Arc,
        atomic::{AtomicBool, Ordering},
        mpsc::RecvTimeoutError,
    },
    thread,
    time::{Duration, Instant, SystemTime},
};

use anyhow::{Context, Result, bail};
use clap::{ArgAction, Parser, Subcommand};
use tool4d_lsp_stdio::process::{ChildGuard, configure_process_supervision};
use tool4d_lsp_stdio::relay::{Relay, RelayEvent};

mod mcp;

#[derive(Debug, Parser)]
#[command(
    name = "tool4d-lsp-stdio",
    version,
    about = "Bridge a stdio LSP client to the tool4d TCP language server"
)]
struct Cli {
    #[command(subcommand)]
    command: BridgeCommand,
}

#[derive(Debug, Subcommand)]
enum BridgeCommand {
    /// Start tool4d and relay its TCP connection over stdin/stdout.
    Launch {
        /// Path to the tool4d executable.
        ///
        /// If omitted, the adapter searches PATH, 4D Analyzer's VS Code storage,
        /// and conventional platform-specific locations.
        #[arg(long, env = "TOOL4D_PATH")]
        tool: Option<PathBuf>,

        /// Explicit path to a .4DProject file.
        #[arg(long, env = "TOOL4D_PROJECT")]
        project: Option<PathBuf>,

        /// Workspace in which to search for a .4DProject file.
        #[arg(long)]
        workspace: Option<PathBuf>,

        /// Local TCP port on which the adapter listens for tool4d.
        ///
        /// If omitted, the operating system selects an available port.
        #[arg(long, env = "TOOL4D_LSP_PORT")]
        port: Option<u16>,

        /// Number of seconds to wait for tool4d to connect.
        #[arg(long, env = "TOOL4D_STARTUP_TIMEOUT", default_value_t = 30)]
        startup_timeout: u64,

        /// Number of seconds to wait before force-killing tool4d.
        #[arg(long, env = "TOOL4D_SHUTDOWN_TIMEOUT", default_value_t = 5)]
        shutdown_timeout: u64,

        /// Prevent execution of project startup database methods.
        ///
        /// Enabled by default. Override with
        /// TOOL4D_SKIP_ONSTARTUP=false or --skip-onstartup=false.
        #[arg(
            long,
            env = "TOOL4D_SKIP_ONSTARTUP",
            default_value_t = true,
            action = ArgAction::Set
        )]
        skip_onstartup: bool,

        /// Open the project without a data file.
        ///
        /// Enabled by default. Override with TOOL4D_DATALESS=false or
        /// --dataless=false.
        #[arg(
            long,
            env = "TOOL4D_DATALESS",
            default_value_t = true,
            action = ArgAction::Set
        )]
        dataless: bool,

        /// Diagnostic log level passed to tool4d.
        #[arg(long, env = "TOOL4D_LOG_LEVEL")]
        log_level: Option<String>,
    },

    /// Connect stdin/stdout to an already-listening TCP service.
    ///
    /// This mode is generic and is not used by the tool4d launcher.
    Connect {
        /// Address of the existing TCP service.
        #[arg(long)]
        address: SocketAddr,
    },

    /// Validate .4dm files and report diagnostics.
    ///
    /// Starts tool4d in LSP mode, opens each file, collects diagnostics,
    /// and exits. Designed for non-interactive use by CI and AI agents.
    Validate {
        /// Path to the tool4d executable.
        #[arg(long, env = "TOOL4D_PATH")]
        tool: Option<PathBuf>,

        /// Explicit path to a .4DProject file.
        #[arg(long, env = "TOOL4D_PROJECT")]
        project: Option<PathBuf>,

        /// Workspace in which to search for a .4DProject file.
        #[arg(long)]
        workspace: Option<PathBuf>,

        /// Local TCP port on which the adapter listens for tool4d.
        #[arg(long, env = "TOOL4D_LSP_PORT")]
        port: Option<u16>,

        /// Number of seconds to wait for tool4d to connect.
        #[arg(long, env = "TOOL4D_STARTUP_TIMEOUT", default_value_t = 30)]
        startup_timeout: u64,

        /// Number of seconds to wait before force-killing tool4d.
        #[arg(long, env = "TOOL4D_SHUTDOWN_TIMEOUT", default_value_t = 5)]
        shutdown_timeout: u64,

        /// Prevent execution of project startup database methods.
        #[arg(
            long,
            env = "TOOL4D_SKIP_ONSTARTUP",
            default_value_t = true,
            action = ArgAction::Set
        )]
        skip_onstartup: bool,

        /// Open the project without a data file.
        #[arg(
            long,
            env = "TOOL4D_DATALESS",
            default_value_t = true,
            action = ArgAction::Set
        )]
        dataless: bool,

        /// Diagnostic log level passed to tool4d.
        #[arg(long, env = "TOOL4D_LOG_LEVEL")]
        log_level: Option<String>,

        /// Output raw LSP diagnostics as a JSON array.
        #[arg(long)]
        json: bool,

        /// One or more .4dm files to validate.
        #[arg(required = true)]
        files: Vec<PathBuf>,
    },

    /// Run a project-wide compile-check pass and report diagnostics.
    ///
    /// Wraps the custom `experimental/checkSyntax` LSP request (the same
    /// request the 4D Analyzer VS Code extension's "Check workspace syntax"
    /// command uses). Unlike `validate`, which pulls diagnostics per file,
    /// this sends a single request and lets tool4d report diagnostics for
    /// the whole project in one response.
    CheckSyntax {
        /// Path to the tool4d executable.
        #[arg(long, env = "TOOL4D_PATH")]
        tool: Option<PathBuf>,

        /// Explicit path to a .4DProject file.
        #[arg(long, env = "TOOL4D_PROJECT")]
        project: Option<PathBuf>,

        /// Workspace in which to search for a .4DProject file.
        #[arg(long)]
        workspace: Option<PathBuf>,

        /// Local TCP port on which the adapter listens for tool4d.
        #[arg(long, env = "TOOL4D_LSP_PORT")]
        port: Option<u16>,

        /// Number of seconds to wait for tool4d to connect.
        #[arg(long, env = "TOOL4D_STARTUP_TIMEOUT", default_value_t = 30)]
        startup_timeout: u64,

        /// Number of seconds to wait before force-killing tool4d.
        #[arg(long, env = "TOOL4D_SHUTDOWN_TIMEOUT", default_value_t = 5)]
        shutdown_timeout: u64,

        /// Prevent execution of project startup database methods.
        #[arg(
            long,
            env = "TOOL4D_SKIP_ONSTARTUP",
            default_value_t = true,
            action = ArgAction::Set
        )]
        skip_onstartup: bool,

        /// Open the project without a data file.
        #[arg(
            long,
            env = "TOOL4D_DATALESS",
            default_value_t = true,
            action = ArgAction::Set
        )]
        dataless: bool,

        /// Diagnostic log level passed to tool4d.
        #[arg(long, env = "TOOL4D_LOG_LEVEL")]
        log_level: Option<String>,

        /// Output raw LSP diagnostics as a JSON array.
        #[arg(long)]
        json: bool,

        /// Optional .4dm files to open (via didOpen) before requesting the
        /// check. Since the check is project-wide, not per-file, this is
        /// optional; when omitted, any file under the project's `Sources/`
        /// tree is opened and used as the request's anchor document.
        files: Vec<PathBuf>,
    },

    /// Start an MCP server that wraps the 4D LSP.
    ///
    /// Keeps a persistent tool4d LSP session alive and exposes LSP
    /// capabilities (validate, completion, hover, goto_definition,
    /// document_symbols) as MCP tools over stdio.
    Mcp {
        /// Path to the tool4d executable.
        #[arg(long, env = "TOOL4D_PATH")]
        tool: Option<PathBuf>,

        /// Explicit path to a .4DProject file.
        #[arg(long, env = "TOOL4D_PROJECT")]
        project: Option<PathBuf>,

        /// Workspace in which to search for a .4DProject file.
        #[arg(long)]
        workspace: Option<PathBuf>,

        /// Local TCP port on which the adapter listens for tool4d.
        #[arg(long, env = "TOOL4D_LSP_PORT")]
        port: Option<u16>,

        /// Number of seconds to wait for tool4d to connect.
        #[arg(long, env = "TOOL4D_STARTUP_TIMEOUT", default_value_t = 30)]
        startup_timeout: u64,

        /// Number of seconds to wait before force-killing tool4d.
        #[arg(long, env = "TOOL4D_SHUTDOWN_TIMEOUT", default_value_t = 5)]
        shutdown_timeout: u64,

        /// Prevent execution of project startup database methods.
        #[arg(
            long,
            env = "TOOL4D_SKIP_ONSTARTUP",
            default_value_t = true,
            action = ArgAction::Set
        )]
        skip_onstartup: bool,

        /// Open the project without a data file.
        #[arg(
            long,
            env = "TOOL4D_DATALESS",
            default_value_t = true,
            action = ArgAction::Set
        )]
        dataless: bool,

        /// Diagnostic log level passed to tool4d.
        #[arg(long, env = "TOOL4D_LOG_LEVEL")]
        log_level: Option<String>,

        /// Run over stdio in the foreground instead of daemonizing.
        ///
        /// This is the pre-existing default `mcp` behavior, preserved for
        /// hosts that spawn this command and attach directly to its stdio
        /// as an MCP transport.
        #[arg(long)]
        foreground: bool,

        /// Stop an already-running persistent MCP server for this project.
        #[arg(long)]
        stop: bool,

        /// Number of seconds a daemonized server may sit idle (no IPC
        /// requests) before it shuts itself down automatically.
        #[arg(long, env = "TOOL4D_MCP_IDLE_TIMEOUT", default_value_t = 600)]
        idle_timeout: u64,

        /// Internal flag used by the daemonizing parent to re-exec itself
        /// as the detached persistent-server worker. Not intended for
        /// direct use.
        #[arg(long, hide = true)]
        internal_mcp_worker: bool,
    },

    /// Show hover information for a position in a .4dm file.
    ///
    /// Attaches to an already-running `mcp` server for the current project
    /// when --project and --workspace are both omitted; otherwise starts a
    /// private, one-shot tool4d session.
    Hover {
        #[arg(long, env = "TOOL4D_PATH")]
        tool: Option<PathBuf>,
        #[arg(long, env = "TOOL4D_PROJECT")]
        project: Option<PathBuf>,
        #[arg(long)]
        workspace: Option<PathBuf>,
        #[arg(long, env = "TOOL4D_LSP_PORT")]
        port: Option<u16>,
        #[arg(long, env = "TOOL4D_STARTUP_TIMEOUT", default_value_t = 30)]
        startup_timeout: u64,
        #[arg(long, env = "TOOL4D_SHUTDOWN_TIMEOUT", default_value_t = 5)]
        shutdown_timeout: u64,
        #[arg(
            long,
            env = "TOOL4D_SKIP_ONSTARTUP",
            default_value_t = true,
            action = ArgAction::Set
        )]
        skip_onstartup: bool,
        #[arg(
            long,
            env = "TOOL4D_DATALESS",
            default_value_t = true,
            action = ArgAction::Set
        )]
        dataless: bool,
        #[arg(long, env = "TOOL4D_LOG_LEVEL")]
        log_level: Option<String>,
        /// Output structured JSON instead of human-readable text.
        #[arg(long)]
        json: bool,
        /// Zero-based line number.
        #[arg(long)]
        line: u32,
        /// Zero-based character offset.
        #[arg(long)]
        character: u32,
        /// The .4dm file to query.
        file: PathBuf,
    },

    /// List completions for a position in a .4dm file.
    ///
    /// Attaches to an already-running `mcp` server for the current project
    /// when --project and --workspace are both omitted; otherwise starts a
    /// private, one-shot tool4d session.
    Completion {
        #[arg(long, env = "TOOL4D_PATH")]
        tool: Option<PathBuf>,
        #[arg(long, env = "TOOL4D_PROJECT")]
        project: Option<PathBuf>,
        #[arg(long)]
        workspace: Option<PathBuf>,
        #[arg(long, env = "TOOL4D_LSP_PORT")]
        port: Option<u16>,
        #[arg(long, env = "TOOL4D_STARTUP_TIMEOUT", default_value_t = 30)]
        startup_timeout: u64,
        #[arg(long, env = "TOOL4D_SHUTDOWN_TIMEOUT", default_value_t = 5)]
        shutdown_timeout: u64,
        #[arg(
            long,
            env = "TOOL4D_SKIP_ONSTARTUP",
            default_value_t = true,
            action = ArgAction::Set
        )]
        skip_onstartup: bool,
        #[arg(
            long,
            env = "TOOL4D_DATALESS",
            default_value_t = true,
            action = ArgAction::Set
        )]
        dataless: bool,
        #[arg(long, env = "TOOL4D_LOG_LEVEL")]
        log_level: Option<String>,
        #[arg(long)]
        json: bool,
        #[arg(long)]
        line: u32,
        #[arg(long)]
        character: u32,
        file: PathBuf,
    },

    /// Go to the definition of the symbol at a position in a .4dm file.
    ///
    /// Attaches to an already-running `mcp` server for the current project
    /// when --project and --workspace are both omitted; otherwise starts a
    /// private, one-shot tool4d session.
    GotoDefinition {
        #[arg(long, env = "TOOL4D_PATH")]
        tool: Option<PathBuf>,
        #[arg(long, env = "TOOL4D_PROJECT")]
        project: Option<PathBuf>,
        #[arg(long)]
        workspace: Option<PathBuf>,
        #[arg(long, env = "TOOL4D_LSP_PORT")]
        port: Option<u16>,
        #[arg(long, env = "TOOL4D_STARTUP_TIMEOUT", default_value_t = 30)]
        startup_timeout: u64,
        #[arg(long, env = "TOOL4D_SHUTDOWN_TIMEOUT", default_value_t = 5)]
        shutdown_timeout: u64,
        #[arg(
            long,
            env = "TOOL4D_SKIP_ONSTARTUP",
            default_value_t = true,
            action = ArgAction::Set
        )]
        skip_onstartup: bool,
        #[arg(
            long,
            env = "TOOL4D_DATALESS",
            default_value_t = true,
            action = ArgAction::Set
        )]
        dataless: bool,
        #[arg(long, env = "TOOL4D_LOG_LEVEL")]
        log_level: Option<String>,
        #[arg(long)]
        json: bool,
        #[arg(long)]
        line: u32,
        #[arg(long)]
        character: u32,
        file: PathBuf,
    },

    /// List document symbols for a .4dm file.
    ///
    /// Attaches to an already-running `mcp` server for the current project
    /// when --project and --workspace are both omitted; otherwise starts a
    /// private, one-shot tool4d session.
    DocumentSymbols {
        #[arg(long, env = "TOOL4D_PATH")]
        tool: Option<PathBuf>,
        #[arg(long, env = "TOOL4D_PROJECT")]
        project: Option<PathBuf>,
        #[arg(long)]
        workspace: Option<PathBuf>,
        #[arg(long, env = "TOOL4D_LSP_PORT")]
        port: Option<u16>,
        #[arg(long, env = "TOOL4D_STARTUP_TIMEOUT", default_value_t = 30)]
        startup_timeout: u64,
        #[arg(long, env = "TOOL4D_SHUTDOWN_TIMEOUT", default_value_t = 5)]
        shutdown_timeout: u64,
        #[arg(
            long,
            env = "TOOL4D_SKIP_ONSTARTUP",
            default_value_t = true,
            action = ArgAction::Set
        )]
        skip_onstartup: bool,
        #[arg(
            long,
            env = "TOOL4D_DATALESS",
            default_value_t = true,
            action = ArgAction::Set
        )]
        dataless: bool,
        #[arg(long, env = "TOOL4D_LOG_LEVEL")]
        log_level: Option<String>,
        #[arg(long)]
        json: bool,
        file: PathBuf,
    },
}

fn main() -> ExitCode {
    match run() {
        Ok(()) => ExitCode::SUCCESS,

        Err(error) => {
            let message = format!("{error:#}");

            // The validate subcommand signals "has errors" with an empty
            // error message. Only print non-empty errors.
            if !message.is_empty() {
                eprintln!("tool4d-lsp-stdio: {message}");
            }

            ExitCode::FAILURE
        }
    }
}

fn run() -> Result<()> {
    let cli = Cli::parse();

    match cli.command {
        BridgeCommand::Launch {
            tool,
            project,
            workspace,
            port,
            startup_timeout,
            shutdown_timeout,
            skip_onstartup,
            dataless,
            log_level,
        } => launch(
            tool.as_deref(),
            project.as_deref(),
            workspace.as_deref(),
            port,
            Duration::from_secs(startup_timeout),
            Duration::from_secs(shutdown_timeout),
            skip_onstartup,
            dataless,
            log_level.as_deref(),
        ),

        BridgeCommand::Connect { address } => {
            let cancellation = install_signal_handlers()?;

            let stream = TcpStream::connect(address)
                .with_context(|| format!("failed to connect to {address}"))?;

            let relay = Relay::start(stream).context("failed to start the TCP stream relay")?;

            supervise_relay(relay, None, &cancellation)
        }

        BridgeCommand::Validate {
            tool,
            project,
            workspace,
            port,
            startup_timeout,
            shutdown_timeout,
            skip_onstartup,
            dataless,
            log_level,
            json,
            files,
        } => validate(
            tool.as_deref(),
            project.as_deref(),
            workspace.as_deref(),
            port,
            Duration::from_secs(startup_timeout),
            Duration::from_secs(shutdown_timeout),
            skip_onstartup,
            dataless,
            log_level.as_deref(),
            json,
            &files,
        ),

        BridgeCommand::CheckSyntax {
            tool,
            project,
            workspace,
            port,
            startup_timeout,
            shutdown_timeout,
            skip_onstartup,
            dataless,
            log_level,
            json,
            files,
        } => check_syntax(
            tool.as_deref(),
            project.as_deref(),
            workspace.as_deref(),
            port,
            Duration::from_secs(startup_timeout),
            Duration::from_secs(shutdown_timeout),
            skip_onstartup,
            dataless,
            log_level.as_deref(),
            json,
            &files,
        ),

        BridgeCommand::Mcp {
            tool,
            project,
            workspace,
            port,
            startup_timeout,
            shutdown_timeout,
            skip_onstartup,
            dataless,
            log_level,
            foreground,
            stop,
            idle_timeout,
            internal_mcp_worker,
        } => run_mcp_server(
            tool.as_deref(),
            project.as_deref(),
            workspace.as_deref(),
            port,
            Duration::from_secs(startup_timeout),
            Duration::from_secs(shutdown_timeout),
            skip_onstartup,
            dataless,
            log_level.as_deref(),
            foreground,
            stop,
            internal_mcp_worker,
            Duration::from_secs(idle_timeout),
        ),

        BridgeCommand::Hover {
            tool,
            project,
            workspace,
            port,
            startup_timeout,
            shutdown_timeout,
            skip_onstartup,
            dataless,
            log_level,
            json,
            line,
            character,
            file,
        } => hover_command(
            tool.as_deref(),
            project.as_deref(),
            workspace.as_deref(),
            port,
            Duration::from_secs(startup_timeout),
            Duration::from_secs(shutdown_timeout),
            skip_onstartup,
            dataless,
            log_level.as_deref(),
            json,
            file,
            line,
            character,
        ),

        BridgeCommand::Completion {
            tool,
            project,
            workspace,
            port,
            startup_timeout,
            shutdown_timeout,
            skip_onstartup,
            dataless,
            log_level,
            json,
            line,
            character,
            file,
        } => completion_command(
            tool.as_deref(),
            project.as_deref(),
            workspace.as_deref(),
            port,
            Duration::from_secs(startup_timeout),
            Duration::from_secs(shutdown_timeout),
            skip_onstartup,
            dataless,
            log_level.as_deref(),
            json,
            file,
            line,
            character,
        ),

        BridgeCommand::GotoDefinition {
            tool,
            project,
            workspace,
            port,
            startup_timeout,
            shutdown_timeout,
            skip_onstartup,
            dataless,
            log_level,
            json,
            line,
            character,
            file,
        } => goto_definition_command(
            tool.as_deref(),
            project.as_deref(),
            workspace.as_deref(),
            port,
            Duration::from_secs(startup_timeout),
            Duration::from_secs(shutdown_timeout),
            skip_onstartup,
            dataless,
            log_level.as_deref(),
            json,
            file,
            line,
            character,
        ),

        BridgeCommand::DocumentSymbols {
            tool,
            project,
            workspace,
            port,
            startup_timeout,
            shutdown_timeout,
            skip_onstartup,
            dataless,
            log_level,
            json,
            file,
        } => document_symbols_command(
            tool.as_deref(),
            project.as_deref(),
            workspace.as_deref(),
            port,
            Duration::from_secs(startup_timeout),
            Duration::from_secs(shutdown_timeout),
            skip_onstartup,
            dataless,
            log_level.as_deref(),
            json,
            file,
        ),
    }
}

#[allow(clippy::too_many_arguments)]
fn launch(
    requested_tool: Option<&Path>,
    explicit_project: Option<&Path>,
    workspace: Option<&Path>,
    requested_port: Option<u16>,
    startup_timeout: Duration,
    shutdown_timeout: Duration,
    skip_onstartup: bool,
    dataless: bool,
    log_level: Option<&str>,
) -> Result<()> {
    let tool = resolve_tool(requested_tool)?;
    let project = resolve_project(explicit_project, workspace)?;
    let cancellation = install_signal_handlers()?;

    /*
     * tool4d is the TCP client. Keep the listener bound while tool4d starts.
     * Binding port zero atomically selects and reserves an available port.
     */
    let listener = create_listener(requested_port)?;
    let listener_address = listener
        .local_addr()
        .context("failed to obtain the bridge listener address")?;

    let port = listener_address.port();

    let mut command = Command::new(&tool);

    command
        .arg(format!("--project={}", project.display()))
        .arg(format!("--lsp={port}"))
        .stdin(Stdio::null())
        /*
         * Child stdout must never be inherited because adapter stdout is the
         * LSP protocol channel.
         */
        .stdout(Stdio::piped())
        .stderr(Stdio::inherit());

    if skip_onstartup {
        command.arg("--skip-onstartup");
    }

    if dataless {
        command.arg("--dataless");
    }

    if let Some(log_level) = log_level {
        command.arg(format!("--log-level={log_level}"));
    }

    configure_process_supervision(&mut command);

    eprintln!("tool4d-lsp-stdio: listening for tool4d on {listener_address}");

    log_command(&tool, command.get_args());

    let mut child = command
        .spawn()
        .with_context(|| format!("failed to start {}", tool.display()))?;

    if let Some(stdout) = child.stdout.take() {
        forward_tool4d_stdout(stdout);
    }

    let mut child = match ChildGuard::new(child, shutdown_timeout) {
        Ok(child) => child,

        Err((mut child, error)) => {
            let _ = child.kill();
            let _ = child.wait();

            return Err(error).context("failed to install process supervision for tool4d");
        }
    };

    let stream = accept_with_timeout(&listener, &mut child, startup_timeout, &cancellation)?;

    // Only one tool4d connection is expected.
    drop(listener);

    let relay = Relay::start(stream).context("failed to start the LSP stream relay")?;

    supervise_relay(relay, Some(&mut child), &cancellation)
}

// ---------------------------------------------------------------------------
// Shared tool4d startup + LSP initialization
// ---------------------------------------------------------------------------

/// Common options for starting a private tool4d process and establishing an
/// initialized LSP session over it. Shared by `validate`, `mcp`, and the
/// one-shot `hover`/`completion`/`goto-definition`/`document-symbols`
/// subcommands.
struct StartOptions<'a> {
    requested_tool: Option<&'a Path>,
    explicit_project: Option<&'a Path>,
    workspace: Option<&'a Path>,
    requested_port: Option<u16>,
    startup_timeout: Duration,
    shutdown_timeout: Duration,
    skip_onstartup: bool,
    dataless: bool,
    log_level: Option<&'a str>,
}

/// Resolves the workspace directory used to make relative file paths
/// absolute, following the same fallback order used by `validate` and `mcp`:
/// explicit `--workspace`, else the project's grandparent directory, else
/// the current directory.
fn resolve_workspace_dir(explicit_project: Option<&Path>, workspace: Option<&Path>) -> PathBuf {
    let workspace_dir = workspace
        .map(Path::to_path_buf)
        .or_else(|| {
            explicit_project
                .and_then(|p| p.parent())
                .and_then(|p| p.parent())
                .map(Path::to_path_buf)
        })
        .unwrap_or_else(|| env::current_dir().unwrap_or_default());

    workspace_dir.canonicalize().unwrap_or(workspace_dir)
}

/// Starts a private tool4d process, waits for it to connect over the LSP
/// bridge, and performs the `initialize`/`initialized` handshake. Returns the
/// initialized stream, the `ChildGuard` supervising tool4d, the resolved
/// workspace directory, and the cancellation flag installed for signal
/// handling. The caller is responsible for shutting down the LSP session and
/// dropping the `ChildGuard`, which terminates tool4d.
fn start_lsp_session(
    options: &StartOptions<'_>,
) -> Result<(TcpStream, ChildGuard, PathBuf, Arc<AtomicBool>)> {
    let tool = resolve_tool(options.requested_tool)?;
    let project = resolve_project(options.explicit_project, options.workspace)?;
    let cancellation = install_signal_handlers()?;

    let workspace_dir = resolve_workspace_dir(options.explicit_project, options.workspace);

    let listener = create_listener(options.requested_port)?;
    let listener_address = listener
        .local_addr()
        .context("failed to obtain the bridge listener address")?;

    let port = listener_address.port();

    let mut command = Command::new(&tool);

    command
        .arg(format!("--project={}", project.display()))
        .arg(format!("--lsp={port}"))
        .stdin(Stdio::null())
        .stdout(Stdio::piped())
        .stderr(Stdio::inherit());

    if options.skip_onstartup {
        command.arg("--skip-onstartup");
    }

    if options.dataless {
        command.arg("--dataless");
    }

    if let Some(log_level) = options.log_level {
        command.arg(format!("--log-level={log_level}"));
    }

    configure_process_supervision(&mut command);

    eprintln!("tool4d-lsp-stdio: listening for tool4d on {listener_address}");
    log_command(&tool, command.get_args());

    let mut child = command
        .spawn()
        .with_context(|| format!("failed to start {}", tool.display()))?;

    if let Some(stdout) = child.stdout.take() {
        forward_tool4d_stdout(stdout);
    }

    let mut child = match ChildGuard::new(child, options.shutdown_timeout) {
        Ok(child) => child,
        Err((mut child, error)) => {
            let _ = child.kill();
            let _ = child.wait();
            return Err(error).context("failed to install process supervision for tool4d");
        }
    };

    let mut stream =
        accept_with_timeout(&listener, &mut child, options.startup_timeout, &cancellation)?;
    drop(listener);

    // Perform LSP initialization.
    let project_dir = project
        .parent()
        .and_then(|p| p.parent())
        .unwrap_or(project.parent().unwrap_or(Path::new(".")));
    let root_path = project_dir
        .canonicalize()
        .unwrap_or_else(|_| project_dir.to_path_buf());
    let root_uri = path_to_file_uri(&root_path);

    let initialize_params = serde_json::json!({
        "processId": std::process::id(),
        "capabilities": {
            "textDocument": {
                "publishDiagnostics": { "relatedInformation": true }
            }
        },
        "rootUri": root_uri,
        "workspaceFolders": [{
            "uri": root_uri,
            "name": project_dir.file_name()
                .unwrap_or_default()
                .to_string_lossy()
        }],
        "initializationOptions": {
            "diagnostics": { "enable": true, "scope": "Workspace" },
            "dependencies": { "enable": true }
        }
    });

    send_lsp_request(&mut stream, 1, "initialize", initialize_params)?;

    let timeout = Duration::from_secs(60);
    loop {
        let msg =
            read_lsp_message(&mut stream, timeout).context("waiting for initialize response")?;
        if msg.get("id") == Some(&serde_json::json!(1)) {
            break;
        }
    }

    send_lsp_notification(&mut stream, "initialized", serde_json::json!({}))?;

    // Drain any startup notifications briefly.
    let drain_timeout = Duration::from_secs(3);
    while read_lsp_message(&mut stream, drain_timeout).is_ok() {}

    Ok((stream, child, workspace_dir, cancellation))
}

// ---------------------------------------------------------------------------
// Mcp subcommand
// ---------------------------------------------------------------------------

#[allow(clippy::too_many_arguments)]
fn run_mcp_server(
    requested_tool: Option<&Path>,
    explicit_project: Option<&Path>,
    workspace: Option<&Path>,
    requested_port: Option<u16>,
    startup_timeout: Duration,
    shutdown_timeout: Duration,
    skip_onstartup: bool,
    dataless: bool,
    log_level: Option<&str>,
    foreground: bool,
    stop: bool,
    internal_worker: bool,
    idle_timeout: Duration,
) -> Result<()> {
    if stop {
        return mcp_stop(explicit_project, workspace);
    }

    let options = StartOptions {
        requested_tool,
        explicit_project,
        workspace,
        requested_port,
        startup_timeout,
        shutdown_timeout,
        skip_onstartup,
        dataless,
        log_level,
    };

    if internal_worker {
        return run_mcp_worker(&options, idle_timeout);
    }

    if !foreground {
        return mcp_daemonize(&options, idle_timeout);
    }

    let (stream, child, workspace_dir, _cancellation) = start_lsp_session(&options)?;

    eprintln!("tool4d-lsp-stdio: LSP initialized, starting MCP server on stdio");

    run_mcp_over_stdio(stream, workspace_dir, child)
}

/// Runs the MCP server over stdio (the pre-existing default `mcp` behavior,
/// now also the implementation of `--foreground`) until the client
/// disconnects, then shuts down tool4d.
fn run_mcp_over_stdio(stream: TcpStream, workspace_dir: PathBuf, child: ChildGuard) -> Result<()> {
    let lsp = std::sync::Arc::new(mcp::LspConnection::new(stream, workspace_dir));
    let server = mcp::Tool4dMcpServer::new(lsp);

    let rt = tokio::runtime::Runtime::new().context("failed to create tokio runtime")?;
    let result = rt.block_on(async {
        use rmcp::ServiceExt;

        let service = server
            .serve(rmcp::transport::stdio())
            .await
            .map_err(|e| anyhow::anyhow!("MCP serve error: {e}"))?;

        service
            .waiting()
            .await
            .map_err(|e| anyhow::anyhow!("MCP server error: {e}"))?;

        Ok(())
    });

    eprintln!("tool4d-lsp-stdio: MCP server stopped, shutting down tool4d");

    // ChildGuard ensures tool4d is cleaned up on drop.
    drop(child);

    result
}

/// `mcp --stop`: locate the lockfile for the resolved project, ask the
/// persistent server to shut down gracefully (falling back to killing its
/// PID), and remove the lockfile.
fn mcp_stop(explicit_project: Option<&Path>, workspace: Option<&Path>) -> Result<()> {
    let project = resolve_project(explicit_project, workspace)?;

    if tool4d_lsp_stdio::ipc::stop_server(&project)? {
        eprintln!(
            "tool4d-lsp-stdio: stopped persistent server for {}",
            project.display()
        );
        Ok(())
    } else {
        bail!("no running MCP server found for {}", project.display());
    }
}

/// Daemonizes the `mcp` server: re-execs the current binary with an internal
/// worker flag, detaches it from the current session/console, and waits
/// only until the worker signals that it has bound its IPC listener and
/// written its lockfile. Prints `pid=<pid> port=<port>` on stdout and
/// returns; the worker keeps running independently in the background.
///
/// A true `fork()` (as the issue's design sketch describes) is awkward to do
/// safely from a multi-threaded Rust process and is unavailable on Windows.
/// Re-exec + detach achieves the same externally-visible behavior (parent
/// returns immediately with the child's PID) on both platforms using the
/// process-supervision/detachment primitives this crate already has.
fn mcp_daemonize(options: &StartOptions<'_>, idle_timeout: Duration) -> Result<()> {
    let project = resolve_project(options.explicit_project, options.workspace)?;

    if let Some(existing) = tool4d_lsp_stdio::ipc::find_running_server(&project) {
        println!("pid={} port={}", existing.pid, existing.port);
        eprintln!(
            "tool4d-lsp-stdio: a persistent server is already running for {} (pid {})",
            project.display(),
            existing.pid
        );
        return Ok(());
    }

    let current_exe = env::current_exe().context("failed to resolve the current executable")?;

    let mut command = Command::new(&current_exe);
    command.arg("mcp").arg("--internal-mcp-worker");
    command.arg(format!("--project={}", project.display()));

    if let Some(workspace) = options.workspace {
        command.arg(format!("--workspace={}", workspace.display()));
    }
    if let Some(tool) = options.requested_tool {
        command.arg(format!("--tool={}", tool.display()));
    }
    if let Some(port) = options.requested_port {
        command.arg(format!("--port={port}"));
    }
    command.arg(format!(
        "--startup-timeout={}",
        options.startup_timeout.as_secs()
    ));
    command.arg(format!(
        "--shutdown-timeout={}",
        options.shutdown_timeout.as_secs()
    ));
    // Unlike the flags passed to the real tool4d executable elsewhere in
    // this file, `--skip-onstartup`/`--dataless` here target this same
    // binary's own CLI (re-exec'd as `mcp --internal-mcp-worker`), where
    // they are declared with `action = ArgAction::Set` and therefore
    // require an explicit `=true`/`=false` value rather than being bare
    // presence flags.
    command.arg(format!("--skip-onstartup={}", options.skip_onstartup));
    command.arg(format!("--dataless={}", options.dataless));
    if let Some(log_level) = options.log_level {
        command.arg(format!("--log-level={log_level}"));
    }
    command.arg(format!("--idle-timeout={}", idle_timeout.as_secs()));

    command
        .stdin(Stdio::null())
        .stdout(Stdio::piped())
        .stderr(Stdio::null());

    configure_process_supervision(&mut command);
    detach_daemon_process(&mut command);

    let mut worker = command
        .spawn()
        .context("failed to start the daemonized MCP server")?;

    // The worker writes exactly one line, `pid=<pid> port=<port>`, to its
    // stdout once it has bound its listener and written its lockfile.
    let stdout = worker
        .stdout
        .take()
        .context("failed to capture daemon worker stdout")?;
    let mut reader = BufReader::new(stdout);
    let mut line = String::new();

    match reader.read_line(&mut line) {
        Ok(0) | Err(_) => {
            let _ = worker.wait();
            bail!("the daemonized MCP server exited before it finished starting up");
        }
        Ok(_) => {}
    }

    // Do not wait for the worker; it continues running independently.
    print!("{line}");
    if !line.ends_with('\n') {
        println!();
    }

    Ok(())
}

#[cfg(unix)]
fn detach_daemon_process(command: &mut Command) {
    use std::os::unix::process::CommandExt;
    // SAFETY: setsid() is async-signal-safe and always valid to call in the
    // post-fork child before exec; it detaches the child into a new session
    // so it survives the parent's exit and is not tied to a controlling
    // terminal.
    unsafe {
        command.pre_exec(|| {
            libc::setsid();
            Ok(())
        });
    }
}

#[cfg(windows)]
fn detach_daemon_process(command: &mut Command) {
    use std::os::windows::process::CommandExt;
    const DETACHED_PROCESS: u32 = 0x0000_0008;
    const CREATE_NEW_PROCESS_GROUP: u32 = 0x0000_0200;
    command.creation_flags(DETACHED_PROCESS | CREATE_NEW_PROCESS_GROUP);
}

#[cfg(not(any(unix, windows)))]
fn detach_daemon_process(_command: &mut Command) {}

/// The actual persistent-server worker body, run inside the detached child
/// process spawned by `mcp_daemonize` (`mcp --internal-mcp-worker ...`).
/// Binds the IPC listener, writes the lockfile, prints its own
/// `pid=<pid> port=<port>` confirmation line, then serves IPC requests
/// (dispatching to the same `LspConnection` methods used by the MCP tool
/// handlers) until stopped or idle for `idle_timeout`.
fn run_mcp_worker(options: &StartOptions<'_>, idle_timeout: Duration) -> Result<()> {
    let project = resolve_project(options.explicit_project, options.workspace)?;

    let (stream, child, workspace_dir, cancellation) = start_lsp_session(options)?;

    let ipc_listener = TcpListener::bind((Ipv4Addr::LOCALHOST, 0))
        .context("failed to bind the persistent-server IPC listener")?;
    let ipc_port = ipc_listener
        .local_addr()
        .context("failed to obtain the IPC listener address")?
        .port();
    ipc_listener
        .set_nonblocking(true)
        .context("failed to configure the IPC listener")?;

    let info = tool4d_lsp_stdio::ipc::ServerInfo {
        pid: std::process::id(),
        port: ipc_port,
        project: project.clone(),
        started_at: SystemTime::now()
            .duration_since(std::time::UNIX_EPOCH)
            .map(|d| d.as_secs())
            .unwrap_or(0),
    };
    tool4d_lsp_stdio::ipc::write_lockfile(&project, &info)?;

    // Signal readiness to the parent process, then continue running.
    println!("pid={} port={ipc_port}", info.pid);
    io::stdout().flush().ok();

    let lsp = mcp::LspConnection::new(stream, workspace_dir);

    let mut last_activity = Instant::now();
    let poll_interval = Duration::from_millis(200);

    let result = 'server: loop {
        if cancellation.load(Ordering::SeqCst) {
            break 'server Ok(());
        }

        if last_activity.elapsed() >= idle_timeout {
            eprintln!("tool4d-lsp-stdio: idle timeout reached, shutting down");
            break 'server Ok(());
        }

        match ipc_listener.accept() {
            Ok((mut connection, _addr)) => {
                last_activity = Instant::now();
                connection
                    .set_read_timeout(Some(Duration::from_secs(120)))
                    .ok();

                let cloned = match connection.try_clone() {
                    Ok(cloned) => cloned,
                    Err(_) => continue,
                };
                let mut reader = BufReader::new(cloned);
                let mut line = String::new();

                if reader.read_line(&mut line).is_err() || line.is_empty() {
                    continue;
                }

                let request: tool4d_lsp_stdio::ipc::IpcRequest = match serde_json::from_str(&line)
                {
                    Ok(request) => request,
                    Err(error) => {
                        let response = tool4d_lsp_stdio::ipc::IpcResponse::failure(format!(
                            "invalid IPC request: {error}"
                        ));
                        let _ = write_ipc_response(&mut connection, &response);
                        continue;
                    }
                };

                if matches!(request, tool4d_lsp_stdio::ipc::IpcRequest::Stop) {
                    let response =
                        tool4d_lsp_stdio::ipc::IpcResponse::success("stopping".to_string());
                    let _ = write_ipc_response(&mut connection, &response);
                    break 'server Ok(());
                }

                let response = dispatch_ipc_request(&lsp, request);
                let _ = write_ipc_response(&mut connection, &response);
            }

            Err(error) if error.kind() == io::ErrorKind::WouldBlock => {
                thread::sleep(poll_interval);
            }

            Err(error) => {
                break 'server Err(error).context("failed while accepting an IPC connection");
            }
        }
    };

    eprintln!("tool4d-lsp-stdio: persistent MCP server stopping, shutting down tool4d");

    lsp.shutdown();
    tool4d_lsp_stdio::ipc::remove_lockfile(&project);

    // ChildGuard ensures tool4d is cleaned up on drop.
    drop(child);

    result
}

fn dispatch_ipc_request(
    lsp: &mcp::LspConnection,
    request: tool4d_lsp_stdio::ipc::IpcRequest,
) -> tool4d_lsp_stdio::ipc::IpcResponse {
    use tool4d_lsp_stdio::ipc::{IpcRequest, IpcResponse};

    // Position/file-based capabilities require the file to already be open
    // in this LSP session (`textDocument/didOpen`); a one-shot standalone
    // call handles this itself via `run_standalone_one_shot`, but attached
    // IPC requests hit `LspConnection` methods directly, so open (or
    // re-open; `open_file` is idempotent) the file here first.
    let result = match request {
        IpcRequest::Validate { files } => lsp.validate_files(&files),
        IpcRequest::Hover {
            file,
            line,
            character,
        } => lsp.open_file(&file).and_then(|_| lsp.hover(&file, line, character)),
        IpcRequest::Completion {
            file,
            line,
            character,
        } => lsp
            .open_file(&file)
            .and_then(|_| lsp.completion(&file, line, character)),
        IpcRequest::GotoDefinition {
            file,
            line,
            character,
        } => lsp
            .open_file(&file)
            .and_then(|_| lsp.goto_definition(&file, line, character)),
        IpcRequest::DocumentSymbols { file } => {
            lsp.open_file(&file).and_then(|_| lsp.document_symbols(&file))
        }
        IpcRequest::Ping => Ok("pong".to_string()),
        IpcRequest::Stop => unreachable!("Stop is handled before dispatch"),
    };

    match result {
        Ok(text) => IpcResponse::success(text),
        Err(error) => IpcResponse::failure(error.to_string()),
    }
}

fn write_ipc_response(
    stream: &mut TcpStream,
    response: &tool4d_lsp_stdio::ipc::IpcResponse,
) -> Result<()> {
    let mut line = serde_json::to_string(response)?;
    line.push('\n');
    stream.write_all(line.as_bytes())?;
    stream.flush()?;
    Ok(())
}

// ---------------------------------------------------------------------------
// One-shot capability subcommands (hover, completion, goto-definition,
// document-symbols)
//
// Each subcommand either:
// - attaches to an already-running persistent server (when both --project
//   and --workspace are omitted), or
// - starts a private, self-contained tool4d session, performs one request,
//   and shuts down (mirroring `validate`'s one-shot design).
// ---------------------------------------------------------------------------

/// Resolves the single input file argument against the workspace/project,
/// the same way `validate` resolves its file list, and formats it relative
/// to the workspace for display and for the LSP call.
fn resolve_one_shot_file(
    explicit_project: Option<&Path>,
    workspace: Option<&Path>,
    workspace_dir: &Path,
    file: &Path,
) -> (PathBuf, String) {
    let base_dir = workspace
        .map(Path::to_path_buf)
        .or_else(|| {
            explicit_project
                .and_then(|p| p.parent())
                .and_then(|p| p.parent())
                .map(Path::to_path_buf)
        })
        .unwrap_or_else(|| env::current_dir().unwrap_or_default());

    let resolved = if file.is_relative() {
        base_dir.join(file)
    } else {
        file.to_path_buf()
    };

    let display = resolved
        .strip_prefix(workspace_dir)
        .unwrap_or(&resolved)
        .display()
        .to_string();

    (resolved, display)
}

/// Try to serve a one-shot request by attaching to an already-running
/// persistent server. Walks upward from the current directory looking for a
/// `.4DProject` file (checking the cwd itself, then each ancestor directory)
/// and checks whether a live persistent server is registered for it. Only
/// used when both `--project` and `--workspace` are omitted.
fn try_attach_and_dispatch(request: tool4d_lsp_stdio::ipc::IpcRequest) -> Result<Option<String>> {
    let cwd = env::current_dir().context("failed to determine the current directory")?;

    let mut dir = Some(cwd.as_path());
    while let Some(candidate_dir) = dir {
        let mut projects = Vec::new();
        let _ = find_projects(candidate_dir, 0, &mut projects);

        for project in projects {
            if let Some(server) = tool4d_lsp_stdio::ipc::find_running_server(&project) {
                let response = tool4d_lsp_stdio::ipc::send_request(server.port, &request)?;
                return if response.ok {
                    Ok(Some(response.result.unwrap_or_default()))
                } else {
                    bail!(response.error.unwrap_or_else(|| "IPC request failed".to_string()));
                };
            }
        }

        dir = candidate_dir.parent();
    }

    Ok(None)
}

/// Runs one `body` capability call against a freshly-started, private LSP
/// session: opens `display_file`, invokes `body`, closes the file again, and
/// always attempts a graceful LSP shutdown before the caller drops the
/// `ChildGuard`.
fn run_standalone_one_shot(
    options: &StartOptions<'_>,
    file: &Path,
    body: impl FnOnce(&mcp::LspConnection, &str) -> anyhow::Result<String>,
) -> Result<String> {
    let (stream, child, workspace_dir, _cancellation) = start_lsp_session(options)?;
    let (_resolved_file, display_file) = resolve_one_shot_file(
        options.explicit_project,
        options.workspace,
        &workspace_dir,
        file,
    );

    let lsp = mcp::LspConnection::new(stream, workspace_dir);

    let opened = lsp.open_file(&display_file);
    let result = opened.and_then(|_| body(&lsp, &display_file));
    let _ = lsp.close_file(&display_file);

    lsp.shutdown();
    drop(child);

    result
}

const NO_SERVER_ERROR: &str = "no running MCP server found for this project; \
start one with `mcp`, or pass --project/--workspace to run standalone";

#[allow(clippy::too_many_arguments)]
fn hover_command(
    requested_tool: Option<&Path>,
    explicit_project: Option<&Path>,
    workspace: Option<&Path>,
    requested_port: Option<u16>,
    startup_timeout: Duration,
    shutdown_timeout: Duration,
    skip_onstartup: bool,
    dataless: bool,
    log_level: Option<&str>,
    json_output: bool,
    file: PathBuf,
    line: u32,
    character: u32,
) -> Result<()> {
    if explicit_project.is_none() && workspace.is_none() {
        let file_str = file.display().to_string();
        if let Some(result) = try_attach_and_dispatch(tool4d_lsp_stdio::ipc::IpcRequest::Hover {
            file: file_str,
            line,
            character,
        })? {
            print_one_shot_result(&result, json_output);
            return Ok(());
        }
        bail!(NO_SERVER_ERROR);
    }

    let options = StartOptions {
        requested_tool,
        explicit_project,
        workspace,
        requested_port,
        startup_timeout,
        shutdown_timeout,
        skip_onstartup,
        dataless,
        log_level,
    };

    let result = run_standalone_one_shot(&options, &file, |lsp, display_file| {
        lsp.hover(display_file, line, character)
    })?;

    print_one_shot_result(&result, json_output);
    Ok(())
}

#[allow(clippy::too_many_arguments)]
fn completion_command(
    requested_tool: Option<&Path>,
    explicit_project: Option<&Path>,
    workspace: Option<&Path>,
    requested_port: Option<u16>,
    startup_timeout: Duration,
    shutdown_timeout: Duration,
    skip_onstartup: bool,
    dataless: bool,
    log_level: Option<&str>,
    json_output: bool,
    file: PathBuf,
    line: u32,
    character: u32,
) -> Result<()> {
    if explicit_project.is_none() && workspace.is_none() {
        let file_str = file.display().to_string();
        if let Some(result) =
            try_attach_and_dispatch(tool4d_lsp_stdio::ipc::IpcRequest::Completion {
                file: file_str,
                line,
                character,
            })?
        {
            print_one_shot_result(&result, json_output);
            return Ok(());
        }
        bail!(NO_SERVER_ERROR);
    }

    let options = StartOptions {
        requested_tool,
        explicit_project,
        workspace,
        requested_port,
        startup_timeout,
        shutdown_timeout,
        skip_onstartup,
        dataless,
        log_level,
    };

    let result = run_standalone_one_shot(&options, &file, |lsp, display_file| {
        lsp.completion(display_file, line, character)
    })?;

    print_one_shot_result(&result, json_output);
    Ok(())
}

#[allow(clippy::too_many_arguments)]
fn goto_definition_command(
    requested_tool: Option<&Path>,
    explicit_project: Option<&Path>,
    workspace: Option<&Path>,
    requested_port: Option<u16>,
    startup_timeout: Duration,
    shutdown_timeout: Duration,
    skip_onstartup: bool,
    dataless: bool,
    log_level: Option<&str>,
    json_output: bool,
    file: PathBuf,
    line: u32,
    character: u32,
) -> Result<()> {
    if explicit_project.is_none() && workspace.is_none() {
        let file_str = file.display().to_string();
        if let Some(result) =
            try_attach_and_dispatch(tool4d_lsp_stdio::ipc::IpcRequest::GotoDefinition {
                file: file_str,
                line,
                character,
            })?
        {
            print_one_shot_result(&result, json_output);
            return Ok(());
        }
        bail!(NO_SERVER_ERROR);
    }

    let options = StartOptions {
        requested_tool,
        explicit_project,
        workspace,
        requested_port,
        startup_timeout,
        shutdown_timeout,
        skip_onstartup,
        dataless,
        log_level,
    };

    let result = run_standalone_one_shot(&options, &file, |lsp, display_file| {
        lsp.goto_definition(display_file, line, character)
    })?;

    print_one_shot_result(&result, json_output);
    Ok(())
}

#[allow(clippy::too_many_arguments)]
fn document_symbols_command(
    requested_tool: Option<&Path>,
    explicit_project: Option<&Path>,
    workspace: Option<&Path>,
    requested_port: Option<u16>,
    startup_timeout: Duration,
    shutdown_timeout: Duration,
    skip_onstartup: bool,
    dataless: bool,
    log_level: Option<&str>,
    json_output: bool,
    file: PathBuf,
) -> Result<()> {
    if explicit_project.is_none() && workspace.is_none() {
        let file_str = file.display().to_string();
        if let Some(result) =
            try_attach_and_dispatch(tool4d_lsp_stdio::ipc::IpcRequest::DocumentSymbols {
                file: file_str,
            })?
        {
            print_one_shot_result(&result, json_output);
            return Ok(());
        }
        bail!(NO_SERVER_ERROR);
    }

    let options = StartOptions {
        requested_tool,
        explicit_project,
        workspace,
        requested_port,
        startup_timeout,
        shutdown_timeout,
        skip_onstartup,
        dataless,
        log_level,
    };

    let result = run_standalone_one_shot(&options, &file, |lsp, display_file| {
        lsp.document_symbols(display_file)
    })?;

    print_one_shot_result(&result, json_output);
    Ok(())
}

fn print_one_shot_result(result: &str, json_output: bool) {
    if json_output {
        println!("{}", serde_json::json!({ "result": result }));
    } else {
        println!("{result}");
    }
}

// ---------------------------------------------------------------------------
// Validate subcommand
// ---------------------------------------------------------------------------


#[allow(clippy::too_many_arguments)]
fn validate(
    requested_tool: Option<&Path>,
    explicit_project: Option<&Path>,
    workspace: Option<&Path>,
    requested_port: Option<u16>,
    startup_timeout: Duration,
    shutdown_timeout: Duration,
    skip_onstartup: bool,
    dataless: bool,
    log_level: Option<&str>,
    json_output: bool,
    files: &[PathBuf],
) -> Result<()> {
    let tool = resolve_tool(requested_tool)?;
    let project = resolve_project(explicit_project, workspace)?;
    let cancellation = install_signal_handlers()?;

    // Resolve relative file paths against workspace or project root.
    let base_dir = workspace
        .map(Path::to_path_buf)
        .or_else(|| {
            explicit_project
                .and_then(|p| p.parent())
                .and_then(|p| p.parent())
                .map(Path::to_path_buf)
        })
        .unwrap_or_else(|| env::current_dir().unwrap_or_default());

    let resolved_files: Vec<(PathBuf, PathBuf)> = files
        .iter()
        .map(|f| {
            let display_path = f.clone();
            let resolved = if f.is_relative() {
                base_dir.join(f)
            } else {
                f.to_path_buf()
            };
            (resolved, display_path)
        })
        .collect();

    let listener = create_listener(requested_port)?;
    let listener_address = listener
        .local_addr()
        .context("failed to obtain the bridge listener address")?;

    let port = listener_address.port();

    let mut command = Command::new(&tool);

    command
        .arg(format!("--project={}", project.display()))
        .arg(format!("--lsp={port}"))
        .stdin(Stdio::null())
        .stdout(Stdio::piped())
        .stderr(Stdio::inherit());

    if skip_onstartup {
        command.arg("--skip-onstartup");
    }

    if dataless {
        command.arg("--dataless");
    }

    if let Some(log_level) = log_level {
        command.arg(format!("--log-level={log_level}"));
    }

    configure_process_supervision(&mut command);

    eprintln!("tool4d-lsp-stdio: listening for tool4d on {listener_address}");
    log_command(&tool, command.get_args());

    let mut child = command
        .spawn()
        .with_context(|| format!("failed to start {}", tool.display()))?;

    if let Some(stdout) = child.stdout.take() {
        forward_tool4d_stdout(stdout);
    }

    let mut child = match ChildGuard::new(child, shutdown_timeout) {
        Ok(child) => child,
        Err((mut child, error)) => {
            let _ = child.kill();
            let _ = child.wait();
            return Err(error).context("failed to install process supervision for tool4d");
        }
    };

    let mut stream = accept_with_timeout(&listener, &mut child, startup_timeout, &cancellation)?;
    drop(listener);

    // Drive the LSP protocol directly.
    let result = run_validate_session(&mut stream, &project, &resolved_files);

    // Always attempt graceful shutdown.
    let _ = send_lsp_request(&mut stream, 999_999, "shutdown", serde_json::json!(null));
    let _ = read_lsp_message(&mut stream, Duration::from_secs(5));
    let _ = send_lsp_notification(&mut stream, "exit", serde_json::json!(null));

    // ChildGuard ensures tool4d is cleaned up on drop.
    drop(child);

    let all_diagnostics = result.context("LSP validation session failed")?;

    // Format output.
    let has_errors = format_diagnostics(&all_diagnostics, json_output)?;

    if has_errors {
        bail!("");
    }

    Ok(())
}

/// A collected diagnostic from the LSP server.
#[derive(serde::Serialize)]
struct CollectedDiagnostic {
    file: String,
    uri: String,
    diagnostics: Vec<serde_json::Value>,
}

fn run_validate_session(
    stream: &mut TcpStream,
    project: &Path,
    files: &[(PathBuf, PathBuf)],
) -> Result<Vec<CollectedDiagnostic>> {
    let project_dir = project
        .parent()
        .and_then(|p| p.parent())
        .unwrap_or(project.parent().unwrap_or(Path::new(".")));

    let root_path = project_dir
        .canonicalize()
        .unwrap_or_else(|_| project_dir.to_path_buf());
    let root_uri = path_to_file_uri(&root_path);

    // Verify requested files exist and build URI lookup.
    let mut file_uris: Vec<(String, String)> = Vec::new(); // (uri, display_name)
    for (file_path, display_path) in files {
        let canonical = file_path
            .canonicalize()
            .with_context(|| format!("file not found: {}", display_path.display()))?;
        let uri = path_to_file_uri(&canonical);
        eprintln!("tool4d-lsp-stdio: validate: will check uri={uri}");
        file_uris.push((uri, display_path.display().to_string()));
    }

    // 1. Send initialize request.
    let initialize_params = serde_json::json!({
        "processId": std::process::id(),
        "capabilities": {
            "textDocument": {
                "publishDiagnostics": {
                    "relatedInformation": true
                }
            }
        },
        "rootUri": root_uri,
        "workspaceFolders": [{
            "uri": root_uri,
            "name": project_dir.file_name()
                .unwrap_or_default()
                .to_string_lossy()
        }],
        "initializationOptions": {
            "diagnostics": {
                "enable": true,
                "scope": "Workspace"
            },
            "dependencies": {
                "enable": true
            }
        }
    });

    send_lsp_request(stream, 1, "initialize", initialize_params)?;

    // Read until we get the initialize response (id=1).
    let timeout = Duration::from_secs(60);
    loop {
        let msg = read_lsp_message(stream, timeout).context("waiting for initialize response")?;
        log_lsp_incoming(&msg);
        if msg.get("id") == Some(&serde_json::json!(1)) {
            break;
        }
    }

    // 2. Send initialized notification.
    send_lsp_notification(stream, "initialized", serde_json::json!({}))?;

    // 3. Send didOpen for each file (required before requesting diagnostics).
    for (uri, _display) in &file_uris {
        let file_path = uri.strip_prefix("file://").unwrap_or(uri);
        let content = std::fs::read_to_string(file_path)
            .with_context(|| format!("failed to read {file_path}"))?;
        send_lsp_notification(
            stream,
            "textDocument/didOpen",
            serde_json::json!({
                "textDocument": {
                    "uri": uri,
                    "languageId": "4d",
                    "version": 1,
                    "text": content
                }
            }),
        )?;
        eprintln!("tool4d-lsp-stdio: validate: didOpen {uri}");
    }

    // 4. Wait briefly for server to process (installComponents, etc.).
    let settle_timeout = Duration::from_secs(5);
    let settle_start = Instant::now();
    loop {
        let remaining = settle_timeout.saturating_sub(settle_start.elapsed());
        if remaining.is_zero() {
            break;
        }
        match read_lsp_message(stream, remaining) {
            Ok(msg) => {
                log_lsp_incoming(&msg);
            }
            Err(_) => break,
        }
    }

    // 5. Send textDocument/diagnostic for each file (pull diagnostics model).
    let mut all_diagnostics = Vec::new();
    let mut request_id = 2u64;

    for (uri, display_name) in &file_uris {
        eprintln!("tool4d-lsp-stdio: validate: requesting diagnostics for {uri}");
        send_lsp_request(
            stream,
            request_id,
            "textDocument/diagnostic",
            serde_json::json!({
                "textDocument": { "uri": uri }
            }),
        )?;

        let diag_timeout = Duration::from_secs(60);
        let response = loop {
            let msg = read_lsp_message(stream, diag_timeout)
                .context("waiting for diagnostic response")?;
            log_lsp_incoming(&msg);
            if msg.get("id") == Some(&serde_json::json!(request_id)) {
                break msg;
            }
        };

        // tool4d returns null when clean (known bug); treat as empty.
        let items = response
            .get("result")
            .and_then(|r| r.get("items"))
            .and_then(|i| i.as_array())
            .cloned()
            .unwrap_or_default();

        eprintln!(
            "tool4d-lsp-stdio: validate: got {} diagnostic(s) for {}",
            items.len(),
            display_name
        );

        all_diagnostics.push(CollectedDiagnostic {
            file: display_name.clone(),
            uri: uri.clone(),
            diagnostics: items,
        });

        request_id += 1;
    }

    Ok(all_diagnostics)
}

fn format_diagnostics(all: &[CollectedDiagnostic], json_output: bool) -> Result<bool> {
    if json_output {
        let json_array: Vec<&serde_json::Value> = all
            .iter()
            .flat_map(|d| d.diagnostics.iter())
            .collect();

        // Build per-file output matching LSP publishDiagnostics shape.
        let output: Vec<serde_json::Value> = all
            .iter()
            .map(|d| {
                serde_json::json!({
                    "uri": d.uri,
                    "diagnostics": d.diagnostics
                })
            })
            .collect();

        let stdout = io::stdout();
        serde_json::to_writer_pretty(stdout.lock(), &output)
            .context("failed to write JSON output")?;
        println!();

        let has_errors = json_array.iter().any(|d| d.get("severity") == Some(&serde_json::json!(1)));
        return Ok(has_errors);
    }

    let mut has_errors = false;

    for collected in all {
        for diag in &collected.diagnostics {
            let range = diag.get("range").and_then(|r| r.get("start"));
            let line = range
                .and_then(|s| s.get("line"))
                .and_then(|l| l.as_u64())
                .map(|l| l + 1) // LSP lines are 0-based
                .unwrap_or(1);
            let col = range
                .and_then(|s| s.get("character"))
                .and_then(|c| c.as_u64())
                .map(|c| c + 1) // LSP columns are 0-based
                .unwrap_or(1);

            let severity_num = diag
                .get("severity")
                .and_then(|s| s.as_u64())
                .unwrap_or(1);

            let severity = match severity_num {
                1 => {
                    has_errors = true;
                    "error"
                }
                2 => "warning",
                3 => "info",
                4 => "hint",
                _ => "unknown",
            };

            let message = diag
                .get("message")
                .and_then(|m| m.as_str())
                .unwrap_or("(no message)");

            println!("{}:{}:{}: {}: {}", collected.file, line, col, severity, message);
        }
    }

    Ok(has_errors)
}

// ---------------------------------------------------------------------------
// CheckSyntax subcommand
// ---------------------------------------------------------------------------

/// Maximum time to wait for the `experimental/checkSyntax` response. This is
/// a full project compile-check, so it is given much more headroom than the
/// per-file `textDocument/diagnostic` pulls `validate` uses.
const CHECK_SYNTAX_TIMEOUT: Duration = Duration::from_secs(300);

#[allow(clippy::too_many_arguments)]
fn check_syntax(
    requested_tool: Option<&Path>,
    explicit_project: Option<&Path>,
    workspace: Option<&Path>,
    requested_port: Option<u16>,
    startup_timeout: Duration,
    shutdown_timeout: Duration,
    skip_onstartup: bool,
    dataless: bool,
    log_level: Option<&str>,
    json_output: bool,
    files: &[PathBuf],
) -> Result<()> {
    let options = StartOptions {
        requested_tool,
        explicit_project,
        workspace,
        requested_port,
        startup_timeout,
        shutdown_timeout,
        skip_onstartup,
        dataless,
        log_level,
    };

    let (mut stream, child, workspace_dir, _cancellation) = start_lsp_session(&options)?;

    // Resolve any explicitly given files the same way `validate` does.
    let base_dir = workspace
        .map(Path::to_path_buf)
        .or_else(|| {
            explicit_project
                .and_then(|p| p.parent())
                .and_then(|p| p.parent())
                .map(Path::to_path_buf)
        })
        .unwrap_or_else(|| env::current_dir().unwrap_or_default());

    let resolved_files: Vec<(PathBuf, PathBuf)> = files
        .iter()
        .map(|f| {
            let display_path = f.clone();
            let resolved = if f.is_relative() {
                base_dir.join(f)
            } else {
                f.to_path_buf()
            };
            (resolved, display_path)
        })
        .collect();

    let result = run_check_syntax_session(&mut stream, &workspace_dir, &resolved_files);

    // Always attempt graceful shutdown.
    let _ = send_lsp_request(&mut stream, 999_999, "shutdown", serde_json::json!(null));
    let _ = read_lsp_message(&mut stream, Duration::from_secs(5));
    let _ = send_lsp_notification(&mut stream, "exit", serde_json::json!(null));

    // ChildGuard ensures tool4d is cleaned up on drop.
    drop(child);

    let all_diagnostics = result.context("LSP checkSyntax session failed")?;

    // Format output using the same shape `validate --json` already uses.
    let has_errors = format_diagnostics(&all_diagnostics, json_output)?;

    if has_errors {
        bail!("");
    }

    Ok(())
}

fn run_check_syntax_session(
    stream: &mut TcpStream,
    workspace_dir: &Path,
    files: &[(PathBuf, PathBuf)],
) -> Result<Vec<CollectedDiagnostic>> {
    // Build a URI list for any explicitly requested files, verifying they
    // exist, exactly as `validate` does.
    let mut file_uris: Vec<(String, String)> = Vec::new(); // (uri, display_name)
    for (file_path, display_path) in files {
        let canonical = file_path
            .canonicalize()
            .with_context(|| format!("file not found: {}", display_path.display()))?;
        let uri = path_to_file_uri(&canonical);
        file_uris.push((uri, display_path.display().to_string()));
    }

    // The check is project-wide, so files are optional. When none were
    // given, pick any .4dm file under the project's Sources/ tree to use as
    // the request's anchor document.
    if file_uris.is_empty() {
        let sources_dir = workspace_dir.join("Sources");
        let search_root = if sources_dir.is_dir() {
            sources_dir
        } else {
            workspace_dir.to_path_buf()
        };

        let anchor = find_first_4dm_file(&search_root).with_context(|| {
            format!("no .4dm files found under {}", search_root.display())
        })?;

        let display = uri_display_path(&anchor, workspace_dir);
        let uri = path_to_file_uri(&anchor);
        eprintln!("tool4d-lsp-stdio: check-syntax: auto-selected anchor {uri}");
        file_uris.push((uri, display));
    }

    // Open each requested/anchor document first, in case tool4d needs at
    // least one known/open document to accept a valid anchor URI.
    for (uri, _display) in &file_uris {
        let file_path = uri.strip_prefix("file://").unwrap_or(uri);
        let content = std::fs::read_to_string(file_path)
            .with_context(|| format!("failed to read {file_path}"))?;
        send_lsp_notification(
            stream,
            "textDocument/didOpen",
            serde_json::json!({
                "textDocument": {
                    "uri": uri,
                    "languageId": "4d",
                    "version": 1,
                    "text": content
                }
            }),
        )?;
        eprintln!("tool4d-lsp-stdio: check-syntax: didOpen {uri}");
    }

    // Wait briefly for the server to process the newly opened document(s)
    // (installComponents, etc.) before issuing the project-wide check.
    let settle_timeout = Duration::from_secs(5);
    let settle_start = Instant::now();
    loop {
        let remaining = settle_timeout.saturating_sub(settle_start.elapsed());
        if remaining.is_zero() {
            break;
        }
        match read_lsp_message(stream, remaining) {
            Ok(msg) => log_lsp_incoming(&msg),
            Err(_) => break,
        }
    }

    // Send exactly one experimental/checkSyntax request, anchored at the
    // first opened document. Per the 4D Analyzer VS Code extension
    // (commands.ts), this param is just an arbitrary open document, not a
    // filter: the response covers the whole project regardless of which
    // document was passed.
    let (anchor_uri, _) = &file_uris[0];
    eprintln!(
        "tool4d-lsp-stdio: check-syntax: requesting experimental/checkSyntax anchored at {anchor_uri}"
    );

    send_lsp_request(
        stream,
        2,
        "experimental/checkSyntax",
        serde_json::json!({ "uri": anchor_uri }),
    )?;

    let response = loop {
        let msg = read_lsp_message(stream, CHECK_SYNTAX_TIMEOUT)
            .context("waiting for experimental/checkSyntax response")?;
        log_lsp_incoming(&msg);
        if msg.get("id") == Some(&serde_json::json!(2)) {
            break msg;
        }
    };

    // The response is a WorkspaceDiagnosticReport: `{ items: [...] }`, where
    // each entry is a WorkspaceFullDocumentDiagnosticReport whose own
    // per-file diagnostics are, confusingly, also named `items`. Normalize
    // that inner field to `diagnostics` here so `--json` output matches
    // `validate --json`'s contract exactly.
    let report_items = response
        .get("result")
        .and_then(|r| r.get("items"))
        .and_then(|i| i.as_array())
        .cloned()
        .unwrap_or_default();

    let opened_uris: std::collections::HashSet<&str> =
        file_uris.iter().map(|(uri, _)| uri.as_str()).collect();

    eprintln!(
        "tool4d-lsp-stdio: check-syntax: workspace report covers {} file(s) ({} explicitly opened)",
        report_items.len(),
        opened_uris.len()
    );

    let mut all_diagnostics = Vec::with_capacity(report_items.len());

    for item in &report_items {
        let uri = item
            .get("uri")
            .and_then(|u| u.as_str())
            .unwrap_or_default()
            .to_string();

        // `kind: "unchanged"` reports carry a `resultId` instead of `items`;
        // treat those as having no new diagnostics to report.
        let diagnostics = item
            .get("items")
            .and_then(|d| d.as_array())
            .cloned()
            .unwrap_or_default();

        let was_opened = opened_uris.contains(uri.as_str());
        let display = uri_to_display_path(&uri, workspace_dir);

        eprintln!(
            "tool4d-lsp-stdio: check-syntax: got {} diagnostic(s) for {} (previously opened: {})",
            diagnostics.len(),
            display,
            was_opened
        );

        all_diagnostics.push(CollectedDiagnostic {
            file: display,
            uri,
            diagnostics,
        });
    }

    Ok(all_diagnostics)
}

/// Recursively finds the first `.4dm` file (by name, sorted per directory
/// for determinism) under `dir`. Used to pick an anchor document for
/// `check-syntax` when no files were given on the command line.
fn find_first_4dm_file(dir: &Path) -> Option<PathBuf> {
    let mut entries: Vec<_> = fs::read_dir(dir).ok()?.filter_map(|e| e.ok()).collect();
    entries.sort_by_key(|entry| entry.file_name());

    // Prefer files at this level before descending into subdirectories.
    for entry in &entries {
        let path = entry.path();
        if path.is_file()
            && path
                .extension()
                .and_then(|extension| extension.to_str())
                .is_some_and(|extension| extension.eq_ignore_ascii_case("4dm"))
        {
            return Some(path);
        }
    }

    for entry in &entries {
        let path = entry.path();
        if path.is_dir()
            && let Some(found) = find_first_4dm_file(&path)
        {
            return Some(found);
        }
    }

    None
}

/// Formats an on-disk path for display, relative to `workspace_dir` when
/// possible.
fn uri_display_path(path: &Path, workspace_dir: &Path) -> String {
    path.strip_prefix(workspace_dir)
        .unwrap_or(path)
        .display()
        .to_string()
}

/// Converts a `file://` URI back to a display path, relative to
/// `workspace_dir` when possible. Used for entries in the
/// `experimental/checkSyntax` response that were never explicitly opened by
/// this process (the anchor's response is project-wide).
fn uri_to_display_path(uri: &str, workspace_dir: &Path) -> String {
    let path_str = uri.strip_prefix("file://").unwrap_or(uri);
    uri_display_path(Path::new(path_str), workspace_dir)
}

// ---------------------------------------------------------------------------
// URI and logging helpers for validate mode
// ---------------------------------------------------------------------------

/// Converts an absolute path to a proper `file:///` URI.
fn path_to_file_uri(path: &Path) -> String {
    let path_str = path.display().to_string();
    if path_str.starts_with('/') {
        format!("file://{path_str}")
    } else {
        // Windows paths need an extra slash: file:///C:/...
        format!("file:///{path_str}")
    }
}

/// Lenient URI comparison: strips the `file://` scheme and compares paths.
/// Logs an incoming LSP message to stderr for debugging.
fn log_lsp_incoming(msg: &serde_json::Value) {
    if let Some(method) = msg.get("method").and_then(|m| m.as_str()) {
        if method == "textDocument/publishDiagnostics" {
            let uri = msg
                .get("params")
                .and_then(|p| p.get("uri"))
                .and_then(|u| u.as_str())
                .unwrap_or("?");
            let count = msg
                .get("params")
                .and_then(|p| p.get("diagnostics"))
                .and_then(|d| d.as_array())
                .map(|a| a.len())
                .unwrap_or(0);
            eprintln!(
                "tool4d-lsp-stdio: validate: received publishDiagnostics uri={uri} count={count}"
            );
        } else {
            eprintln!("tool4d-lsp-stdio: validate: received notification {method}");
        }
    } else if let Some(id) = msg.get("id") {
        eprintln!("tool4d-lsp-stdio: validate: received response id={id}");
    }
}

// ---------------------------------------------------------------------------
// LSP JSON-RPC helpers for validate mode
// ---------------------------------------------------------------------------

fn send_lsp_request(
    stream: &mut TcpStream,
    id: u64,
    method: &str,
    params: serde_json::Value,
) -> Result<()> {
    let message = serde_json::json!({
        "jsonrpc": "2.0",
        "id": id,
        "method": method,
        "params": params
    });

    write_lsp_message(stream, &message)
}

fn send_lsp_notification(
    stream: &mut TcpStream,
    method: &str,
    params: serde_json::Value,
) -> Result<()> {
    let message = serde_json::json!({
        "jsonrpc": "2.0",
        "method": method,
        "params": params
    });

    write_lsp_message(stream, &message)
}

fn write_lsp_message(stream: &mut TcpStream, message: &serde_json::Value) -> Result<()> {
    let body = serde_json::to_vec(message).context("failed to serialize LSP message")?;

    let header = format!("Content-Length: {}\r\n\r\n", body.len());

    stream
        .write_all(header.as_bytes())
        .context("failed to write LSP header")?;
    stream
        .write_all(&body)
        .context("failed to write LSP body")?;
    stream.flush().context("failed to flush LSP message")?;

    Ok(())
}

fn read_lsp_message(
    stream: &mut TcpStream,
    timeout: Duration,
) -> Result<serde_json::Value> {
    stream
        .set_read_timeout(Some(timeout))
        .context("failed to set read timeout")?;

    // Read headers until \r\n\r\n.
    let mut header_buf = Vec::new();
    let mut byte = [0u8; 1];

    loop {
        match stream.read_exact(&mut byte) {
            Ok(()) => {
                header_buf.push(byte[0]);
                if header_buf.ends_with(b"\r\n\r\n") {
                    break;
                }
                if header_buf.len() > 64 * 1024 {
                    bail!("LSP header too large");
                }
            }
            Err(e) => return Err(e).context("failed to read LSP header"),
        }
    }

    // Parse Content-Length.
    let header_str =
        std::str::from_utf8(&header_buf).context("LSP header is not valid UTF-8")?;

    let content_length = header_str
        .lines()
        .find_map(|line| {
            let line = line.trim();
            if line.to_ascii_lowercase().starts_with("content-length:") {
                line.split_once(':')
                    .and_then(|(_, v)| v.trim().parse::<usize>().ok())
            } else {
                None
            }
        })
        .context("missing Content-Length in LSP header")?;

    // Read body.
    let mut body = vec![0u8; content_length];
    stream
        .read_exact(&mut body)
        .context("failed to read LSP body")?;

    serde_json::from_slice(&body).context("failed to parse LSP message as JSON")
}

fn create_listener(requested_port: Option<u16>) -> Result<TcpListener> {
    let port = requested_port.unwrap_or(0);

    let listener = TcpListener::bind((Ipv4Addr::LOCALHOST, port)).with_context(|| {
        if port == 0 {
            "failed to bind a local TCP listener".to_owned()
        } else {
            format!(
                "failed to bind local TCP port {port}; \
                     the port may already be in use"
            )
        }
    })?;

    listener
        .set_nonblocking(true)
        .context("failed to configure the local TCP listener")?;

    Ok(listener)
}

fn accept_with_timeout(
    listener: &TcpListener,
    child: &mut ChildGuard,
    timeout: Duration,
    cancellation: &AtomicBool,
) -> Result<TcpStream> {
    let started = Instant::now();

    loop {
        if cancellation.load(Ordering::SeqCst) {
            bail!("termination requested while waiting for tool4d");
        }

        match listener.accept() {
            Ok((stream, peer_address)) => {
                if !peer_address.ip().is_loopback() {
                    eprintln!(
                        "tool4d-lsp-stdio: rejected non-loopback \
                         connection from {peer_address}"
                    );
                    continue;
                }

                /*
                 * Accepted streams inherit the listener's nonblocking status
                 * on some platforms. The relay uses blocking I/O.
                 */
                stream
                    .set_nonblocking(false)
                    .context("failed to make the tool4d connection blocking")?;

                stream
                    .set_nodelay(true)
                    .context("failed to configure the tool4d connection")?;

                eprintln!(
                    "tool4d-lsp-stdio: tool4d connected from \
                     {peer_address}"
                );

                return Ok(stream);
            }

            Err(error) if error.kind() == io::ErrorKind::WouldBlock => {}

            Err(error) => {
                return Err(error).context("failed while accepting the tool4d connection");
            }
        }

        if let Some(status) = child
            .try_wait()
            .context("failed to inspect the tool4d process")?
        {
            bail!("tool4d exited before connecting to the bridge: {status}");
        }

        if started.elapsed() >= timeout {
            bail!(
                "timed out after {} seconds waiting for tool4d to connect",
                timeout.as_secs()
            );
        }

        thread::sleep(Duration::from_millis(50));
    }
}

fn supervise_relay(
    relay: Relay,
    mut child: Option<&mut ChildGuard>,
    cancellation: &AtomicBool,
) -> Result<()> {
    const SUPERVISOR_INTERVAL: Duration = Duration::from_millis(100);

    loop {
        if cancellation.load(Ordering::SeqCst) {
            eprintln!(
                "tool4d-lsp-stdio: termination requested; \
                 stopping the LSP session"
            );

            relay.shutdown();
            return Ok(());
        }

        if let Some(child_guard) = child.as_deref_mut()
            && let Some(status) = child_guard
                .try_wait()
                .context("failed to inspect the tool4d process")?
        {
            relay.shutdown();

            if status.success() {
                return Ok(());
            }

            bail!("tool4d exited unexpectedly: {status}");
        }

        match relay.events().recv_timeout(SUPERVISOR_INTERVAL) {
            Ok(RelayEvent::StdinClosed) => {
                /*
                 * Zed has closed the adapter's input. Do not wait
                 * indefinitely for tool4d to close the TCP connection.
                 */
                eprintln!(
                    "tool4d-lsp-stdio: editor input closed; \
                     stopping tool4d"
                );

                relay.shutdown();
                return Ok(());
            }

            Ok(RelayEvent::SocketClosed) => {
                relay.shutdown();
                return Ok(());
            }

            Ok(RelayEvent::Error { direction, error }) => {
                relay.shutdown();

                if matches!(
                    error.kind(),
                    io::ErrorKind::BrokenPipe
                        | io::ErrorKind::ConnectionReset
                        | io::ErrorKind::UnexpectedEof
                        | io::ErrorKind::NotConnected
                ) {
                    eprintln!(
                        "tool4d-lsp-stdio: {direction} relay closed: \
                         {error}"
                    );
                    return Ok(());
                }

                return Err(error).with_context(|| format!("{direction} LSP relay failed"));
            }

            Err(RecvTimeoutError::Timeout) => {}

            Err(RecvTimeoutError::Disconnected) => {
                relay.shutdown();
                bail!("both LSP relay workers stopped unexpectedly");
            }
        }
    }
}

fn install_signal_handlers() -> Result<Arc<AtomicBool>> {
    let cancellation = Arc::new(AtomicBool::new(false));

    #[cfg(unix)]
    {
        use signal_hook::consts::signal::{SIGHUP, SIGINT, SIGTERM};

        for signal in [SIGINT, SIGTERM, SIGHUP] {
            signal_hook::flag::register(signal, Arc::clone(&cancellation))
                .with_context(|| format!("failed to register signal handler {signal}"))?;
        }
    }

    /*
     * On non-Unix systems this still returns a cancellation flag. Native
     * Windows console and Job Object support should be added before Windows
     * is declared a supported deployment platform.
     */

    Ok(cancellation)
}

fn forward_tool4d_stdout(stdout: ChildStdout) {
    thread::spawn(move || {
        let mut reader = BufReader::new(stdout);
        let mut line = Vec::new();

        loop {
            line.clear();

            match reader.read_until(b'\n', &mut line) {
                Ok(0) => return,

                Ok(_) => {
                    let stderr = io::stderr();
                    let mut stderr = stderr.lock();

                    if stderr
                        .write_all(b"tool4d-lsp-stdio: tool4d stdout: ")
                        .and_then(|_| stderr.write_all(&line))
                        .and_then(|_| {
                            if line.ends_with(b"\n") {
                                Ok(())
                            } else {
                                stderr.write_all(b"\n")
                            }
                        })
                        .and_then(|_| stderr.flush())
                        .is_err()
                    {
                        return;
                    }
                }

                Err(error) => {
                    eprintln!(
                        "tool4d-lsp-stdio: failed to read tool4d \
                         stdout: {error}"
                    );
                    return;
                }
            }
        }
    });
}

fn log_command<'a>(executable: &Path, arguments: impl Iterator<Item = &'a OsStr>) {
    let rendered_arguments = arguments
        .map(|argument| format!("{argument:?}"))
        .collect::<Vec<_>>()
        .join(" ");

    eprintln!(
        "tool4d-lsp-stdio: executing {} {}",
        executable.display(),
        rendered_arguments
    );
}

#[derive(Debug)]
struct ToolCandidate {
    path: PathBuf,
    version: (u64, u64),
    build: u64,
    modified: SystemTime,
}

fn resolve_tool(requested_tool: Option<&Path>) -> Result<PathBuf> {
    if let Some(tool) = requested_tool {
        let tool = canonicalize_tool(tool)?;

        eprintln!(
            "tool4d-lsp-stdio: using configured tool4d at {}",
            tool.display()
        );

        return Ok(tool);
    }

    if let Some(tool) = find_tool_on_path() {
        let tool = canonicalize_tool(&tool)?;

        eprintln!(
            "tool4d-lsp-stdio: using tool4d from PATH at {}",
            tool.display()
        );

        return Ok(tool);
    }

    if let Some(tool) = discover_vscode_analyzer_tool()? {
        let tool = canonicalize_tool(&tool)?;

        eprintln!(
            "tool4d-lsp-stdio: using 4D Analyzer tool4d at {}",
            tool.display()
        );

        return Ok(tool);
    }

    if let Some(tool) = discover_conventional_tool()? {
        let tool = canonicalize_tool(&tool)?;

        eprintln!(
            "tool4d-lsp-stdio: using installed tool4d at {}",
            tool.display()
        );

        return Ok(tool);
    }

    bail!(
        "could not find tool4d\n\
         \n\
         Searched:\n\
         - --tool\n\
         - TOOL4D_PATH\n\
         - the process PATH\n\
         - 4D Analyzer's VS Code global storage\n\
         - conventional platform-specific application locations\n\
         \n\
         Configure it explicitly with:\n\
         \n\
         tool4d-lsp-stdio launch --tool /path/to/tool4d ...\n\
         \n\
         or set TOOL4D_PATH"
    )
}

fn canonicalize_tool(tool: &Path) -> Result<PathBuf> {
    validate_tool(tool)?;

    tool.canonicalize()
        .with_context(|| format!("failed to resolve {}", tool.display()))
}

fn find_tool_on_path() -> Option<PathBuf> {
    let path = env::var_os("PATH")?;

    for directory in env::split_paths(&path) {
        for executable_name in tool_executable_names() {
            let candidate = directory.join(executable_name);

            if is_valid_tool_candidate(&candidate) {
                return Some(candidate);
            }
        }
    }

    None
}

fn tool_executable_names() -> &'static [&'static str] {
    #[cfg(windows)]
    {
        &["tool4d.exe"]
    }

    #[cfg(not(windows))]
    {
        &["tool4d"]
    }
}

fn discover_vscode_analyzer_tool() -> Result<Option<PathBuf>> {
    let mut roots = Vec::new();

    #[cfg(target_os = "macos")]
    {
        if let Some(home) = home_directory() {
            let application_support = home.join("Library").join("Application Support");

            roots.push(
                application_support
                    .join("Code")
                    .join("User")
                    .join("globalStorage")
                    .join("4d.4d-analyzer")
                    .join("tool4d"),
            );

            roots.push(
                application_support
                    .join("Code - Insiders")
                    .join("User")
                    .join("globalStorage")
                    .join("4d.4d-analyzer")
                    .join("tool4d"),
            );

            roots.push(
                application_support
                    .join("VSCodium")
                    .join("User")
                    .join("globalStorage")
                    .join("4d.4d-analyzer")
                    .join("tool4d"),
            );
        }
    }

    #[cfg(windows)]
    {
        if let Some(app_data) = env::var_os("APPDATA") {
            let app_data = PathBuf::from(app_data);

            roots.push(
                app_data
                    .join("Code")
                    .join("User")
                    .join("globalStorage")
                    .join("4d.4d-analyzer")
                    .join("tool4d"),
            );

            roots.push(
                app_data
                    .join("Code - Insiders")
                    .join("User")
                    .join("globalStorage")
                    .join("4d.4d-analyzer")
                    .join("tool4d"),
            );

            roots.push(
                app_data
                    .join("VSCodium")
                    .join("User")
                    .join("globalStorage")
                    .join("4d.4d-analyzer")
                    .join("tool4d"),
            );
        }
    }

    #[cfg(target_os = "linux")]
    {
        let config_dir = env::var_os("XDG_CONFIG_HOME")
            .map(PathBuf::from)
            .or_else(|| home_directory().map(|h| h.join(".config")));

        if let Some(config) = config_dir {
            roots.push(
                config
                    .join("Code")
                    .join("User")
                    .join("globalStorage")
                    .join("4d.4d-analyzer")
                    .join("tool4d"),
            );

            roots.push(
                config
                    .join("Code - Insiders")
                    .join("User")
                    .join("globalStorage")
                    .join("4d.4d-analyzer")
                    .join("tool4d"),
            );

            roots.push(
                config
                    .join("VSCodium")
                    .join("User")
                    .join("globalStorage")
                    .join("4d.4d-analyzer")
                    .join("tool4d"),
            );
        }
    }

    let mut candidates = Vec::new();

    for root in roots {
        collect_analyzer_candidates(&root, &root, 0, &mut candidates)?;
    }

    candidates.sort_by(compare_tool_candidates);

    Ok(candidates.pop().map(|candidate| candidate.path))
}

fn collect_analyzer_candidates(
    root: &Path,
    directory: &Path,
    depth: usize,
    candidates: &mut Vec<ToolCandidate>,
) -> Result<()> {
    const MAX_DEPTH: usize = 8;
    const MAX_CANDIDATES: usize = 100;

    if depth > MAX_DEPTH || !directory.is_dir() {
        return Ok(());
    }

    let entries = match fs::read_dir(directory) {
        Ok(entries) => entries,

        Err(error)
            if matches!(
                error.kind(),
                io::ErrorKind::NotFound | io::ErrorKind::PermissionDenied
            ) =>
        {
            return Ok(());
        }

        Err(error) => {
            return Err(error).with_context(|| format!("failed to search {}", directory.display()));
        }
    };

    for entry in entries {
        let entry =
            entry.with_context(|| format!("failed to read an entry in {}", directory.display()))?;

        let path = entry.path();
        let file_type = entry
            .file_type()
            .with_context(|| format!("failed to inspect {}", path.display()))?;

        if file_type.is_symlink() {
            continue;
        }

        if file_type.is_dir() {
            collect_analyzer_candidates(root, &path, depth + 1, candidates)?;

            continue;
        }

        if !file_type.is_file() || !is_tool_executable_name(&path) {
            continue;
        }

        if !is_valid_tool_candidate(&path) {
            continue;
        }

        let (version, build) = analyzer_version_and_build(root, &path);

        let modified = path
            .metadata()
            .and_then(|metadata| metadata.modified())
            .unwrap_or(SystemTime::UNIX_EPOCH);

        candidates.push(ToolCandidate {
            path,
            version,
            build,
            modified,
        });

        if candidates.len() > MAX_CANDIDATES {
            bail!(
                "more than {MAX_CANDIDATES} tool4d executables were found \
                 under {}",
                root.display()
            );
        }
    }

    Ok(())
}

fn analyzer_version_and_build(root: &Path, executable: &Path) -> ((u64, u64), u64) {
    let relative = match executable.strip_prefix(root) {
        Ok(relative) => relative,
        Err(_) => return ((0, 0), 0),
    };

    let components = relative
        .components()
        .filter_map(|component| component.as_os_str().to_str())
        .collect::<Vec<_>>();

    let version = components
        .first()
        .and_then(|value| parse_4d_version(value))
        .unwrap_or((0, 0));

    let build = components
        .get(1)
        .and_then(|value| value.parse::<u64>().ok())
        .unwrap_or(0);

    (version, build)
}

fn parse_4d_version(value: &str) -> Option<(u64, u64)> {
    let uppercase = value.to_ascii_uppercase();

    if let Some((major, release)) = uppercase.split_once('R') {
        return Some((major.parse::<u64>().ok()?, release.parse::<u64>().ok()?));
    }

    Some((uppercase.parse::<u64>().ok()?, 0))
}

fn compare_tool_candidates(left: &ToolCandidate, right: &ToolCandidate) -> CmpOrdering {
    left.version
        .cmp(&right.version)
        .then_with(|| left.build.cmp(&right.build))
        .then_with(|| left.modified.cmp(&right.modified))
        .then_with(|| left.path.cmp(&right.path))
}

fn is_tool_executable_name(path: &Path) -> bool {
    let Some(name) = path.file_name().and_then(OsStr::to_str) else {
        return false;
    };

    tool_executable_names()
        .iter()
        .any(|expected| name.eq_ignore_ascii_case(expected))
}

fn is_valid_tool_candidate(path: &Path) -> bool {
    if !path.is_file() {
        return false;
    }

    #[cfg(unix)]
    {
        use std::os::unix::fs::PermissionsExt;

        path.metadata()
            .map(|metadata| metadata.permissions().mode() & 0o111 != 0)
            .unwrap_or(false)
    }

    #[cfg(not(unix))]
    {
        true
    }
}

fn discover_conventional_tool() -> Result<Option<PathBuf>> {
    #[cfg(target_os = "macos")]
    {
        let mut application_directories = vec![PathBuf::from("/Applications")];

        if let Some(home) = home_directory() {
            application_directories.push(home.join("Applications"));
        }

        let mut candidates = Vec::new();

        for applications in application_directories {
            collect_macos_application_candidates(&applications, &mut candidates)?;
        }

        candidates.sort_by(|left, right| {
            left.file_name()
                .cmp(&right.file_name())
                .then_with(|| left.cmp(right))
        });

        Ok(candidates.pop())
    }

    #[cfg(not(target_os = "macos"))]
    {
        let mut candidates = Vec::new();

        #[cfg(windows)]
        {
            // Search Program Files\4D\<version>\tool4d\tool4d.exe
            for env_key in &["ProgramFiles", "ProgramFiles(x86)"] {
                if let Some(pf) = env::var_os(env_key) {
                    let fourd_dir = PathBuf::from(pf).join("4D");
                    if fourd_dir.is_dir() {
                        if let Ok(entries) = fs::read_dir(&fourd_dir) {
                            for entry in entries.flatten() {
                                let candidate = entry.path().join("tool4d").join("tool4d.exe");
                                if is_valid_tool_candidate(&candidate) {
                                    candidates.push(candidate);
                                }
                            }
                        }
                    }
                }
            }
        }

        #[cfg(target_os = "linux")]
        {
            // Common locations for manually extracted tool4d on Linux.
            let fixed_paths = [
                PathBuf::from("/opt/4d/tool4d"),
                PathBuf::from("/usr/local/bin/tool4d"),
            ];
            for path in &fixed_paths {
                if is_valid_tool_candidate(path) {
                    candidates.push(path.clone());
                }
            }
            // Also search /opt/4D*/tool4d for versioned installs.
            if let Ok(entries) = fs::read_dir("/opt") {
                for entry in entries.flatten() {
                    let name = entry.file_name();
                    let name = name.to_string_lossy();
                    if name.starts_with("4D") || name.starts_with("4d") {
                        let candidate = entry.path().join("tool4d");
                        if is_valid_tool_candidate(&candidate) {
                            candidates.push(candidate);
                        }
                    }
                }
            }
        }

        candidates.sort();
        Ok(candidates.pop())
    }
}

#[cfg(target_os = "macos")]
fn collect_macos_application_candidates(
    applications: &Path,
    candidates: &mut Vec<PathBuf>,
) -> Result<()> {
    if !applications.is_dir() {
        return Ok(());
    }

    let entries = match fs::read_dir(applications) {
        Ok(entries) => entries,

        Err(error) if error.kind() == io::ErrorKind::PermissionDenied => {
            return Ok(());
        }

        Err(error) => {
            return Err(error)
                .with_context(|| format!("failed to search {}", applications.display()));
        }
    };

    for entry in entries {
        let entry = entry?;
        let name = entry.file_name();
        let name = name.to_string_lossy();

        if !name.starts_with("4D") || !entry.path().is_dir() {
            continue;
        }

        let candidate = entry
            .path()
            .join("tool4d.app")
            .join("Contents")
            .join("MacOS")
            .join("tool4d");

        if is_valid_tool_candidate(&candidate) {
            candidates.push(candidate);
        }
    }

    Ok(())
}

#[cfg(any(target_os = "macos", target_os = "linux"))]
fn home_directory() -> Option<PathBuf> {
    env::var_os("HOME").map(PathBuf::from)
}

fn validate_tool(tool: &Path) -> Result<()> {
    if !tool.exists() {
        bail!("tool4d does not exist: {}", tool.display());
    }

    if !tool.is_file() {
        bail!("tool4d path is not a file: {}", tool.display());
    }

    #[cfg(unix)]
    {
        use std::os::unix::fs::PermissionsExt;

        let mode = tool
            .metadata()
            .with_context(|| format!("failed to inspect {}", tool.display()))?
            .permissions()
            .mode();

        if mode & 0o111 == 0 {
            bail!("tool4d is not executable: {}", tool.display());
        }
    }

    Ok(())
}

fn resolve_project(explicit_project: Option<&Path>, workspace: Option<&Path>) -> Result<PathBuf> {
    if let Some(project) = explicit_project {
        let project = if project.is_absolute() {
            project.to_path_buf()
        } else {
            let workspace = workspace.context("a relative --project path requires --workspace")?;

            workspace.join(project)
        };

        return validate_project(&project);
    }

    let workspace =
        workspace.context("no 4D project was supplied; use --project or --workspace")?;

    if !workspace.is_dir() {
        bail!("workspace is not a directory: {}", workspace.display());
    }

    let mut projects = Vec::new();

    find_projects(workspace, 0, &mut projects)?;

    projects.sort();
    projects.dedup();

    match projects.len() {
        0 => {
            bail!("no .4DProject file was found under {}", workspace.display());
        }

        1 => Ok(projects.remove(0)),

        _ => {
            let project_list = projects
                .iter()
                .map(|path| format!("  {}", path.display()))
                .collect::<Vec<_>>()
                .join("\n");

            bail!(
                "multiple .4DProject files were found; \
                 use --project explicitly:\n{project_list}"
            );
        }
    }
}

fn validate_project(project: &Path) -> Result<PathBuf> {
    if !project.is_file() {
        bail!(
            "4D project does not exist or is not a file: {}",
            project.display()
        );
    }

    if !has_4d_project_extension(project) {
        bail!(
            "project path does not end in .4DProject: {}",
            project.display()
        );
    }

    project
        .canonicalize()
        .with_context(|| format!("failed to resolve {}", project.display()))
}

fn has_4d_project_extension(path: &Path) -> bool {
    path.extension()
        .and_then(|extension| extension.to_str())
        .is_some_and(|extension| extension.eq_ignore_ascii_case("4DProject"))
}

fn find_projects(directory: &Path, depth: usize, projects: &mut Vec<PathBuf>) -> Result<()> {
    const MAX_DEPTH: usize = 6;
    const MAX_PROJECTS: usize = 100;

    if depth > MAX_DEPTH {
        return Ok(());
    }

    let entries = std::fs::read_dir(directory)
        .with_context(|| format!("failed to read {}", directory.display()))?;

    for entry in entries {
        let entry = entry
            .with_context(|| format!("failed to read an entry under {}", directory.display()))?;

        let path = entry.path();
        let file_type = entry
            .file_type()
            .with_context(|| format!("failed to inspect {}", path.display()))?;

        if file_type.is_symlink() {
            continue;
        }

        if file_type.is_dir() {
            if should_ignore_directory(&entry.file_name()) {
                continue;
            }

            find_projects(&path, depth + 1, projects)?;
            continue;
        }

        if file_type.is_file() && has_4d_project_extension(&path) {
            let canonical_path = path
                .canonicalize()
                .with_context(|| format!("failed to resolve {}", path.display()))?;

            projects.push(canonical_path);

            if projects.len() > MAX_PROJECTS {
                bail!("more than {MAX_PROJECTS} .4DProject files were found");
            }
        }
    }

    Ok(())
}

fn should_ignore_directory(name: &OsStr) -> bool {
    matches!(
        name.to_str(),
        Some(".git" | ".zed" | "node_modules" | "target" | "build" | "dist")
    )
}
