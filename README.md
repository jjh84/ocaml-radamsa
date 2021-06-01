# OCaml bindings to radamsa

OCaml radamsa is a project to provide [radamsa](https://gitlab.com/akihe/radamsa) binding for the OCaml language.

## Installation

You can use `opam install radamsa` to install ocaml-radamsa.

## Example

```
utop # #require "radamsa";;
utop # Radamsa.radamsa "(1+1)+2";;
- : string = "(1+0)+2"
utop # Radamsa.radamsa "(1+1)+2";;
- : string = "(1+1)+127028527159086051696090776"
utop # Radamsa.radamsa "(1+1)+2";;
- : string = "(170141183460469231731687303715884171264+1)+2"
utop # Radamsa.radamsa "(1+1)+2";;
- : string = "(1+1)+0"
```

You can pass `seed` via `radamsa2` API.

```
top # Radamsa.radamsa2 "(1+1)+2" 5;;
- : string = "(1󠀪+1)+2"
top # Radamsa.radamsa2 "(1+1)+2" 5;;
- : string = "(1󠀪+1)+2"
utop # Radamsa.radamsa2 "(1+1)+2" 8;;
- : string = "(2147483649+1)+1"
utop # Radamsa.radamsa2 "(1+1)+2" 8;;
- : string = "(2147483649+1)+1"
```
