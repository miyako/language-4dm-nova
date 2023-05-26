# language-4dm-nova
add syntax highlighting to .4dm files.

## to compile

```sh
export PATH="$PATH:./node_modules/.bin/"
tree-sitter generate
./compile_parser.sh . /Applications/Nova.app
```

## features

language-4d currently supports the following features:

* function

```4d
function afunction($param1:Text)->$returnValue:Integer
exposed function afunction($param1:Text)->$returnValue:Integer
local function afunction($param1:Text)->$returnValue:Integer
local exposed function afunction($param1:Text)->$returnValue:Integer
local exposed function get aproperty($param1:Text)->$returnValue:Integer
local exposed function set aproperty($param1:Text)->$returnValue:Integer
local exposed function query aproperty($param1:Text)->$returnValue:Integer
local exposed function orderBy aproperty($param1:Text)->$returnValue:Integer
```

* method

```4d
#DECLARE($param1:Text)
#DECLARE($param1:Text)->$returnValue:Integer
#DECLARE()->$returnValue:Integer 
```

it seems impossible to tree-sitter process variable; the pattern is too broad

* local, interprocess variables
* value types

* literals
 
<img width="142" alt="" src="https://github.com/miyako/language-4dm-nova/assets/1725068/915e4b4a-e374-45e7-884b-c0c3baaf19d7">

* class

```4d
class constructor
class extends 4D.Entity
```

* new declaration

```4d
var $a; $b : Text
property $a; $b : Text
```

* alias attribute

```4d
alias name name
alias name name.name
```
