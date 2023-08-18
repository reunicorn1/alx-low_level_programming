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
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
		n1 = n;
	if (n1 / 10)
		print_number(n1 / 10);
	_putchar('0' + (n1 % 10));
}
