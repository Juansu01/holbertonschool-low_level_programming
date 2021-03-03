#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenate two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: returns a pointer that contains the contents of both strings.
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c;
	int sum;
	char *arr;

	if (s1 == NULL) /*NULL is passed, treat as empty string*/
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a] != '\0'; a++) /*Go through string one*/
		{
		}
	}
	if (s2 == NULL) /*NULL is passed, treat as empty string*/
	{
		b = 0;
	}
	else
	{
		for (b = 0; s2[b] != '\0'; b++) /*Go through string two*/
		{
		}
	}
	sum = a + b + 1;
	arr = malloc(sum * sizeof(char)); /*Allocate memory of size sum*/
	if (arr == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++) /*Give values of s1 to arr*/
	{
		arr[c] = s1[c];
	}
	for (c = 0; c < b; c++) /*Give values of s2 to arr*/
	{
		arr[a + c] = s2[c];
	}
	arr[a + b] = '\0';
	return (arr);
}
