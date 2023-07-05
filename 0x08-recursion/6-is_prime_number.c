#include "main.h"
int check(int n, int divider);
int is_prime_number(int n);

/**
 * check - checks if a number is prime
 * @num: number to check
 * @divider: the divider to check the number
 * Return: 1 if the number is prime, 0 if the number is not.
 */
int check(int n, int divider)
{
	if (divider == n / 2)
		return (1);
	if (n % divider == 0)
		return (0);
	return (check(n, divider + 1));
}

/**
 * is_prime_number - Checks if the number is a prime number
 * @n: number to check
 * Return: 1 if prime or 0 if not prime
 */
int is_prime_number(int n)
{
	if (n < 2 || n % 2 == 0)
		return (0);
	return (check(n, 3));
}
