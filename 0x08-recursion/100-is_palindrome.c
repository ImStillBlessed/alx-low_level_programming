#include "main.h"
#include <string.h>

int is_palindrome(char *s);
int check(char *s, int i, int k);

/**
 * check - checks if a string is palindromic one by one by recursion
 * @s: string
 * @i: integer representing first half of string
 * @k: integer representing the second half of the string
 * Return: 1 if palindromic 0 if not.
 */
int check(char *s, int i, int k)
{
	if (k <= i)
		return (1);
	if (s[i] == s[k])
		return (check(s, i + 1, k - 1));
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * Return: 1 if is palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int k = strlen(s);

	if (*s == '\0')
		return (1);
	return (check(s, i, k - 1));
}
