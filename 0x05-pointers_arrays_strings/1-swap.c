#include <stdio.h>
#include "holberton.h"

/**
 * swap_int - swap both numbers.
 *
 *@a: fisrt number.
 *
 *@b: second number.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;

	/*Swap from a to b*/
	*a = *b;
	/*Swap from b to a*/
	*b = z;
}
