#include <stdio.h>

/**
 * main - print number of arguments.
 *
 * @argc: var.
 *
 * @argv: var.
 *
 * Return: Returns an int.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int a;

	a = argc - 1;
	printf("%d\n", a);
	return (0);
}
