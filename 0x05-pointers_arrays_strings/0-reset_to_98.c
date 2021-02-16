#include <stdio.h>

/**
 * reset_to_98 - deference pointers.
 *
 * Return: Always 0.
 *
 * @n: value that will be changed.
 */

void reset_to_98(int *n)
{

	int *p;

	p = &*n;
	*p = 98;
}
