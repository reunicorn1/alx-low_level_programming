#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * bin_generator - generates a binary number in a string
 * @index: the index to be modified
 *
 * Return: a string filled with binary
 */

char *bin_generator(unsigned int index)
{
	char *bin;
	unsigned int i;

	bin = malloc(sizeof(char) * index + 2);
	for (i = 0; i <= index; i++)
	{
		if (i == 0)
			bin[i] = '1';
		else
			bin[i] = '0';
	}
	bin[i] = '\0';
	return (bin);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: is a variable of int type, is the base
 * @y: is a variable of int type, is the power
 *
 * Description: this function returns the value of x raised to power y
 * Return: the answer
 */

unsigned long int _pow_recursion(int x, int y)
{
	unsigned long int sum;

	if (y == 0)
		return (1);
	y--;
	sum = x * _pow_recursion(x, y);
	return (sum);
}

/**
 * binary_to_ulong - converts a binary number to an unsigned int
 * @b: a string representing the binary number
 *
 * Return: the converted number or 0 in failure
 */

unsigned long int binary_to_ulong(const char *b)
{
	int i, j, len;
	unsigned long int sum = 0;

	if (b)
	{
		for (i = 0; b[i] != '\0'; i++)
		{
			if (!(b[i] == '1' || b[i] == '0'))
				return (0);
		}
		len = strlen(b);
		for (i = len - 1, j = 0; i >= 0; j++, i--)
		{
			sum += _pow_recursion(2, i) * (b[j] - '0');
		}
		return (sum);
	}
	else
		return (0);
}

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number
 * @index:  the index, starting from 0 of the bit you want to set
 *
 * Return: 1 in success, -1 in failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	char *bin;

	if (index > 64)
		return (-1);
	bin = bin_generator(index);
	if (bin == NULL)
		return (-1);
	*n = *n | binary_to_ulong(bin);
	return (1);
}
