#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string
 * @s: is a tring which is a pointer to the first char
 *
 * Description: this function returns the length of a string.
 * Return: an int which is the length
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = 1 + _strlen_recursion(&s[0 + 1]);
	return (len);
}
