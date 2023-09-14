#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints everything, string, char, int, float
 * @format: is a const char const pointer which is holds the list of args
 *
 * Description: this function prints everything, string, char, int, and float
 * Return: non
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list arg;
	char sep[] = ", ";
	char sep1[] = "";
	char *s, *t;

	va_start(arg, format);
	t = sep;
	i = 0;
	while (format[i] != '\0' && format)
	{
		if (format[i + 1] == '\0')
			t = sep1;
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(arg, int), t);
				break;
			case 'i':
				printf("%d%s", va_arg(arg, int), t);
				break;
			case 'f':
				printf("%f%s", va_arg(arg, double), t);
				break;
			case 's':
				s = va_arg(arg, char *);
				if (s == NULL)
					printf("(nil)%s", t);
				else
					printf("%s%s", s, t);
				break;
			default:
				continue;
		}
		i++;
	}
	va_end(arg);
	putchar('\n');
}
