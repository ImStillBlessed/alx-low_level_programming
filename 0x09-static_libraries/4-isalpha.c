#include "main.h"
/**
 * _isalpha - checks if *c is alpha
 *
 * @c: value to be checked
 * Return: 0.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
