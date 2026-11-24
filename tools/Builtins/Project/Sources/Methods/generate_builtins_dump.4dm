//%attributes = {"invisible":true}

// Headless twin of tools/generate_command_list.4dm + tools/generate_constant_list.4dm.
//
// The two manual tools stop at the pasteboard; CI has no pasteboard, so this
// method writes the same two name lists to a JSON file and quits. Content
// selection below is kept deliberately identical to those tools:
//
//   * commands come from Command name(i), minus the SQL bounds, the wildcard
//     stubs (_4D@, C_@, ARRAY @) and the bare aliases (4D, ds, cs);
//   * constants come from 4D_ConstantsEN.xlf, which ships inside the tool4d
//     build (tool4d.app/Contents/Resources on macOS, Resources/ on Linux and
//     Windows).
//
// Differs on purpose: names keep their embedded spaces (the pasteboard tools
// strip them for the regex generator) because builtins.h stores `ARRAY INTEGER`
// and `Attribute published SQL` verbatim, and duplicates are dropped, because
// the XLF repeats a few entries across theme groups.
//
// --user-param = {"dump": "<path to write>", "xlf": "<path to 4D_ConstantsEN.xlf>"}
// The caller passes the XLF path because it already knows where it unpacked
// tool4d. Discovering it from inside the run needs `Application file`, which
// answers with an empty path under tool4d -- Folder(""; fk platform path) then
// raises "A valid posix path was expected" before anything can be logged. A
// bare path is accepted as --user-param too, but then there is no XLF to read
// and the run stops with that as the reason.

var $param : Text

$param:=""
Get database parameter(User param value; $param)

If ($param="")
	LOG EVENT(Into system standard outputs; "generate_builtins_dump: pass --user-param with {\"dump\": ..., \"xlf\": ...}"; Error message)
	QUIT 4D(1)
End if 

LOG EVENT(Into system standard outputs; "generate_builtins_dump t01 param chars="+String(Length($param)); Information message)

// A command that fails must name itself: an empty exit code says nothing about
// which of the calls below tool4d did not like.
ON ERR CALL("dump_on_err")

LOG EVENT(Into system standard outputs; "generate_builtins_dump t02 error handler installed"; Information message)

var $config : Object
var $dumpPath : Text
var $xlfPath : Text

$config:=New object
$dumpPath:=""
$xlfPath:=""

If ($param[[1]]="{")
	$config:=JSON Parse($param)
	LOG EVENT(Into system standard outputs; "generate_builtins_dump t03 parsed "+JSON Stringify($config); Information message)
	$dumpPath:=String($config.dump)
	$xlfPath:=String($config.xlf)
Else 
	$dumpPath:=$param
End if 

LOG EVENT(Into system standard outputs; "generate_builtins_dump t04 dump="+$dumpPath+" xlf="+$xlfPath; Information message)

If ($dumpPath="")
	LOG EVENT(Into system standard outputs; "generate_builtins_dump: no output path in --user-param"; Error message)
	QUIT 4D(1)
End if 

// ---------------------------------------------------------------- constants

var $constants : Collection
var $file : 4D.File
var $found : Boolean
var $constant : Text
var $i : Integer

$constants:=New collection
$found:=False

If ($xlfPath="")
	LOG EVENT(Into system standard outputs; "generate_builtins_dump: --user-param has no \"xlf\"; point it at 4D_ConstantsEN.xlf inside the tool4d build"; Error message)
	QUIT 4D(1)
End if 

$file:=File($xlfPath)
LOG EVENT(Into system standard outputs; "generate_builtins_dump t05 file object made"; Information message)
$found:=$file.exists
LOG EVENT(Into system standard outputs; "generate_builtins_dump t06 exists="+String($found); Information message)

If (Not($found))
	LOG EVENT(Into system standard outputs; "generate_builtins_dump: no such file: "+$xlfPath; Error message)
	QUIT 4D(1)
End if 

LOG EVENT(Into system standard outputs; "generate_builtins_dump t07 xlf "+$file.platformPath; Information message)

// DOM refs stay untagged: the commands return Longint refs in older builds and
// Text refs in current ones, and a wrong annotation is a compile error.
$dom:=DOM Parse XML source($file.platformPath)

If (OK#1)
	LOG EVENT(Into system standard outputs; "generate_builtins_dump: cannot parse "+$file.platformPath; Error message)
	QUIT 4D(1)
End if 

LOG EVENT(Into system standard outputs; "generate_builtins_dump t08 xml parsed"; Information message)

ARRAY TEXT($nodes; 0)

$node:=DOM Find XML element($dom; "/xliff/file/body/group[@restype='x-4DK#']/trans-unit/target"; $nodes)

For ($i; 1; Size of array($nodes))
	DOM GET XML ELEMENT VALUE($nodes{$i}; $constant)
	If ($constant#"")
		If ($constants.indexOf($constant)=-1)
			$constants.push($constant)
		End if 
	End if 
End for 

DOM CLOSE XML($dom)

LOG EVENT(Into system standard outputs; "generate_builtins_dump t09 constants="+String($constants.length); Information message)

If ($constants.length=0)
	LOG EVENT(Into system standard outputs; "generate_builtins_dump: no constants found in "+$file.platformPath; Error message)
	QUIT 4D(1)
End if 

// ---------------------------------------------------------------- commands

var $commands : Collection
var $command : Text

$commands:=New collection

// The manual tool hardcodes 1818 (the count for 21 R3/R4). Scanning past the
// end of the command range yields "", so a generous bound keeps this correct
// for later releases without a code change. 4D command ids are stable, hence
// the explicit exclusions by id.
For ($i; 1; 4000)
	$command:=Command name($i)
	Case of 
		: ($i=948)  //begin sql
		: ($i=949)  //end sql
		: ($command="")
		: ($command="_4D@")
		: ($command="C_@") || ($command="ARRAY @")
		: ($command="4D")
		: ($command="ds")
		: ($command="cs")
		Else 
			If ($commands.indexOf($command)=-1)
				$commands.push($command)
			End if 
	End case 
End for 

LOG EVENT(Into system standard outputs; "generate_builtins_dump t10 commands="+String($commands.length); Information message)

If ($commands.length=0)
	LOG EVENT(Into system standard outputs; "generate_builtins_dump: Command name() returned nothing"; Error message)
	QUIT 4D(1)
End if 

// ---------------------------------------------------------------- output

var $json : Object
var $out : 4D.File

$json:=New object
$json.version:=Application version
$json.commands:=$commands
$json.constants:=$constants

LOG EVENT(Into system standard outputs; "generate_builtins_dump t11 writing "+$dumpPath; Information message)

$out:=File($dumpPath)

TEXT TO DOCUMENT($out.platformPath; JSON Stringify($json; *))

LOG EVENT(Into system standard outputs; "generate_builtins_dump t12 wrote "+$out.platformPath+" commands="+String($commands.length)+" constants="+String($constants.length); Information message)

QUIT 4D(0)
