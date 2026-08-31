//! MCP server wrapping the 4D LSP connection.
//!
//! Keeps a persistent tool4d LSP session alive and exposes LSP capabilities
//! as MCP tools that AI agents can call.

use std::{
    io::{Read, Write},
    net::TcpStream,
    path::{Path, PathBuf},
    sync::atomic::{AtomicU64, Ordering},
    time::Duration,
};

use rmcp::{
    handler::server::wrapper::Parameters, schemars, tool, tool_router, ErrorData,
};
use serde_json::Value;

/// Shared state for the LSP connection.
pub struct LspConnection {
    stream: std::sync::Mutex<TcpStream>,
    next_id: AtomicU64,
    workspace: PathBuf,
}

impl LspConnection {
    pub fn new(stream: TcpStream, workspace: PathBuf) -> Self {
        Self {
            stream: std::sync::Mutex::new(stream),
            next_id: AtomicU64::new(100),
            workspace,
        }
    }

    fn next_request_id(&self) -> u64 {
        self.next_id.fetch_add(1, Ordering::SeqCst)
    }

    /// Send an LSP request and wait for the matching response.
    fn request(&self, method: &str, params: Value) -> anyhow::Result<Value> {
        let id = self.next_request_id();
        let mut stream = self.stream.lock().map_err(|e| anyhow::anyhow!("{e}"))?;
        send_lsp_request(&mut *stream, id, method, params)?;

        let timeout = Duration::from_secs(60);
        loop {
            let msg = read_lsp_message(&mut *stream, timeout)?;
            if msg.get("id") == Some(&serde_json::json!(id)) {
                return Ok(msg);
            }
            // Discard notifications while waiting for our response.
        }
    }

    /// Send an LSP notification (no response expected).
    fn notify(&self, method: &str, params: Value) -> anyhow::Result<()> {
        let mut stream = self.stream.lock().map_err(|e| anyhow::anyhow!("{e}"))?;
        send_lsp_notification(&mut *stream, method, params)
    }

    /// Resolve a relative file path against the workspace.
    fn resolve_uri(&self, file: &str) -> String {
        let path = Path::new(file);
        let absolute = if path.is_absolute() {
            path.to_path_buf()
        } else {
            self.workspace.join(path)
        };
        let canonical = absolute.canonicalize().unwrap_or(absolute);
        path_to_file_uri(&canonical)
    }
}

// ── MCP Server ──────────────────────────────────────────────────────────

/// The MCP server that exposes 4D LSP tools.
#[derive(Clone)]
pub struct Tool4dMcpServer {
    lsp: std::sync::Arc<LspConnection>,
}

impl Tool4dMcpServer {
    pub fn new(lsp: std::sync::Arc<LspConnection>) -> Self {
        Self { lsp }
    }
}

// ── Tool parameter types ────────────────────────────────────────────────

#[derive(Debug, serde::Deserialize, schemars::JsonSchema)]
pub struct ValidateParams {
    /// One or more .4dm file paths relative to the workspace.
    #[schemars(description = "File paths to validate, relative to the Project/ workspace")]
    pub files: Vec<String>,
}

#[derive(Debug, serde::Deserialize, schemars::JsonSchema)]
pub struct CompletionParams {
    /// File path relative to the workspace.
    #[schemars(description = "File path relative to the Project/ workspace")]
    pub file: String,
    /// Zero-based line number.
    pub line: u32,
    /// Zero-based character offset.
    pub character: u32,
}

#[derive(Debug, serde::Deserialize, schemars::JsonSchema)]
pub struct HoverParams {
    /// File path relative to the workspace.
    #[schemars(description = "File path relative to the Project/ workspace")]
    pub file: String,
    /// Zero-based line number.
    pub line: u32,
    /// Zero-based character offset.
    pub character: u32,
}

#[derive(Debug, serde::Deserialize, schemars::JsonSchema)]
pub struct GotoDefinitionParams {
    /// File path relative to the workspace.
    #[schemars(description = "File path relative to the Project/ workspace")]
    pub file: String,
    /// Zero-based line number.
    pub line: u32,
    /// Zero-based character offset.
    pub character: u32,
}

#[derive(Debug, serde::Deserialize, schemars::JsonSchema)]
pub struct DocumentSymbolsParams {
    /// File path relative to the workspace.
    #[schemars(description = "File path relative to the Project/ workspace")]
    pub file: String,
}

#[derive(Debug, serde::Deserialize, schemars::JsonSchema)]
pub struct OpenFileParams {
    /// File path relative to the workspace.
    #[schemars(description = "File path relative to the Project/ workspace")]
    pub file: String,
}

#[derive(Debug, serde::Deserialize, schemars::JsonSchema)]
pub struct CloseFileParams {
    /// File path relative to the workspace.
    #[schemars(description = "File path relative to the Project/ workspace")]
    pub file: String,
}

// ── Tool implementations ────────────────────────────────────────────────

#[tool_router(server_handler)]
impl Tool4dMcpServer {
    #[tool(description = "Validate .4dm files for syntax errors using the 4D compiler. Returns diagnostics (errors, warnings) with file, line, column, severity, and message.")]
    async fn validate(
        &self,
        Parameters(params): Parameters<ValidateParams>,
    ) -> Result<String, ErrorData> {
        let lsp = self.lsp.clone();
        tokio::task::spawn_blocking(move || {
            let mut all_results = Vec::new();

            for file in &params.files {
                let uri = lsp.resolve_uri(file);

                // Open the file.
                let abs_path = Path::new(
                    uri.strip_prefix("file://").unwrap_or(&uri),
                );
                let content = std::fs::read_to_string(abs_path)
                    .map_err(|e| ErrorData::internal_error(format!("failed to read {file}: {e}"), None))?;

                lsp.notify(
                    "textDocument/didOpen",
                    serde_json::json!({
                        "textDocument": {
                            "uri": uri,
                            "languageId": "4d",
                            "version": 1,
                            "text": content
                        }
                    }),
                )
                .map_err(|e| ErrorData::internal_error(e.to_string(), None))?;

                // Request diagnostics (pull model).
                let response = lsp
                    .request(
                        "textDocument/diagnostic",
                        serde_json::json!({ "textDocument": { "uri": uri } }),
                    )
                    .map_err(|e| ErrorData::internal_error(e.to_string(), None))?;

                // Parse diagnostics (handle tool4d null-result bug).
                let items = response
                    .get("result")
                    .and_then(|r| r.get("items"))
                    .and_then(|i| i.as_array())
                    .cloned()
                    .unwrap_or_default();

                for item in &items {
                    let range = item.get("range").and_then(|r| r.get("start"));
                    let line = range
                        .and_then(|r| r.get("line"))
                        .and_then(|l| l.as_u64())
                        .unwrap_or(0)
                        + 1;
                    let col = range
                        .and_then(|r| r.get("character"))
                        .and_then(|c| c.as_u64())
                        .unwrap_or(0)
                        + 1;
                    let severity = match item
                        .get("severity")
                        .and_then(|s| s.as_u64())
                        .unwrap_or(1)
                    {
                        1 => "error",
                        2 => "warning",
                        3 => "info",
                        _ => "hint",
                    };
                    let message = item
                        .get("message")
                        .and_then(|m| m.as_str())
                        .unwrap_or("unknown");

                    all_results.push(format!("{file}:{line}:{col}: {severity}: {message}"));
                }

                if items.is_empty() {
                    all_results.push(format!("{file}: clean (no diagnostics)"));
                }

                // Close the file.
                let _ = lsp.notify(
                    "textDocument/didClose",
                    serde_json::json!({
                        "textDocument": { "uri": uri }
                    }),
                );
            }

            Ok(all_results.join("\n"))
        })
        .await
        .map_err(|e| ErrorData::internal_error(e.to_string(), None))?
    }

    #[tool(description = "Get code completions at a position in a .4dm file. Returns a list of completion items with labels, kinds, and details.")]
    async fn completion(
        &self,
        Parameters(params): Parameters<CompletionParams>,
    ) -> Result<String, ErrorData> {
        let lsp = self.lsp.clone();
        tokio::task::spawn_blocking(move || {
            let uri = lsp.resolve_uri(&params.file);
            let response = lsp
                .request(
                    "textDocument/completion",
                    serde_json::json!({
                        "textDocument": { "uri": uri },
                        "position": {
                            "line": params.line,
                            "character": params.character
                        }
                    }),
                )
                .map_err(|e| ErrorData::internal_error(e.to_string(), None))?;

            let result = response.get("result").cloned().unwrap_or(Value::Null);

            // Format completions.
            let items = if let Some(arr) = result.as_array() {
                arr.clone()
            } else if let Some(arr) = result.get("items").and_then(|i| i.as_array()) {
                arr.clone()
            } else {
                return Ok("No completions available.".to_string());
            };

            let formatted: Vec<String> = items
                .iter()
                .take(50) // Limit to avoid huge responses.
                .map(|item| {
                    let label = item
                        .get("label")
                        .and_then(|l| l.as_str())
                        .unwrap_or("?");
                    let detail = item
                        .get("detail")
                        .and_then(|d| d.as_str())
                        .unwrap_or("");
                    if detail.is_empty() {
                        label.to_string()
                    } else {
                        format!("{label} — {detail}")
                    }
                })
                .collect();

            if formatted.is_empty() {
                Ok("No completions available.".to_string())
            } else {
                Ok(formatted.join("\n"))
            }
        })
        .await
        .map_err(|e| ErrorData::internal_error(e.to_string(), None))?
    }

    #[tool(description = "Get hover information (documentation, type signature) for a symbol at a position in a .4dm file.")]
    async fn hover(
        &self,
        Parameters(params): Parameters<HoverParams>,
    ) -> Result<String, ErrorData> {
        let lsp = self.lsp.clone();
        tokio::task::spawn_blocking(move || {
            let uri = lsp.resolve_uri(&params.file);
            let response = lsp
                .request(
                    "textDocument/hover",
                    serde_json::json!({
                        "textDocument": { "uri": uri },
                        "position": {
                            "line": params.line,
                            "character": params.character
                        }
                    }),
                )
                .map_err(|e| ErrorData::internal_error(e.to_string(), None))?;

            let result = response.get("result").cloned().unwrap_or(Value::Null);

            if result.is_null() {
                return Ok("No hover information available at this position.".to_string());
            }

            // Extract contents (can be string, MarkupContent, or array).
            if let Some(contents) = result.get("contents") {
                if let Some(s) = contents.as_str() {
                    return Ok(s.to_string());
                }
                if let Some(value) = contents.get("value").and_then(|v| v.as_str()) {
                    return Ok(value.to_string());
                }
                // Array of MarkedString.
                if let Some(arr) = contents.as_array() {
                    let parts: Vec<String> = arr
                        .iter()
                        .filter_map(|item| {
                            item.as_str()
                                .map(String::from)
                                .or_else(|| item.get("value").and_then(|v| v.as_str()).map(String::from))
                        })
                        .collect();
                    return Ok(parts.join("\n\n"));
                }
            }

            Ok(serde_json::to_string_pretty(&result).unwrap_or_default())
        })
        .await
        .map_err(|e| ErrorData::internal_error(e.to_string(), None))?
    }

    #[tool(description = "Find the definition location of a symbol at a position in a .4dm file.")]
    async fn goto_definition(
        &self,
        Parameters(params): Parameters<GotoDefinitionParams>,
    ) -> Result<String, ErrorData> {
        let lsp = self.lsp.clone();
        tokio::task::spawn_blocking(move || {
            let uri = lsp.resolve_uri(&params.file);
            let response = lsp
                .request(
                    "textDocument/definition",
                    serde_json::json!({
                        "textDocument": { "uri": uri },
                        "position": {
                            "line": params.line,
                            "character": params.character
                        }
                    }),
                )
                .map_err(|e| ErrorData::internal_error(e.to_string(), None))?;

            let result = response.get("result").cloned().unwrap_or(Value::Null);

            if result.is_null() {
                return Ok("No definition found at this position.".to_string());
            }

            format_locations(&result)
        })
        .await
        .map_err(|e| ErrorData::internal_error(e.to_string(), None))?
    }

    #[tool(description = "List all symbols (methods, variables, classes) in a .4dm file.")]
    async fn document_symbols(
        &self,
        Parameters(params): Parameters<DocumentSymbolsParams>,
    ) -> Result<String, ErrorData> {
        let lsp = self.lsp.clone();
        tokio::task::spawn_blocking(move || {
            let uri = lsp.resolve_uri(&params.file);
            let response = lsp
                .request(
                    "textDocument/documentSymbol",
                    serde_json::json!({ "textDocument": { "uri": uri } }),
                )
                .map_err(|e| ErrorData::internal_error(e.to_string(), None))?;

            let result = response.get("result").cloned().unwrap_or(Value::Null);

            if result.is_null() {
                return Ok("No symbols found.".to_string());
            }

            if let Some(arr) = result.as_array() {
                let formatted: Vec<String> = arr
                    .iter()
                    .map(|sym| {
                        let name = sym.get("name").and_then(|n| n.as_str()).unwrap_or("?");
                        let kind = sym
                            .get("kind")
                            .and_then(|k| k.as_u64())
                            .map(symbol_kind_name)
                            .unwrap_or("unknown");
                        let line = sym
                            .get("range")
                            .or_else(|| sym.get("location").and_then(|l| l.get("range")))
                            .and_then(|r| r.get("start"))
                            .and_then(|s| s.get("line"))
                            .and_then(|l| l.as_u64())
                            .map(|l| l + 1)
                            .unwrap_or(0);
                        format!("  {name} ({kind}) line {line}")
                    })
                    .collect();

                if formatted.is_empty() {
                    Ok("No symbols found.".to_string())
                } else {
                    Ok(formatted.join("\n"))
                }
            } else {
                Ok("No symbols found.".to_string())
            }
        })
        .await
        .map_err(|e| ErrorData::internal_error(e.to_string(), None))?
    }

    #[tool(description = "Open a .4dm file in the LSP session. Required before requesting completions, hover, or goto_definition on a file.")]
    async fn open_file(
        &self,
        Parameters(params): Parameters<OpenFileParams>,
    ) -> Result<String, ErrorData> {
        let lsp = self.lsp.clone();
        tokio::task::spawn_blocking(move || {
            let uri = lsp.resolve_uri(&params.file);
            let abs_path = Path::new(uri.strip_prefix("file://").unwrap_or(&uri));
            let content = std::fs::read_to_string(abs_path)
                .map_err(|e| ErrorData::internal_error(format!("failed to read {}: {e}", params.file), None))?;

            lsp.notify(
                "textDocument/didOpen",
                serde_json::json!({
                    "textDocument": {
                        "uri": uri,
                        "languageId": "4d",
                        "version": 1,
                        "text": content
                    }
                }),
            )
            .map_err(|e| ErrorData::internal_error(e.to_string(), None))?;

            Ok(format!("Opened {}", params.file))
        })
        .await
        .map_err(|e| ErrorData::internal_error(e.to_string(), None))?
    }

    #[tool(description = "Close a .4dm file in the LSP session. Call after you are done with completions/hover/goto_definition.")]
    async fn close_file(
        &self,
        Parameters(params): Parameters<CloseFileParams>,
    ) -> Result<String, ErrorData> {
        let lsp = self.lsp.clone();
        tokio::task::spawn_blocking(move || {
            let uri = lsp.resolve_uri(&params.file);
            lsp.notify(
                "textDocument/didClose",
                serde_json::json!({
                    "textDocument": { "uri": uri }
                }),
            )
            .map_err(|e| ErrorData::internal_error(e.to_string(), None))?;

            Ok(format!("Closed {}", params.file))
        })
        .await
        .map_err(|e| ErrorData::internal_error(e.to_string(), None))?
    }
}

// ── Helper functions ────────────────────────────────────────────────────

fn format_locations(result: &Value) -> Result<String, ErrorData> {
    let locations = if result.is_array() {
        result.as_array().unwrap().clone()
    } else {
        vec![result.clone()]
    };

    let formatted: Vec<String> = locations
        .iter()
        .filter_map(|loc| {
            let uri = loc.get("uri").and_then(|u| u.as_str())?;
            let range = loc.get("range")?;
            let line = range.get("start")?.get("line")?.as_u64()? + 1;
            let col = range.get("start")?.get("character")?.as_u64()? + 1;
            // Strip file:// prefix for readability.
            let path = uri.strip_prefix("file:///").unwrap_or(
                uri.strip_prefix("file://").unwrap_or(uri),
            );
            Some(format!("{path}:{line}:{col}"))
        })
        .collect();

    if formatted.is_empty() {
        Ok("No definition found.".to_string())
    } else {
        Ok(formatted.join("\n"))
    }
}

fn symbol_kind_name(kind: u64) -> &'static str {
    match kind {
        1 => "file",
        2 => "module",
        3 => "namespace",
        4 => "package",
        5 => "class",
        6 => "method",
        7 => "property",
        8 => "field",
        9 => "constructor",
        10 => "enum",
        11 => "interface",
        12 => "function",
        13 => "variable",
        14 => "constant",
        15 => "string",
        16 => "number",
        17 => "boolean",
        18 => "array",
        19 => "object",
        20 => "key",
        21 => "null",
        22 => "enum member",
        23 => "struct",
        24 => "event",
        25 => "operator",
        26 => "type parameter",
        _ => "unknown",
    }
}

fn path_to_file_uri(path: &Path) -> String {
    let path_str = path.to_string_lossy();
    if path_str.starts_with('/') {
        format!("file://{path_str}")
    } else {
        format!("file:///{path_str}")
    }
}

// ── LSP I/O (sync) ─────────────────────────────────────────────────────

fn send_lsp_request(
    stream: &mut TcpStream,
    id: u64,
    method: &str,
    params: Value,
) -> anyhow::Result<()> {
    let body = serde_json::json!({
        "jsonrpc": "2.0",
        "id": id,
        "method": method,
        "params": params
    });
    let body = serde_json::to_string(&body)?;
    let header = format!("Content-Length: {}\r\n\r\n", body.len());
    stream.write_all(header.as_bytes())?;
    stream.write_all(body.as_bytes())?;
    stream.flush()?;
    Ok(())
}

fn send_lsp_notification(
    stream: &mut TcpStream,
    method: &str,
    params: Value,
) -> anyhow::Result<()> {
    let body = serde_json::json!({
        "jsonrpc": "2.0",
        "method": method,
        "params": params
    });
    let body = serde_json::to_string(&body)?;
    let header = format!("Content-Length: {}\r\n\r\n", body.len());
    stream.write_all(header.as_bytes())?;
    stream.write_all(body.as_bytes())?;
    stream.flush()?;
    Ok(())
}

fn read_lsp_message(stream: &mut TcpStream, timeout: Duration) -> anyhow::Result<Value> {
    stream.set_read_timeout(Some(timeout))?;

    let mut header_buf = Vec::new();
    let mut byte = [0u8; 1];

    loop {
        stream.read_exact(&mut byte)?;
        header_buf.push(byte[0]);
        if header_buf.ends_with(b"\r\n\r\n") {
            break;
        }
        if header_buf.len() > 64 * 1024 {
            anyhow::bail!("LSP header too large");
        }
    }

    let header_str = std::str::from_utf8(&header_buf)?;
    let content_length: usize = header_str
        .lines()
        .find_map(|line| {
            let line = line.trim();
            if line.to_ascii_lowercase().starts_with("content-length:") {
                line.split_once(':')?.1.trim().parse().ok()
            } else {
                None
            }
        })
        .ok_or_else(|| anyhow::anyhow!("missing Content-Length"))?;

    let mut body = vec![0u8; content_length];
    stream.read_exact(&mut body)?;

    serde_json::from_slice(&body).map_err(Into::into)
}
