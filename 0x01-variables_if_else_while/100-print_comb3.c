#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	/* Printing the sequence */
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i == 8 && j == 9)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
