#include "../main.h"
/**
 *Print signed integer
 */
int pint(va_list args, char *buffer, int *buf_i)
{
  long n = va_arg(args, int);
 
  if (n < 0)
    {
      buffer_write(buffer, buf_i, '-');
      n = -n;
    }

  if (n / 10)
    print_number(buffer, buf_i, n / 10);

  print_digit(buffer, buf_i, n % 10);
  return (0);
}
