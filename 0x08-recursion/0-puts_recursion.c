#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: is a pointer to the first char of a string
 *
 * Description: this function prints a string, followed by a new line.
 * Return: non
 */

void _puts_recursion(char *s)
{
	char *tem = 0;

	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		tem = &s[0 + 1];
		_puts_recursion(tem);
	}
}
