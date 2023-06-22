#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: digit
 * Return: 0.
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
