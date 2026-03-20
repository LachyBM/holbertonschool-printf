#include "../main.h"

/**
 *Prints an Address
 */
int paddr(va_list args, char *buffer, int *buf_i)
{
  void *n = va_arg(args, void*);
  print_addr(buffer, buf_i, n);
  return (0);
}
