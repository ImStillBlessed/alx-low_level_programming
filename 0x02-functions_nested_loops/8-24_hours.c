#include "main.h"
/**
 * jack_bauer - prints time
 * Return: 0.
 */
void jack_bauer(void)
{
	int th, h, tm, m;

	for (th = 0 ; th <= 2 ; th++)
	{
		for (h = 0 ; h <= 9 ; h++)
		{
			if (th == 2 && h == 4)
				break;
			for (tm = 0 ; tm <= 6 ; tm++)
			{
				for (m = 0 ; m <= 9 ; m++)
				{
					_putchar('0' + th);
					_putchar('0' + h);
					_putchar(':');
					_putchar('0' + tm);
					_putchar('0' + m);
					_putchar('\n');
				}
			}
		}
	}
}
