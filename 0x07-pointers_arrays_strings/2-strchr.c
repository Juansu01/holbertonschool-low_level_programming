#include "holberton.h"

/**
 * _strchr - locate character in a string.
 *
 * @s: String that we're gonna use.
 * @c: Character that we're looking for.
 *
 * Return: Returns NULL or character if found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}

	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
}
