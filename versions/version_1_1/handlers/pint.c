#include "../main.h"
/**
 *Print signed integer
 */
int pint(va_list args, char *buffer, int buf_i)
{
  long n = va_arg(args, int);
  int count = 0;
 
  if (n < 0)
    {
      buffer_write(buffer, buf_i, '-');
      count++;
      n = -n;
    }

  if (n / 10)
    count += print_number(buffer, buf_i, n / 10);

  count += print_digit(buffer, buf_i, n % 10);
  return (count);
}
