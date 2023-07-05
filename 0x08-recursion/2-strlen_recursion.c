#include "main.h"
/**
 * _strlen_recursion - returns the lenght of a string
 * @s: the string to count
 * Return: the integer lenght of the string
 */
int _strlen_recursion(char *s)
{
	int k = 0;

	if (*s == '\0')
		return (k);
	k++;
	k += _strlen_recursion(s + 1);
	return (k);
}
