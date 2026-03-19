#include "main.h"

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

/**
 *Print Hex Number
 */
int print_hex(unsigned int n, int uppercase)
{
  int count = 0;
  char *digits;
  char c;

  if (uppercase)
    digits = "0123456789ABCDEF";
  else
    digits = "0123456789abcdef";
  if (n / 16)
    count += print_hex(n / 16, uppercase);
  c = digits[n % 16];
  count += write(1, &c, 1);
  return (count);
}
