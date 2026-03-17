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

int _print_string(char *string)
{
	int length = 0;

	while(string[length])
		length++;
	write(1, string, length);
	return (length);
}

int _print_char(char *c)
{
	write(1, &c, 1);
	return (1);
}

unsigned int _print_hex(unsigned int hex, int upper)
{
	int length = 0;
	char c;
	char *hexnum;
	
	if (upper == 1)
	{
		hexnum = "0123456789ABCDEF";
	}
	else
	{
		hexnum = "0123456789abcdef";
	}
	if (hex >= 16)
		length += _print_hex(hex/16, upper);
	c = hexnum[hex % 16];
	write(1, &c, 1);
	length++;

	return (length);
}

unsigned int _print_oct(unsigned int oct)
{
	int length = 0;
        char c;
        char *octnum = "01234567";

        if (oct >= 8)
                length += _print_oct(oct/8);
        c = octnum[oct % 8];
        write(1, &c, 1);
	length++;

        return (length);
}


