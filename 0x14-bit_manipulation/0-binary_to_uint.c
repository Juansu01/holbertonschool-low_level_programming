#include "holberton.h"

/**
 * binary_to_uint - Turns binary to decimal.
 * @b: pointer to string.
 *
 * Return: Returns decimal.
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val, k, len;
	int i;

	k = 1;

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			val += k;
		}
		k *= 2;
	}
	return (val);
}
