#include "main.h"
/**
 * factorial - returns the factorial of a given number @n
 * @n: number to factorize
 * Return: factorial.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	n *= factorial(n - 1);
	return (n);
}
