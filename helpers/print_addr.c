#include "../main.h"

/**
 *Prints an Address
 */
int print_addr(char *buffer, int *buf_i, void *addr)
{
  unsigned long paddr = (unsigned long)addr;

  if (addr == NULL)
    return (buffer_nil(buffer, buf_i));

  paddr = (unsigned long)addr;
  
  buffer_write(buffer, buf_i, '0');
  buffer_write(buffer, buf_i, 'x');
  print_hex(buffer, buf_i, paddr, 0);

  return (0);
}
