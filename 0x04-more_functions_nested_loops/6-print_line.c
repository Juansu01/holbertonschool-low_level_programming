#include "holberton.h"

/**
 * print_line - print a line n times.
 *
 *
 *
 *@n: number of lines
 *
 *
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar(10);
	}
	else if (n > 0)
	{
		for (a = 1 ; a <= n ; a++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
}
