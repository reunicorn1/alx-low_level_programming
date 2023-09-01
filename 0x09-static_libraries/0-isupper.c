#include "main.h"

/**
 * _isupper - checks if a char is lowercase
 * @c: is a variable of int type
 *
 * Description: this function checks if c is a lowercase letter or not
 * Return: 1 if true and 0 if false
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
