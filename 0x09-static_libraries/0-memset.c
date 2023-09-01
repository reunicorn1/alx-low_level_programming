#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: is the memory that needs to be edited
 * @b: is the constant byte that must fill the memory
 * @n: is an unsigned int which is the nnumber of bytes to edit
 *
 * Description: this function fills memory with a constant byte
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
