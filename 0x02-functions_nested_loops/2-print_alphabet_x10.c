#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i = 0, y;

	while (i < 10)
	{

		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}



		_putchar('\n');
		i++;
	}

}
