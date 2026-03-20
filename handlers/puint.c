#include "../main.h"
/**
 *Print an unsigned int
 */
int puint(va_list args, char *buffer, int *buf_i)
{
  unsigned int n = va_arg(args, unsigned int);
  print_uns(buffer, buf_i, n);
  return (0);
}
