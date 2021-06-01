# OCaml bindings to radamsa

OCaml radamsa is a project to provide [radamsa](https://gitlab.com/akihe/radamsa) binding for the OCaml language.

## Installation

You can use `opam install radamsa` to install ocaml-radamsa.

## Example

```
utop # #require "radamsa";;
utop # Radamsa.radamsa "AAAA";;
- : string = "ó °AAAAAA"
utop # Radamsa.radamsa "AAAA";;
- : string = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
utop # Radamsa.radamsa "AAAA";;
- : string = "AAAA AA"
utop # Radamsa.radamsa "AAAA";;
- : string = "ABAʳABAʳABAÊAʳA"
```