#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: is a variable of int type
 *
 * Description: this function returns the factorial of a given number
 * Return: the factorial of a given number.
 */

int factorial(int n)
{
	int ans;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	ans = n * factorial(n - 1);
	return (ans);
}
