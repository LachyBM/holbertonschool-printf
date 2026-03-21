#include "../main.h"

int print_rot13(char *buffer, int *buf_i, char *c, int *total)
{
        char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
        char *normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        int i = 0;
        int j = 0;

        while (c[i])
        {
        j = 0;
        while (normal[j])
        {
                if(c[i] == normal[j])
                {
                        buffer_write(buffer, buf_i, rot13[j], total);
                        break;
                }
                j++;
        }
        if(!normal[j])
                buffer_write(buffer, buf_i, c[i], total);
        i++;
        }
        return (0);
}
