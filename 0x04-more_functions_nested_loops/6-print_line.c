#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: is a variable of int type
 *
 * Description: this function draws a straight line in the terminal
 * Return: non
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
