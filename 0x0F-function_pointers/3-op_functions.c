#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - returns the sum of a and b
 * @a: a variable of int type
 * @b: a variable of int type
 *
 * Return: the result of the sum
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - returns the difference of a and b
 * @a: a variable of int type
 * @b: a variable of int type
 *
 * Return: the result of the sum
 */

int op_sub(int a, int b)
{
	int sum;

	sum = a - b;
	return (sum);
}

/**
 * op_mul - returns the product of a and b
 * @a: a variable of int type
 * @b: a variable of innt type
 *
 * Return: the result of the sum
 */

int op_mul(int a, int b)
{
	int sum;

	sum = a * b;
	return (sum);
}

/**
 * op_div -  returns the result of the division of a by b
 * @a: a variable of int type
 * @b: a variable of int type
 *
 * Return: the result of the sum
 */

int op_div(int a, int b)
{
	int sum;

	sum = a / b;
	return (sum);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: a variable of int type
 * @b: a variable of int type
 *
 * Return: the result of the sum
 */

int op_mod(int a, int b)
{
	int sum;

	sum = a % b;
	return (sum);
}
