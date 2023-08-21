#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * @str: is a string which is a pointer of char
 *
 * Description: this function prints every other character of a string
 * Return: non
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
