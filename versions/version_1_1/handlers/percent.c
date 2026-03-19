#include "../main.h"
/**
 *Print a percent literal
 */
int percent(va_list args, char *buffer, int buf_i)
{
  int c;
  (void)args;
  c = '%';
  return (buffer_write(buffer, buf_i, c));
}
