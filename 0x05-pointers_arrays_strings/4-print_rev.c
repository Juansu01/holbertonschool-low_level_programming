#include "holberton.h"

/**
 * print_rev - print string in reverse.
 *
 *@s: String.
 *
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int a;

	/*Count string length*/
	for (a = 0; s[a] != '\0'; a++)
	{
	}
	a--;

	while (a >= 0)
	{
		_putchar(s[a--]);
	}
	_putchar(10);
}

