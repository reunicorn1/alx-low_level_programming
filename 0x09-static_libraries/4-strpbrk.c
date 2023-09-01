#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the source string
 * @accept: the chars collection which are located
 *
 * Description: this function searches a string for any of a set of bytes
 * Return: a pointer to the byte which match accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, n, m, k;

	n = 0;
	m = 0;
	k = 0;
	while (s[n] != '\0')
		n++;
	while (accept[m] != '\0')
		m++;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (s[i] == accept[j])
				k = 1;
		}
		if (k == 1)
			break;
	}
	if (k == 0)
		return (0);
	return (&s[i]);
}
