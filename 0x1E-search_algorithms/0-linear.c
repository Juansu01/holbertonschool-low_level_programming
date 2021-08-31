#include "search_algos.h"

/**
 * linear_search - This function uses linear search
 * @array: The array that we're gonna use to find the value
 * @size: The size of the array
 * @value: Value that we're going to search inside the array
 * Return: Returns the index where the value was found, -1 if it fails.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
