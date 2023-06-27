#include "main.h"

/**
* rev_string - reverses a string
* @s: string input
* Return: void.
*/
void rev_string(char *s)
{
	char i;
	int j = _strlen(s);

	while (s[j--])
	{
		i = i + s[j];
	}
	for (int index = 0 ; index <= _strlen(s) ; index++)
	{
		s[index] = i[index];
	}
}
