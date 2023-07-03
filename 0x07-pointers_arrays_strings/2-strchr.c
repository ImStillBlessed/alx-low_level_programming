#include "main.h"
/**
* _strchr - checks for string occurance and prints what's left
* @s: string to check
* @c: character to check for
* Return: new string.
*/
char *_strchr(char *s, char c)
{
	int i, k;
	char temp = s;

	while (s != '\0')
	{
		if (s[i] == c || k > 0)
		{
			k++;
			temp[i] = s[i];
		}
		i++;
	}
	*s = temp;
	return s;
}
