#include <stdlib.h>
#include "function_pointers.h"


/**
 * array_iterator - iterates an array and applies action to it.
 *
 * @size: this gets size_t.
 *
 * @array: this is the array we're using.
 *
 * @action: pointer to function
 *
 * Return: doesn't return.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (size && action)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
