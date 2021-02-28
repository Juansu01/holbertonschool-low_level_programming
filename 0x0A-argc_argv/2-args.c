#include <stdio.h>

/**
 * main - print name of program.
 *
 * @argc: var.
 *
 * @argv: var.
 *
 * Return: Returns int.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
