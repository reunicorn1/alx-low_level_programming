#include "main.h"

/**
 * rev_string - reverses a string
 * @s: is a string which is a pointer of char type
 *
 * Description: this function reverses a string
 * Return: non
 */

void rev_string(char *s)
{
	int i, j, len;
	char tem[1000];

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		tem[j] = s[j];
	}

	for (i = len - 1, j = 0; i >= 0; i--)
	{
		s[i] = tem[j];
		j++;
	}
}
