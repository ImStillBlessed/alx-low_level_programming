#include "main.h"
/**
* _strchr - checks for string occurance and prints what's left
* @s: string to check
* @c: character to check for
* Return: new string.
*/
char *_strchr(char *s, char c)
{
	int i = 0
	int k = 0;
	char *temp = s;

	while (*s != '\0')
	{
		if (*s == c || k > 0)
		{
			k++;
			temp[i] = s[i];
		}
		i++;
		s++;
	}
	temp[i] = '\0';
	return temp;
}
