#include "../main.h"
/**
 *Print a lowercase Hex int
 */
int phexl(va_list args, char *buffer, int *buf_i, int *total)
{
  unsigned int n = va_arg(args, unsigned int);
  print_hex(buffer, buf_i, n, 0, total);
  return (0);
}
