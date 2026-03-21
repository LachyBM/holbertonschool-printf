#include "../main.h"

int prev(va_list args, char *buffer, int *buf_i, int *total)
{
  char *str = va_arg(args, char *);
  int len = 0;
  int i = 0;

  if (str == NULL)
  {
    buffer_nil(buffer, buf_i, total);
    return (0);
  }

  i = len - 1;
  while (str[len])
  {
    len++;
  }
  while (i >= 0)
    {
      buffer_write(buffer, buf_i, str[i], total);
      i--;
    }
  return (0);
}
