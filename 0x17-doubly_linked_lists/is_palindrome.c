
/**
 * _strlen_recursion -  returns the length of a string
 * @s: is a tring which is a pointer to the first char
 *
 * Description: this function returns the length of a string.
 * Return: an int which is the length
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = 1 + _strlen_recursion(&s[0 + 1]);
	return (len);
}

/**
 * palindrome - checks if a string is a palindrome
 * @s1: is a variable which is a string
 * @s2: is a variable which is a string
 * @steps: an int variable
 *
 * Description: this function checks if a string is a palindrome
 * Return: 1 if true and 0 if false
 */

int palindrome(char *s1, char *s2, int steps)
{
	int i;

	if (steps < 1)
		return (1);
	if (*s1 != *s2)
		return (0);
	s2 = &(*(s2 - 1));
	s1 = &s1[0 + 1];
	steps--;
	i = palindrome(s1, s2, steps);
	return (i);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: is a string
 *
 * Description: this function checks if a string is a palindrome
 * Return: 1 if true and 0 if false
 */

int is_palindrome(char *s)
{
	int length, res, steps;
	char *s1 = 0;
	char *s2 = 0;

	length = _strlen_recursion(s);
	if (length % 2 == 0)
	{
		s1 = &s[length / 2];
		s2 = &s[(length / 2) - 1];
		steps = length / 2;
	}
	if (length % 2 != 0)
	{
		s1 = &s[((length - 1) / 2) + 1];
		s2 = &s[((length - 1) / 2) - 1];
		steps = (length - 1) / 2;
	}
	res = palindrome(s1, s2, steps);
	return (res);
}
