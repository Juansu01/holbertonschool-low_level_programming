#include <stdio.h>

/**
 * main - print name of program.
 *
 * @argc: var.
 *
 * @argv: var.
 *
 * Return: Always return 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
