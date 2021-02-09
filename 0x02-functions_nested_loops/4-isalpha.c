#include "holberton.h"

/**
 * _isalpha - tell if a letter is lowercase or not.
 * @c: Character that will be evaluated.
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}


}
