#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: is the big string in which we look inside
 * @needle: is the small string which we want to find
 *
 * Description: this function locates a substring
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, n, m, k, point;

	n = 0;
	m = 0;
	k = 0;
	while (haystack[n] != '\0')
		n++;
	while (needle[m] != '\0')
		m++;

	for (i = 0, j = 0; i < n; i++)
	{
		if (needle[j] == haystack[i])
		{
			for (k = 0; j < m; j++, k++)
			{
				if (needle[j] != haystack[i + j])
				{
					j = 0;
					break;
				}
				point = i;
			}
		}
		if (k == m)
			break;
	}
	if (k != m)
		return (0);
	return (&haystack[point]);
}
