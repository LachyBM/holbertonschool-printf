#include "../main.h"

/**
 *Prints an Address
 */
int print_addr(void *addr)
{
  int count = 0;
  unsigned long paddr = (unsigned long)addr;

  if (paddr == NULL)
    return (-1);
  write(1, "0x",2);
  count += 2;
  count += print_hex(paddr, 0);

  return (count);
}
