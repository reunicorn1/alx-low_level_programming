#include "main.h"

/**
 * print_number -  prints an integer
 * @n: is a variable of int type
 *
 * Description: this function checks if c is a lowercase letter or not
 * Return: non
 */

void print_number(int n)
{
	int i, j, q, r, pwr;

	/* to find the number of digits of n */
	i = 10;
	j = 1;
	while (n / i != 0)
	{
		j++;
		i = i * 10;
	}
	/* handling negative values */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/* printing process of n */
	for (q = 1; q <= j; q++)
	{
		for (r = j, pwr = 1; r > q; r--)
			pwr = pwr * 10;
		_putchar('0' + ((n / pwr) % 10));
	}
}
