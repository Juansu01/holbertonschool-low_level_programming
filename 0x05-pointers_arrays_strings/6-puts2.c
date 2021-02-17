#include <stdio.h>
#include "holberton.h"

/**
 * puts2 - print everyother character of a string.
 *
 *@str: Will be the string.
 *
 *
 *
 * Return: 0.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

