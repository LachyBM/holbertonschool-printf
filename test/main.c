#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    printf("============================================================\n");
    len = _printf("Let's try to printf a simple sentence. OURS\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("============================================================\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i] OURS\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    printf("============================================================\n");
    _printf("Negative:[%d] OURS\n", -762534);
    printf("Negative:[%d]\n", -762534);
    printf("============================================================\n");
    _printf("Unsigned:[%u] OURS\n", ui);
    printf("Unsigned:[%u]\n", ui);
    printf("============================================================\n");
    _printf("Unsigned octal:[%o] OURS\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    printf("============================================================\n");
    _printf("Unsigned hexadecimal:[%x, %X] OURS\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("============================================================\n");
    _printf("Character:[%c] OURS\n", 'H');
    printf("Character:[%c]\n", 'H');
    printf("============================================================\n");
    _printf("String:[%s] OURS\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    printf("============================================================\n");
    _printf("Address:[%p] OURS\n", addr);
    printf("Address:[%p]\n", addr);
    printf("============================================================\n");
    len = _printf("Percent:[%%] OURS\n");
    len2 = printf("Percent:[%%]\n");
    printf("============================================================\n");
    _printf("Len:[%d] OURS\n", len);
    printf("Len:[%d]\n", len2);
    printf("============================================================\n");
    _printf("Unknown:[%r] OURS\n");
    printf("Unknown:[%r]\n");
    printf("============================================================\n");
    return (0);
}
