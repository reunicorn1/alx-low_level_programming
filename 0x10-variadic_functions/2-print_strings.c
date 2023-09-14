#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * argChecker - check the value of argument
 * @arg: a string of the argument
 *
 * Return: the argument
 */

int argChecker(char *arg)
{
	char *ptr;

	if (arg == NULL)
	{
		ptr = malloc(sizeof("nil"));
		if (ptr == NULL)
			return (1);
		strcpy(ptr, "(nil)");
		printf("%s", ptr);
		free(ptr);
	}
	else
		printf("%s", arg);
	return (0);
}

/**
 * print_strings - prints strings, followed by a new line
 * @separator: const char to be printed between strings
 * @n: a const unsigned int which is the number of strings
 *
 * Description: this function prints strings, followed by a new line.
 * Return: non
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char non[] = "";

	if (n > 0)
	{
		if (separator == NULL)
			separator = non;
		va_start(arg, n);
		argChecker(va_arg(arg, char *));
		for (i = 1; i < n; i++)
		{
			printf("%s", separator);
			argChecker(va_arg(arg, char *));
		}
		va_end(arg);
	}
	putchar('\n');
}
