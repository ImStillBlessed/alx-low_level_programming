#include "main.h"
/**
 * _strncat - concats specific numbers of strings
 * @src: source string
 * @dest: new string
 * @n: number of characters to append
 * Return: new string variable
*/
char *_strncat(char *dest, char *src, int n)
{
    int a = 0, i = 0;

    while (dest[i] != '\0')
        i++;
    

    while (n > 0 && src[a] != '\0')
    {
        dest[i] = src[a];
        i++;
        a++;
        n--;
    }

    dest[i] = '\0';
    
    return dest;

}