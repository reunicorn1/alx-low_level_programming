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
		if (n == 9)
			putchar('0' + n);
		else
		{
		putchar('0' + n);
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
