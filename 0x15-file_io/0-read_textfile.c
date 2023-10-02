#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: a string of the filename
 * @letters: the size of the letters
 *
 * Return: the actual number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL || filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || r == -1 || w != r)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (w);
}
