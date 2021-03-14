#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings that you give it.
 *
 * @n: number of numbers that will be printed.
 * @separator: this will be printed between integers.
 *
 *
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;
	char *string;

	va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		string = va_arg(ap, char *);
		if (string)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && a < (n - 1))
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(ap);
}
