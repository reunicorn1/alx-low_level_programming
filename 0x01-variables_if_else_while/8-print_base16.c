#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;

	/* Printing the base 16 numbers */
	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (ch = 'a'; ch < 'g'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
