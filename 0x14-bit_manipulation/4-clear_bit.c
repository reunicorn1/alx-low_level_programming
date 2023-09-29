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
 * binary_buff - creates a buffer of binary numbers
 * @n: is the number to be converted to binary
 *
 * Return: the string of the binary number
 */

char *binary_buff(unsigned long int n)
{
	int i, j, index = 0;
	unsigned long int num, pwr = 0;
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		return (NULL);
	if (n == 0)
	{
		buff[index] = '0', index++;
		buff[index] = '\0';
		return (buff);
	}
	for (i = 0; pwr < n; i++)
	{
		pwr = _pow_recursion(2, i);
		if (n > _pow_recursion(2, 63))
			i = 64;
		if (pwr >= n || (n > _pow_recursion(2, 63)))
		{
			num = (pwr == n) ? (n - pwr) : (n - _pow_recursion(2, (i - 1)));
			buff[index] = '1', index++;
			for (j = (num == 0) ? i - 1 : i - 2; j >= 0; j--)
			{
				pwr = _pow_recursion(2, j);
				if (num < pwr)
				{
					buff[index] = '0', index++;
				}
				if (num >= pwr)
				{
					num = num - pwr;
					buff[index] = '1', index++;
				}
			}
			break;
		}
	}
	buff[index] = '\0';
	return (buff);
}

/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @n: is the number to be adjusted
 * @index: is the index starting from 0 of the bit you want to set
 *
 * Return: 1 in success, -1 in failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	char *bin;

	bin = binary_buff(*n);
	if (bin == NULL || index > 64)
		return (-1);
	if (index > strlen(bin) - 1 && index <= 64)
		return (1);
	bin[(strlen(bin) - 1) - index] = '0';
	*n = binary_to_ulong(bin);
	return (1);
}
