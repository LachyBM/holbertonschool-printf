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
    {'u', puint},
    {'x', phexl},
    {'X', phexu},
  };

  if (format == NULL)
    return (-1);

  va_start(args, format);

  while (format && format[i])
    {
      if (format[i] == '%')
	{
	  i++;
	  j = 0;
	  if (format[i] == '\0')
	    return (-1);
	  while (specchar[j].symbol)
	    {
	      if (format[i] == specchar[j].symbol)
		{
		  total += specchar[j].helper(args);
		  break;
		}
	      j++;
	    }
	  if (specchar[j].symbol == '\0')
	    {
	      write(1, "%", 1);
	      write(1, &format[i], 1);
	      total += 2;
	    }
	}
      else
	{
	  write (1, &format[i], 1);
	  total++;
	}
      i++;
    }
  va_end(args);
  return (total);
}
