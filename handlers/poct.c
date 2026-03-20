#include "../main.h"
/**
 *Print an Oct
 */
int poct(va_list args, char *buffer, int *buf_i)
{
  unsigned int n = va_arg(args, unsigned int);
  return (print_oct(buffer, buf_i, n));
}
