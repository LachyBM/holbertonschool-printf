#include "../main.h"
/**
 *Print a percent literal
 */
int percent(va_list args)
{
  (void)args;
  return write(1, "%", 1);
}
