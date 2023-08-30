#include "main.h"

/**
 * odd_prime - checks if the odd integer is a prime number
 * @n: is a variable of int type
 * @start: is the start of the recusion loop
 *
 * Description: this function checks if input integer is a prime number
 * Return: 1 if true, otherwise 0
 */

int odd_prime(int n, int start)
{
	if (n == start)
		return (1);
	if (n % start == 0)
		return (0);
	start = start + 2;
	return (odd_prime(n, start));
}

/**
 * is_prime_number - checks if integer is a prime number
 * @n: is a variable of int type
 *
 * Description: this function checks if input integer is a prime number
 * Return: 1 if true, otherwise 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 2 || n % 2 == 0)
		return (0);
	return (odd_prime(n, 3));
}
