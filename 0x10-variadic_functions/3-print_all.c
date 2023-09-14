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
	char *sep = "";
	char *s;

	va_start(arg, format);
	i = 0;
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(arg, double));
					break;
				case 's':
					s = va_arg(arg, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
				i++;
				continue;
			}
		i++;
		sep = ", ";
		}
	}
	va_end(arg);
	putchar('\n');
}
