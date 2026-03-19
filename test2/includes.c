/**
 *Handler C Files
 */

#include "handlers/pchar.c"
#include "handlers/pstring.c"
#include "handlers/pint.c"
#include "handlers/puint.c"
#include "handlers/phexl.c"
#include "handlers/phexu.c"
#include "handlers/pbin.c"
#include "handlers/percent.c"

/**
 *Helper C Files
 */

#include "helpers/print_number.c"
#include "helpers/print_unsigned.c"
#include "helpers/print_hexadecimal.c"
#include "helpers/print_binary.c"

/**
 *Specifier Array
 */
char_check specchar[] = {
  {'%', percent},
  {'c', pchar},
  {'s', pstring},
  {'d', pint},
  {'i', pint},
  {'u', puint},
  {'x', phexl},
  {'X', phexu},
  {'b', pbin}
};
