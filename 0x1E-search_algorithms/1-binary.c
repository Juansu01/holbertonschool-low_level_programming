#include "search_algos.h"

/**
 * binary_search - This function uses binary search
 * @array: The array that we're gonna use to find the value
 * @size: The size of the array
 * @value: Value that we're going to search inside the array
 * Return: Returns the index where the value was found, -1 if it fails.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t end_x, start_x, mid, i;

	if (!array)
		return (-1);
	end_x = size - 1;
	start_x = 0;
	while (start_x <= end_x)
	{
		printf("Searching in array: ");
		for (i = start_x; i <= end_x; i++)
		{
			if (i == end_x)
			{
				printf("%d", array[i]);
				break;
			}
			printf("%d, ", array[i]);
		}
		printf("\n");
		mid = start_x + (end_x - start_x) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start_x = mid + 1;
		else
			end_x = mid - 1;
	}
	return (-1);
}
