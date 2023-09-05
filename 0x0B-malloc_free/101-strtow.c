#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * alnumnct - checks if char is a number or a letter or a punct
 * @s1: is a char
 *
 * Description: checks if char is a number or a letter or a punct
 * Return: 1 if true. 0 if false
 */

int alnumnct(char s1)
{
	if (isalnum(s1) != 0 || ispunct(s1) != 0)
		return (1);
	else
		return (0);
}

/**
 * strtow - splits a string into words
 * @str: is a pointer to the first char of a string
 *
 * Description: this function splits a string into words
 * Return: a pointer to an array of strings
 */

char **strtow(char *str)
{
	int i, j, k, l, checkpoint, word, ltr, len;
	char **ptr;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	len = strlen(str);
	for (i = 0, word = 0; i < len; i++)
	{
		if (alnumnct(str[i - 1]) && (isspace(str[i]) || i == len - 1))
			word++;
	}
	ptr = (char **)malloc(sizeof(char *) * word);
	if (ptr == NULL)
		return (NULL);
	for (i = 0, checkpoint = 0; i < word; i++)
	{
		for (j = checkpoint, ltr = 0; j < len; j++)
		{
			if (alnumnct(str[j]))
				ltr++;
			if ((isspace(str[j]) || j == len - 1) && alnumnct(str[j - 1]))
			{
				checkpoint = j + 1;
				break;
			}
		}
		ptr[i] = (char *)malloc(sizeof(char) * (ltr + 1));
		if (ptr[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(ptr[k]);
			free(ptr);
			return (NULL);
		}
		l = checkpoint - 1 - ltr;
		for (k = 0; k < ltr; k++, l++)
			ptr[i][k] = str[l];
		ptr[i][ltr] = '\0';
	}
	return (ptr);
}
