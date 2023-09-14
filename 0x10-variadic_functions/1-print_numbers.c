#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: is a const char which is the string printed btw nums
 * @n: is a a cons of unsigned int which is the number of integers
 *
 * Description: this function prints numbers, followed by a new line
 * Return: non
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char non[] = "";

	if (n > 0)
	{
		va_start(arg, n);
		printf("%d", va_arg(arg, int));
		if (separator == NULL)
			separator = non;
		for (i = 1; i < n; i++)
		{
			printf("%s%d", separator, va_arg(arg, int));
		}
	}
	putchar('\n');
}
