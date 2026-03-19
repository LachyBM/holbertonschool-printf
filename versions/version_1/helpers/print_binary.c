#include "../main.h"
/**
 *Print Binary Number
 */
int print_bin(unsigned int n)
{
  int count = 0;
  char c;

  if (n /2)
    count += print_bin(n / 2);
  c = (n % 2) + '0';
  count += write(1, &c, 1);
  return (count);
}
