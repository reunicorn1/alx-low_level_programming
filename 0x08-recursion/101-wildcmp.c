#include "main.h"

/**
 * wildcmp - checks and compares two strings
 * @s1: is the string number 1
 * @s2: is the string number 2
 *
 * Description: this function checks and compares two strings
 * Return: 1 if true and 0 if false
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
