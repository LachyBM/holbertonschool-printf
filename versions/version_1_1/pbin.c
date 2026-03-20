#include "../main.h"
/**
 *Print a Binary int
 */
int pbin(va_list args, char *buffer, int *buf_i, int *total)
{
  unsigned int n = va_arg(args, unsigned int);
  print_bin(buffer, buf_i, n, total);
  return (0);
}
