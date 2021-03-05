#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers based off of range.
 *
 * @min: values from min
 * @max: to max.
 * Return: pointer to new array.
 *
 */

int *array_range(int min, int max)
{
	int *p, i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	p = malloc(size * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
