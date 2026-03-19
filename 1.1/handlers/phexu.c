#include "../main.h"
/**
 *Print an uppercase Hex int
 */
int phexu(va_list args, char *buffer, int buf_i)
{
  unsigned int n = va_arg(args, unsigned long int);
  (void)buffer, (void)buf_i;
  return (print_hex(buffer, buf_i, n, 1));
}
