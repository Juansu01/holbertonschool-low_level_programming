#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize variables in struct.
 *
 * @d: parameter.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 *
 *
 * Return: doesn't return.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
