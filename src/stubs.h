#ifndef MLRADAMSA_STUBS_H
#define MLRADAMSA_STUBS_H

#include <caml/mlvalues.h>
#include <caml/memory.h>

value caml__init(value unit);
value caml__succ(value v);
value caml__size(value v);
value caml__radamsa2(value input, value seed);
value caml__radamsa(value input);

#endif

