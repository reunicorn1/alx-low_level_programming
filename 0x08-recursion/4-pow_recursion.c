#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: is a variable of int type, is the base
 * @y: is a variable of int type, is the power
 *
 * Description: this function returns the value of x raised to power y
 * Return: the answer
 */

int _pow_recursion(int x, int y)
{
	int sum;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	sum = x * _pow_recursion(x, y);
	return (sum);
}
