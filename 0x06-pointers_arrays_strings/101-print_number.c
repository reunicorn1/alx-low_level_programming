#include "main.h"

/**
 * print_number - prints an integer
 * @n: is a variable of int type
 *
 * Description: this function prints an integer
 * Return: non
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n / 10)
		print_number(n1 / 10);
	_putchar('0' + (n1 % 10));
}
