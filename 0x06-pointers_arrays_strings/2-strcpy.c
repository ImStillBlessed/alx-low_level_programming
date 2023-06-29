#include "main.h"
/**
 * _strcpy - copies strings
 * @src: first
 * @dest: second
 * @n: number of characters
 * Return: void.
*/
char *_strncpy(char *dest, char *src, int n)
{
    int a = 0, i = 0;

    while (src[i] != '\0')
        i++;
    while (a < n) 
        {
            if (a <= i)
            {
                dest[a] = src[a];
                a++;
            }
            else
                break;
        }
    return dest;
}
