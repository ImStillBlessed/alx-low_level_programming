#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: void
*/
int _strcmp(char *s1, char *s2)
{
    int res = 0;
    int i;

    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            res = s1[i] - s2[i];
            break;
        }
    }
    return res;
    
}