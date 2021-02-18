#include <stdio.h>
#include "holberton.h"

/**
 * _strncat - concatenate two strings til n digit.
 *
 * @dest: string will be appended to.
 *
 * @src: string to append.
 *
 * @n: number of the digit.
 *
 * Return: Will return dest.
 */

char *_strncat(char *dest, char *src, int n)
{

	int length, i;

	length = 0;
	while (dest[length] != '\0')
	{
		++length;
	}

	for (i = 0; src[i] != '\0'; ++i, ++length)
	{
		if (i < n)
		{
			dest[length] = src[i];
		}
	}

	dest[length] = '\0';
	return (dest);
}

