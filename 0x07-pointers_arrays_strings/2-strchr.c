#include "main.h"
#include <stdlib.h>
/**
* _strchr - checks for string occurance and prints what's left
* @s: string to check
* @c: character to check for
* Return: new string.
*/
char *_strchr(char *s, char c)
{
	char *temp = NULL;
	int k = 0;

	if (c == '\0')
		return (' ');
	while (*s != '\0')
	{
		if (*s == c)
		{
			temp = s;
			k = 1;
			break;
		}
		s++;
	}
	if (k)
		return (temp);
	else
		return (NULL);
}
