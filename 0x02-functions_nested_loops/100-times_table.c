#include "main.h"

/**
 * print_times_table - prints the n times table, with starting with 0
 * @n: is a variable of int type
 *
 * Return: prints a table or not
 */
void print_times_table(int n)
{
	int i, j;

	if ((n > 15 || n < 0) != 1)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					if (i * j < 100 && i * j < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (i * j < 100)
						_putchar(' ');
				}
				if (i * j > 9)
				{
					if (i * j > 99)
						_putchar('0' + (i * j) / 100);
					_putchar('0' + ((i * j) / 10) % 10);
					_putchar('0' + (i * j) % 10);
				}
				else
					_putchar('0' + i * j);
			}
			_putchar('\n');
		}
	}
}
