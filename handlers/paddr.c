#include "../main.h"

/**
 *Prints an Address
 */
int paddr(va_list args)
{
  void *n = va_arg(args, void*);
  if (n == NULL)
    return (-1)
  return (print_addr(n));
}
