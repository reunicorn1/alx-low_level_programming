#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: is a pointer to the first char of a string
 * @s2: is a pointer to the first char of a string
 * @n: a variable of unsigned int type
 * Description: concatenates two strings
 * Return: a pointer to th newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, len;
	char *ptr;
	char tem[] = "";

	/* assigning variables */
	len = strlen(s1);
	if (s1 == NULL)
		s1 = tem;
	if (s2 == NULL)
		s2 = tem;
	ptr = malloc(sizeof(char) * (len + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* Copying data process */
	for (i = 0; i < len; i++)
		ptr[i] = s1[i];
	k = 0;
	for (j = len; j < len + n; j++, k++)
	{
		if (s2[k + 1] == '\0')
			break;
		ptr[j] = s2[k];
	}
	ptr[j] = '\0';
	return (ptr);
}
