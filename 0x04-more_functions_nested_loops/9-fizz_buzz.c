#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: void.
 */

int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", a);
		}

		if (a != 100)
			_putchar(' ');
		a++;
	}
	printf('\n');
	return (0);
}
