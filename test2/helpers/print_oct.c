#include "../main.h"
/**
 *Prints an Oct
 */
int print_oct(unsigned int n)
{
  int count = 0;
  char c;
  char *digits = "01234567";

  if (n >= 8)
    count += print_oct(n/8);
  c = digits[n % 8];
  count += write(1, &c, 1);
  return (count);
}
