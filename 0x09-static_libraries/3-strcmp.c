#include "main.h"

/**
 * _strcmp -  compares two strings
 * @s1: is a variable of string type
 * @s2: is a variable of string type
 *
 * Description: this function compares two strings
 * Return: 0 if equal, +ve if s1 is larger, -ve if s1 is smaller
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] - s2[i] != 0)
		{
			break;
		}
	}
	return (s1[i] - s2[i]);
	return (0);
}
