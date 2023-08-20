#include <stdio.h>
#include <stdlib.h>
void print_opcodes(int num_bytes);

/**
 * print_opcodes - pri ts the opcode for the function
 * @num_bytes: number of bytes as inout
 * Return: nothing.
 */

void print_opcodes(int num_bytes)
{
	int i;
	void (*ptr)() = print_opcodes;

	for (i = 0; i < num_bytes; i++)
	{
		unsigned char opcode = *((unsigned char*)ptr + i);
		printf("%02x", opcode);
	}

	printf("\n");
}

/**
 * main - Entry point
 * @argc: variable count
 * @argv: variable array.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num_bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}
	if (num_bytes <= 0)
	{
		printf("Error\n");
		return 2;
	}

	print_opcodes(num_bytes);

	return 0;
}
