#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers.
 *
 * @argc: first number.
 *
 * @argv: second number.
 *
 * Return: Always return 0.
 */

int main(int argc, char *argv[])
{
	int a, b, m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	m = a * b;
	printf("%d\n", m);
	return (0);
}
