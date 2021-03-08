#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct dog - struct for dog data.
 *
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* HOLBERTON_H */
