#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct specchar
{
  char symbol;
  void (*action)(va_list);
  void (*escape)(va_list);
}char_check;

#endif
