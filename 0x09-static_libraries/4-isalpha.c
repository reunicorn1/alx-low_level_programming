#include "main.h"

/**
 * _isalpha - checks if a char is alphabatic
 * @c: is a variable of int type
 *
 * Description: this function checks if c is an alphabatic  letter or not
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 65 && c < 91)
		return (1);
	else
		return (0);
}
