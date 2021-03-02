#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - copy a string and save it in memory.
 *
 * @str: string allocated in memory.
 *
 * Return: Returns a pointer to allocated string if success.
 *
 */

char *_strdup(char *str)
{
	int i, j;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '0'; i++) /*Go through string and save size in i*/
	{
	}
	i++;

	arr = malloc(i * sizeof(char)); /*allocate memory of size i*/

	if (arr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++) /*do this as long as j is less than i*/
	{
		arr[j] = str[j]; /*new array gets values of str in j position*/
	}
	return (arr);
}
