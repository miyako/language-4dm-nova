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

* class member function declaration
* project method declaration
* local, process, interprocess variables
* value types

<img width="434" alt="" src="https://github.com/miyako/language-4dm-nova/assets/1725068/19182eab-eb51-4253-bad6-bf416b6abf3a">

* literals
 
<img width="142" alt="" src="https://github.com/miyako/language-4dm-nova/assets/1725068/915e4b4a-e374-45e7-884b-c0c3baaf19d7">

* class definition

<img width="187" alt="" src="https://github.com/miyako/language-4dm-nova/assets/1725068/3a58647c-eb11-46b5-bb3c-448620d21ef9">

* new declaration

<img width="205" alt="" src="https://github.com/miyako/language-4dm-nova/assets/1725068/2d03b097-94bc-49c9-a1df-9ecde7ed2749">

* alias attribute

<img width="96" alt="" src="https://github.com/miyako/language-4dm-nova/assets/1725068/563c2b1b-1c5d-4718-8f95-1aec65905450">
