#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: a string which is  apointer of char
 *
 * Description: this function convert a string to an integer
 * Return: the converted integer
 */

int _atoi(char *s)
{
	unsigned int i, j, n, p, result;

	i = 0;
	result = 0;
	n = 0;
	p = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] == '-')
			n++;
		if (s[j] == '+')
			p++;
		if (s[j] > 47 && s[j] < 58)
		{
			result = result * 10 + (s[j] - 48);
		}
		if (!(s[j] > 47 && s[j] < 58) && result > 0)
			break;
	}
	if (n > p || p > n)
		result = -result;
	if (result == 0)
		return (0);
	else
		return (result);
}

/**
 * main - multiplies two numbers
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = _atoi(argv[1]);
	j = _atoi(argv[2]);
	printf("%d\n", i * j);
}
