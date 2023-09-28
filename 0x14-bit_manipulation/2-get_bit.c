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
 * binary_buff -  creates a buffer of finary numbers
 * @n: is the number to be converted to binary
 *
 * Return: Nothing.
 */

char *binary_buff(unsigned long int n)
{
	int i, index = 0;
	unsigned long int pwr, num;
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		return (NULL);
	if (n == 0)
	{
		buff[index] = '0';
		index++;
		buff[index] = '\0';
		return (buff);
	}
	num = n;
	for (i = 0; _pow_recursion(2, i) <= n; i++)
	{
		if ( _pow_recursion(2, i + 1) > n)
			break;
	}
	for (; i >= 0; i--)
	{
		pwr = _pow_recursion(2, i);
		if (num >= pwr)
		{
			buff[index] = '1';
			index++;
			num -= pwr;
		}
		else
		{
			buff[index] = '0';
			index++;
		}
	}
	buff[index] = '\0';
	return (buff);
}

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: is an unsigned long int
 * @index: is the index given
 *
 * Return: the value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	char *binary;
	int num;

	binary = binary_buff(n);
	if (binary == NULL || strlen(binary) < index + 1)
		return (-1);
	num = (binary[(strlen(binary) - 1) - index] - '0');
	free(binary);
	return (num);
}
