#include "../main.h"
/**
 *Print a Binary int
 */
int pbin(va_list args, char *buffer, int buf_i)
{
  unsigned int n = va_arg(args, unsigned int);
  (void)buffer, (void)buf_i;
  return (print_bin(buffer, buf_i, n));
}
