
external c__init : unit -> unit = "caml__init"
external c__radamsa2 : string -> int -> string = "caml__radamsa2"
external c__radamsa : string -> string = "caml__radamsa"

let radamsa  = c__radamsa
let radamsa2 = c__radamsa2

let () = c__init ()

