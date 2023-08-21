#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: is a string which is a pointer of char
 *
 * Description: this function prints second half of a string
 * Return: non
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
			_putchar(str[j]);
	}
	else
	{
		for (j = i - ((i - 1) / 2); j < i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
