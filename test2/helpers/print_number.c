#include "../main.h"
/**
 *Prints a digit
 */
int print_digit(int d)
{
  char c = d + '0';
  return (write(1, &c, 1));
}

/**
 *Prints a number
 */
int print_number(long n)
{
  int count = 0;

  if (n / 10)
    count += print_number(n / 10);

  count += print_digit(n % 10);

  return (count);
}
