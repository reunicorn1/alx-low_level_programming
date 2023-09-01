#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: is a string which is a pointer of char type
 *
 * Description: this function prints a string, followed by a new line
 * Return: non
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
