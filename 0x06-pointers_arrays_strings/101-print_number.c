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
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar('0' +(n % 10));
}
