#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is a variable of int type
 *
 * Description: this function prints the last digit of a number n
 * Return: the last digit of a number without a sign
 */
int print_last_digit(int n)
{
	int i, j;

	if (n >= 0)
	{
		i = n % 10;
		_putchar('0' + i);
		return (i);
	}
	else if (n < 0)
	{
		j = -n % 10;
		_putchar('0' + j);
		return (j);
	}
	return (0);
}
