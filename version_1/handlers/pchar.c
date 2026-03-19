#include "../main.h"

/**
 *Print a Char
 */
int pchar(va_list args)
{
  char c = va_arg(args, int);
  return write(1, &c, 1);
}
