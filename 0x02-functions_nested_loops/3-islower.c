#include "main.h"
/**
 * _islower - checks if input is lowercase
 * Return: 0.
 */
int _islower(int c)
{
	if ('z' >= c >= 'a')
		return (1);
	else
		return (0);
}
