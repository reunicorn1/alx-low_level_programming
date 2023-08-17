#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is a variable of int type
 *
 * Description: this function draws a diagonal line on the terminal.
 * Return: non
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (j > 0)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
