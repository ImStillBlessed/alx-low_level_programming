#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the dog
 * @d: pointer to the struct.
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: nil");
	if (d->age == 0)
		printf("Age: nil");
	else
		printf("Age: %f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: nil");
}
