#include "holberton.h"

/**
 * _isupper - tell if a letter is uppercase or not.
 * @c: Character that will be evaluated.
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}


}
