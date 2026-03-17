#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _printf- homemade printf function
 * @format: format
 * Return: VALUE
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int total = 0;
	int i = 0;

	va_start(ap, format);
	
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
			{
				int num = va_arg(ap, int);
				total += _print_int(num);	
			}
			else if(format[i] == 'u')
			{
				unsigned int num = va_arg(ap, unsigned int);
				total += _print_uint(num);
			}
			else if (format[i] == 's')
			{
				write(1, "s", 1);
			}
			else if (format[i] == 'c')
			{
				char *c = va_arg(ap, char*);
				write(1, &c, 1);
			}
			else if (format[i] == 'x' || format[i] == 'X')
			{
				write(1, "x", 1);
			}
			else if(format[i] == 'p')
			{
				write(1, "p", 1);
			}
			else if(format[i] == 'o')
			{
				write(1 , "o", 1);
			}
			else if(format[i] == '%' || format[i] == ' ')
				write(1, "%", 1);
			else
			{
				write(1, &format[i-1] , 1);
				write(1, &format[i], 1);
			}			

		}
		else
		{
			write(1, &format[i], 1);
			total++;
		}
		i++;
	}
	va_end(ap);
	return(total);
}
