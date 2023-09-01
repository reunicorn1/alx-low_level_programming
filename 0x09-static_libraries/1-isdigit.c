#include "main.h"

/**
 * _isdigit - checks if a char is a digit
 * @c: is a variable of int type
 *
 * Description: this function checks if c is a number or not
 * Return: 1 if true and 0 if false
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
