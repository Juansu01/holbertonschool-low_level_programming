#include "holberton.h"


/**
 *_isdigit - Returns 1 if c is a digit
 *
 *@c: Character that will be evaluated.
 *
 *Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}