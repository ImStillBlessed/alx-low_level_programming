#include "main.h"

/**
* _strspn - returns the number of bytes when a character not in 
* original string is found
* @s: first string to check
* @accept: second string of values to check
* Return: the bytes of value when unknown found
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	for (; *s != '\0'; s++)
	{
		for (; *accept != '\0'; accept++)
		{
			if (*accept != *s)
				return i;
			else
			{
				i++;
				accept++;
			}
		}
	}
	return i;
}
