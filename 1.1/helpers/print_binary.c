#include "../main.h"
/**
 *Print Binary Number
 */
int print_bin(char *buffer, int buf_i, unsigned int n)
{
  int count = 0;
  char c;

  if (n /2)
    count += print_bin(buffer, buf_i, n / 2);
  c = (n % 2) + '0';
  count += buffer_write(buffer, buf_i, c);
  return (count);
}
