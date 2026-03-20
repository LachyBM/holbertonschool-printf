#include "../main.h"
/**
 *Prints an Oct
 */
int print_oct(char *buffer, int *buf_i, unsigned int n)
{
  int count = 0;
  char c;
  char *digits = "01234567";

  if (n >= 8)
    count += print_oct(buffer, buf_i, n/8);
  c = digits[n % 8];
  count += buffer_write(buffer, buf_i, c);
  return (count);
}
