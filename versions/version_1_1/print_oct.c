#include "../main.h"
/**
 *Prints an Oct
 */
int print_oct(char *buffer, int *buf_i, unsigned int n, int *total)
{
  char c;
  char *digits = "01234567";

  if (n >= 8)
    print_oct(buffer, buf_i, n/8, total);
  c = digits[n % 8];
  buffer_write(buffer, buf_i, c, total);
  return (0);
}
