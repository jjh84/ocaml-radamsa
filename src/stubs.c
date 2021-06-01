// gcc -I`ocamlc -where` -I. -c stub.c 

#define CAML_NAME_SPACE

#include <inttypes.h>
#include <stddef.h>

#include <caml/mlvalues.h>
#include <caml/alloc.h>
#include <caml/memory.h>
#include <caml/fail.h>
#include <caml/callback.h>
#include <caml/misc.h>
#include <caml/intext.h>
#include <caml/custom.h>

#include "stubs.h"

void init();
size_t radamsa(uint8_t *ptr, size_t len, uint8_t *target, size_t max, unsigned int seed);

value caml__init(value unit) {
    (void) unit;
    return Val_unit;
}
