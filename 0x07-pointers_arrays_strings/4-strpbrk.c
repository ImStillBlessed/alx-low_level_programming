#include "main.h"
#include <stdlib.h>
/**
* _strpbrk - returns the number where the first occurance 
* of a value from @s2 in @s1
* @s: string to check 
* @accept: values tk compare @s
* Return: the position... I think. 
*/
char *_strpbrk(char *s, char *accept)
{
	int k = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return s;
			}
			accept++;
		}
		s++;
		k++;
	}
	return NULL;
}
