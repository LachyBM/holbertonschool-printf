#include "../main.h"
/**
 *Print an uppercase Hex int
 */
int phexu(va_list args, char *buffer, int *buf_i)
{
  unsigned int n = va_arg(args, unsigned int);
  print_hex(buffer, buf_i, n, 1);
  return (0);
}
