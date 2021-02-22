#include "holberton.h"

/**
 * _strspn - get length of a string.
 *
 * @s: First string.
 * @accept: Second string.
 *
 * Return: Returns number of bytes in the initial segment.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, counter;

	counter =  0;

	for (i = 0; s[i] != '\0' && s[i] != 32; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
			}
		}
	}
	return (counter);
}
