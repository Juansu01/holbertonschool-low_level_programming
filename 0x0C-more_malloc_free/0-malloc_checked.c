#include <stdlib.h>

/**
 * malloc_checked - causes normal process termination with status value of 90.
 * @b: Allocate memory to this.
 *
 * Return: Returns a pointer to allocated memory.
 *
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b); /*allocate memory for b*/
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
