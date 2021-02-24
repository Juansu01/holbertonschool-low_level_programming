#include "holberton.h"

/**
 * _puts_recursion - prints a string.
 *
 * @s: string that will be printed.
 *
 *
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(++s);
	}
	else
	{
		_putchar(10);
	}
}
