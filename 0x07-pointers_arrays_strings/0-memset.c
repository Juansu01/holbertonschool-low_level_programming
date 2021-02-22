#include "holberton.h"

/**
 * _memset - fill memory with a constant byte.
 *
 * @s: Pointer to the memory.
 * @b: Character to fill the area with.
 * @n: Number of bytes.
 *
 * Return: Returns a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;
	char *mem = s, by = b;

	for (j = 0; j < n; j++)
	{
		mem[j] = by;
	}
	return (mem);
}

