#include "../main.h"
/**
 *Print an unsigned int
 */
int puint(va_list args, char *buffer, int buf_i)
{
  unsigned int n = va_arg(args, unsigned int);
  (void)buffer, (void)buf_i;
  return (print_uns(buffer, buf_i, n));
}
