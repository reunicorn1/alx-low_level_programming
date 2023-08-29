#include "main.h"

/**
 * set_string -  sets the value of a pointer to a char
 * @s: a pointer of a pointer
 * @to: a pointer to the source
 *
 * Description: this function  sets the value of a pointer to a char
 * Return: non
 */

void set_string(char **s, char *to)
{
	*s = to;
}
