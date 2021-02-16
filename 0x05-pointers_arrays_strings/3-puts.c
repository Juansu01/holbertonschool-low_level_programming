#include"holberton.h"
#include<stdio.h>

/**
 * _puts - print a string.
 *
 *
 *Return: Always 0.
 *
 *@str: String that will be printed.
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
