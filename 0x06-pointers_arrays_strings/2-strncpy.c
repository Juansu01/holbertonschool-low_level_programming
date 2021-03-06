#include "holberton.h"

/**
 * _strncpy - copy a string.
 *
 * @dest: Destination.
 * @src: Source.
 * @n: copy til this number.
 *
 * Return: Destination.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
