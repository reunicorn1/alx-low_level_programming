#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	/* Printing alphabet */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			ch = ch + 0;
		else
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
