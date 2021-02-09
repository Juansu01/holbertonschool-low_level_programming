#include "holberton.h"

/**
 * jack_bauer - Print every single minute in a day
 *
 * Return: 0
 *
 *
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}
