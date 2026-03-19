#include "../main.h"
/**
 *Prints unsigned number
 */
int print_uns(unsigned int n)
{
  int count = 0;

  if (n / 10)
    count += print_uns(n / 10);

  count += print_digit(n % 10);
  return (count);
}
