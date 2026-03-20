#include "../main.h"
/**
 *Print an Oct
 */
int poct(va_list args, char *buffer, int *buf_i, int *total)
{
  unsigned int n = va_arg(args, unsigned int);
  print_oct(buffer, buf_i, n, total);
  return (0);
}
