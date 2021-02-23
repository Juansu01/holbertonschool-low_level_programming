#include "holberton.h"

/**
 * _strstr - look for substring.
 *
 * @haystack: First string.
 * @needle: Second string.
 *
 * Return: Returns a pointer to the needle if match is found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] && haystack[i] == needle[0])
			{
				return (haystack + i);
			}
		}
	}
	return (0);
}
