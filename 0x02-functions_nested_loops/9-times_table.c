#include "main.h"

/**
 * times_table - Prints the 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (i * j < 10)
					_putchar(' ');
			}
			if (i * j > 9)
			{
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
			}
			else
				_putchar('0' + i * j);
		}
		_putchar('\n');
	}
}
