#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: is a variable of string type
 *
 * Description: this function capitalizes all words of a string
 * Return: the capatalized string
 */

char *cap_string(char *n)
{
	int len, i, j;
	int sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	len = 0;
	while (n[len] != '\0')
		len++;

	if (n[0] > 96 && n[0] < 123)
		n[0] = n[0] - 32;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (n[i] == sep[j])
			{
				if (n[i + 1] > 96 && n[i + 1] < 123)
					n[i + 1] = n[i + 1] - 32;
			}
		}
	}
	return (n);
}
