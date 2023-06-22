#include <stdio.h>
/**
 * main - Entry point
 * Return: 0.
 */

int main(void)
{
	int a;

	a = 2;
	printf("1");
	while (a <= 100)
	{
		if (a % 3 == 0)
			printf(" Fizz");
		else if (a % 5 == 0)
			printf(" Buzz");
		else if ( a % 3 == 0 && a % 5 == 0)
			printf(" FizzBuzz");
		else
			printf(" %d", a);
		a++;
	}
}
