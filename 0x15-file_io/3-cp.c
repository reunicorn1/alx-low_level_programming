#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * close_file - closes files
 * @fd: the file descriptor required
 *
 * Return: Nothing.
 */

void close_file(int fd)
{
	int n;

	n = close(fd);
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * create_buffer - creates a buffer for the text from file_from
 *
 * Return: the buffer created
 */

char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024 + 1);
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}

/**
 * read_write - reads from file_from and writes into file_to
 * @file_from: the file in which we read from
 * @file_to: the file in which we write to
 *
 * Return: 1 in success, -1 in failure
 */

int read_write(const char *file_from, const char *file_to)
{
	int fd1, fd2, r, w;
	char *buffer;

	buffer = create_buffer();
	if ((buffer == NULL) || (file_from == NULL) | (file_to == NULL))
		return (-1);
	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	do {
		r = read(fd1, buffer, 1024);
		if (fd1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			free(buffer);
			close_file(fd1);
			close_file(fd2);
			exit(98);
		}
		w = write(fd2, buffer, r);
		if (fd2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			free(buffer);
			close_file(fd1);
			close_file(fd2);
			exit(99);
		}
		fd2 = open(file_to, O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(fd1);
	close_file(fd2);
	return (1);
}

/**
 * main - Entry point
 * @ac: the number of arguments
 * @av: argument strings
 *
 * Return: always 0
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	read_write(av[1], av[2]);
	return (0);
}
