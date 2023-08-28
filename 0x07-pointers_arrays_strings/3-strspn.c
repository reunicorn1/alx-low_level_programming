#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: is the source string
 * @accept: is the seggmant of bytes to be looked for
 *
 * Description: this function gets the length of a prefix substring
 * Return: number of bytes which match
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, i, j, n, m;

	n = 0;
	m = 0;
	while (s[n] != '\0')
		n++;
	while (accept[m] != '\0')
		m++;

	for (i = 0; i < n; i++)
	{
		for (j = 0, k = 0; j < m; j++)
		{
			if (s[i] == accept[j])
				k = 1;
		}
		if (k == 0)
			break;
	}
	return (i);
}
