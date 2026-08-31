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
// Validate subcommand
// ---------------------------------------------------------------------------

#[allow(clippy::too_many_arguments)]
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
) -> Result<()> {
    let tool = resolve_tool(requested_tool)?;
    let project = resolve_project(explicit_project, workspace)?;
    let cancellation = install_signal_handlers()?;

    let workspace_dir = workspace
        .map(Path::to_path_buf)
        .or_else(|| {
            explicit_project
                .and_then(|p| p.parent())
                .and_then(|p| p.parent())
                .map(Path::to_path_buf)
        })
        .unwrap_or_else(|| env::current_dir().unwrap_or_default());

    let workspace_dir = workspace_dir
        .canonicalize()
        .unwrap_or(workspace_dir);

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
        let msg = read_lsp_message(&mut stream, timeout)
            .context("waiting for initialize response")?;
        if msg.get("id") == Some(&serde_json::json!(1)) {
            break;
        }
    }

    send_lsp_notification(&mut stream, "initialized", serde_json::json!({}))?;

    // Drain any startup notifications briefly.
    let drain_timeout = Duration::from_secs(3);
    loop {
        match read_lsp_message(&mut stream, drain_timeout) {
            Ok(_) => {}
            Err(_) => break,
        }
    }

    eprintln!("tool4d-lsp-stdio: LSP initialized, starting MCP server on stdio");

    // Build the MCP server and run it.
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
