#include "main.h"
/**
 * _memset - fills selected memory areas with given bytes
 * @s: area pointer
 * @n: area pointed
 * @b: character to fill the area
 * Return: a pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
