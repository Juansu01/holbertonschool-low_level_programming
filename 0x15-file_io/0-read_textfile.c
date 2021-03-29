#include "holberton.h"

/**
 * read_textfile - reads a file and prints its content to the POSIX output
 * @filename: file that will be read.
 * @letters: amount of letters that should be printed.
 * Return: Returns amount of letters that ended up being printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t rd, wr;

	/* open */

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters); /*allocate memory for buff*/

	if (buff == NULL)
	{
		return (0);
	}

	rd = read(fd, buff, letters);

	if (rd == -1)
	{
		return (0);
	}

	wr = write(STDOUT_FILENO, buff, rd);

	if (wr == -1)
	{
		return (0);
	}

	close(fd);
	free(buff);

	return (wr);
}
