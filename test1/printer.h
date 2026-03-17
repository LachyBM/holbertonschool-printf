#include "main.h"

/**
 *pchar-prints a character
 *@c:a string
 */

int pchar(char *c)
{
  write(1, c, 1);
  return (1);
}

/**
 * pint- prints the int value
 * @num: format
 * Return: VALUE of int from num
 */

int pint(int num)
{
  int length = 0;
  char c;

  if (num < 0)
    {
      write(1, "-", 1);
      length++;
      num = -num;
    }
  if (num >= 10)
    length += pint(num / 10);
  c = (num % 10) + '0';
  write(1, &c, 1);
  length++;

  return (length);
}

/**
 *pfloat-prints a double
 *@args:arguments
 */

void pfloat(va_list args)
{
  double f = va_arg(args, double);
  printf("%f", f);
}

/**
 *pstring-prints a string or (nil) if string == NULL
 *@string:a string
 */

int pstring(char *string)
{
  int length = 0;

  while(string[length])
    length++;
  write(1, string, length);
  return (length);
}

/**
 *puint-prints an unsigned string
 *@unum:unsigned int
 */

unsigned int puint(unsigned int unum)
{
  int length = 0;
  char c;

  if (unum >= 10)
    length += puint(unum / 10);
  c = (unum % 10) + '0';
  write(1, &c, 1);
  length++;

  return (length);
}

int *escape(char *c)
{
  c = format;
  return (c);
    }
