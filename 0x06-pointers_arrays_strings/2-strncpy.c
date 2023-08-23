#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: is a variable of string type
 * @src: is a variable of string type
 * @n: is a variable of int type
 *
 * Description: this function copies a string
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
