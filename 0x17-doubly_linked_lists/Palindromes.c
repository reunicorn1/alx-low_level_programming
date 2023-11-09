#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

#include <string.h>

void convertIntToString(int num, char *str)
{
    sprintf(str, "%d", num);
}

void print_result(void)
{
	int a, b, prev = 0;
	char *result = malloc(sizeof(char) * 10);

	for (a = 100; a <= 999; a++)
	{
		for (b = 999; b >= 100; b--)
		{
			sprintf(result, "%d", (a * b));
			if (is_palindrome(result))
			{
				if (atoi(result) > prev)
				{
					prev = atoi(result);
					printf("palindrome is %s\n", result);
					printf("%d * %d\n", a, b);
				}
			}
			memset(result, 0, 10);
		}
	}
	free(result);
	return;
}

int main(void)
{
	print_result();
	return (0);
}
