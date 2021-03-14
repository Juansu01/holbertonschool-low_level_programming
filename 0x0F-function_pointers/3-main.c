#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
* main - change chars to ints, and find function
* @argc: number of arguments.
* @argv: arguments
* Return: Returns an int.
*/

int main(int argc, char *argv[])
{
	int a, b; /*First and second argument*/
	int ex_int; /*integer that comes from chars*/
	int (*f)(int a, int b); /*pointer to function to know operator*/

	if (argc != 4)
	{
		printf("Error\n");
			exit(98);
	}
	a = atoi(argv[1]); /* Turning first number char into int */
	b = atoi(argv[3]); /* Turning second number char into int */
	f = get_op_func(argv[2]); /* Find what function to use */

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	ex_int = f(a, b);
	printf("%d\n", ex_int);
	return (0);
}
