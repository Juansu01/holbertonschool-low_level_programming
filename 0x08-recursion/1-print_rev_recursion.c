#include "holberton.h"

/**
 * _print_rev_recursion - print string in reverse.
 *
 * @s: string that will be printed.
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}

}
