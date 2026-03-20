#include "../main.h"
/**
 *Print an unsigned int
 */
int puint(va_list args, char *buffer, int *buf_i, int *total)
{
  unsigned int n = va_arg(args, unsigned int);
  print_uns(buffer, buf_i, n, total);
  return (0);
}
