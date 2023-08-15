#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes a struct "dog"
 * @d: pointer to the struct dog
 * @name: name of the dog
 * @age: dog age in years
 * @owner: name of prrskn with legal ownership of @name
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
