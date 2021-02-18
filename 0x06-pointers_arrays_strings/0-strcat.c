#include <stdio.h>
#include "holberton.h"

/**
 * _strcat - concatenate two strings.
 *
 * @dest: string will be appended to.
 *
 * @src: string to append.
 *
 * Return: Will return dest.
 */

char *_strcat(char *dest, char *src)
{

	int length, i;

	length = 0;
	while (dest[length] != '\0')
	{
		++length;
	}

	for (i = 0; src[i] != '\0'; ++i, ++length)
	{
		dest[length] = src[i];
	}

	dest[length] = '\0';
	return (dest);
}

