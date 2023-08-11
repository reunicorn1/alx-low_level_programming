#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* Printing numbers */
	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
		if (n == 9)
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
