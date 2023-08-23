#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string variable of a pointer of a char
 *
 * Description: this function changes all lowercase letters to uppercase
 * Return: return a string of upper case
 */

char *string_toupper(char *s)
{
	int i, j;

	j = 0;
	while (s[j] != '\0')
		j++;

	for (i = 0; i < j; i++)
	{
		if (s[i] < 123 && s[i] > 96)
			s[i] = s[i] - 32;
	}
	return (s);
}
