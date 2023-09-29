#include <stdio.h>
#include <stdlib.h>
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
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 * Return: nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int num, pwr = 0;
	int j, i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; pwr < n; i++)
	{
		pwr = _pow_recursion(2, i);
		if (n > _pow_recursion(2, 62))
			i = 64;
		if (pwr >= n || (n > _pow_recursion(2, 62)))
		{
			num = (pwr == n) ? (n - pwr) : (n - _pow_recursion(2, (i - 1)));
			_putchar('1');
			for (j = (num == 0) ? i - 1 : i - 2; j >= 0; j--)
			{
				pwr = _pow_recursion(2, j);
				if (num < pwr)
					_putchar('0');
				if (num >= pwr)
				{
					num = num - pwr;
					_putchar('1');
				}
			}
			break;
		}
	}
}
