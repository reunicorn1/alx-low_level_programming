#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: is a variable of a string which is a the first char
 * @f: a pointer to a functiom
 *
 * Description: this function prints a name by calling back functions
 * Return: non
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
