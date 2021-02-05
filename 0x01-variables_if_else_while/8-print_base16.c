#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the whole alphabet
 * Return: 0
 */

int main(void)
{
	char y;


	for (y = '0'; y <= '9'; y++)
	{
		putchar(y);



	}

	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);



	}

	putchar(10);
	return (0);
}
