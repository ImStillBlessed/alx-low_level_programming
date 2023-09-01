#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8; // Assuming 8 bits per byte
	int i;
	unsigned long int mask;
	
	for (i = size - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		int bit = (n & mask) != 0;
		printf("%d", bit);
	}
}
