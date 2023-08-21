#include "main.h"

/**
 * _strlen -  returns the length of a string.
 * @s: is a pointer which is pointing to a  variable of char type
 *
 * Description: this function returns the length of a string.
 * Return: return the length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
