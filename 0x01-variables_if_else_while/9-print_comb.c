#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Print numbers separated by commas
 *
 *Return: 0
 */

int main(void)
{

	int nu;

	for (nu = '0'; nu <= '9'; nu++)
	{
		putchar(nu);
		if (nu < '9')
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);

}
