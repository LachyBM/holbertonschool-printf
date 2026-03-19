#include "../main.h"
/**
 *Print a Binary int
 */
int pbin(va_list args)
{
  unsigned int n = va_arg(args, unsigned int);
  return (print_bin(n));
}
