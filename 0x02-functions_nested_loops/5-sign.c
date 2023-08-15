#include "main.h"

/**
 * print_sign - print a sign according to number
 * @n: is a variable of int type
 *
 * Description: this function checks number and writes if it's +ve or -ve
 * Return: 1 if +, 0 if zero, and -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
