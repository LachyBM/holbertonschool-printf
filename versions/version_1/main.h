#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * Handler Functions - Held in Specchar Struct
 */

int pchar(va_list args);
int pstring(va_list args);
int pint(va_list args);
int percent(va_list args);
int puint(va_list args);
int phexu(va_list args);
int phexl(va_list args);
int pbin(va_list args);
int poct(va_list args);
int paddr(va_list args);

/**
 * Print_Numbers Functions
 */

int print_digit(int d);
int print_number(long n);
int print_uns(unsigned int n);
int print_hex(unsigned long int n, int uppercase);
int print_bin(unsigned int n);
int print_oct(unsigned int n);
int print_addr(void *addr);

/**
 * Struct Mapping Specifiers to Handlers
 */

typedef struct specchar
{
  char symbol;
  int (*helper)(va_list args);
} char_check;

extern char_check specchar[];

#endif
