#include "../main.h"
/**
 *Print a Char *
 */
int pstring(va_list args, char *buffer, int *buf_i)
{
  char *str = va_arg(args, char *);
  int len = 0;
  int i = 0;
  
  if (!str)
    str = "(null)";

  while (str[len])
    len++;
  while (i < len)
    {
      buffer_write(buffer, buf_i, str[i]);
      i++;
    }
  return len;
}
