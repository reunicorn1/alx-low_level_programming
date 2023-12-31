#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a duplicate of the string
 * @str: is a pointer to the first char of a string
 *
 * Description: this function returns a pointer to a duplicate of the string
 * Return: a pointer to the newly allocated string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, n;

	if (str == NULL)
		return (NULL);
	n = strlen(str);
	ptr = malloc(sizeof(char) * (n + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
