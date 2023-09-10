#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: a two dimentional array previously created
 * @height: a variable of int type
 *
 * Description: this function  frees a 2 dimensional grid
 * Return: non
 */

void free_grid(char **grid, int height)
{
	int i;

	for (i = 0; i <= height; i++)
		free(grid[i]);
	free(grid);
}

/**
 * spr - corrects wrongly sorted array by 1
 * @ptr: thw extra allocated array
 * @len: the new corrected length
 *
 * Return: a pointer to the new array
 */

char *spr(char *ptr, int len)
{
	int l, k;
	char *spr;

	spr = malloc(sizeof(char) * len);
	if (spr == NULL)
		return (NULL);
	for (l = 0, k = 1; l < len; l++, k++)
		spr[l] = ptr[k];
	free(ptr);
	return (spr);
}

/**
 * infinite_add - adds two numbers
 * @n1: is a variable of string of numbers
 * @n2: is a variable of string of numbers
 * @r: is the bugger that store result
 * @size_r: is the buffer size
 *
 * Description: this function adds two numbers
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int s1, s2, i, j, k, num1, num2, tem, space;

	s1 = strlen(n1);
	s2 = strlen(n2);
	k = size_r;
	space = 0;
	for (i = s1 - 1, j = s2 - 1; i >= 0 || j >= 0 || space > 0; i--, j--)
	{
		num1 = (i >= 0) ? (n1[i] - '0') : 0;
		num2 = (j >= 0) ? (n2[j] - '0') : 0;
		tem = (num1 + num2 + space) % 10;
		space = (num1 + num2 + space) / 10;

		if (k > 0)
		{
			k--;
			r[k] = tem + 48;
		}
	}
	k--;
	if (k == 0)
	{
		r = spr(r, size_r - 1);
		if (r == NULL)
			return (NULL);
	}
	free(n1);
	free(n2);
	return (r);
}
/**
 * add_mul - add an array of strings together
 * @ptr: the array of an array of numbers
 * @len1: the length of the first original number and the len of the array
 * @len2: the length of the second original number
 *
 * Description: this function add an array of strings together
 * Return: string of the numbers
 */

char *add_mul(char **ptr, int len1, int len2)
{
	int i;
	char *con1, *con2;

	con1 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (con1 == NULL)
		return (NULL);
	con1 = infinite_add(ptr[0], ptr[1], con1, len1 + len2);
	if (len1 > 2)
	{
		for (i = 2; i < len1; i++)
		{
			con2 = malloc(sizeof(char) * (len2 + len1 + 1));
			if (con2 == NULL)
			{
				free(con1);
				return (NULL);
			}
			con2 = infinite_add(ptr[i], con1, con2, len1 + len2);
			if (con2 == NULL)
			{
				free(con1);
				free(con2);
				return (NULL);
			}
			con1 = con2;
		}
	}
	return (con1);
}


/**
 * infinite_mul - multiplies two positive numbers
 * @num1: the string of the first number
 * @num2: the string of the second number
 * @ptr: a pointer of a pointer
 * @l1: a variable of int type
 * @l2: a variable of int type
 *
 * Description: this function multiplies two positive numbers
 * Return: return the string of the answer
 */

char *infinite_mul(char *num1, char *num2, char **ptr, int l1, int l2)
{
	int i, j, k, space, digit, tem;
	char *answer;

	for (i = 0; i < l1; i++)
	{
		digit = (l1 - 1 - i) + l2 + 1;
		ptr[i] = malloc(sizeof(char) * digit + 1);
		if (ptr[i] == NULL)
		{
			free(ptr);
			for (j = 0; j < i; j++)
				free(ptr[j]);
			return (NULL);
		}
		for (k = digit - 1; k > (digit - 1 - (l1 - 1 - i)); k--)
			ptr[i][k] = '0';
		for (j = l2 - 1, space = 0; j >= 0; j--, k--)
		{
			tem = ((num1[i] - '0') * (num2[j] - '0') + space) % 10;
			space = ((num1[i] - '0') * (num2[j] - '0') + space) / 10;
			ptr[i][k] = tem + 48;
		}
		if (space != 0)
		{
			ptr[i][k] = space + 48;
			k--;
		}
		if (k == 0)
		{
			ptr[i] = spr(ptr[i], digit - 1);
			if (ptr[i] == NULL)
				free_grid(ptr, i);
		}
	}
	answer = add_mul(ptr, l1, l2);
	if (answer == NULL)
		return (NULL);
	return (answer);
}

/**
 * _mul - multiplies two positive numbers
 * @num1: the string of the first number
 * @num2: the string of the second number
 *
 * Description: this function multiplies two positive numbers
 * Return: return the string of the answer
 */

char *_mul(char *num1, char *num2)
{
	int l1, l2;
	char **ptr;
	char *answer;

	l1 = strlen(num1);
	l2 = strlen(num2);
	ptr = (char **)malloc(sizeof(char *) * l1 + 1);
	if (ptr == NULL)
		return (NULL);
	answer = infinite_mul(num1, num2, ptr, l1, l2);
	if (answer == NULL)
	{
		free_grid(ptr, l1);
		return (NULL);
	}
	return (answer);
}

/**
 * main - start of the operation
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Description: this function start of the operation
 * Return: non
 */
int main(int argc, char *argv[])
{
	int i, j;
	char *num1, *num2, *answer;

	if (argc > 3)
	{
		printf("%d\n", argc);
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] > 47 && argv[i][j] < 58))
			{
				printf("not argc: %d\n", argc);
				printf("Error\n");
				exit(98);
			}
		}
	}
	num1 = argv[1];
	num2 = argv[2];
	answer = _mul(num1, num2);
	printf("%s\n", answer);
	free(answer);
	return (0);
}
