#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: is a pointer to the first char of a string
 * @s2: is apointer to the first char of a string
 *
 * Description: this function concatenates two strings
 * Return: a pointer to th new string of s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	int n, m, i, j;
	char *ptr;
	char *tem;

	tem = malloc(sizeof(char));
	*tem = '\0';
	if (s1 == NULL)
		s1 = tem;
	if (s2 == NULL)
		s2 = tem;
	n = strlen(s1);
	m = strlen(s2);
	ptr = malloc(sizeof(char) * (n + m));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		ptr[i] = s1[i];
	for (i = n, j = 0; i < n + m; i++, j++)
		ptr[i] = s2[j];
	free(tem);
	return (ptr);
}
