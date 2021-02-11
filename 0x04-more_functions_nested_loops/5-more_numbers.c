#include "holberton.h"

/**
 * more_numbers - prints 10 lines of numbers from 0 to 14.
 *
 *
 * Return: Always 0.
 *
 *
 */

void more_numbers(void)
{
	int i = 0;
	int a;
	int fd;
	int ld;

	for (i = 0; i < 10; i++)
	{

		for (a = 0; a < 15; a++)
		{


			if (a > 9)
			{
				fd = (a / 10);
				_putchar(fd + '0');
			}
			ld = (a % 10);
			_putchar(ld + '0');


		}

		_putchar('\n');

	}

}
