#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

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
	unsigned int sum;

	if (y == 0)
		return (1);
	y--;
	sum = x * _pow_recursion(x, y);
	return (sum);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string representing the binary number
 *
 * Return: the converted number or 0 in failure
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j, len;
	unsigned int sum = 0;

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
