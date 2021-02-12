#include "holberton.h"

/**
 * print_diagonal - print a diagonal n times.
 *
 *
 *@n: Times the diagonal will be printed.
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}

