#include "holberton.h"
#include <stdio.h>

/**
 * _abs - Compute absolute value of an interger.
 *
 * @n: Number that will be evaluated.
 *
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

	else
	{
		return (n);
	}

}
