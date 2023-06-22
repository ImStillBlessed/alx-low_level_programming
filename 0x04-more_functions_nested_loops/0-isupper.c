#include "main.h"

/**
 * _isupper - checks uppercase letters
 * @c: value tp be checked
 * Return: 0.
 */
int _isupper(int c)
{
	if (c > 64) && (c < 91)
	{
		return (1);
	}
	else
		return(0);
}
