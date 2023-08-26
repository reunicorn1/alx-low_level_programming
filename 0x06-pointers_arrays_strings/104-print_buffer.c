#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: is a variable of string type
 * @size: is a a variable of int type
 *
 * Description: this function prints a buffer
 * Return: non
 */

void print_buffer(char *b, int size)
{
	int i, j;

	for (j = 0; j < size; j = 10 + j)
	{
		if (size > 0)
		{
			printf("%08x: ", j);
			for (i = j; i < j + 10; i++)
			{
				if (!(i % 10 == 0) && i != 0 && i % 2 == 0)
					printf(" ");
				if (i < size)
				{
					if (b[i] < 32)
						printf("%d", 0);
					printf("%x", b[i]);
				}
				if (i >= size)
					printf("  ");
			}
			printf(" ");
			for (i = j; i < j + 10; i++)
			{
				if (i < size)
				{
					if (b[i] < 32)
						printf(".");
					else
						putchar(b[i]);
				}
			}

		}
		printf("\n");
	}
}
