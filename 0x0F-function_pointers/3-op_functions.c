#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - sums two numbers
* @a: number1
* @b: number2
* Return: Returns an int.
*
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - subs two numbers
* @a: number1
* @b: number2
* Return: Returns an int.
*
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - sum
* @a: number1
* @b: number2
* Return: Returns an int.
*
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - divides a by b
* @a: number1
* @b: number2
* Return: Returns an int.
*
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(99);
	}
	return (a / b);
}
/**
* op_mod - module of number
* @a: number1
* @b: number2
* Return: Returns an int.
*
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(99);
	}
	return (a % b);
}
