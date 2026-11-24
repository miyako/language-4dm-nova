//%attributes = {"invisible":true}

// Headless twin of tools/generate_command_list.4dm + tools/generate_constant_list.4dm.
//
// The two manual tools stop at the pasteboard; CI has no pasteboard, so this
// method writes the same two name lists to a JSON file and quits. Content
// selection below is kept deliberately identical to those tools:
//
//   * commands come from Command name(i), minus the SQL bounds, the wildcard
//     stubs (_4D@, C_@, ARRAY @) and the bare aliases (4D, ds, cs);
//   * constants come from 4D_ConstantsEN.xlf, which ships inside tool4d.app on
//     macOS and inside bin/Resources on Linux.
//
// Differs on purpose: names keep their embedded spaces (the pasteboard tools
// strip them for the regex generator) because builtins.h stores `ARRAY INTEGER`
// and `Attribute published SQL` verbatim, and duplicates are dropped, because
// the XLF repeats a few entries across theme groups.
//
// --user-param = path of the JSON file to write.

var $param : Text

$param:=""
Get database parameter(User param value; $param)

If ($param="")
	LOG EVENT(Into system standard outputs; "generate_builtins_dump: pass --user-param=<path/to/builtins.json>"; Error message)
	QUIT 4D(1)
End if 

// ---------------------------------------------------------------- constants

var $constants : Collection
var $appFolder : 4D.Folder
var $file : 4D.File
var $path : Text
var $found : Boolean
var $constant : Text
var $i : Integer

$constants:=New collection
$found:=False

$appFolder:=Folder(Application file; fk platform path)

// macOS (tool4d.app) keeps resources under Contents/Resources; the Linux
// archive lays them out beside the binary as bin/Resources.
For Each ($path; New collection("Contents/Resources/en.lproj/4D_ConstantsEN.xlf"; "Resources/en.lproj/4D_ConstantsEN.xlf"; "../Resources/en.lproj/4D_ConstantsEN.xlf"))
	If (Not($found))
		$file:=$appFolder.file($path)
		$found:=$file.exists
	End if 
End for each 

If (Not($found))
	LOG EVENT(Into system standard outputs; "generate_builtins_dump: 4D_ConstantsEN.xlf not found under "+$appFolder.platformPath; Error message)
	QUIT 4D(1)
End if 

// DOM refs stay untagged: the commands return Longint refs in older builds and
// Text refs in current ones, and a wrong annotation is a compile error.
$dom:=DOM Parse XML source($file.platformPath)

If (OK#1)
	LOG EVENT(Into system standard outputs; "generate_builtins_dump: cannot parse "+$file.platformPath; Error message)
	QUIT 4D(1)
End if 

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

$out:=File($param)
$out.parent.create()

TEXT TO DOCUMENT($out.platformPath; JSON Stringify($json; *))

LOG EVENT(Into system standard outputs; "generate_builtins_dump: wrote "+$out.platformPath+" commands="+String($commands.length)+" constants="+String($constants.length); Information message)

QUIT 4D(0)
