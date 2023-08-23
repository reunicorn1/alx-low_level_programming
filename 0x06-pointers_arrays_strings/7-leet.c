#include "main.h"

/**
 * leet - encodes a string into 1337
 * @src: is a variable of string
 *
 * Description: this function encodes a string into 1337
 * Return: encoded string
 */

char *leet(char *src)
{
	int i, j;
	char code[] = {52, 51, 48, 55, 49};
	char upp[] = {'A', 'E', 'O', 'T', 'L'};
	char low[] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (src[i] == upp[j] || src[i] == low[j])
				src[i] = code[j];
		}
	}
	return (src);
}
