#include "../main.h"

int print_schar(char *buffer, int *buf_i, unsigned char c, int *total)
{
    buffer_write(buffer, buf_i, '\\', total);
    buffer_write(buffer, buf_i, 'x', total);
    if (c < 16)
        buffer_write(buffer, buf_i, '0', total);
    print_hex(buffer, buf_i, c, 1, total);
    return (0);
}