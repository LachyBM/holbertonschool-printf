#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
* _print_int- prints the int value
* @num: format
* Return: VALUE of int from num
*/

int _print_int(int num)
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
		length += _print_int(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
	length++;

	return (length);
}

/**
* _print_uint(unsigned int num)
* @unum: format
* Return: VALUE of unsigned int from num
*/

unsigned int _print_uint(unsigned int unum)
{
	int length = 0;
	char c;

	if (unum >= 10)
		length += _print_int(unum / 10);
	c = (unum % 10) + '0';
	write(1, &c, 1);
	length++;

	return (length);
}

