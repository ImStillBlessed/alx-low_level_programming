#include <stdio.h>
/**
 * main - Entry point
 * Return: 0.
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
			printf("%a", a);
		}

		if (a != 100)
			putchar(' ');
		a++;
	}
	printf('\n');
	return (0);
}
