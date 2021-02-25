#include "holberton.h"

/**
 * _sqrt_recursion - find n square root.
 *
 * @n: Number tha will be given its square root.
 *
 * Return: Returns int.
 */

int _sqrt_recursion(int n)
{
	int a;

	a = 1;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}

	return (find_sqrt(n, a));
}

/**
 * find_sqrt - finds square root of n.
 *
 * @a: square root counter.
 * @n: int.
 *
 * Return: Returns square root.
 */

int find_sqrt(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}

	if (a * a > n)
	{
		return (-1);
	}

	return (find_sqrt(n, a + 1));
}

