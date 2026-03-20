#include "../main.h"

/**
 *Prints an Address
 */
int paddr(va_list args, char *buffer, int *buf_i, int *total)
{
  void *n = va_arg(args, void*);
  print_addr(buffer, buf_i, n, total);
  return (0);
}
