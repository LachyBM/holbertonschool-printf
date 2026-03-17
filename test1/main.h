#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "printer.h"
#include "percent.h"

/**
 *_printf-main function
 *@format:a string
 *Return:printf behaviour
 */

int _printf(const char *format, ...);

/**
 * Helper Functions
 */

int pchar(va_list args);
int pstring(va_list args);
int pint(va_list args);
int puint(va_list args);
int poct(va_list args);
int percent(va_list args);

/**
 * Escape
 */

/** int escape(char c); */

/**
 * Struct Mapping Specifiers to Handlers
 */

typedef struct specchar
{
  char symbol;
  int (*handler)(va_list args);
} char_check;

#endif
