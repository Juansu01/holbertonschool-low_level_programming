#include "holberton.h"

/**
 * _islower - tell if a letter is lowercase or not.
 * @c: Character that will be evaluated.
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}

	else
	{
		return (1);
	}


}
