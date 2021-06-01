# OCaml bindings to radamsa

OCaml radamsa is a project to provide [radamsa](https://gitlab.com/akihe/radamsa) binding for the OCaml language.

## Installation

You can use `opam install radamsa` to install ocaml-radamsa.

## Example

```
utop # #require "radamsa";;
utop # Radamsa.radamsa "(1+2)*3";;
- : string = "(1󠁈+1)*3"
utop # Radamsa.radamsa "(1+2)*3";;
- : string = "(1+18446744073709551616)*3"
utop # Radamsa.radamsa ~seed:8 "(1+2)*3";;
- : string = "(2147483649+2)*2"
utop # Radamsa.radamsa ~seed:10 "(1+2)*3";;
- : string = "(0+6135)*-1"
```
