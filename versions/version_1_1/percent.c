#include "../main.h"
/**
 *Print a percent literal
 */
int percent(va_list args, char *buffer, int *buf_i, int *total)
{
  int c;
  (void)args;
  c = '%';
  buffer_write(buffer, buf_i, c, total);
  return (0);
}
