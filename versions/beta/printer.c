#include "main.h"

/**
 *Print a Char
 */
int pchar(va_list args)
{
  char c = va_arg(args, int);
  return write(1, &c, 1);
}

/**
 *Print a Char *
 */
int pstring(va_list args)
{
  char *str = va_arg(args, char *);
  int len = 0;
  
  if (!str)
    str = "(null)";
  
  while (str[len])
    len++;
  write(1, str, len);
  return len;
}

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

/**
 *Print a percent literal
 */
int percent(va_list args)
{
  (void)args;
  return write(1, "%", 1);
}

/**
 *Print an unsigned int
 */
int puint(va_list args)
{
  unsigned int n = va_arg(args, unsigned int);
  return (print_uns(n));
}

/**
 *Print a lowercase Hex int
 */
int phexl(va_list args)
{
  unsigned int n = va_arg(args, unsigned int);
  return (print_hex(n, 0));
}

/**
 *Print an uppercase Hex int
 */
int phexu(va_list args)
{
  unsigned int n = va_arg(args, unsigned int);
  return (print_hex(n, 1));
}

/**
 *Print a Binary int
 */
int pbin(va_list args)
{
  unsigned int n = va_arg(args, unsigned int);
  return (print_bin(n));
}
