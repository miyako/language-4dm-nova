//! Discovery and lightweight IPC for a persistent, auto-managed `mcp` server.
//!
//! Design notes (see https://github.com/miyako/skills/issues/27):
//!
//! The issue's proposed design calls for a Unix domain socket (named pipe on
//! Windows) as the transport for the persistent server. This implementation
//! instead uses a loopback TCP socket on both platforms. `tool4d-lsp-stdio`
//! is already built entirely around a TCP bridge to tool4d, so reusing TCP
//! here avoids introducing a second, platform-specific transport
//! (Unix domain sockets + Windows named pipes, each with their own
//! connect/accept/permission semantics) for a single-machine, loopback-only
//! channel where the security/perf properties of a domain socket don't
//! matter. Discovery (which port, whether the owning process is alive) is
//! handled by a small JSON lockfile keyed off the resolved `.4DProject` path,
//! which is what actually needs to be platform-specific-free.
//!
//! Protocol: newline-delimited JSON request/response, one exchange per
//! connection (simple request/reply, not a persistent session). This is
//! deliberately not MCP-over-stdio (that remains `mcp`'s stdio contract);
//! it's a private protocol between this binary's one-shot subcommands and
//! its own daemonized `mcp` server.

use std::{
    fs,
    io::{BufRead, BufReader, Write},
    net::{Ipv4Addr, TcpStream},
    path::{Path, PathBuf},
    time::Duration,
};

use anyhow::{Context, Result, bail};
use serde::{Deserialize, Serialize};

/// Information describing a running persistent server, as recorded in its
/// lockfile.
#[derive(Debug, Serialize, Deserialize)]
pub struct ServerInfo {
    pub pid: u32,
    pub port: u16,
    pub project: PathBuf,
    pub started_at: u64,
}

/// Request sent to a persistent server over its loopback socket.
#[derive(Debug, Serialize, Deserialize)]
#[serde(tag = "method", content = "params", rename_all = "kebab-case")]
pub enum IpcRequest {
    Validate { files: Vec<String> },
    Hover { file: String, line: u32, character: u32 },
    Completion { file: String, line: u32, character: u32 },
    GotoDefinition { file: String, line: u32, character: u32 },
    DocumentSymbols { file: String },
    Ping,
    Stop,
}

/// Response returned by a persistent server.
#[derive(Debug, Serialize, Deserialize)]
pub struct IpcResponse {
    pub ok: bool,
    pub result: Option<String>,
    pub error: Option<String>,
}

impl IpcResponse {
    pub fn success(result: String) -> Self {
        Self { ok: true, result: Some(result), error: None }
    }

    pub fn failure(error: String) -> Self {
        Self { ok: false, result: None, error: Some(error) }
    }
}

/// Directory holding discovery state for a given project's persistent
/// server, derived from a hash of the resolved `.4DProject` absolute path.
pub fn runtime_dir(project: &Path) -> PathBuf {
    let key = project_key(project);
    base_runtime_dir().join(format!("tool4d-lsp-stdio-{key}"))
}

fn base_runtime_dir() -> PathBuf {
    if let Ok(dir) = std::env::var("XDG_RUNTIME_DIR") {
        let dir = PathBuf::from(dir);
        if dir.is_dir() {
            return dir;
        }
    }
    std::env::temp_dir()
}

fn project_key(project: &Path) -> String {
    // A simple, dependency-free FNV-1a hash of the resolved project path is
    // sufficient here: this is a discovery key, not a security boundary.
    let bytes = project.to_string_lossy();
    let mut hash: u64 = 0xcbf29ce484222325;
    for byte in bytes.as_bytes() {
        hash ^= u64::from(*byte);
        hash = hash.wrapping_mul(0x100000001b3);
    }
    format!("{hash:016x}")
}

fn lockfile_path(project: &Path) -> PathBuf {
    runtime_dir(project).join("server.json")
}

/// Read the lockfile for `project`, if present and well-formed.
pub fn read_lockfile(project: &Path) -> Option<ServerInfo> {
    let contents = fs::read_to_string(lockfile_path(project)).ok()?;
    serde_json::from_str(&contents).ok()
}

/// Write the lockfile for `project` describing the currently running
/// persistent server.
pub fn write_lockfile(project: &Path, info: &ServerInfo) -> Result<()> {
    let dir = runtime_dir(project);
    fs::create_dir_all(&dir).with_context(|| format!("failed to create {}", dir.display()))?;
    let path = lockfile_path(project);
    let contents = serde_json::to_string_pretty(info)?;
    fs::write(&path, contents).with_context(|| format!("failed to write {}", path.display()))
}

/// Remove the lockfile for `project`, if present.
pub fn remove_lockfile(project: &Path) {
    let _ = fs::remove_file(lockfile_path(project));
    // Best effort: remove the directory too, if now empty.
    let _ = fs::remove_dir(runtime_dir(project));
}

/// Returns true if a process with the given PID appears to be alive.
#[cfg(unix)]
pub fn process_is_alive(pid: u32) -> bool {
    // SAFETY: signal 0 performs no action other than error checking; passing
    // a valid, non-negative pid_t is safe.
    let result = unsafe { libc::kill(pid as libc::pid_t, 0) };
    result == 0
}

#[cfg(windows)]
pub fn process_is_alive(pid: u32) -> bool {
    use windows_sys::Win32::Foundation::CloseHandle;
    use windows_sys::Win32::System::Threading::{
        GetExitCodeProcess, OpenProcess, PROCESS_QUERY_LIMITED_INFORMATION,
    };

    // SAFETY: OpenProcess with a query-only access right is safe to call
    // with any pid; a null result indicates failure and is handled below.
    let handle = unsafe { OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, 0, pid) };
    if handle.is_null() {
        return false;
    }

    let mut exit_code: u32 = 0;
    // SAFETY: `handle` is a valid, just-opened process handle and
    // `exit_code` is a valid pointer for the duration of the call.
    let ok = unsafe { GetExitCodeProcess(handle, &mut exit_code) };
    // SAFETY: `handle` was returned by OpenProcess above and is not used
    // again after this call.
    unsafe { CloseHandle(handle) };

    // STILL_ACTIVE == 259
    ok != 0 && exit_code == 259
}

#[cfg(not(any(unix, windows)))]
pub fn process_is_alive(_pid: u32) -> bool {
    false
}

/// Attempt to connect to an already-running persistent server for
/// `project`. Returns `None` (and cleans up a stale lockfile) if no live
/// server is found.
pub fn find_running_server(project: &Path) -> Option<ServerInfo> {
    let info = read_lockfile(project)?;

    if !process_is_alive(info.pid) {
        remove_lockfile(project);
        return None;
    }

    // Confirm the port is actually accepting connections.
    match TcpStream::connect_timeout(
        &(Ipv4Addr::LOCALHOST, info.port).into(),
        Duration::from_millis(500),
    ) {
        Ok(_) => Some(info),
        Err(_) => {
            remove_lockfile(project);
            None
        }
    }
}

/// Send a single IPC request to a running server and return its response.
pub fn send_request(port: u16, request: &IpcRequest) -> Result<IpcResponse> {
    let mut stream = TcpStream::connect_timeout(
        &(Ipv4Addr::LOCALHOST, port).into(),
        Duration::from_secs(5),
    )
    .with_context(|| format!("failed to connect to persistent server on port {port}"))?;

    stream.set_read_timeout(Some(Duration::from_secs(120)))?;

    let mut line = serde_json::to_string(request)?;
    line.push('\n');
    stream
        .write_all(line.as_bytes())
        .context("failed to send IPC request")?;
    stream.flush().context("failed to flush IPC request")?;

    let mut reader = BufReader::new(stream);
    let mut response_line = String::new();
    reader
        .read_line(&mut response_line)
        .context("failed to read IPC response")?;

    if response_line.is_empty() {
        bail!("persistent server closed the connection without responding");
    }

    serde_json::from_str(&response_line).context("failed to parse IPC response")
}

/// Request a graceful stop of the persistent server for `project`, falling
/// back to killing the process directly if it does not respond.
pub fn stop_server(project: &Path) -> Result<bool> {
    let Some(info) = find_running_server(project) else {
        return Ok(false);
    };

    let stopped = send_request(info.port, &IpcRequest::Stop).is_ok();

    if !stopped {
        kill_process(info.pid);
    }

    // Give the server a brief moment to exit and remove its own lockfile;
    // remove it ourselves as a fallback.
    std::thread::sleep(Duration::from_millis(200));
    remove_lockfile(project);

    Ok(true)
}

#[cfg(unix)]
fn kill_process(pid: u32) {
    // SAFETY: passing a valid, non-negative pid_t with SIGTERM is safe.
    unsafe {
        libc::kill(pid as libc::pid_t, libc::SIGTERM);
    }
}

#[cfg(windows)]
fn kill_process(pid: u32) {
    use windows_sys::Win32::Foundation::CloseHandle;
    use windows_sys::Win32::System::Threading::{OpenProcess, TerminateProcess, PROCESS_TERMINATE};

    // SAFETY: OpenProcess is safe to call with any pid; failure yields null.
    let handle = unsafe { OpenProcess(PROCESS_TERMINATE, 0, pid) };
    if handle.is_null() {
        return;
    }
    // SAFETY: `handle` was just opened with PROCESS_TERMINATE access.
    unsafe {
        TerminateProcess(handle, 1);
        CloseHandle(handle);
    }
}

#[cfg(not(any(unix, windows)))]
fn kill_process(_pid: u32) {}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn project_key_is_stable_and_distinct() {
        let a = project_key(Path::new("/tmp/A/Project/A.4DProject"));
        let b = project_key(Path::new("/tmp/A/Project/A.4DProject"));
        let c = project_key(Path::new("/tmp/B/Project/B.4DProject"));
        assert_eq!(a, b);
        assert_ne!(a, c);
    }

    #[test]
    fn lockfile_roundtrip() {
        let project = std::env::temp_dir().join(format!(
            "tool4d-lsp-stdio-test-{}.4DProject",
            std::process::id()
        ));
        let info = ServerInfo {
            pid: std::process::id(),
            port: 12345,
            project: project.clone(),
            started_at: 0,
        };
        write_lockfile(&project, &info).unwrap();
        let read = read_lockfile(&project).unwrap();
        assert_eq!(read.port, 12345);
        remove_lockfile(&project);
        assert!(read_lockfile(&project).is_none());
    }
}
