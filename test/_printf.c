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
			total += _switch(format[i], ap);		
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
