#include "holberton.h"

/**
* _strcpy - copies a string.
*
* @dest: Place where the string will be copied.
* @src: String that is being copied.
* Return: Returns a pointer to the copied string.
*/

char *_strcpy(char *dest, char *src)
{
	int iter;

	for (iter = 0; src[iter] != '\0'; iter++)
	{
		dest[iter] = src[iter];
	}

	dest[iter] = ('\0');
	return (dest);
}
