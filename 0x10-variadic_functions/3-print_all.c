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
	t = sep1;
	i = 0;
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", t, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", t, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", t, va_arg(arg, double));
					break;
				case 's':
					s = va_arg(arg, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", t, s);
					break;
				default:
				break;
			}
		i++;
		t = sep;
		}
	}
	va_end(arg);
	putchar('\n');
}
