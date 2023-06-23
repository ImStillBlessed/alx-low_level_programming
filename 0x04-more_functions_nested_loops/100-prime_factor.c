#include <stdio.h>

/**
 * main - Entry point
 * Return: void
 */
int main(void)
{
	int largest = 0;
	long long num = 612852475143;
	int i;

	while (num % 2 == 0)
	{
		largest = 2;
		num = num / 2;
	}

	for (i = 3 ; i * i <= num ; i += 2)
	{
		while (num % i == 0)
		{
			largest = i;
			num = num / i;
		}
	}
	if (num > 2)
		largest = num;
	printf("%lld\n", largest);
}
