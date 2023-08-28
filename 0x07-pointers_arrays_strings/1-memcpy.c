#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: is the destintion to copy to
 * @src: is the source of copy
 * @n: number of copied valuese
 *
 * Description: this function copies memory area.
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = src[i];

	return (dest);
}
