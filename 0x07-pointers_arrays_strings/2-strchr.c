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
	int i = 0;
	int k = 0;
	char *temp = s;

	while (*s != '\0')
	{
		if (*s == c)
			k++;
		if (k > 0)
		{
			temp[i] = *s;
			i++;
		}
		s++;
	}
	if (k == 0)
		return NULL;
	temp[i] = '\0';
	return temp;
}
