#include "main.h"

/**
 *pchar-prints a character
 *@c:a string
 */

int pchar(va_list args)
{
  char c = va_arg(args, int);
  return (write(1, &c, 1));
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

unsigned int puint(va_list args)
{
  int len = 0;
  char c;
  unsigned int num = va_arg(args, unsigned int)

  if (num >= 10)
    len += puint(num / 10);
  c = (num % 10) + '0';
  write(1, &c, 1);
  len++;

  return (len);
}

/**
 *Print unsigned integer as octal
 */

int poct(va_list args)
{
  unsigned int num = va_arg(args, unsigned int);
  char c;
  int len = 0;

  if (num >= 8)
    len += poct(num / 8);
  c = (num % 8) + '0';
  write(1, &c, 1);
  len++;
    }
return (len);
}



int percent(va_list args)
{
(void)args;
return (write(1, "%", 1));
}
