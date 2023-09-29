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
 * flip_bits - returns the number of bits you would need to flip
 * @n: the first number
 * @m: the second number
 *
 * Return: returns the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, bits = 0;
	char *buff;

	buff = binary_buff(n ^ m);
	if (buff == NULL)
		return (0);
	for (i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] == '1')
			bits++;
	}
	free(buff);
	return (bits);
}
