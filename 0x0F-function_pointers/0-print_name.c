#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_name - prints the name by calling a function
 * @name: string name to print
 * @f: function it calls
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(0);
	f(name);
}
