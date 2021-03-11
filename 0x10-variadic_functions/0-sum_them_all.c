#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums a number of numbers.
 *
 * @n: number of numbers.
 *
 *
 * Return: This returns a sum.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int a;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	sum = 0;
	for (a = 0; a < n; a++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);
}
