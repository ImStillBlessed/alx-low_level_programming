#include "main.h"
/**
 * rot13 - encodes a string to rot 13
 * @str: string to be encodeed
 * Returm: encoded string
*/
char *rot13(char *str)
{
    char *ptr = str;
    char alpha[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

    while (*ptr != '\0')
    {
        int is_upper = (*ptr >= 65 && *ptr <= 90);
        int is_lower = (*ptr >= 97 && *ptr <= 122);

        if (is_upper || is_lower)
        {
            char *alpha_ptr = alpha + ((*ptr & 31) - 1 + (is_lower * 26));

            *ptr = *alpha_ptr;
        }
        ptr++;
    }

    return str;
}