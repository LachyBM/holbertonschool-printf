#include "../main.h"
/**
 *Print an unsigned int
 */
int puint(va_list args)
{
  unsigned int n = va_arg(args, unsigned int);
  return (print_uns(n));
}
