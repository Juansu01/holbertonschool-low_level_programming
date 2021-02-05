#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the whole alphabet and delete q and e
 * Return: 0
 */

int main(void)
{
	char y;


	for (y = 'a'; y <= 'z'; y++)
		if (y != 'e' && y != 'q')
	{
		putchar(y);



	}
	putchar(10);
	return (0);
}
