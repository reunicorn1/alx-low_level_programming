#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * print_mul - prints the multplication process
 * @ptr: the answer in which we prinnt
 * @len: the length of the answer
 * Description: this function prints the multplication process
 * Return: char of the result
 */

void print_mul(int *ptr, int len)
{
	int i;

	for (i = 0; i < len; i++)
		putchar(ptr[i] + '0');
	putchar('\n');
	free(ptr);
}

/**
 * _mul - multiplies two positive numbers
 * @num1: the first string
 * @num2: the seconnd string
 *
 * Description: this function multiplies two positive numbers
 * Return: non
 */

int _mul(char *num1, char *num2)
{
	int i, j, n1, n2, digit, len1, len2, space;
	int *ptr, *spr;

	len1 = strlen(num1);
	len2 = strlen(num2);
	digit = len1 + len2;
	ptr = malloc(sizeof(int) * digit);
	if (ptr == NULL)
		return (1);
	for (i = 0; i < digit; i++)
		ptr[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		space = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			space = (ptr[i + j + 1] + (n1 * n2) + space) / 10;
			ptr[i + j + 1] = (ptr[i + j + 1] + (n1 * n2) + space) % 10;
		}
		if (space > 0)
			ptr[i + j + 1] += space;
	}
	if ((i + j + 1) == -1)
	{
		spr = malloc(sizeof(int) * (digit - 1));
		if (spr == NULL)
		{
			free(ptr);
			return (1);
		}
		for (i = 0, j = 1; i < (digit - 1); i++, j++)
			spr[i] = ptr[j];
		free(ptr);
		print_mul(spr, digit - 1);
	}
	else
		print_mul(ptr, digit);
	return (0);
}

/**
 * main - multiplies two positive numbers
 * @argc: the argument counter
 * @argv: the argument vector
 *
 * Description: this function multiplies two positive numbers
 * Return: 0 of success, 1 if not
 */

int main(int argc, char *argv[])
{
	unsigned int i, answer;
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	for (i = 0; i < strlen(num1); i++)
	{
		if (!(isdigit(num1[i])))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; i < strlen(num2); i++)
	{
		if (!(isdigit(num2[i])))
		{
			printf("Error\n");
			exit(98);
		}
	}
	answer = _mul(num1, num2);
	if (answer == 1)
		return (1);
	return (0);
}
