external c__init : unit -> unit = "caml__init"
external c__radamsa : string -> int -> string = "caml__radamsa"

let radamsa ?seed:(seed=0) input =
  match seed with
  | 0 -> c__radamsa input (Random.int32 (Int32.max_int) |> Int32.to_int)
  | _ -> c__radamsa input seed

let () = 
  c__init ();
  Random.self_init ()
