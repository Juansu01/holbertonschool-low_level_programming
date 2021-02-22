#include "holberton.h"

/**
 * _memcpy - copy memory area.
 *
 * @dest: Pointer to the memory.
 * @src: Character to fill the area with.
 * @n: Number of bytes copied from memory area.
 *
 * Return: Returns a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;
	char *pdest = dest;
	char *psrc = src;

	for (j = 0; j < n; j++)
	{
		pdest[j] = psrc[j];
	}
	return (pdest);
}

