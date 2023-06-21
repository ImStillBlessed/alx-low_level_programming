#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints times table
 * @n: how the times table should be
 */
void print_times_table(int n)
{
	int col, row, num;

	if (n > 15 || n < 0)
		return (0);
	for (col = 0 ; col <= n ; col++)
	{
		for (row = 0 ; row <= n ; row++)
		{
			num = row * col;
			if (num < 100)
			{
				if (10 < num)
				{
					if (num > 0)
						printf(",   %d", num);
					printf("%d", num);
				}
				else
					printf(",  %d", num);
			}
			else
				printf(", %d", num);
		}
	}
}
