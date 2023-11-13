#include <stdio.h>

int sub(int a, int b);
int add(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - adding two numbers
 * @a: the first argument
 * @b: the second argument
 *
 * Return: sum
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts a number from another
 * @a: the first argument
 * @b: the second argument
 *
 * Return: The sum
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers together
 * @a: the first argument
 * @b: the second argument
 *
 * Return: The Sum
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divided two numbers
 * @a: the first argument
 * @b: the second argument
 *
 * Return: The Sum
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - calculate the modulus of two numbers
 * @a: the first argument
 * @b: the second argument
 *
 * Return: The Sum
 */

int mod(int a, int b)
{
	return (a % b);
}
