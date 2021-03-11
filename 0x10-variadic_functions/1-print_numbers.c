#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers that you give it.
 *
 * @n: number of numbers that will be printed.
 * @separator: this will be printed between integers.
 *
 *
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;
	int numbers;

	va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		numbers = va_arg(ap, int);
		if (separator != NULL && a != (n - 1))
		{
			printf("%d%s", numbers, separator);
		}
		else
		{
			printf("%d", numbers);
		}
	}
	printf("\n");
	va_end(ap);
}
