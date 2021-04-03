#include "holberton.h"

/**
 * _count - count number of chars.
 *
 * @s: pointer to string
 * Return: returns amount of chars.
 *
 */

int _count(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}

	return (i);
}

/**
 * append_text_to_file - append texts
 * @filename: name of the file that will be created.
 * @text_content: text to be written in the file.
 * Return: Returns -1 if fails, 1 if succeeds.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int cr;
	ssize_t wr;

	if (filename == NULL)
	{
		return (-1);
	}

	cr = open(filename, O_WRONLY | O_APPEND);

	if (cr == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	wr = write(cr, text_content, _count(text_content));

	if (wr == -1)
		return (-1);

	close(cr);

	return (1);
}
