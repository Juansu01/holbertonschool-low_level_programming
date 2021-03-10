#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name.
 *
 * @name: name that will be printed.
 *
 * Return: Void, so it doesn't return.
 *
 * @f: Pointer to function.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
