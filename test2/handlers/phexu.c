#include "../main.h"
/**
 *Print an uppercase Hex int
 */
int phexu(va_list args)
{
  unsigned int n = va_arg(args, unsigned long int);
  return (print_hex(n, 1));
}
