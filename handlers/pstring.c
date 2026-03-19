#include "../main.h"
/**
 *Print a Char *
 */
int pstring(va_list args)
{
  char *str = va_arg(args, char *);
  int len = 0;

  if (!str)
    str = "(null)";

  while (str[len])
    len++;
  write(1, str, len);
  return len;
}
