#include "main.c"
#include "main.h"

int _printf(const char *format, ...)
{
  va_list args;
  int total = 0, i = 0, j;

  char_check specchar[] = {
    {'%', percent},
    {'c', pchar},
    {'s', pstring},
    {'d', pint},
    {'i', pint},
  };
  
  va_start(args, format);

  while (format && format[i])
    {
      if (format[i] == '%')
	{
	  i++;
	  j = 0;
	  while (specchar[j].symbol)
	    {
	      if (format[i] == specchar[j].symbol)
		{
		  total += specchar[j].helper(args);
		  break;
		}
	      j++;
	    }
	}
      else
	{
	  write (1, &format[i], 1);
	  count++;
	}
      i++;
    }
  va_end(args);
  return (total);
}
