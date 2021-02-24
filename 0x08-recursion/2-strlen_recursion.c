#include "holberton.h"

/**
 * _strlen_recursion - Return length of a string.
 *
 * @s: String that will be evaluated.
 *
 * Return: Returns a int.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
