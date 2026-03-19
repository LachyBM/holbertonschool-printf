#include "../main.h"

/**
 *Prints an Address
 */
int paddr(va_list args)
{
  void *n = va_arg(args, void*);
  return (print_addr(n));
}
