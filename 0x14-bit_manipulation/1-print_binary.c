#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_binary(unsigned long int n)
{
	int* binary;
	int j, i = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}
	binary = malloc(sizeof(int) * 64);
	if (binary == NULL)
		return;

	while (n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		printf("%d", binary[j]);
	free(binary);
}
