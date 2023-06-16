#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;
	char alpha;

	for (d = '0' ; d <= '9' ; d++)
		putchar(d);
	for (alpha = 'a' ; alpha <= 'f' ; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
