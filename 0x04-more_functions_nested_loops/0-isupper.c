#include "main.h"

/**
 * _isupper - checks uppercase letters
 * @c: value to be checked
 * Return: 0.
 */

int _isupper(char c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
