#include "../main.h"
/**
 *Print an Oct
 */
int poct(va_list args)
{
  unsigned int n = va_arg(args, unsigned int);
  return (print_oct(n));
}
