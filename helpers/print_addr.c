#include "../main.h"

/**
 *Prints an Address
 */
int print_addr(char *buffer, int *buf_i, void *addr, int *total)
{
  unsigned long paddr = (unsigned long)addr;

  if (addr == NULL)
  {
    buffer_nil(buffer, buf_i, total);
    return (0);
  }

  paddr = (unsigned long)addr;
  buffer_write(buffer, buf_i, '0', total);
  buffer_write(buffer, buf_i, 'x', total);
  print_hex(buffer, buf_i, paddr, 0, total);

  return (0);
}
