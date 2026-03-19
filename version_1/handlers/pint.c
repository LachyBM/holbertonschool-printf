#include "../main.h"
/**
 *Print signed integer
 */
int pint(va_list args)
{
  int n = va_arg(args, int);
  int count = 0;
  long num = n;

  if (num < 0)
    {
      write(1, "-", 1);
      count++;
      num = -num;
    }

  if (num / 10)
    count += print_number(num / 10);

  count += print_digit(num % 10);
  return (count);
}
