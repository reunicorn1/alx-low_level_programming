#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: a string which is a char pointer
 * @src: a string which is a char pointer
 *
 * Description: this function concatenates two strings
 * Return: a concaternated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, l;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	for (k = i, l = 0; k <  i + j; k++, l++)
		dest[k] = src[l];
	dest[k] = '\0';
	return (dest);
}
