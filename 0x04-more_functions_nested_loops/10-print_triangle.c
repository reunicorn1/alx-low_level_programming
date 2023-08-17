#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is a variable of int type
 *
 * Description: this function prints a triangle, followed by a new line.
 * Return: non
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = 0; k < size - i; k++)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
