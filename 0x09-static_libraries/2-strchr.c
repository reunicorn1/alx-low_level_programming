#include "main.h"

/**
 * _strchr - checks if a char is lowercase
 * @s: is a string
 * @c: is a character
 *
 * Description: this function  locates a character in a string
 * Return: a pointer to the location of c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i, j;
	char *ptr = 0;

	j = 0;
	while (s[j] != '\0')
		j++;
	for (i = 0; i <= j; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
	}
	if (ptr == 0)
		return (0);
	return (ptr);
}
