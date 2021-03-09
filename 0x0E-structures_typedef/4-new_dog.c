#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - allocate memory for new dog.
 *
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: A pointer to struct.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x, y, a, b;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (x = 0; name[x] != '\0'; x++)
	{
	}
	x++;
	dog->name = malloc(x * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (y = 0; owner[y] != '\0'; y++)
	{
	}
	y++;
	dog->owner = malloc(y * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (a = 0; a < x; a++)
		dog->name[a] = name[a];
			dog->age = age;
	for (b = 0; b < y; b++)
	{
		dog->owner[b] = owner[b];
	}
	return (dog);
}
