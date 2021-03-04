#include <stdlib.h>
/**
 * string_nconcat - concatenate s1 up until n bytes of s2
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 * Return: pointer that allocates new space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0, length2 = 0, i, j = 0;
	char *dest;

	if (s1 == NULL || s1 == '\0')
		length1 = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			length1++;
	}
	if (s2 == NULL || s2 == '\0')
		length2 = 0;
	else
	{
		for (i = 0; s2[i] != '\0'; i++)
			length2++;
	}
	if (n >= length2)
		n = length2;
	dest = malloc(sizeof(char) * (length1 + n + 1));
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		dest[i] = s1[i];
	for (i = length1; i < length1 + n; i++, j++)
		dest[i] = s2[j];
	dest[length1 + n] = '\0';
	return (dest);
}
