#include "main.h" 
/**
* _strpbrk - returns the number where the first occurance 
* of a value from @s2 in @s1
* @s: string to check 
* @accept: values tk compare @s
* Return: the position... I think. 
*/
char *_strpbrk(char *s, char *accept)
{
	char *temp = NULL;
	int k = 0;

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
		return temp;
	else
		return NULL;
}
