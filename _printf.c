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

  if (format == NULL)
    return (-1);
  
  va_start(args, format);

  while (format && format[i])
    {
      if (format[i] == '%')
	{
	  j = 0;
	  if (format[i+1] == '\0')
	    return (-1);
	  while (specchar[j].symbol)
	    {
	      if (format[i+1] == specchar[j].symbol)
		{
		  total += specchar[j].helper(args);
		  matched = 1;
		  break;
		}
	      j++;
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
