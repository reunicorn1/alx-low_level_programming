#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr -  concatenates all the arguments
 * @ac: is a variable of innt type
 * @av: is an array of an array
 *
 * Description: this function concatenates all the arguments
 * Return: a string of everything
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, sum;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	sum = 0;
	for (i = 0; i < ac; i++)
		sum += strlen(av[i]);
	ptr = (char *)malloc(sizeof(char) * (sum + ac));
	if (ptr == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++, k++)
			ptr[k] = av[i][j];
		ptr[k] = '\n';
		k++;
	}
	return (ptr);
}
