#include "../main.h"

int pspec(va_list args, char *buffer, int *buf_i, int *total)
{
    char *str;
    int i = 0;

    str = va_arg(args, char *);
    if (str == NULL)
        {
            buffer_nil(buffer, buf_i, total);
            return (0);
        }
    while (str[i])
    {
        if ((unsigned char)str[i] < 32 || (unsigned char)str[i] >= 127)
            print_schar(buffer, buf_i, (unsigned char)str[i], total);
        else
            buffer_write(buffer, buf_i, str[i], total);
        i++;
    }
return (0);
}