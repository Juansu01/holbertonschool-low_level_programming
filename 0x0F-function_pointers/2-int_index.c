#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - look for a match in a string.
 *
 * @array: this is the array we're gonna be using.
 * @size: we're gonna compare using this size.
 * @cmp: pointer to function compare.
 *
 * Return: Returns index on success, -1 if fails.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) && a < size)
		{
			return (a);
		}
	}
	return (-1);
}
