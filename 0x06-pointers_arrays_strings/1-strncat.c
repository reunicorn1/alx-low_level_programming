#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: string 1 which is a pointer of char type
 * @src: string 2 which is a pointer of char type
 * @n: an int which is a number
 *
 * Description: this function concatenates two strings
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (dest[j] != 0)
		j++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';
	return (dest);
}
