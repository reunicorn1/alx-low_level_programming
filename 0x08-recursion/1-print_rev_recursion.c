#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: is a string with a pointer to the first char
 *
 * Description: this function prints a string in reverse
 * Return: non
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(&s[0 + 1]);
		_putchar(*s);
	}
}
