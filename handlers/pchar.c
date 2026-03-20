#include "../main.h"

/**
 *Print a Char
 */
int pchar(va_list args, char *buffer, int *buf_i)
{
  char c = va_arg(args, int);
  buffer_write(buffer, buf_i, c);
  return (0);
}
