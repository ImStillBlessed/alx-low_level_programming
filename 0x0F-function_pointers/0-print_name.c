#include "function_pointers.h"

/**
 * print_name - prints the name by calling a function
 * @name: string name to print
 * @f: function it calls
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
