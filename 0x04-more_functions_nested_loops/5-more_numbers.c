#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return: 0.
 */
void more_numbers(void)
{
	int a;
	int b = 10;

	while (b > 0)
	{
		a = 0;
		while (a <= 14)
		{
			if (a > 9)
			{
				_putchar('1');
			}
			_putchar('0' + a % 10);
			a++;
		}
		b--;
		_putchar('\n');
	}
}
