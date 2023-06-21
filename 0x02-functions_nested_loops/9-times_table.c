#include "main.h"
/**
 * times_table - prints times table up to 9
 * Return: 0.
 */
void times_table(void)
{
	int r, c, num;

	for (r = 1 ; r <= 9 ; r++)
	{
		_putchar('0' + 0);
		for (c = 0 ; c <= 9 ; c++)
		{
			num = c * r;
			if (num < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + num);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + num / 10);
				_putchar('0' + num % 10);
			}
		}
		_putchar('\n');
	}
}
