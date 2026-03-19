#include "../main.h"
/**
 *Print a lowercase Hex int
 */
int phexl(va_list args)
{
  unsigned int n = va_arg(args, unsigned long int);
  return (print_hex(n, 0));
}
