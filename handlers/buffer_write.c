#include "../main.h"

/**
 *Writes to the buffer for handler functions
 */

int buffer_write(char *buffer, int *buf_i, char c)
{
  buffer[*buf_i] = c;
  (*buf_i)++;

  if (*buf_i == 1024)
    {
      write(1, buffer, *buf_i);
      *buf_i = 0;
    }
  return (1);
}

int buffer_nil(char *buffer, int *buf_i)
{
  buffer_write(buffer, buf_i, '(');
  buffer_write(buffer, buf_i, 'n');
  buffer_write(buffer, buf_i, 'i');
  buffer_write(buffer, buf_i, 'l');
  buffer_write(buffer, buf_i, ')');
  return (1);
}
