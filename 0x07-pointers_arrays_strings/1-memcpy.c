#include "main.h"
/**
* _memcpy - copies data from @src to @dest
* @src: source pointer with strings to copy
* @dest: buffer tk copy the data to
* @n: amount of @src to copy
* Return: pointer to the new buffer.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
