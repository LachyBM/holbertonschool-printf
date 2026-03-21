#include "../main.h"

int prot13(va_list args, char *buffer, int *buf_i, int *total)
{
        char *str;

        str = va_arg(args, char *);

        if (str == NULL)
        {
                buffer_nil(buffer, buf_i, total);
                return (0);
        }

        print_rot13(buffer, buf_i, str, total);

        return (0);
}
