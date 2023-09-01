#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: the argument count
 * @argv: the argument vector

 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, sum;
	unsigned long j;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!(argv[i][j] > 47 && argv[i][j] < 58))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
