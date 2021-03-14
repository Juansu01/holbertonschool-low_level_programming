#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
* get_op_func - Find operation to execute.
*
* @s: Pointer to a char.
* Return: Returns an int.
*
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	for (; ops[i].op != NULL; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			break;
		}
	}
	return (ops[i].f);
}
