#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: is a string which is a pointer of a char
 *
 * Description: this function prints a string, in reverse
 * Return: non
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i; j > 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
