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


	for (y = 'a'; y <= 'z'; y++)
	{
		putchar(y);



	}

	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);



	}

	putchar(10);
	return (0);
}
