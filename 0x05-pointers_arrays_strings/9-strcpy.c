#include "main.h"

/**
 * _strcpy - copies a string to a string
 * @dest: a buffer pointing to a string copied to
 * @src: a string pointed to by src
 *
 * Description: this function copies a string to a string
 * Return: non
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != 0)
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
