#include "../main.h"
/**
 *Print an uppercase Hex int
 */
int phexu(va_list args, char *buffer, int *buf_i, int *total)
{
  unsigned int n = va_arg(args, unsigned int);
  print_hex(buffer, buf_i, n, 1, total);
  return (0);
}
