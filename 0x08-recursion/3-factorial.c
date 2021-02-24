#include "holberton.h"

/**
 * factorial - returns the factorial of a number.
 *
 * @n: Number that will be given its factorial.
 *
 * Return: Returns a factorial.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
