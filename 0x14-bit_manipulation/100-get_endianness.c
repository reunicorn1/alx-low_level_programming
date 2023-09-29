#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int number = 0x1;
	char *memory = (char *)&number;

	if (*memory == 1)
		return (1);
	else
		return (0);
}
