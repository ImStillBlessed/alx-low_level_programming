#include <stdio.h>
#include "lists.h"

/**
 * first - prints before the main function
 * Return: nothing.
 */
void first() __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
