#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * copyfile_to_file - copies the contents of a file to another file
 * @file_from: the name of the file to copy contents from
 * @file_to: the name of the file to copy conents to
 *
 * Return: 1 on success and -1 on failure
 */

int copyfile_to_file(const char *file_from, const char *file_to)
{
	int fd1, fd2, r, w;
	char buffer[1024];

	if (file_from == NULL || file_to == NULL)
		return (-1);
	fd1 = open(file_from, O_RDONLY);
	r = read(fd1, buffer, 1024);
	if (fd1 == -1 || r == -1)
	{
		close(fd1);
		return (8);
	}
	close(fd1);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		return (10);
	}
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	w = write(fd2, buffer, r);
	if (fd2 == -1 || w == -1)
	{
		close(fd2);
		return (9);
	}
	if (w != r)
		return (-1);
	close(fd2);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		return (10);
	}
	return (1);
}
/**
 * main - enters arguments from the commandline
 * @ac: the number of arguments
 * @av: the strings which are the arguments
 *
 * Return: always 0.
 */

int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	res = copyfile_to_file(av[1], av[2]);
	switch (res)
	{
		case 8:
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		case 9:
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		case 10:
			exit(100);
		default:
			return (0);

	}
	return (0);
}
