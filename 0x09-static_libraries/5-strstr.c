#include "main.h"
#include <stdlib.h>
/**
* _strstr - finds a word in a string returns rest of string
* @haystack: string to search
* @needle: word to find
* Return: the new remainder of the string.
*/
char *_strstr(char *haystack, char *needle)
{
	int j, i;
	int k = 0;
	int reset;
	char *resetneed = needle;

	if (*needle == '\0')
		return (NULL);
	while (*needle != '\0')
	{
		k++;
		needle++;
	}
	reset = k;
	needle = resetneed;
	while (*haystack != '\0')
	{
		if (k == 0)
		{
			needle = resetneed;
			for (i = 0 ; needle[i] != '\0' ; i++)
				;
			for (j = 0 ; haystack[j] != '\0' ; j++)
				needle[i] = haystack[j];
			return (needle);
		}
		if (*needle == *haystack)
		{
			k--;
			needle++;
		}
		else
		{
			k = reset;
			needle = resetneed;
		}
		haystack++;
	}
	return (NULL);
}
