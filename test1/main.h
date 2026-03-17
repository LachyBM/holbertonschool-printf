#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int percent(int i, const char *format, va_list args);

typedef struct specchar
{
  char symbol;
  void (*action)(va_list);
  void (*escape)(va_list);
}char_check;

#endif
